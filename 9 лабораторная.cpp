#include "Header.h"
#include <iostream>

//Дана целочисленная матрица{ Aij }i = 1...n; j = 1..n, n <= 100.
//Если в матрице есть еще один элемент, равный ее максимальному элементу, 
//упорядочить строки матрицы по невозрастанию количества простых чисел среди элементов строк.

int main()
{
    int m = line(), n = column();
    int** matrix = new int* [m];
    //Выделение памяти
    for (int i = 0; i < m; i++) {
        matrix[i] = new int[n];
    }

    create_matrix(matrix, m, n);

    int B[100] = { 0 };

    countofPrime(matrix, m, n, B);

    std::cout << std::endl;
    for (int i = 0; i < m; i++) {
        std::cout << std::endl << B[i];
    }
    answer(matrix, m, n, B);

    for(int i=0;i<m;i++)
        delete[] matrix[i];
    delete[] matrix;

    return 0;
}

