#include<iostream>
#include<string>
using namespace std;

bool symbolExist(char &in,string &source);
void converter(string &input);
void toUpper(string &input);

int main()
{
	string input;
	cout<<"Enter string: ";
	getline(cin, input);
	converter(input);
	cout<<"Output: "<< input;
	
	return 0;
}

void converter(string &input)
{
	toUpper(input);
	string temp = input;
	for(int i=0;i<input.length();i++)
	{
		if(symbolExist(input[i], input))
		{
			temp[i]=')';
		}
		else
		{
			temp[i]='(';
		}
	}
	input = temp;
	
}

void toUpper(string &input)
{
	for(int i=0;i<input.length();i++)
	{
		if(input[i]>='a' && input[i]<='z')
		{
			input[i] = input[i]-32;
		}
	}
}

bool symbolExist(char &in,string &source){
	int count=0;
	for(int i=0;i<source.length();i++)
	{
		if(in == source[i])
		{
			count++;
		}
	}
	if(count>1)
	{
		return true;
	}
	return false;
}


