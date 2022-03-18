//
// Created by Zera on 3/5/2022.
//

#include "PrintUtils.h"

using namespace std;

void PrintUtils::printMatrix(double matrix[][constants::ArraySizeLabThree], string prefix) {
    cout << prefix << ": [" << endl;
    for (int i = 0; i < constants::ArraySizeLabThree; i++) {
        cout << "[";
        for (int j = 0; j < constants::ArraySizeLabThree - 1; j++) {
            cout << matrix[i][j] << ", ";
        }
        cout << matrix[i][constants::ArraySizeLabThree - 1] << "]" << endl;
    }
    cout << "]" << endl << endl;
}

void PrintUtils::printVector(double vector[constants::ArraySizeLabThree], string prefix) {
    cout << prefix << ": [";
    for (int i = 0; i < constants::ArraySizeLabThree - 1; i++) {
        cout << vector[i] << ", ";
    }
    cout << vector[constants::ArraySizeLabThree - 1] << "]" << endl << endl;
}
