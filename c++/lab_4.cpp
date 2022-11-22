#include <iostream>

using namespace std;

class rectangle{
    int length,breadth;
     public:
      rectangle()
      { 
        length=0;
        breadth=0;

      }
rectangle(int x, int y)
    {
        length=x;
        breadth=y;
    }
   rectangle(rectangle &r){
       length=r.length;
      breadth= r.breadth;
   }
   void find_area(){
        int area;
        area=length*breadth;
        cout<<"\nArea of rectangle "<<area;
    }
 
};
int main()
{
    rectangle r1;
    r1.find_area();
    rectangle r2(5,7);
    r2.find_area();
    rectangle r3(r2);
    r3.find_area();
    return 0;
}