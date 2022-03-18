//
// Created by Zera on 3/5/2022.
//

#include "PrintUtils.h"

using namespace std;

void PrintUtils::printMatrix(double matrix[][constants::ArraySizeLabTwo], string prefix) {
    cout << prefix << ": [" << endl;
    for (int i = 0; i < constants::ArraySizeLabTwo; i++) {
        cout << "[";
        for (int j = 0; j < constants::ArraySizeLabTwo - 1; j++) {
            cout << matrix[i][j] << ", ";
        }
        cout << matrix[i][constants::ArraySizeLabTwo - 1] << "]" << endl;
    }
    cout << "]" << endl << endl;
}

void PrintUtils::printVector(double vector[constants::ArraySizeLabTwo], string prefix) {
    cout << prefix << ": [";
    for (int i = 0; i < constants::ArraySizeLabTwo - 1; i++) {
        cout << vector[i] << ", ";
    }
    cout << vector[constants::ArraySizeLabTwo - 1] << "]" << endl << endl;
}
