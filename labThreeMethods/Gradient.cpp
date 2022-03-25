//
// Created by Zera on 3/18/2022.
//

#include "Gradient.h"
#define max(X,Y) ((X)>(Y)? (X):(Y))
#define min(X,Y) ((X)<(Y)? (X):(Y))
#define abs(X) ((X)>0? (X):-(X))
#define m 5

void Gradient::method() {
    double A[constants::ArraySizeLabThree][constants::ArraySizeLabThree];
    double b[constants::ArraySizeLabThree];
    double x[constants::ArraySizeLabThree];
    double r[constants::ArraySizeLabThree];
    double y[constants::ArraySizeLabThree];
    int iteration;

    for (int startingXValue = 0; startingXValue <= 1; startingXValue++) {
        fillA(A);
        fillB(b);
        fillX(x, startingXValue);
        iteration = 0;

            multiplyVectorXByMatrixA(A, x, y);
            for (int index = 0; index < constants::ArraySizeLabThree; index++) {
                double licznik = 0;
                r[index] = b[index] - y[index];
                licznik += pow(r[index], 2);

            }
            for (int index = 0; index < constants::ArraySizeLabThree - 1; index++) {
                x[index + 1] = x[index];
            }
            iteration++;
        PrintUtils::printMatrix(A, "Matrix A");
    }
};

void Gradient::fillA(double A[][constants::ArraySizeLabThree]) {
    for (int row = 0; row < constants::ArraySizeLabThree; row++) {
        for (int column = 0; column < constants::ArraySizeLabThree; column++) {
            if (abs(row - column) <= m) {
                A[row][column] = (double)1/(1+ abs(row-column));
            } else {
                A[row][column] = 0;
            }
        }
    }
};

void Gradient::fillB(double b[constants::ArraySizeLabThree]) {
    for (int index = 0; index < constants::ArraySizeLabThree; index++) {
        b[index] = index;
    }
};

void Gradient::fillX(double x[constants::ArraySizeLabThree], double number) {
    for (int index = 0; index < constants::ArraySizeLabThree; index++) {
        x[index] = number;
    }
};

void Gradient::multiplyVectorXByMatrixA(double A[][constants::ArraySizeLabThree], double x[constants::ArraySizeLabThree], double y[constants::ArraySizeLabThree]) {
    for(int i = 0; i < constants::ArraySizeLabThree; i++) {
        int jmin = max(0, i - m);
        int jmax = min(i + m, constants::ArraySizeLabThree - 1);
        y[i] = 0;
        for(int j = jmin; j <= jmax; j++)
            y[i] += A[i][j] * x[j];
    }
};

int main(){
    int size = 6;
    float var;
    float sum;

    float X[6] = {-2, -1, -0.5, 0.1, 0.3, 1.8};
    float C[6] = {1, -0.5, 1, 1.5, -2, -0.5};
    float C_results[6] = {0};
    float Y[6] = {0};
    float Z[6] = {0};
    float L[6][6] = {0};
    float U[6][6] = {0};

    //Gaussian elimination

    //generate A and U teplates
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            U[i][j] = pow(X[i], j);
        }
    }

    //setup L matrix
    for(int i = 0; i < size; i++){
        L[i][i] = 1;
    }

    //calculate Y
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            Y[i] += U[i][j] * C[j];
        }
    }

    //spacer
    cout << "====  Y  ====" << endl << endl;

    //print Y
    for(int i = 0; i < size; i++){
        cout << Y[i] << "  ";
    }
    cout << endl;

    //triangle matrix
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            var = U[j][i] / U[i][i];
            L[j][i] = var;
            for(int k = 0; k < size; k++){
                U[j][k] = U[j][k] - var * U[i][k];
            }
        }
    }

    //spacer
    cout << endl << "====  U  ====" << endl << endl;

    //print matrix U
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cout << U[i][j] << "  ";
        }
        cout << endl;
    }

    //spacer
    cout << endl << "====  L  ====" << endl << endl;

    //print matrix L
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cout << L[i][j] << "  ";
        }
        cout << endl;
    }

    //calculate Z
    for(int i = 0; i < size; i++){
        Z[i] = Y[i];
        for(int j = 0; j < i; j++){
            Z[i] -= L[i][j] * Y[j];
        }
    }

    //spacer
    cout << endl << "====  Z  ====" << endl << endl;

    //print Y
    for(int i = 0; i < size; i++){
        cout << Y[i] << "  ";
    }
    cout << endl;

    //calculate new C
    for(int i = size - 1; i >= 0; i--) {
        C_results[i] = Z[i];
        for (int j = size - 1; j > i; j--) {
            C_results[i] += U[i][j] * Z[j];
        }
        C_results[i] /= U[i][i];
    }

    //spacer
    cout << endl << "====  C ====" << endl << endl;

    //print C_results
    for(int i = 0; i < size; i++){
        cout << C[i] << "  ";
    }
    cout << endl;

    //spacer
    cout << endl << "====  C_results  ====" << endl << endl;

    //print C_results
    for(int i = 0; i < size; i++){
        cout << C_results[i] << "  ";
    }
    cout << endl;
    return 0;
}