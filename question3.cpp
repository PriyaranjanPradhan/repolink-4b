#include <iostream>
using namespace std;

void evenodd(int n1, int n2)
{
 if(n1!=n2)
 {
  if(n1%2==0)
  {
   cout<<"\n"<<n1<<" is an even number";
   evenodd(n1+1,n2);
  }
  else 
  {
   cout<<"\n"<<n1<<" is and odd number";
   evenodd(n1+1,n2);
  }
 }

 else
 {
  if(n1%2==0)
  {
   cout<<"\n"<<n1<<" is an even number";
   return;
  }
  else 
  {
   cout<<"\n"<<n1<<" is and odd number";
   return;
  }
