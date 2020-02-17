#pragma once

// ��� ������ ���� 
struct Stack;

// ��������� ����� ������� � ����
void push(int value, Stack* stack);

// ������� �������� � ������ �����
int pop(Stack* stack);

// ��������� ������� �����
bool isEmpty(Stack* stack);

// ������� ����
void deleteStack(Stack* stack);

// ������� ����
Stack* createStack();

//������ �������� � ������ �����
int checkHead(Stack* stack);