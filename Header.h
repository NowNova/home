#pragma once
int line();

int column();

//Ввожу матрицу
void create_matrix(int** matrix, int m, int n);

//Вывожу матрицу
void print_matrix(int** matrix, int m, int n);

//Проверяю на простоту
bool isPrime(int x);

//Количество максимальных элементов
bool countofmaxx(int** matrix, int m, int n);

//Количество простых чисел в строке
void countofPrime(int** matrix, int m, int n, int* b);

//Сортировка 
void sort(int** matrix, int m, int n, int* B);

//Ответ
void answer(int** matrix, int m, int n, int* B);