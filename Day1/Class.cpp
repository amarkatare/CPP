// Implementation of the Simple Calculator using Class and Objects 
#include<iostream>
#include<string>
using namespace std;

class Calculator
{
public:
	int variable1;
	int variable2;
	float answer;
//member Function 
int addition(int variable1,int variable2)
{
	return variable1+variable2;
}
int subtraction(int variable1,int variable2)
{
	return variable1-variable2;
}
int multiplication(int variable1,int variable2)
{
	return variable1*variable2;
}
float division(int variable1,int variable2)
{
	return (float)variable1/variable2;
}
};
int main(int argc, char const *argv[])
{
	Calculator op1;
	cout<<op1.addition(50,20)<<endl;
	cout<<op1.subtraction(50,20)<<endl;
	cout<<op1.multiplication(50,20)<<endl;
	cout<<op1.division(50,20)<<endl;
	return 0;
}