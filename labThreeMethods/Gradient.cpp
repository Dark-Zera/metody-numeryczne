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
