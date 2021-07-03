#include"Stack.h"

int precedense(char val )
{
	switch(val)
	{
	case '(':
		return 1;
	case '+': case '-':
		return 2;
		break;
	case '*': case '/':
		return 3;
		break;
	case '^':
		return 4;
		break;
	}
	return -1;
}
bool isOperator(char op)
{
	if(op=='+'||op=='-'||op=='*'||op=='/'||op=='^')
	{
		return 1;
	}
	else 
		return 0;
}
Stack infixToPostfix(char s[])
{
	Stack s1,s2;
	for(int i=0;i<size;i++)
	{
		if(isalpha(s[i]))
		{
			s1.push(s[i]);
		}
		else if(isOperator(s[i]))
		{
			if(!s2.isEmpty())
			{
			  if(precedense(s2.showtop())<precedense(s[i]))
			  {
				  cout<<"s[i] is "<<s[i]<<endl;
			    s2.push(s[i]);
			  }
			  else 
			  {
				while(precedense(s2.showtop())>=precedense(s[i]))
				{
				    char val=s2.pop();
				    s1.push(val);
				}
			  }
			}
			else
			{
				s2.push(s[i]);
			}
		 }
		else if(s[i]=='(')
		{
			s2.push(s[i]);
		}
		else if(s[i]==')')
		{
			cout<<"End bracket"<<endl;
			char op;
			char val=s2.showtop();
			while(val!='(')
			{
				op=s2.pop();
				s1.push(op);
				val=s2.showtop();
				cout<<"val is "<<val<<endl;
			}
			s2.pop();
		//	cout<<"Top is now "<<s2.showtop()<<endl;
		}
		
	}
	return s1;
}




int main()
{
	char Array[size];
	cout<<"Enter Expression in the form of character."<<endl;                                      //(A-B*C)-D
	cin.getline(Array,size);
	
	Stack s2=infixToPostfix(Array);
	cout<<"My array is "<<endl;
	while(!s2.isEmpty())
	{
		cout<<s2.pop();
	}


	system("pause");
}