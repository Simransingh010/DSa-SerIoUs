#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
  
  
  int sum = 0;
  int i=1;
  int n;
  cout<<"Enter your word: ";
  cin>>n;

  while(i<=n){
    sum=sum+i;
   
    i=i+1;
  }
 cout<<sum;
    return 0;
}