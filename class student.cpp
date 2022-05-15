#include<iostream>
using namespace std ; 

class student
{
public:
    int id ;
    string name ; 
    string family ;
    int mark ;
    
    void karname(int mark, string m)
    {
    	if(mark>=0 && mark<=20)
    	{  //mark=n;
    	   if(mark>=10)
    	   {  cout<<"ghabuli"<<"\t"<<m<<mark<<endl;
    	   
		   }
		}
    	
	}
    


   private:	
	
};
int main()
{

student st ;
st.id=1;
st.name="ali";
st.family="alavi";
st.karname(12,st.name);

student st1 ;
st1.id=2;
st1.name="amir";
st1.family="amiri";
st1.karname(9,st1.name);

student st2 ;
st2.id=3;
st2.name="niloo";
st2.family="nilooi";
st2.karname(20,st2.name);















	
	
	return 0 ;
}









