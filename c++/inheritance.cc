#include<iostream>
using namespace std;
class index
{
    protected:
    int count;
    public:
    index()
    {
        count = 0;
    }
    index(int a)
    {
        count = a;
    }
    void display()
    {
        cout<<"count = "<<count<<endl;
    }
    void operator++()
    {
        count++;
    }
};

class index1:public index
{
   public:
   void operator--()
   {
    count = 4;
   }
};
int main()
{
    index1 i;
    i.operator++();
    i.operator++();
    i.display();
    --i;
    i.display();
}
