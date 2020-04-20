/*
BY sv sai kiran
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void primefacs(int);
bool isprime(int);
int n,n1,n2;
void pfmain()
{
  
  cout<<"Enter the number:";
  cin>>n;
  if(isprime(n))
  {
    cout<<"Sorry! there are no prime factors for this number,,try another";
  }
  else{
  primefacs(n);}
  

}
void primefacs(int n3){
for(int i=2;i<=n3;i++)
  {
    if(n3%i==0)
    {
      n1=i;
      n2=n3/n1;
      break;
    }
  }
  if(isprime(n1))
  {
    cout<<n1<<" ";
  }
  else
  {
    primefacs(n1);
  }
  if(isprime(n2))
  {
    cout<<n2<<" ";
  }
  else{
    primefacs(n2);
  }

}
bool isprime(int k)
{
  int cnt = 0;
  for(int i=1;i<=k;i++)
  {
    if(k%i==0)
    {
      cnt+=1;
    }
  }
  if(cnt==2)
  {
    return true;
  }
  else{
    return false;
  }
}
