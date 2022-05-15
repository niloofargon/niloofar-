#include<iostream>
using namespace std ;


class school
{     
      public:
      	
      	int kelas;
      	string name ; 
      	
      	
      	void paye(int kelas,string name)
      	{
      		if(kelas<=5)
      		{ cout<<"dabestan";
			  }
      		else if(6<kelas<10)
      		{ cout<<"rahnamai";
			  }
      		else if (kelas>=10)
      		{  cout<<"dabirestan";
			  }
		  }
      	
      	
      	
      	
      	 private:
};


int main ()
{ 
  school gu;
   
   cout<<"inter your name";
   cin>>gu.name;
   
   cout<<"inter your class";
   cin>>gu.kelas;
      
	gu.paye(gu.kelas,gu.name);
	
	school gu1;
	
	   cout<<"inter your name";
   cin>>gu1.name;
   
   cout<<"inter your class";
   cin>>gu1.kelas;
      
	gu1.paye(gu1.kelas,gu1.name);
	
	school gu2 ;
	
	   cout<<"inter your name";
   cin>>gu2.name;
   
   cout<<"inter your class";
   cin>>gu2.kelas;
      
	gu2.paye(gu2.kelas,gu2.name);
	
	
	cout<<gu.name<<"\t"<<gu.kelas<<"\t"<<endl;
	cout<<gu1.name<<"\t"<<gu1.kelas<<"\t"<<endl;
	cout<<gu2.name<<"\t"<<gu2.kelas<<"\t"<<endl;
	
	
	return 0 ;
	
}








