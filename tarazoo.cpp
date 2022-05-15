#include<iostream>
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
 int sum;
 int sumsib,sumpor,sumkhia,sumgoj,sumoz;
 void koli()
 { 
   mive();
 }
 
  

 
 
void  sib()
 { 
   cout<<"chand kilo mikhai"<<endl;
   cin>>sumsib;
 	cout<<sumsib*sibi<<"    toman "<<endl;
 	mive();
 }
 void porteghal()
 { 
 	
 	
 	cout<<"chand kilo mikhai"<<endl;
 	cin>>sumpor;
 	cout<<sumpor*porteghali<<"     toman "<<endl;
 	mive();
 }
void goje()
{  
	
	cout<<"chand kilo mikhai"<<endl;
 	cin>>sumgoj;
 	cout<<sumgoj*gojee<<"     toman "<<endl;
 	mive();
 }
void khiar()
{   
	
	cout<<"chand kilo mikhai"<<endl;
 	cin>>sumkhia;
 	cout<<sumkhia*khiarr<<"     toman "<<endl;
 	mive();
 }

 void moz()
{     
	
	cout<<"chand kilo mikhai"<<endl;
 	cin>>sumoz;
 	cout<<sumoz*mozz<<"     toman "<<endl;
 	mive();
 }
void exit()
{ cout<<"mive        "<<"meghdar"<<"\t"<<"gheymate 1 kilo "<<"   gheymate kol"<<endl;
  cout<<"khiar=     "<<"\t"<<sumkhia<<"\t"<<khiarr<<"\t"<<"\t"<<sumkhia*khiarr<<endl;
  cout<<"sib=       "<<"\t"<<sumsib<<"\t"<<sibi<<"\t"<<"\t"<<sumsib*sibi<<endl;
  cout<<"moz=       "<<"\t"<<sumoz<<"\t"<<mozz<<"\t"<<"\t"<<sumoz*mozz<<endl;
  cout<<"goje=      "<<"\t"<<sumgoj<<"\t"<<gojee<<"\t"<<"\t"<<sumgoj*gojee<<endl;
  cout<<"porteghal=     "<<"\t"<<sumpor<<"\t"<<porteghali<<"\t"<<"\t"<<sumpor*porteghali<<endl;
  sum=sumkhia*khiarr+sumsib*sibi+sumoz*mozz+sumgoj*gojee+sumpor*porteghali;
  cout<<"majmoo"<<"\t"<<sum;

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
void name(){

 string name,phonenumber; 
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

	
	return 0 ; 
}
























