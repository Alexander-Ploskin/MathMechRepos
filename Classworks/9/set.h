#pragma once

//��� ������ ������� 
struct Set;

//���������, ���� �� �������
bool isEmpty(Set* set);

//���������, ���������� �� ������ � ����� ������ � �������
bool contains(Set* set, int key);

//������� ����� �������
Set* createSet();

//��������� ����� ������ � �������
bool add(Set* set, int key, char* string);

//������� ������ � ����� ������ �� �������
bool remove(Set* set, int key);

//������� �������
bool deleteSet(Set* set);