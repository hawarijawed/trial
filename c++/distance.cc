#include<iostream>
using namespace std;
class distance2;
class distance1{
   int  x,y;
   public:
   distance1()
   {
    x = 0; 
    y = 0;
   }
   distance1(int a,int b)
   {
    x = a;
    y = b ;
   }
   distance1(distance1 &D)
   {
    x = D.x;
    y = D.y;
   }
   friend void add(distance1,distance2);
};
class distance2{
    int a,b;
    public:
     distance2()
   {
    a = 0; 
    b = 0;
   }
     distance2(int x,int y)
   {
    a = x;
    b = y;
   }
   distance2(distance2 &D)
   {
    a = D.a;
    b = D.b;
   }
   friend void add(distance1,distance2);

};

void add(distance1 d1,distance2 d2)
{
    int X = d1.x + d2.a;
    int Y = d1.y + d2.b;
    cout<<"Required sum of the distance: "<<X<<" + "<<Y<<endl;
}

int main()
{
    distance1 d1(4,5);
    distance2 d2(6,8);
    add(d1,d2);
}