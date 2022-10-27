#include <iostream>
#include <string>
using namespace std;
struct Stack
{
    int id;
    char value;
    Stack *next = NULL;
};
Stack *first = NULL, *last = NULL;
bool is_Empty();
void push();
void pop();
Stack* peek(int id);
void display();
bool is_Empty()
{
    if (first == NULL)
    {
        return true;
    }
    return false;
}
void push()
{
    Stack *curr = new Stack;
    cout<<"Enter id: ";
    cin>>curr->id;
    cout<<"Enter a value: ";
    cin>>curr->value;
    if (is_Empty() == true)
    {
        first = last = curr;
    }
    else
    {
        curr->next = first;
        first = curr;
    }
}
void pop()
{
    if (is_Empty() == false)
    {
        cout<<"Enter id to Pop Out: ";
        int id; cin>>id; Stack *p = first;
        while ((p->next->id != id)&&(p != NULL))
        {
            p = p->next;
        }
        if (p!=NULL)
        {
            Stack *q = p->next;
            cout<<"\nId: "<<q->id<<"\nValue: "<<q->value<<"\nPopped Out"<<endl;
            p->next = q->next;
        }
        else
        {
            cout<<"/nID NOT FOUND"<<endl;
        }
    }
    else
    {
        cout<<"\nStack is Empty"<<endl;
    }
}
Stack* peek(int id)
{
    if (is_Empty() == false)
    {
        Stack *p = first;
        while (p != NULL)
        {
            if (p->id == id)
            {
                return p;
            }
            p = p->next;
        }
    }
    return NULL;
}
void display()
{
    if (is_Empty() == false)
    {
        Stack *p = first;
        while (p != NULL)
        {
            cout<<"\nId: "<<p->id<<"\nValue: "<<p->value<<endl;
            p = p->next;
        }
    }
    else
    {
        cout<<"\nStack is Empty"<<endl;
    }
}
bool palindrome()
{
    if (is_Empty() == false)
    {
        Stack *p = first;
        string str1= "", str2 = "";
        while (p!=NULL)
        {
            string s = to_string(p->id);
            str1 +=s;
            p = p->next;
        }
        p = first; Stack *curr = NULL;
        while (p!=NULL)
        {
            if (p->next == curr)
            {
                string s = to_string(p->id);
                str2 += s;
                curr = p; p = first;
            }
            else
            {
                p = p->next;
            }
        }
        if (str1 == str2)
        {
            return true;
        }
    }
    return false;
}
void opt()
{
    cout<<"\nSTACK DYNAMIC IMPLEMENTATION\n";
    cout<<"\n1- Push a Value into Stack"<<endl
        <<"2- Pop a value out of the Stack"<<endl
        <<"3- Peek for a value in the Stack"<<endl
        <<"4- Display data of Stack"<<endl
        <<"5- Check Stack is Empty or Not"<<endl
        <<"6- Check Stack is Palindrome or Not"<<endl
        <<"0- Terminate the Program"<<endl;
    
    cout<<"\nEnter your Choice: ";
    int choice; cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<"\nPUSH METHOD\n";
        push(); opt(); break;
    
    case 2:
        cout<<"\nPOP METHOD\n";
        pop(); opt(); break;
    
    case 3:
        cout<<"\nPEEK METHOD\n";
        cout<<"Enter id to Pop Out: ";
        int id; cin>>id;
        if (peek(id) != NULL)
        {
            Stack *p = peek(id);
            cout<<"ID Found: "<<id<<"\nValue: "<<endl;
        }
        else
        {
            cout<<"\nID Not Found\n";
        }
        opt(); break;
    
    case 4:
        cout<<"\nIS-EMPTY METHOD\n";
        if (is_Empty() == true)
        {
            cout<<"\nStack is Empty\n";
        }
        else
        {
            cout<<"Stack is not Empty";
        }
        opt(); break;
    
    case 5:
        cout<<"\nDISPLAY OF DATA METHOD\n";
        display(); opt(); break;
    case 6:
        cout<<"\nCHECK PALINDROME METHOD\n";
        if(palindrome() == true)
        {
            cout<<"\nStack is Palindrome"<<endl;
        }
        else
        {
            cout<<"\nStack is not Palindrome"<<endl;
        }
        opt(); break;
    
    case 0:
        cout<<"\nProcess Terminated Successfully\n";
        break;
    
    default:
        cout<<"Invalid choice Enterd TRY AGAIN!!";
        opt(); break;
    }
}
int main()
{
    opt();
    return 0;
}
