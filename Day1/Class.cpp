// Implementation of the Simple Calculator using Class and Objects 
#include<iostream>
#include<string>
using namespace std;

class Calculator
{
public:
	int variable1;
	int variable2;
Calculator(int v1,int v2){
 variable1=v1;
 variable2=v2;
}
//member Functions 
int addition()
{
	return variable1+variable2;
}
int subtraction()
{
	return variable1-variable2;
}
int multiplication()
{
	return variable1*variable2;
}
float division()
{
	return (float)variable1/variable2;
}
};
int main(int argc, char const *argv[])
{
	Calculator op1(50,30);
	Calculator op2(30,50);
	cout<<op1.addition()<<endl;
	cout<<op1.subtraction()<<endl;
	cout<<op1.multiplication()<<endl;
	cout<<op1.division()<<endl;

	cout<<op2.multiplication()<<endl;
	cout<<op2.addition()<<endl;
	cout<<op2.subtraction()<<endl;
	cout<<op2.division()<<endl;
	return 0;
}