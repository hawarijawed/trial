// Rewrite the factorial program using class and objects by including input function, calc function 
// and display function to display the results.

// #include<iostream>
// using namespace std;
// class factorial
// {
//     private:
//      int n;
//     public:
//      void getData();
//      void display();
   
// };

// void factorial :: display()
//      {
//          long fact = 1;
//          while(n!=0)
//          {
//              fact *= n;
//              n--;
//          }
//          cout<<"The required factorial is "<<fact<<endl;
//      }
     
// void factorial :: getData()
//      {
//          cout<<"Enter the value here: ";
//          cin>>n;
//         // display(n);
//      }     

// int main()
// {
//     factorial s1;
//     s1.getData();
//     s1.display();
// }


#include <iostream>

using namespace std; 
int main() 
{ 
    int num, bin, deci = 0, base = 1, rem; 
    cout<<"Insert a binary num in 1s and 0s \n"; 
    cin>>num; 
    bin= num; 
    while (num > 0) 
    { 
        rem = num % 10; 
        deci = deci + rem * base; 
        num = num / 2 ; 
        base = base * 10; 
    } 
    cout<<bin<<endl; 
    cout<<deci<<endl; 
    return 0; 
}



















