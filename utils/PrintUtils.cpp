//
// Created by Zera on 3/5/2022.
//

#include "PrintUtils.h"

using namespace std;

void PrintUtils::printMatrix(float matrix[][constants::ArraySize], string prefix = "MATRIX") {
    cout << prefix << ": [" << endl;
    for (int i = 0; i < constants::ArraySize; i++) {
        cout << "[";
        for (int j = 0; j < constants::ArraySize - 1; j++) {
            cout << matrix[i][j] << ", ";
        }
        cout << matrix[i][constants::ArraySize - 1] << "]" << endl;
    }
    cout << "]" << endl << endl;
}

void PrintUtils::printVector(float vector[constants::ArraySize], string prefix = "Vector") {
    cout << prefix << ": [" << endl;
    for (int i = 0; i < constants::ArraySize - 1; i++) {
        cout << vector[i] << ", ";
    }
    cout << vector[constants::ArraySize - 1] << "]" << endl << endl;
}
