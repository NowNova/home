#pragma once
int line();

int column();

//����� �������
void create_matrix(int** matrix, int m, int n);

//������ �������
void print_matrix(int** matrix, int m, int n);

//�������� �� ��������
bool isPrime(int x);

//���������� ������������ ���������
bool countofmaxx(int** matrix, int m, int n);

//���������� ������� ����� � ������
void countofPrime(int** matrix, int m, int n, int* b);

//���������� 
void sort(int** matrix, int m, int n, int* B);

//�����
void answer(int** matrix, int m, int n, int* B);