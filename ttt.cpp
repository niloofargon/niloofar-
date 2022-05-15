#include<iostream>
#include<string>
using namespace std ; 
 void informaiton();
 void name();
 void mive();
 void sib();
 void faktor();
 void  porteghal();
 void goje();
 void khiar();
 void moz();
 void exit();
 void koli();
 int sibi,porteghali,gojee,khiarr,mozz;
 int s,p,g,k,m,s1,p1,g1,k1,m1,sum;

 
 
 
 void koli()
 { name();
   mive();
 }
 
 
 
 
void  sib()
 { int s  ;
   cout<<"chand kilo mikhai"<<endl;
   cin>>s;
   s1=s*sibi;
 	cout<<s1<<"    toman "<<endl;
 	mive();
 }
 void porteghal()
 { int p ;
 	
 	
 	cout<<"chand kilo mikhai"<<endl;
 	cin>>p;
 	p1=p*porteghali;
 	cout<<p1<<"     toman "<<endl;
 	mive();
 }
void goje()
{   int g ;
	
	cout<<"chand kilo mikhai"<<endl;
 	cin>>g;
 	g1=g*gojee;
 	cout<<g1<<"     toman "<<endl;
 	mive();
 }
void khiar()
{   int k ;
	
	cout<<"chand kilo mikhai"<<endl;
 	cin>>k;
 	k1=k*khiarr;
 	cout<<k1<<"     toman "<<endl;
 	mive();
 }

 void moz()
{   int m  ;
	
	cout<<"chand kilo mikhai"<<endl;
 	cin>>m;
 	m1=m*mozz;
 	cout<<m1<<"     toman "<<endl;
 	mive();
 }
void exit()
{
	cout<<"mive"<<"\t"<<"meghdar"<<"\t"<<"gheymate 1 kiloo "<<"gheymate kol"<<endl;
	cout<<"\t"<<"khiar=  "<<"\t"<<k<<"\t"<<khiarr<<"\t"<<k1<<endl;
	cout<<"\t"<<"sib=  "<<"\t"<<s<<"\t"<<sib<<"\t"<<s1<<endl;
	cout<<"\t"<<"moz=  "<<"\t"<<m<<"\t"<<moz<<"\t"<<m1<<endl;
	cout<<"\t"<<"gojee=  "<<"\t"<<g<<"\t"<<gojee<<"\t"<<g1<<endl;
    cout<<"\t"<<"porteghal=  "<<"\t"<<p<<"\t"<<porteghal<<"\t"<<p1<<endl;
	sum=k1+s1+m1+g1+p1;
	cout<<"\t"<<"\t"<<"majmoo"<<"\t"<<sum;
}
 
 
 
 
 
void mive()
{   int x ;
	cout<<"kodom mive ra mikhai"<<endl;
	cout<<"1-sib      2-porteghal      3-goje       4-khiar         5-moz       6-exit"      <<endl;
	cin>>x;
	if(x==1)
	{  sib();
	}
	else if (x==2)
	{   porteghal();
	}
	else if (x==3)
	{   goje();
	}
	else if (x==4)
	{   khiar();
    }
	else if (x==5)
	{   moz();
	}
		else if (x==6)
	{   exit();
	}
	
	
	
	
	
}
 void name()
 { string name,phonenumber; 
 cout<<"inter your name"<<endl; 
   cin>>name;
   cout<<"inter your phone number"<<endl;
   cin>>phonenumber ; 
   mive();
 }

 
void information()
{ sibi=10;
  porteghali=20;
  gojee=30;
  khiarr=15;
  mozz=25;
}

int main ()
{
	information();
name();
	
	return 0 ; 
}








