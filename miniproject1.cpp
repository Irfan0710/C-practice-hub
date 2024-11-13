#include <iostream>
using namespace std;
int main()
{
	int id[4]={16,21,11},pass=1001,Admin=1605,password,workerI,verify;
	char signup;
	cout<<"\t\t\t\t\t\t Welcome to ABC Company\n";
	for (int i=1;i<=5;i++)
	{
		cout<<"Enter your Password:";
		cin>>password;
	    if (password==pass)
	    break;
	}
	if (password==pass)
	{
		cout<<"Enter your id:";
		cin>>verify;
		if (verify==id[0])
		{
		 cout<<"Press 1 for Salary,Press 2 for attendance,Press 3 for total Commision:";
	     cin>>workerI;
	     switch(workerI)
	    {
	    	case 1:
			cout<<"Jack;This month Salary is 2500$.";	
			break;
			case 2:
			cout<<"Jack;Excellent its 24 Days.";
			break;
			case 3:
        	cout<<"Jack:100$.";
        	break;
            default:
        	cout<<"Input Invalid";
		} 
		}
		else if(verify==id[1])
		{
		 cout<<"Press 1 for Salary,Press 2 for attendance,Press 3 for total Commision:";
	     cin>>workerI;
	     switch(workerI)
	    {
	    	case 1:
			cout<<"Milton:This month Salary is 2550$.";	
			break;
			case 2:
			cout<<"Milton:Excellent its 24 Days.";
			break;
			case 3:
        	cout<<"Milton:150$.";
        	break;
            default:
        	cout<<"Input Invalid";
		} 
		}
		else if(verify==id[2])
		{
		 cout<<"Press 1 for Salary,Press 2 for attendance,Press 3 for total Commision:";
	     cin>>workerI;
	     switch(workerI)
	    {
	    	case 1:
			cout<<"Andrew:This month Salary is 1720$.";	
			break;
			case 2:
			cout<<"Andrew:Its poor Andrew! just 18 Days.";
			break;
			case 3:
        	cout<<"Andrew:50$.";
        	break;
            default:
        	cout<<"Input Invalid";
		} 
		}
		else
		cout<<"Error 404";
    }
		
	else if(password==Admin)
	{
		int BossI;
		cout<<"Hello Sir!\nPress 1 for total Sell,Press 2 for total Workers:";
		cin>>BossI;
		switch(BossI)
		{
			case 1:
			cout<<"Its 20000$ Sir.";
			break;
		    case 2:
			cout<<"There are 3 active Workers.";
		    break;
			default:
			cout<<"Sorry Boss,There is no Feature for your input..";
		}
	}
	else 
	cout<<"Too many attempts,Try again after 1 minute..";
}
   
		
	
  