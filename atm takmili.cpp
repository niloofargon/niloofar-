#include<iostream>
using namespace std ; 
void fill();
void checkpass();
void changepass();
void showmojody();
void menu();
void bardasht();
void exit ();


int pass,mojody,password;
string shomarekart,name,family;

int main ()
{
	fill();
		
	return 0 ; 
}

void fill()
{
	name="niloofar";
	family="khazaei";
	pass=1380;
	shomarekart="6037455699667836";
	mojody=1000;
	checkpass();
}

void checkpass()
{    int p ;
	cout<<"inter the password"<<endl;
	cin>>p;
	if(p==pass)
	{menu();
	}
	else
{  checkpass();
}
}
void showmojody()
{  cout<<"mojody shoma :" <<mojody<<endl; 
   menu();
}
void changepass()
{
   cout<<"new pass"<<endl;
   cin>>pass;
   checkpass();
}
void bardasht ()
{   int n ; 
	cout<<"mablagh ra vared konid "<<endl;
	cin>>n ; 
	mojody=mojody-n ;
	cout<<"mojody shoma :"<<mojody<<endl ;
	menu();
}
void enteghal ()
{   int x,k ;
	cout<<"shomare kart ra vared konid "<<endl;
	 cin>>x;
	cout<<"mablagh ra vared konid"<<endl;
	 cin>>k;
	mojody=mojody-k;
	cout<<"enteghal yaft"<<endl;
	menu();
}
void exit()
{
	cout<<"khosh amadid";
}
 void menu()
{   int a ; 
	cout<<"***********menu**************"<<endl;
	cout<<"  1_mojody                  2_change pass          3_bardasht         4_enteghal             5_exit"<<endl ; 
    cin>>a;
	if(a==1)
	{ showmojody();
	}
	else if (a==2)
   { changepass();
	}
	else if (a==3)
	{ bardasht();
		}
	else if (a==4)
   { enteghal();
   }
	else if (a==5)
	{ exit();
	}
} 



















