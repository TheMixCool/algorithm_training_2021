#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::cin;
using std::cout;

char getCount(vector<vector<char>>& field, int row, int col) {
    int count = 0;
    if (row == 0) {
        if (col == 0) {
            if (field[row][col + 1] == '*') {
                count++;
            }
            if (field[row+1][col + 1] == '*') {
                count++;
            }
            if (field[row+1][col] == '*') {
                count++;
            }
        }
        else if (col == int(field[field.size()-1].size()-1)) {
            if (field[row][col - 1] == '*') {
                count++;
            }
            if (field[row + 1][col - 1] == '*') {
                count++;
            }
            if (field[row + 1][col] == '*') {
                count++;
            }
        }
        else {
            if (field[row][col - 1] == '*') {
                count++;
            }
            if (field[row + 1][col-1] == '*') {
                count++;
            }
            if (field[row + 1][col] == '*') {
                count++;
            }
            if (field[row + 1][col + 1] == '*') {
                count++;
            }
            if (field[row][col+1] == '*') {
                count++;
            }
        }
    }else if (row == int(field.size() - 1)) {
        if (col == 0) {
            if (field[row][col + 1] == '*') {
                count++;
            }
            if (field[row - 1][col + 1] == '*') {
                count++;
            }
            if (field[row - 1][col] == '*') {
                count++;
            }
        }else if (col == int(field[field.size() - 1].size() - 1)) {
            if (field[row][col - 1] == '*') {
                count++;
            }
            if (field[row - 1][col - 1] == '*') {
                count++;
            }
            if (field[row - 1][col] == '*') {
                count++;
            }
        }
        else {
            if (field[row][col - 1] == '*') {
                count++;
            }
            if (field[row - 1][col - 1] == '*') {
                count++;
            }
            if (field[row - 1][col] == '*') {
                count++;
            }
            if (field[row - 1][col + 1] == '*') {
                count++;
            }
            if (field[row][col + 1] == '*') {
                count++;
            }
        }
    }
    else {
        if (col == 0) {
            if (field[row - 1][col] == '*') {
                count++;
            }
            if (field[row - 1][col + 1] == '*') {
                count++;
            }
            if (field[row][col + 1] == '*') {
                count++;
            }
            if (field[row + 1][col + 1] == '*') {
                count++;
            }
            if (field[row + 1][col] == '*') {
                count++;
            }
        }
        else if (col == int(field[field.size() - 1].size() - 1)) {
            if (field[row - 1][col] == '*') {
                count++;
            }
            if (field[row - 1][col - 1] == '*') {
                count++;
            }
            if (field[row][col - 1] == '*') {
                count++;
            }
            if (field[row + 1][col - 1] == '*') {
                count++;
            }
            if (field[row + 1][col] == '*') {
                count++;
            }
        }
        else {
            if (field[row - 1][col] == '*') {
                count++;
            }
            if (field[row - 1][col + 1] == '*') {
                count++;
            }
            if (field[row][col + 1] == '*') {
                count++;
            }
            if (field[row + 1][col + 1] == '*') {
                count++;
            }
            if (field[row + 1][col] == '*') {
                count++;
            }
            if (field[row + 1][col - 1] == '*') {
                count++;
            }
            if (field[row][col-1] == '*') {
                count++;
            }
            if (field[row - 1][col - 1] == '*') {
                count++;
            }
        }
    }
    return static_cast<char>(count+48);    
    
}

int main() {
    int row = 0, col = 0, mineCount = 0;
    cin >> row >> col >> mineCount;
    vector<vector<char>> field(row, vector<char>(col));
    for (auto &var1 : field) {
        for (auto& var2 : var1) {
            var2 = '0';
        }
    }
    for (int i = 0; i != mineCount; ++i) {
        int tempRow = 0, tempCol = 0;
        cin >> tempRow >> tempCol;
        field.at(tempRow - 1).at(tempCol - 1) = '*';
    }
    for (int i = 0; i != row; ++i) {
        for (int j = 0; j != col; ++j) {
            if (field.at(i).at(j) != '*') {
                field.at(i).at(j) = getCount(field, i, j);
            }
        }
    }

    for (auto& var1 : field) {
        for (auto& var2 : var1) {
            cout << var2 << ' ';
        }
        cout << '\n';
    }
}