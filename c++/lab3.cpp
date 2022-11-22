// 1.Create a class named 'Student' with integer age and an integer variable 'roll_no'.
//   Assign the value of roll_no as '2' and that of age as 21 by creating an object of the class Student.
// #include <iostream>
// using namespace std;

// class Student
// {
//     private:
//      int age;
//      int roll;
//     public:
//      void set_value(int x,int y)
//      {
//         age = y;
//         roll = x;
//      }
//      void display()
//      {
//         cout<<"Roll no.:"<<roll<<endl;
//         cout<<"Age :"<<age<<endl;
//      } 
// };
// Student s;
// int main()
// {
//     s.set_value(2,13);
//     s.display();
// }

// Create a class named student with reg.no, three subjects and functions read(), print_sum() and print_avg().
// Calculate sum and average and display the results

/*#include<iostream>
#include<string>
using namespace std;
class student 
{
   private :
    string reg_no;
    float marks[3];
   public:
    void read();
    void print_sum();
    void print_avg();
};

student s1;
void student :: read()
{
   int i;
   cout<<"Enter the registration no of student: ";
   cin>>reg_no;
   cout<<"Enter the marks of three subject:\n";
   for(i=0;i<3;i++)
   {
      cin>>marks[i];
   }

}

void student :: print_sum()
{
   int i;
   float sum=0;
   for(i=0;i<3;i++)
   {
      sum += marks[i];
   }

   cout<<"Total marks: "<<sum<<endl;
}

void student :: print_avg()
{
   int i;
   float avg,sum=0;     
   for(i=0;i<3;i++)
   {
      sum += marks[i];
   }
   avg = sum/3;
   cout<<"Average marks of student: "<<avg<<endl;

}

int main()
{
   s1.read();
   s1.print_sum();
   s1.print_avg();
}
;;

int main())
{
    areArea a1;
    a1.sesetDim();
}*/
    

// Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by 
// creating a class named 'Triangle' with a function to print the area and perimeter.
/*
#include<iostream>
#include<cmath>
using namespace std;
class Triangle
{
   float n1,n2,n3;
   public:
    void read();
    void perimeter();
    void area();
};

Triangle t1;
void Triangle :: read()
{
   cout<<"Enter the sides of the triangle\n";
   cin>>n1>>n2>>n3;
}
void Triangle :: perimeter()
{
   float sum = 0;
   sum = (n1+n2+n3);
   cout<<"Perimeter of triangle: "<<sum<<endl;
   
}
void Triangle :: area()
{
    float s,are;
    s = (n1 + n2 + n3) / 2;
    are = sqrt((s *(s - n1) *(s - n2) *(s - n3)));
    cout<<"Area of Triangle: "<<are<<endl;
}

int main()
{
   t1.read();
   t1.perimeter();
   t1.area();
}*/

// Create a class called 'EMPLOYEE' that has EMPCODE, EMPNAME and Annunal_salary as data members. 
// Include member function getdata( ) to input data , member function display( ) to output data. 
// Write a main function to create EMP, an array of EMPLOYEE objects. Accept and display the details of N employees.
/*#include<iostream>
#include<string>
using namespace std;
class EMPLOYEE 
{
   int emp_code;
   string emp_name;
   int annual_salary;
   public:
    void getData();
    void display();
};
//Let there are 6 employees
EMPLOYEE e[6];
void EMPLOYEE :: getData()
{
   

      cout<<"Code of employee   : ";
      cin>>emp_code;
      cout<<"Name of employee   : ";
      cin>>emp_name;
      cout<<"Salary of employee : ";
      cin>>annual_salary;
}
void EMPLOYEE :: display()
{
   
   cout<<"Employee code: "<<emp_code<<endl;
   cout<<"Employee name: "<<emp_name<<endl;
   cout<<"Employee salary: "<<annual_salary<<endl;
   
}

int main()
{
   int i;
   cout<<"Enter the following data\n";
   for(i=0;i<6;i++)
   {
      e[i].getData();
      cout<<"\n";
      
   }
   
   for(i=0;i<6;i++)
   {
      cout<<"Details of employee "<<i+1<<endl;
      e[i].display();
      cout<<"\n";
   }
  
}*/

// Create a DISTANCE class with Feet and inches as data members, Member function to input distance, 
// Member function calculate_tot_inches and return the total inches, Member function to add two distance objects, display(), which 
// displays the data members .Write a main function to create objects of DISTANCE class. Input two distances and output the sum.
// #include<iostream>
// using namespace std;
// class DISTANCE
// {
  
//    public:
//    float inch;
//    float feet;
//    public:
//     void input_data();
//     void total_inches();
// };

// DISTANCE d1,d2;
// void DISTANCE ::input_data()
// {
//    cout<<"Enter the ditance in inch: ";
//    cin>>inch;
//    cout<<"Enter the distance in feet: ";
//    cin>>feet;
// }

// void DISTANCE ::total_inches()
// {
//    float total;
//    total = feet*12 + inch;
//   // cout<<"Total distance in inches: "<<total<<endl;
// }
// void display()
// {
//    float a,b;
//    a = d1.feet*12 + d1.inch;
//    b = d2.feet*12 + d2.inch;
//    cout<<"Total sum of two distances: "<<(a+b)<<" inches\n";
// }
// int main()
// {  
//    cout<<"Enter distances for first object:\n";
//    d1.input_data();
//    cout<<"Enter distances for second object:\n";
//    d2.input_data();
//    display();
// }

// Create a program to represent a bank account with data members acc.no ,name,balance and Member functions 
// for deposit(),withdraw() and balance()
/*#include<iostream>
#include<string>
using namespace std;
class Account
{
   long acc_no;
   string name;
   long balance;

   public:
    void deposit();
    void withdraw();
    void net();
    
    Account()
    {
        acc_no = 1234567890;
        name = "JAWED HAWARI";
        balance = 21000;
    }
}a;

void Account:: deposit()
{
    string c1;
    long ac1;
    long amount1;
    cout<<"\nEnter customers name: ";
    cin>>c1;
    cout<<"\nEnter customer's account no.: ";
    cin>>ac1;
    if(c1 == "JAWED HAWARI" || ac1 == acc_no)
    {
        cout<<"\nEntr amount to deposit in accoutn "<<acc_no<<endl;
        cin>>amount1;
        balance += amount1;
        cout<<"Your account is credited by "<<amount1<<endl;
        cout<<"Your current balance is "<<balance<<endl;
    }

    else
    cout<<"\n!!!Account not found!!!\n";
}

void Account:: withdraw()
{
    long ac2,money;
    cout<<"\nLog in to account: ";
    cin>>ac2;
    if(ac2 == acc_no)
    {
        cout<<"\nAccount logged in\n";
        cout<<"\nEnter debit amount: ";
        cin>>money;
        if(money<balance)
        {
            balance -= money;
            cout<<"\n***TRANSACTION SUCCESFULL***\n";
        }
        else
        {
            cout<<"\nINSUFFICIANT BALANCE\n";
            cout<<"\n!!!TRANSACTION INCOMPLETE!!!\n";
        }
    }
    else
    cout<<"\nAccount not found\n Enter the coorect account number\n";
}

void Account:: net()
{
    long ac3;
    string name;
   cout<<"\n*** In order to check query your balance enter the following details\n";
   cout<<"\nAccoutn no. : ";
   cin>>ac3;
   if(ac3 = acc_no)
   {
    cout<<"\nYour total balance is "<<balance<<endl;
   }
   else
   cout<<"\nAccount not found\n";
}

int main()
{
    short n;
    cout<<"Choose the operation you'd like to perform\n";
    cout<<"\n1.deposit \n2. withdraw \n3. Balance query\n";
    cin>>n;
    
    switch (n)
    {
    case 1:
        a.deposit();
        break;
    case 2:
        a.withdraw();
        break;
    case 3:
        a.net();
        break;
    default:
     cout<<"Invalid input\n";
        break;
    }
}*/
/* QUESTION NO._7;
#include<iostream>
#include<string>
using namespace std;
class employee{
public:
int Emp_id;
string Emp_name;
float basicsalary;

float hra,da,i_tax,net_salary;

void accept()
{
cout<<"Enter the Employee id: ";
cin>>Emp_id;
cout<<"Enter the name of the employee: ";
cin>>Emp_name;
cout<<"Enter the Employee basic salary: ";
cin>>basicsalary;

hra=1200;
da=(0.1*basicsalary);
i_tax=(0.1*basicsalary);
net_salary=basicsalary+hra+da-i_tax;
}


void display()
{
cout<<"Employee id is "<<Emp_id<<endl;
cout<<"Employee name is "<<Emp_name<<endl;
cout<<"Employee basic salary is "<<basicsalary<<endl;
cout<<"DA="<<da<<endl;
cout<<"HRA="<<hra<<endl;
cout<<"I-tax="<<i_tax<<endl;
cout<<"Emplyee net salary="<<net_salary<<endl;
}

};


int main()
{
class employee e1;
e1.accept();
e1.display();
}*/


/*
7.Define a class employee having members Emp-id, Emp-name, basic salary and functions accept() and display(). 
  Calculate DA=10% of basic salary, HRA=1200, I-tax=10% of basic salary. Display the payslip using appropriate output format.*/

/*8.Write a program to print the area of a rectangle by creating a class named 'Area' having two functions. 
 First function named as 'setDim' takes the length and breadth of the rectangle as parameters and the second function 
 named as 'getArea' returns the area of the rectangle. Length and breadth of the rectangle are entered through keyboard.
*/

#include<iostream>
using namespace std;
class Area
{
    float l;
    float b;
    public: 
     void setDim()
     {
        float z;
        cout<<"Enter length of the rectangle: ";
        cin>>l;
        cout<<"Enter breadth of the rectangle: ";
        cin>>b;
        z = getArea(l,b);
        cout<<"Area of rectangle: "<<z<<endl;
     }
     float getArea(float x, float y)
     {
          return (x*y);
     }

};

int main()
{
    Area a1;
    a1.setDim();
}