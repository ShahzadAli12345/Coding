

//Members Names and IDs:
//Shahzad Ali             F2019266015


                    //User Id: ShahzadAli
                    //Paswrd: V5
#include<iostream>
#include<string>
#include <stdio.h>
#include <conio.h>
using namespace std;

class menu
{
	public:
	menu()
	{
		cout<<" Main menu";                       
		cout<<endl;
		cout<<" 1-  Branch name And Code ";
		cout<<endl;
		cout<<" 2-  Money transfer ";
		cout<<endl;
		cout<<" 3-  Deposit statements";
		cout<<endl;
		cout<<" 4-  Withdraw statement";
		cout<<endl;
		cout<<" 5-  Apply for credit card";
		cout<<endl;
		cout<<" 6-  Apply for joint account";
		cout<<endl;
		cout<<" 7-  Contect information";
		cout<<endl;
		cout<<" 8-  Feedback";
		cout<<endl;
		cout<<" 9-  Logout";
		cout<<endl;
		
		
	}
		
	
};

class list
{
	public:
	list()
	{
		cout<<"                        List Menu ";
		cout<<endl;
		cout<<" a-  Create Record In Start ";
		cout<<endl;
		cout<<" b-  Create Record At End  ";
		cout<<endl;
		cout<<" c-  Create Record At Any Place In Record Except First Or Last Of Record";
		cout<<endl;
		cout<<" d-  Delete Record From Start";
		cout<<endl;
		cout<<" e-  Delete Record From Last ";
		cout<<endl;
		cout<<" f-  Display Record";
		cout<<endl;
		cout<<" g-  Goto Main Menu";
	
		cout<<endl;
		
		
	}
		
};


class account
{
public:

	
	account()
	{
 cout<<"Our First Customer Opened 4 Diffrent Accounts In Our Bank ";
		cout<< endl;
		cout<<"001"<<endl;
		cout<<"002"<<endl;
		cout<<"003"<<endl;
		cout<<"004"<<endl;
	}



};

struct node2
{
    string data;
    node2 *next;
}*front = NULL, *rear = NULL, *np = NULL;
bool  push(string x)
{
    np = new node2;
    np->data = x;
    np->next = NULL;
    if(front == NULL)
    {
        front = rear = np;
        rear->next = NULL;
    }
    else
    {
        rear->next = np;
        rear = np;
        rear->next = NULL;
    }
}



struct node
 {
	int data ;
	string month;
	
	node *next ,*prev;
	
};

class doubly 
{
	private:
		node * head , * tail;
		
		public:
			doubly()
			{
				head = tail = NULL;
				
			}
		

   bool createnode()
	
	{
	    int data ;
	    string month;
	    
		node *tmp= new node;
		cout<<"Enter The Amount : ";
		cin>>data;
		tmp->data= data;
		cout<<"Enter The Month : ";
		cin>>month;
		tmp->month= month;
		tmp->next= NULL;
		tmp->prev= NULL;
		if (head==NULL)
		{
			head=tmp;
			tail=tmp;
			
			tmp=NULL;
			
			
		}
		else
		{
			
			
		}
		
		
	}
	
bool createathead()
{
	
		 int data ;
	    string month;
	    
		node *tmp= new node;
		cout<<"Enter The Amount : ";
		cin>>data;
		tmp->data= data;
		cout<<"Enter The Month : ";
		cin>>month;
		tmp->month= month;
		tmp->next= NULL;
		tmp->prev= NULL;
		if (head==NULL)
		{
			head=tmp;
			tail=tmp;
			
			tmp=NULL;
			
			
		}
		else 
		{
			tmp->next= head;
			head->prev=tmp;
			head=tmp;
			tmp=NULL;
			
			
		}
}


void display()
{
		
		if (head==NULL)
		{
			cout<<"Data Does Not Exist";
		}
		else
		{
			node *node = head;
			
			int n=1;
			
			while(node!= NULL)
			{
				cout<<"Record : "<< n++ <<endl;
				cout<<"Data : "<<node->data;
				cout<<endl;
				cout<<"Month : "<<node->month;
				cout<<endl;
				
				cout<<"-----------------------------------------";
				cout<<endl<<endl;
				
				node =node->next;
			}
			
		}
}
bool createattail()

{
		 int data ;
	    string month;
	    
		node *tmp= new node;
		cout<<"Enter The Amount : ";
		cin>>data;
		tmp->data= data;
		cout<<"Enter The Month : ";
		cin>>month;
		tmp->month= month;
		tmp->next= NULL;
		tmp->prev= NULL;
		if (head==NULL)
		{
			head=tmp;
			tail=tmp;
			
			tmp=NULL;
			
			
		}
		else 
		{
			tmp->prev= tail;
			tail->next=tmp;
			tail=tmp;
			tmp=NULL;
			
			
		}
	
	
}

bool insertafter()
{

if (head->next!= NULL)
{
   int afterNode;
    int data;
	string month;
     
    node *tmp= new node;
    cout<<"Enter The Amount : ";
		cin>>data;
		cout<<"Enter The Month : ";
		cin>>month;
		cout<<"Enter The Record Number After Which You Like To Insert Your Record : ";
		cin>>afterNode;
    
    tmp->data=data;
    tmp->month=month;
    tmp->next=NULL;
    tmp->prev=NULL;

    int n=1;
    node *Node=head;
    while(Node!=NULL){

        if(Node->next != NULL && n==afterNode)
		{
            node *t = Node->next;
            Node->next=tmp;
            tmp->prev=Node;
            tmp->next=t;
            t->prev=tmp;
            tmp=NULL;



            break;
        }
        n++;
        Node=Node->next;


    }


}



else{


    cout<<"Linked List Doesn't Exit";
    }

}

bool deleteathead()
{
	
	if(head)
	{
		if(head->next==NULL)
		{
			
			delete head;
			head=NULL;
			tail=NULL;
			
			
		}
		else
		{
			
			node *tmp=head;
			head=head->next;
			head->prev= NULL;
			tmp->next=NULL;
			delete tmp;
			tmp=NULL;
			
			
		}
		
		
	}
	else
	{
		
		cout<<"Doesn't Exit";
		
	}
	
}


bool deleteattail()
{
	
	
		
	if(head)
	{
		if(head->next==NULL)
		{
			
			delete head;
			head=NULL;
			tail=NULL;
			
			
		}
		else
		{
			
			node *tmp=tail;
			tail=tail->prev;
			tail->next= NULL;
			tmp->prev=NULL;
			delete tmp;
			tmp=NULL;
			
			
		}
		
		
	}
	else
	{
		
		cout<<"Doesn't Exit";
		
	}
		
	
}


};
int main()
{
	doubly b;
	
	cout<<"                          Here We Have A Bank Data Base ";
cout<< endl;
cout<<"                      We Have Accounts Of People In Our Bank ";
cout<< endl;
vry:

cout<<"  If You Want To Check Your Account Details Please Enter USER-ID and PASSWORD";
cout<< endl;
cout<< endl;
cout<< endl;
string id;
cout<<"                            USER-ID : ";
cin>>id;
cout<<endl;

string password;
cout<<"                            PASSWORD : ";
cin>>password;
cout<<endl;
if (id=="ShahzadAli"  && password=="V5")
{     cout<<"                                           Welcome to Amazing Bank Limited"; 
cout<<endl;


account a;




cout<<"                            Enter Your Account Number : ";
cout<<endl;
int account;
cin>>account;
cout<<endl;
if(account==001 || account==002 || account==003 || account==004 )
{
	cout<<"                               Thank You   "<<endl;
	cout<<"                     Welcome To Your Account Information  "<<endl;
	cout<<endl;


}
else
{
	
	cout<<"Account Number Doesn't Exist In Our Bank ";
}
str:
menu m;

cout<<"Enter The Number Before Menu Options For Selection :";
int selection;
cin>>selection;

if(selection==1)
{
	
	cout<<" Amazing Bank Limited - DHA branch  ";
	cout<<endl;
	cout<<" Branch Code : 123456  ";
	cout<<endl;
	
	cout<<"                   -------------------------------------------------------------";
	cout<<endl;
	cout<<"If You Want To Go Back To Menu Press 0 : ";
	int yes;
	cin>>yes;
	if(yes==0)
	{
	
goto str;
}
else{
	cout<<"Thank You For Using Application";
	cout<<endl;
}	
}
else if(selection==2)
{
	cout<<"                   Money Tranfer From One Account To Another ";
	cout<<endl;
	b.display();
	cout<<endl;
	cout<<"                    Create Your First Transaction Record ";
	cout<<endl;
	b.createnode();
	cout<<endl;
	cout<<endl;
	
	st:
	
list l;	

	char choice;
	cin>>choice;
if(choice=='a')
{
	cout<<"                    Creating Your Record In Start";
	cout<<endl;
    b.createathead();
	cout<<endl;
	cout<<endl;
	
	cout<<"                    -------------------------------------------------------------";
	cout<<endl;
	cout<<"If You Want To Go Back To List Menu Press 1 : ";
	int ye;
	cin>>ye;
	if(ye==1)
	{
	
goto st;
}
else
{
	cout<<"Thank You For Using Application";
	cout<<endl;
}
	
}
else if(choice=='b')
{
		cout<<"                    Creating Your Record At End";
	cout<<endl;
    b.createattail();
	cout<<endl;
	cout<<endl;
	
	cout<<"                 -------------------------------------------------------------";
	cout<<endl;
	cout<<"If You Want To Go Back To List Menu Press 1 : ";
	int ye;
	cin>>ye;
	if(ye==1)
	{
	
goto st;
}
else
{
	cout<<"Thank You For Using Application";
	cout<<endl;
}
	
}
else if(choice=='c')
{
	cout<<"                    Creating  your record at any particular place";
	cout<<endl;
    b.insertafter();
	cout<<endl;
	cout<<endl;
	
	cout<<"                -------------------------------------------------------------";
	cout<<endl;
	cout<<"If you want to go back to list menu press 1 : ";
	int ye;
	cin>>ye;
	if(ye==1)
	{
	
goto st;
}
else{
	cout<<"Thank you for using Application";
	cout<<endl;
}
		
}
else if(choice=='d')
{
	cout<<"                    Deleting  your record from start";
	cout<<endl;
    b.deleteathead();
	cout<<endl;
	cout<<endl;
	
	cout<<"                     -------------------------------------------------------------";
	cout<<endl;
	cout<<"If you want to go back to list menu press 1 : ";
	int ye;
	cin>>ye;
	if(ye==1)
	{
	
goto st;
}
else{
	cout<<"Thank you for using Application";
	cout<<endl;
}
		
}
else if(choice=='e')
{
cout<<"                    Deleting your record from last";
	cout<<endl;
    b.deleteattail();
	cout<<endl;
	cout<<endl;
	
	cout<<"                       -------------------------------------------------------------";
	cout<<endl;
	cout<<"If you want to go back to list menu press 1 : ";
	int ye;
	cin>>ye;
	if(ye==1)
	{
	
goto st;
}
else
{
	cout<<"Thank you for using Application";
	cout<<endl;
}
			
}
else if(choice=='f')
{
	cout<<"                    Display your record from start";
	cout<<endl;
    b.display();
	cout<<endl;
	cout<<endl;
	
	cout<<"                   -------------------------------------------------------------";
	cout<<endl;
	cout<<"If you want to go back to list menu press 1 : ";
	int ye;
	cin>>ye;
	if(ye==1)
	{
	
goto st;
}
else
{
	cout<<"Thank you for using Application";
	cout<<endl;
}
		
}
else if(choice=='g')
{
	
	goto str;
}
else{
	
	cout<<"Enter character is not given list";
	cout<<endl;
	
}	
	
}

else if(selection==3)
{
	
	cout<<"                    Deposit statement in account ";
	cout<<endl;
	b.display();
	cout<<endl;
	cout<<"                    Create your first deposit record ";
	cout<<endl;
	b.createnode();
	cout<<endl;
	cout<<endl;
list l;	

	char choice;
	cin>>choice;
if(choice=='a')
{
	cout<<"                    Creating  your record in start";
	cout<<endl;
    b.createathead();
	cout<<endl;
	cout<<endl;
	cout<<"                       -------------------------------------------------------------";
	cout<<endl;
	cout<<"If you want to go back to list menu press 1 : ";
	int ye;
	cin>>ye;
	if(ye==1)
	{
	
goto st;
}
else{
	cout<<"Thank you for using Application";
	cout<<endl;
}	
	
}
else if(choice=='b')
{
		cout<<"                    Creating  your record at end";
	cout<<endl;
    b.createattail();
	cout<<endl;
	cout<<endl;
	cout<<"                   -------------------------------------------------------------";
	cout<<endl;
	cout<<"If you want to go back to list menu press 1 : ";
	int ye;
	cin>>ye;
	if(ye==1)
	{
	
goto st;
}
else
{
	cout<<"Thank you for using Application";
	cout<<endl;
}
	
}
else if(choice=='c')
{
	cout<<"                    Creating  your record at any particular place";
	cout<<endl;
    b.insertafter();
	cout<<endl;
	cout<<endl;
	
	cout<<"                    -------------------------------------------------------------";
	cout<<endl;
	cout<<"If you want to go back to list menu press 1 : ";
	int ye;
	cin>>ye;
	if(ye==1)
	{
	
goto st;
}
else
{
	cout<<"Thank you for using Application";
	cout<<endl;
}
		
}
else if(choice=='d')
{
	cout<<"                    Deleting  your record from start";
	cout<<endl;
    b.deleteathead();
	cout<<endl;
	cout<<endl;
	
	cout<<"                   -------------------------------------------------------------";
	cout<<endl;
	cout<<"If you want to go back to list menu press 1 : ";
	int ye;
	cin>>ye;
	if(ye==1)
	{
	
goto st;
}
else
{
	cout<<"Thank you for using Application";
	cout<<endl;
}
		
}
else if(choice=='e')
{
cout<<"                    Deleting your record from last";
	cout<<endl;
    b.deleteattail();
	cout<<endl;
	cout<<endl;
	cout<<"                   -------------------------------------------------------------";
	cout<<endl;
	cout<<"If you want to go back to list menu press 1 : ";
	int ye;
	cin>>ye;
	if(ye==1)
	{
	
goto st;
}
else
{
	cout<<"Thank you for using Application";
	cout<<endl;
}
			
}
else if(choice=='f')
{
	cout<<"                    Display your record from start";
	cout<<endl;
    b.display();
	cout<<endl;
	cout<<endl;
	
	cout<<"                 -------------------------------------------------------------";
	cout<<endl;
	cout<<"If you want to go back to list menu press 1 : ";
	int ye;
	cin>>ye;
	if(ye==1)
	{
	
goto st;
}
else{
	cout<<"Thank you for using Application";
	cout<<endl;
}
		
}
else if(choice=='g')
{
	
	goto str;
}

else{
	
	cout<<"Enter character is not given list";
	cout<<endl;
	
}	
	
	
}

else if(selection==4){
	cout<<"                   withdraw statement from your account ";
	cout<<endl;
	b.display();
	cout<<endl;
	cout<<"                    Create your first withdraw record ";
	cout<<endl;
	b.createnode();
	cout<<endl;
	cout<<endl;
list l;	

	char choice;
	cin>>choice;
if(choice=='a')
{
	cout<<"                    Creating  your record in start";
	cout<<endl;
    b.createathead();
	cout<<endl;
	cout<<endl;
	cout<<"                 -------------------------------------------------------------";
	cout<<endl;
	cout<<"If you want to go back to list menu press 1 : ";
	int ye;
	cin>>ye;
	if(ye==1){
	
goto st;
}
else{
	cout<<"Thank you for using Application";
	cout<<endl;
}
	
	
}
else if(choice=='b')
{
		cout<<"                    Creating  your record at end";
	cout<<endl;
    b.createattail();
	cout<<endl;
	cout<<endl;
	cout<<"                -------------------------------------------------------------";
	cout<<endl;
	cout<<"If you want to go back to list menu press 1 : ";
	int ye;
	cin>>ye;
	if(ye==1){
	
goto st;
}
else{
	cout<<"Thank you for using Application";
	cout<<endl;
}
	
}
else if(choice=='c')
{
	cout<<"                    Creating  your record at any particular place";
	cout<<endl;
    b.insertafter();
	cout<<endl;
	cout<<endl;
	
	cout<<"                  -------------------------------------------------------------";
	cout<<endl;
	cout<<"If you want to go back to list menu press 1 : ";
	int ye;
	cin>>ye;
	if(ye==1)
	{
	
goto st;
}
else{
	cout<<"Thank you for using Application";
	cout<<endl;
}
		
}
else if(choice=='d')
{
	cout<<"                    Deleting  your record from start";
	cout<<endl;
    b.deleteathead();
	cout<<endl;
	cout<<endl;
	cout<<"                   -------------------------------------------------------------";
	cout<<endl;
	cout<<"If you want to go back to list menu press 1 : ";
	int ye;
	cin>>ye;
	if(ye==1)
	{
	
goto st;
}
else{
	cout<<"Thank you for using Application";
	cout<<endl;
}
		
}
else if(choice=='e')
{
cout<<"                    Deleting your record from last";
	cout<<endl;
    b.deleteattail();
	cout<<endl;
	cout<<endl;
	
	cout<<"                    -------------------------------------------------------------";
	cout<<endl;
	cout<<"If you want to go back to list menu press 1 : ";
	int ye;
	cin>>ye;
	if(ye==1)
	{
	
goto st;
}
else{
	cout<<"Thank you for using Application";
	cout<<endl;
}
			
}
else if(choice=='f')
{
	cout<<"                    Display your record from start";
	cout<<endl;
    b.display();
	cout<<endl;
	cout<<endl;
	
	cout<<"                        -------------------------------------------------------------";
	cout<<endl;
	cout<<"If you want to go back to list menu press 1 : ";
	int ye;
	cin>>ye;
	if(ye==1)
	{
	
goto st;
}
else{
	cout<<"Thank you for using Application";
	cout<<endl;
}
		
}
else if(choice=='g')
{
	
	goto str;
}


else
{
	
	cout<<"Enter character is not given list";
	cout<<endl;
	
}	
	
}

else if(selection==5)
{
	
	 //apply for credit card 
        
         string z;
	cout<<"Enter your account number :\n";
	cin>>z;
        push(z);
        cout<<endl;
        cout<< "Thank you for appling our branch agent contact with you by him/her self ";
cout<<endl;
	
	cout<<"                          -------------------------------------------------------------";
	cout<<endl;
	cout<<"If you want to go back to menu press 0";
	int yes;
	cin>>yes;
	if(yes==0)
	{
	
goto str;
}
else
{
	cout<<"Thank you for using Application";
	cout<<endl;
}
	
}

else if(selection==6)
{
	//apply for partnership account 
        
         string y;
	cout<<"Enter your CNIC number :\n";
	cin>>y;
        push(y);
        cout<<endl;
        cout<< "Thnak you for appling our branch agent contact with you by him/her self ";
        cout<<endl;
	
	cout<<"                       -------------------------------------------------------------";
	cout<<endl;
	cout<<"If you want to go back to menu press 0";
	int yes;
	cin>>yes;
	if(yes==0)
	{
	
goto str;
}
else
{
	cout<<"Thank you for using Application";
	cout<<endl;
}
	
}

else if(selection==7)
{
	cout<<endl;
	cout<<"              Bank Contact Information "<<endl;
	cout<<endl;
	cout<< "Branch Number        -  0349-1234567";
	cout<<endl;
	cout<< "Branch Administor no -  0349-1234567";
	cout<<endl;
	cout<< "Branch Email         -  Amazingbank@gmail.com";
	cout<<endl;
	cout<<"-------------------------------------------------------------";
	cout<<endl;
	cout<<"If you want to go back to menu press 0";
	int yes;
	cin>>yes;
	if(yes==0)
	{
	
goto str;
}
else
{
	cout<<"Thank you for using Application";
	cout<<endl;
}
	
}

else if(selection==8)
{	
cout<<endl;
cout<<"                                    Feedback"<<endl;
	//like to give us your valueable feedback
	 string x;
	cout<<"Enter your valueable feebback :\n";
	cin>>x;
        push(x);
        cout<<endl;
        cout<< "Thnak you for your valueable feedback ";
        cout<<endl;
	cout<<"                       -------------------------------------------------------------";
	cout<<endl;
	cout<<"If you want to go back to menu press 0";
	int yes;
	cin>>yes;
	if(yes==0)
	{
	
goto str;
}
else
{
	cout<<"Thank you for using Application";
	cout<<endl;
}       
	
}

else if(selection==9)
{
	cout<<"Thank you for opening application";
	 cout<<"--------------------------------------------------";
	
	
}
else
{
	
	cout<<"Number couldn't exist in main menu";
}





}

else 
{
	 cout<<"                                           Invaild USER-ID or PASSWORD"; 
	cout<<endl; 
	 goto vry;
	 
}

}
