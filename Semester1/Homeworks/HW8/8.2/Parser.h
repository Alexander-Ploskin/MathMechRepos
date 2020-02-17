#pragma once

//������������ ����� �����
const int maxLength = 8;

//������ ������� ��������������� ���������
struct CountingTree;

//������� ��������� ���������, ������������ � ������ (��� ������ ���� ����������)
int counting(CountingTree* tree);

//������� �� ������� ������ 
void printTree(CountingTree* tree);

//������� ����� ������
CountingTree* createTree();

//������� ������
void deleteTree(CountingTree* tree);

//������ ������ �� ��������������� ���������, ������ ������ ���� ���������� �������������� ���������� � ������ �������
void buildTree(CountingTree* tree, char* string);
