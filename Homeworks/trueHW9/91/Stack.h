#pragma once

//��� ������ ����
struct Stack;

//������� ����� ����
Stack* createStack();

//��������� � ���� ����� ������
void push(Stack* stack, SetElement*& value);

//������� �������� � ������ �����
SetElement* pop(Stack* stack);

//������� ����
void deleteStack(Stack* stack);

