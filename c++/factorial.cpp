#include <iostream>
using namespace std;

int factorial(int x);

int main()
{
  long int fact ,n;
  cout<<"Enterr the non negative number:";
  cin>>n;

  if(n<0)
  {
    cout<<"!!! Invalid input !!!\n";
    return 0;
  }

  else
  {
    fact = factorial(n);
  }
  
  cout<<"Factorial of "<<n<<" is "<<fact<<endl;

  return 0;

}

int factorial(int x)
{
  if(x==0)
  {
    return 1;
  }
  else 
  {
    return (x*factorial(x-1));
  }
}