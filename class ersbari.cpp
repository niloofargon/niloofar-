#include<iostream>
using namespace std ;
 
 
 class grandpa 
{
	public :
	 
	int age ;
	string name ;
	void bimari()
	{
		bool heartattack=true ;
		
	}
	
	
	private:
	
	bool heartattack ; 
};
 
 class papa : public grandpa 
 {
 	public :
 	int age ;
	string name ;
 	bool drive ; 	
 	void swim ()
	  { bool swimming=true;
	  }	
 	private :
 	bool swimming ;
 };
 
 class boy : public papa 
 {
 	public:
 	int age ;
	string name ;
 	bool drive ;	
 	void amir()
	 { 
	    bool soccer=true;
	    cout<<"play";
     }	
 	private:
 	
	 bool soccer;	
 };
 
 
 
 
 
 
 int main ()
 {
 	boy b ; 
 	b.age=10;
 	b.name="amir";
 	b.drive=true;
 	b.amir();
 	
 	
 	papa p ;
 	p.age=40;
 	p.name="ali";
 	p.drive=true;
 	p.swim();
 	
 	
 	grandpa g ;
 	g.age=60;
 	g.name="hamid";
 	g.bimari();
 	
 	
 	
 	
 	
 	
 	return 0 ; 
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 