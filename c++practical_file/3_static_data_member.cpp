#include<iostream>
using namespace std;

class stats
{
    public:
    int a;
    static int b;

    stats(int x,int y)       //parameterized constructor
    {
        a = x;
        b = y;
    }

    void display()
    {  
        cout<<" A : "<<a<<endl;
        cout<<" B : "<<b<<endl;
    }

    static void print()
    {
        //cout<<" A : "<<a<<endl; not accessible here as it's static member function
        cout<<" B : "<<b<<endl;
    }
};

int stats :: b=0; //scope variable operator
int main()
{
    stats obj(10,20);

    obj.display();
    obj.print();

    return 0;

}