#include <iostream>
using namespace std;


class ATMchecker
{
	private:
	 int code;
	 int bal;
	 
	 public:
	 	long cardNo;
	 	
	 	void setdata ()
	 	{
	 		code =7654;
	 		bal=250000;
	 		cardNo=12345678;
	 		
		 }
		 int checkCode(int);
		 void showbal();
		 void withdraw(int);
	    };
		  
		  int ATMchecker::checkCode(int c)
		  {
		  	if(code==c)
		  {
		  
		   return 1;
		   }
		   else 
		   {
		   	return 0;
		   }
	 }
		   
	   void ATMchecker::showbal()
	   {
	   	cout<<"current bal.is"<<bal;
	   }
	   
	   void ATMchecker::withdraw(int amt)
	   {
	   	if(bal>=amt)
	   {
	   	bal=bal-amt;
		   cout<<"withdraw succesful current bal.is"<<bal;
	}
	  else 
	  {
	  	cout<<"withdraw failed insufficient bal";
	  }
}

     int main()
     {
	    int usercode;
	    int ch,amt;
	    ATMchecker a;
	    a.setdata();
	    cout<<"enter your code";
	    cin>>usercode;
	    
	    if(a.checkCode(usercode))
	    {
		  cout<<"1.balance check"<<endl;
		  cout<<"2.withdraw amount"<<endl;
		  cout<<"3.enter your chocie"<<endl;
		  cin>>ch;
		  
		  switch(ch)
		  {
		  	case 1:
		  		a.showbal();
		  		break;
		  	case 2:
		  		cout<<endl<<"enter the amount";
		  		cin>>amt;
		  		a.withdraw(amt);
		  		break;
		  		
		  		default:
		  			cout<<"invalid choice";
		  		}
		  		
		  }
		  else
		  {
		  	cout<<"incorrect code:-{";
		  }
		  
		    return 0;
		}
		  
		  
		  
		  
		  
		  
		  
		  
		  
		  
		  
		  
		  
		  
		  
		  
		  
		  
		  
		  
		  
		  
		  
		  
		  
		  
		  
		  
		  
		  
		  
		  
		  
		  
		  
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		
		

