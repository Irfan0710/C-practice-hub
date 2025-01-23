#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int* stp[],pass;
	char* ste[], email[30],ls;
	cout<<"Press L for Login or Press S for Signup:";
	cin>>ls;
	if(ls=='s'||ls=='S')
	{
		cout<<setw[30]<<"Signup"<<endl;
		cout<<"Email:\nPass:";
		cin>>email[30]>>pass;
//		cout<<"Pass:";
//		cin>>pass;
	}
	else
	{
		cout<<setw[30]<<"Login:";
		for(int i=3;i>=1;i++)
		{
		cout<<"Email:\nPass:";
		cin>>email[30]>>pass;
        for(int j=0;stp[j]=='\0';j++)
        if(email!=ste[j] && pass!=stp[j])
		{
			cout<<setw[30]<<"Welcome"<<endl;
        	break;
		}
		else
		{
			cout<<"Invalid Pass or Email(Try Left:"<<i-1<<")"<<endl;
		}
		}
		}
	
}
