#include <iostream>
using namespace std;

main()
int n=4;
cout<<"enter the height of the triangle:";
cin>>n;
for (int i=1; i<=n; i++)
{
for(int j=1; j<=i; j++)
{
cout<<"*";
}
cout<<endl;
}
return 0;
}
