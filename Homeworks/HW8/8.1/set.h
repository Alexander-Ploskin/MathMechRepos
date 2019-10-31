#pragma once

//��� ������ ������� 
struct Set;

//���������, ���� �� �������
bool isEmpty(Set* set);

//���������, ���������� �� ������ � ����� ������ � �������
bool contains(Set* set, int key);

//������� ����� �������
Set* createSet();

//������ ������ �� ������� �� ������� �����
char* getValue(Set* set, int key);

//��������� ����� ������ � �������
bool add(Set* set, int key, char* string);

//������� ������ � ����� ������ �� �������
bool remove(Set* set, int key);

//�������� ������ � ������ � ����� ������ �� �����
bool substitute(Set* set, int key, char* string);

//������� �������
bool deleteSet(Set* set);