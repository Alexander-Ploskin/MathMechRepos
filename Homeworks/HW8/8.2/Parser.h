#pragma once

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
