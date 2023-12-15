#include<iostream>
using namespace std;
int main()
{
	
	int x;
	int c=0;
	int b=0;
	int t=0;
	int con=0;
	int amount=0; 
	int count=0;
	while(true){
	
	cout<<" ______________________________"<<endl;
	cout<<" |  Press 1 for car           |"<<endl;
    cout<<" |  Press 2 for bike          |"<<endl;
    cout<<" |  Press 3 for truck         |"<<endl;
    cout<<" |  Press 4 for container     |"<<endl;
	cout<<" |  Press 5 for Record        |"<<endl;
	cout<<" |  Press 6 for delete Record |"<<endl;
	cout<<" ______________________________"<<endl;
	cin>>x;
	if (x==1)
	{
		if(c<=10){
		
		amount=amount+100;
		count=count+1;
		c++;
	}
	else{
		cout<<"-----------------------------"<<endl;
		cout<<"    No more space for car"<<endl;
		cout<<"-----------------------------"<<endl;
	}
	}
	else if (x==2)
	{
			if(b<=20){
		amount=amount+200;
		count=count+1;
		b++;
    }
	
	else{
		cout<<"-----------------------------"<<endl;
		cout<<"    No more space for bike"<<endl;
		cout<<"-----------------------------"<<endl;
	}
	}
	else if (x==3)
	{
		if(t<=5){
		amount=amount+300;
		count=count+1;
		t++;
	}
		else{
		cout<<"-----------------------------"<<endl;
		cout<<"    No more space for Truk"<<endl;
		cout<<"-----------------------------"<<endl;
	}
	
    }
	else if (x==4)
	{
		if(con<=5){
		
		amount=amount+400;
		count=count+1;
		con++;
	}
	else{
		cout<<"---------------------------------"<<endl;
		cout<<"    No more space for container"<<endl;
		cout<<"---------------------------------"<<endl;
	}
    }
	else if (x==5)
	{
	cout<<"\t\t\t***************************************"<<endl;
	cout<<"\t\t\t|    Your total amount is:"<<amount<<"\t       |"<<endl;
	cout<<"\t\t\t|    Your total vehicals is:"<<count<<"\t       |"<<endl;
	cout<<"\t\t\t|    Total entry of cars:"<<c<<"\t       |"<<endl;
	cout<<"\t\t\t|    Total entry of bikes:"<<b<<"\t       |"<<endl;
	cout<<"\t\t\t|    Total entry of truck:"<<t<<"\t       |"<<endl;
	cout<<"\t\t\t|    Total entry of containers:"<<con<<"       |"<<endl;
	cout<<"\t\t\t***************************************"<<endl;
	
	}
	else if (x==6)
	{
     amount=0;
     count=0;
     c=0;
     b=0;
     t=0;
     con=0;
	}
	else
	{
		cout<<"   -------------------------------"<<endl;
		cout<<"   |  You enter incorrect number  |"<<endl;
		cout<<"   --------------------------------"<<endl;
	}
		
}

}
