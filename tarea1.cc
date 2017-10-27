#include <iostream>
using namespace std;
int esprimo(int P)
{
  int flag=0;

  for(int i=2; i<=P/2; i++)
    { if(P%i==0)
	flag=1;
	}
	return flag;
}
int main()
{
  int S=12;
  int P=0;
  int flag=0;

  cout<<"Dame un número "<<endl;
  cin>>P;
  do{
    if(P%2==0)
      P=P+1;
    if(esprimo(P)==1)
      P=P+2;
  }
  while(esprimo(P)==1);
    cout<<"el valor de P es "<<P<<endl;
  return 0;
}
