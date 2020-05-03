/*
By sv sai kiran
*/
// Qtn: Next Prime Number - Have the program find prime numbers until the user chooses to stop asking for the next one.


#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool isprime(int);
void main()
{
  char c;
  int i=3;
  cout<<endl<<2<<" "<<endl;
  while(1)
  {
    if(isprime(i)){
    cout<<"enter Y/N to display next prime number:";
    cin >> c;
    if(tolower(c)=='y')
    {
        cout<<endl<<i<<" "<<endl;
    }
    else{
      cout<<endl<<"Breaking successfully......!,,breaked ,,run again!";
    break;
    }
  }
  i++;
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
