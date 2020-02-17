#pragma once

//���������� �����
const int hashSize = 100;

//������������ ������ �����
const int maxSize = 100;

//��� �������
struct Set;

//������� �������
Set* createSet();

//������� �������
void deleteSet(Set* set);

//��������� ������ � �������
void add(Set* set, char* string);

//��������� �������������� ������ �������
bool contains(Set* set, char* string);

//������� ������ �� �������
bool deleteElement(Set* set, char* string);