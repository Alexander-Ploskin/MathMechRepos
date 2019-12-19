#pragma once
#include <stdio.h>

//������� �������
int** createTable(int lengthOfStrings, int lengthOfColumns);

//�������� �������
void printTable(int** table, int lengthOfStrings, int lengthOfColumns);

//������ ������� �� ����� � ������� ������, ������ � ������� ������������� ��������� ����� �������
void readTableFromFile(FILE* filePtr, int** table, int lengthOfStrings, int lengthOfColumns, char* header);

//������� �������
void deleteTable(int** table, char* header, int lengthOfStrings);

//���������� ������, ������� ������������� �������� �� ����� �������
int index(char* array, int size, char symbol);