#include<iostream>
#include<algorithm>


using namespace std;

int  main()
{
  int a[10],m=10;

while(m--)
{
  cout<<"Enter "<<m<<" th "<<" elements :-";
  cin>>a[m];
}

sort(a,a+10);

cout<<"\n\nLargest number is:- "<<a[0];
cout<<"Smallest number is:- "<<a[9];


  return 0;
}
