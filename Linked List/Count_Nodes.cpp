#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first;

void create(int a[], int n)
{
    int i;
    struct Node *t, *last;
    first = new Node;
    first->data = a[0];
    first->next = 0;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = new Node;
        t->data = a[i];
        t->next = 0;
        last->next = t;
        last = t;
    }
}

// simple display function for displaying linked list
int count(struct Node *p){
    int l=0;
    while(p){
        l++;
        p=p->next;
    }
    return l;
}

// recursive display function for displaying linked list


int main()
{
    int a[] = {10, 20, 30, 40, 50, 60 ,70};
    create(a, 7);
    cout<<"Length is "<<count(first)<<endl;
    return 0;
}