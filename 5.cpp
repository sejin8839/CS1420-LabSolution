#include <iostream>

void display2DArray(int arr[][5], int numRows, int numCols) {
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int table[3][5] = {{12, 24, 43, 21, 42},
                       {14, 67, 87, 65, 90},
                       {19, 1, 24, 12, 8}};

    display2DArray(table, 3, 5);

    return 0;
}

double compute2DAverage(int arr[][5], int numRows, int numCols) {
    double sum = 0.0;
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            sum += arr[i][j];
        }
    }
    return sum / (numRows * numCols);
}

int main() {
    int table[3][5] = {{12, 24, 43, 21, 42},
                       {14, 67, 87, 65, 90},
                       {19, 1, 24, 12, 8}};

    display2DArray(table, 3, 5);

    double avg = compute2DAverage(table, 3, 5);
    std::cout << "Average value: " << avg << std::endl;

    return 0;
}