#include <stdio.h>
#pragma once

//�������� �������
void printMatrix(int** matrix, int size);

//������� ����� �������
int** createMatrix(int size);

//��������� ������� �� �����
void readMatrixFromFile(int** matrix, int size, FILE* filePtr);

//������� �������
void deleteMatrix(int** matrix, int size);