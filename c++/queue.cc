#include<iostream>
using namespace std;
int i;
class queue 
{
    int rear,front;
    int q[5];
    public:
    queue()
    {
        front = -1;
        rear = -1;
    }

    void enqueue(int a)
    {
        if(front == -1 && rear == -1)
        {
            rear++;
            front++;
            q[rear] = a;
            cout<<"Enqueue successfull\n";
        }
        if(rear < 5)
        {
            rear++;
            q[rear] = a;
            cout<<"Enqueue successfull\n";
        }
    }

    void dequeue()
    {
        if(rear == -1 && front == -1)
        {
            cout<<"Queue is empty\n";
        }
        if(rear != front)
        {
            front++;
            cout<<"Element dequeued\n";
            //return 0;
        }
        if(rear<front)
        {
            cout<<"queue is empty\n";
            //return 0;
        }
    }

    void display()
    {
         if(rear<front)
        {
            cout<<"queue is empty\n";
         //   return 0;
        }
        else if(rear == -1 && front == -1)
        {
            cout<<"Queue is empty\n";
        }
     
        else 
        {    cout<<"Element present in the stack\n";
            for(i=front;i<=rear;i++)
            {
                cout<<q[front]<<endl;
            }
        }
        
    }
};

int main()
{
    queue q;
    q.enqueue(2);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(34);
    q.display();
    q.dequeue();
    q.dequeue();
    q.display();
}