// simulation of the ATM
#include<iostream>
using namespace std;
class ATM
{
public:
	int info[5][2]={{100,1000},{101,1500},{102,7000},{103,1800},{104,11000}};
    int acc,amount;

int getIndex(int acc)
{
	for (int i = 0; i < 5;i++)
	{
	  if(info[i][0]==acc) 
	  	return i;
	}
	return -1;
}
void Deposite(int acc,int amount)
{
    int pos=getIndex(acc);
    if(pos==-1)
    	cout<<"Invalid Account Number"<<endl;
    else
    {
    	// i need to increse the balance 
    info[pos][1]+=amount;
    cout<<"Amount is Deposited sucessfully"<<endl;
    }
}
void Withdraw(int acc,int amount)
{
	int pos=getIndex(acc);
	if(pos==-1)
    	cout<<"Invalid Account Number"<<endl;
    else
    {
     if(info[pos][1]<amount)
     	cout<<"Insufficient Amount"<<endl;
     else
     {
	    info[pos][1]-=amount;
	    cout<<"Amount is Withdraw sucessfully ,collect the Cash"<<endl;
     }
    }
}
void CheckBalance(int acc)
{
   int pos=getIndex(acc);
   if(pos==-1)
    	cout<<"Invalid Account Number"<<endl;
    else
   		cout<<"Current Balcnce in you Acccount "<<acc<<" = "<<info[pos][1]<<endl;
}
	
};

int main(int argc, char const *argv[])
{
	int choice,accountNo,amount;
	ATM customer;
    cout<<"Welcome in Amar's ATM"<<endl;
    do
    {
    	cout<<"Choose the following Options \n1.Deposite \n2.Withdraw \n3.Check Balance\n"<<endl;
    	cin>>choice;
    	switch(choice){
    	case 1:
    		cout<<"You Selected Deposite\nplease Enter Your Bank Acccount No:";
            cin>>accountNo;
            cout<<"\nEnter Amount to be Deposite"<<endl;
            cin>>amount;
            customer.Deposite(accountNo,amount);
            break;
        case 2:
        	cout<<"You Selected Withdraw\nplease Enter Your Bank Acccount No:";
        	cin>>accountNo;
            cout<<"\nEnter Amount to be Withdraw"<<endl;
            cin>>amount;
            customer.Withdraw(accountNo,amount);
            break;
        case 3:
        	cout<<"You Selected Chack Balcnce \nplease Enter Your Bank Acccount No:";
        	cin>>accountNo;
            customer.CheckBalance(accountNo);
            break;
        default:
        	cout<<"You choose invalid choice , lol"<<endl;
        	  break;
    	}
    }while(choice!=0);
cout<<"Thank You for visiting , Have a good day!"<<endl;
	return 0;
}