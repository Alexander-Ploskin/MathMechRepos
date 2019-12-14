#include "List.h"
#pragma once

//�������� ������� 
void printMatrix(int** matrix, int size);

//������� ����� �������
int** createMatrix(int size);

//������� �������
void deleteMatrix(int** matrix, int size);

//������� ������ �������
List** createListOfLists(int numberOfLists);

//������� ������ �������
void deleteListOfLists(List** listOfLists, int numberOfLists);
