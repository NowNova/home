#include "Header.h"
#include <iostream>
#include <cmath>

int line()
{
    int m;
    std::cin >> m;
    return m;
}

int column() {
    int n;
    std::cin >> n;
    return n;
}

//����� �������
void create_matrix(int** matrix, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> matrix[i][j];
        }
    }
}
//������ �������
void print_matrix(int** matrix, int m, int n) {
    std::cout << "\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}
//�������� �� ��������
bool isPrime(int x) {
    if (x != 1) {
        for (int k = 2; k < sqrt(x) + 1; k++) {
            if (x % k == 0) {
                return 0;
            }
        }
        return 1;
    }
    else { return 0; }
}
//���������� ������������ ���������
bool countofmaxx(int** matrix, int m, int n) {
    int max = 0, count = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == max) {
                count++;
            }
            else if (matrix[i][j] > max) {
                max = matrix[i][j];
                count = 0;
            }
            else { continue; }
        }
    }
    if (count > 0) {
        return 1;
    }
    else {
        return 0;
    }
}
//���������� ������� ����� � ������
void countofPrime(int** matrix, int m, int n, int* b) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (isPrime(matrix[i][j])) {
                b[i] += 1;
            }
        }
    }
}
//���������� 
void sort(int** matrix, int m, int n, int* b) {
    std::cout << "\n";
    countofPrime(matrix, m, n, b);
    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < m - i - 1; j++) {
            if (b[j] < b[j + 1]) {
                std::swap(b[j], b[j + 1]);
                std::swap(matrix[j], matrix[j + 1]);
            }
        }
    }
}
//�����
void answer(int** matrix, int m, int n, int* B) {
    if (countofmaxx(matrix, m, n)) {
        sort(matrix, m, n, B);
        print_matrix(matrix, m, n);
    }
    else {
        print_matrix(matrix, m, n);
    }
}
