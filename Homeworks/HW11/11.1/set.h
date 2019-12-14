#pragma once

//��� ������ ��������� ������ �����
struct Set;

//���������, ����� �� ���������
bool isEmpty(Set* set);

//������� ����� ���������
Set* createSet();

//��������� ����� ������� � ���������
bool add(Set* set, int distance, int vertex);

//������� ������� �� ���������
bool remove(Set* set, int distance, int vertex);

//������� ���������
bool deleteSet(Set* set);

//���������� ��������� �������
int nearestVertex(Set* set);