#include<iostream>
#include<string>

using namespace std;
struct hotel
{
    string name;
    int cost;
    int room;
}h;
void fun(struct hotel k);
int main()
{
   // char ans[3];
  
    cout<<"-------Hello sir!! Welcome to New Taaj Plaza--------\n";
    cout<<"Kindly give the following details for allowing room sir\n";

    cout<<"\n Customer's name: ";
    cin>>h.name;
    cout<<"\n No. of rooms customer want: ";
    cin>>h.room;
    cout<<"Room cost charged by hotel:";
    cin>>h.cost;
    
    fun(h);
   

}

void fun(struct hotel k)
{
    int total,r = 6;
    
    if(h.room == r)
    {
        total = r*h.cost;
        cout<<"\n Customer's total cost for 6 rooms is "<<total<<endl;
    }

    if(h.room < r)
    {
        total = h.room*h.cost;
        cout<<"\n Customer's total cost for "<<h.room<<" is "<<total<<endl;
    }

    if(h.room > r)
    {
        cout<<"Sorry sir. Due to shortage of rooms we have only 2 rooms available for now.\n";
        total = h.cost*2;
        cout<<"\n And customers's total cost for 2 rooms is "<<total<<endl;
    }
}