#include<iostream>
using namespace std;

int stack[100];
int n = 100,top=-1;

void push(int val)
{
    if(top>=n-1)
    {
        cout << "Stack Overflow" <<endl;
    }
    else
        top++;
    stack[top]=val;
}

void pop ()
{
    if(top<=-1)
    {
        cout << "Stack Underflow" <<endl;
    }
    else
        cout << "Pooped element is " <<stack[top]<<endl;
    top--;
}

void display ()
{
    if(top>=0)
    {
        for(int i = top; top>=0; top--)
        {
            cout << ""<< stack[i] << endl;
        }
        }else{
            cout << "Stack is Empty" << endl;

    }

    }


int main ()
{
    int key,val;
    cout << "1 -> for Push" << endl;
    cout << "2 -> for Pop" << endl;
    cout << "3 -> for Display" << endl;
    cout << "4 -> for Exit" << endl;

    do
    {
        cout << "Enter Choice : "<< endl;
        cin >> key;
        switch(key)
        {
        case 1:
        {
            cout << "Enter pop value :"<<endl;
            cin >> val;
            push(val);
            break;
        }
        case 2:
        {
            pop();
            break;

        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            cout << "Exit"<<endl;
            break;
        }
        default :
        {
            cout << "Invalid input" << endl;
        }
        }
    }
        while(key!=4);
        return 0;
    }
