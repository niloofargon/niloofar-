
#include<math.h>
 main()
{
	 int x;

	 cin>>x;
	 int z=2;
	 for(int i=2;i<sqrt(x);i++)
		  if (x%i==0) z=z+1;
	 if (z==2 && x!=1 && x!=4) cout<<"adad aval ast"<<endl;
	 else cout<<"addade aval nist"<<endl;
}