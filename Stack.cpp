#include"Stack.h"

Stack::Stack()
{
	for(int i=0;i<size;i++)
	{
	arr[i]=0;
	}
	top=-1;
}
Stack::Stack(char Array[])
{
	top=-1;
	for(int i=0;i<size;i++)
	{
		top++;
		arr[top]=Array[i];

	}
}
void Stack::push(char val)
{
	if(isFull())
	{
		cout<<"Sorry! Stack is Full...!!!"<<endl;
		
	}
	else
	{
		top++;
	    arr[top]=val;
	}

}
char Stack::pop()
{
	char val='0';
	if(isEmpty())
	{
		cout<<"Sorry! Stack is Empty...!!!"<<endl;
	}
	else
	{
		val=arr[top];
		top--;
	}
		return val; 
}
bool Stack::isFull()
{
	if(top==size-1)
	{
		return 1;
	}
	else
		return 0;
}
bool Stack::isEmpty()
{
	if(top==-1)
	{
		return 1;
	}
	else
		return 0;
}
char Stack::showtop()
{
	cout<<"Hellow "<<endl;
	return arr[top];

}

