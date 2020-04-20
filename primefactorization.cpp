/*
BY sv sai kiran
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void primefacs(int);                  // function signature
bool isprime(int);                    //  " " " " " " " " " " " " "
int n,n1,n2;                           // global variables
void main()
{
  
  cout<<"Enter the number:";
  cin>>n;
  if(isprime(n))                         // checks for whether entered number is prime or not
  {
    cout<<"Sorry! there are no prime factors for this number,,try another";
  }
  else{
  primefacs(n);}                         //function call for prime factors of entered number
  

}
void primefacs(int n3){
for(int i=2;i<=n3;i++)                    //this loop is to find the integer in a range upto the given number to find the least/first
  {                                       // divisor ,,as we guess and do prime factorization by our hand here this loop is helpful.
    if(n3%i==0)
    {
      n1=i;
      n2=n3/n1;                           // store the factors in variables.
      break;
    }
  }
  if(isprime(n1))                         //after finding the divisors,check for prime or not ,if not call the function again for 
  {
    cout<<n1<<" ";                        // until we get prime number. hence it is our req. factor.
  }
  else
  {
    primefacs(n1);                        // note: if u remember the tree of prime factorization ,,it will be easy to visualize the program execution
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
