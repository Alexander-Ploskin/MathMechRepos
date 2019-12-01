#pragma once

//������������ ����� ����� � �������
const int maxLength = 100;

//������ � �������
struct SetElement;

//��� ������ ������� 
struct Set;

//���������, ���� �� �������
bool isEmpty(Set* set);

//���������, ���������� �� ������ � ����� ������ � �������
bool contains(Set* set, int key);

//������� ����� �������
Set* createSet();

//������ ������ �� ������� �� ������� �����
void getValue(Set* set, int key, char* bufferString);

//��������� ����� ������ � �������
bool add(Set* set, int key, char* string);

//������� ������ � ����� ������ �� �������
bool remove(Set* set, int key);

//�������� ������ � ������ � ����� ������ �� �����
bool setNewValue(Set* set, int key, char* string);

//������� �������
bool deleteSet(Set* set);