#pragma once

//��� ������ ������
struct Backet;

//������� ������
Backet* createBacket();

//������� ������
void deleteBacket(Backet* backet);

//��������� � ������ ����� �������
void addToBacket(Backet* backet ,char* input);

//������� ������� �� ������
bool deleteElementFromBacket(char* string, Backet* backet);

//���������, ���������� �� � ������ ����� ������
bool containsInBacket(char* string, Backet* backet);

