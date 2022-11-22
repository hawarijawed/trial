#include<iostream>
#include<string>
using namespace std;

struct bank
{
    string name;
    string location;
    int count;
};
struct bank s;

int fun(struct bank s);

int main()
{
   cout<<"Enter the following details\n";
   cout<<"Name of bank: ";
   cin>>s.name;
   cout<<"\n Location of the bank:";
   cin>>s.location;
   cout<<"\n Positive reviews:";
   cin>>s.count;

   fun(s);
}

int fun(struct bank s)
{
    if(s.location == "Bangaluru" && s.count > 5000)
    {
        cout<<"Service rating\n *****\n";
    }
    
    if(s.location != "Bangaluru" && s.count > 5000)
    {
        cout<<"Service rating\n ***\n";
    }

    if(s.location != "Bangaluru" && s.count < 5000)
    {
        cout<<"Service rating\n *\n";
    }
    return 0;
}