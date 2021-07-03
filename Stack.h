#ifndef _STACK_H
#define _STACK_H
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

const int size=30;

class Stack
{
private:
	char arr[size];
	int top;
public:
	Stack();
	Stack(char []);
	void push(char);
	char pop();
	bool isFull();
	bool isEmpty();
	char showtop();

};
#endif