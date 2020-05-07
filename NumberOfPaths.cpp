//
// NumberOfPaths.cpp
//  NumberOfPaths
//
//  Created by Vaishnavi Gandhi on 4/25/20.
//  Copyright © 2020 Vaishnavi Gandhi. All rights reserved.
//

#include <iostream>
using namespace std;

int NumberOfPaths(int row, int column);
int main() {
    int initialRow, initialColumn, lastRow, lastColumn;
    cout << "Enter coordinates for point A (row, then column): ";
    cin >> initialRow >> initialColumn;
    cout << "Enter coordinates for point B (row, then column): ";
    cin >> lastRow >> lastColumn;
    
    cout << "\nThere are "
    << NumberOfPaths(lastRow - initialRow, lastColumn - initialColumn)
    << " paths\n";
}
int NumberOfPaths(int row, int column){
    if (row == 0 || column == 0)
        return 1;
    else return NumberOfPaths(row - 1, column) + NumberOfPaths(row, column - 1);
}
