/*
    Mohit Mehta
    2k11/SE/042
    Program 6 : Write a program to create a linked list and perform insertion
                and deletion(at start,at end and at any position in the list)
                using self-referntial class.

*/
#include<iostream>
#include<cstdio>
#include<cstdlib>
//#include<conio>
using namespace std;
class node;
node* start;
class node
{
      int a;

      public:

      node* next;

      node()
      {a=0;next=NULL;}

      void getdata()
      {cout<<"\nEnter the number : "; cin>>a;}

      int show_a(){return a;}

      void insertbegin()
      {
        if(start==NULL)
        start=this;
        else
        {
            this->next=start;
            start=this;
        }

      }

      void insertlast()
      {
        if(start==NULL)
        start=this;
        else
        {
            node*tmp=start;
            while(tmp->next!=NULL)
            {
                tmp=tmp->next;
            }

            tmp->next=this;
        }
      }

      void insertelsewhere(int n)
      {
           node*prev=start;int i=1;
           while(prev!=NULL&&i<n-1)
           {
             prev=prev->next;
             i++;
           }
           if(prev==NULL) cout<<"\nThe position you entered is beyond current list size.";
           else
           {
               node *tmp=prev->next;
               prev->next=this;
               this->next=tmp;
           }
      }

      void deletebegin()
      {
           if(start==NULL)
           cout<<"\nUnderflow...\n";
           else
           {
               node *tmp=start;
               start=start->next;
               cout<<"\nDeleted element is : "<<tmp->show_a();
               delete tmp;
           }
      }

      void deletelast()
      {
          if(start==NULL)
          cout<<"\nUnderflow...\n";
          else
          {
                 node *last=start;
                 while(last->next!=NULL)
                 {
                     last=last->next;
                 }
                 if(last==start)
                 {
                     node *q;
                     cout<<"\nDeleted element is : "<<start->show_a();
                     q=start;
                     start=NULL;
                     delete q;
                 }
                 else
                 {
                     node *tmp=start;
                     while(tmp->next!=NULL)
                     {
                         if(tmp->next==last)
                         break;
                         tmp=tmp->next;
                     }
                     cout<<"\nDeleted element is : "<<last->show_a();
                     tmp->next=NULL;
                     delete last;
                 }
          }
      }

      void deleteelsewhere(int n)
      {
           node*prev=start;int i=1;
           while(prev!=NULL&&i<n-1)
           {
             prev=prev->next;
             i++;
           }
           if(prev==NULL) cout<<"\nThe position you entered is beyond current list size.";
           else
           {
               node *tmp=prev->next;
               prev->next=tmp->next;
               cout<<"\nDeleted element is : "<<tmp->show_a();
               delete tmp;
           }
      }

};

void print_list()
{
     node* tmp;
     tmp=start;
     cout<<"\nSo, now the linked list looks like : ";
     while(tmp!=NULL)
     {cout<<tmp->show_a()<<"->"; tmp=tmp->next;}
     cout<<"!!!\n";

}
int main()
{
    node* s;
    char ch;int c,d;
    do
    {
          s=new node;

          if(s==NULL)
          {
           cout<<"\n memory full!!";
           exit(1);
          }

          cout<<"\n\tMENU\n1.Insert at beginning\n2.Insert at end\n3.Insert anywhere in between";
          cout<<"\n4.Delete at beginning\n5.Delete at end\n6.Delete anywhere in between\n";
          cout<<"Your choice :";
          cin>>c;
          switch(c)
          {
              case 1 : s->getdata();
                       s->insertbegin();
                       print_list();
                       break;
              case 2 : s->getdata();
                       s->insertlast();
                       print_list();
                       break;
              case 3 : s->getdata();
                       cout<<"\nEnter the position at which you want to enter the element :";
                       cin>>d;
                       if(d>1) s->insertelsewhere(d);
                       else cout<<"\nThis position doesnt lie in the  given range..";
                       print_list();
                       break;
              case 4 : s->deletebegin();
                       print_list();
                       break;
              case 5 : s->deletelast();
                       print_list();
                       break;
              case 6 : cout<<"\nEnter the position at which you want to delete the element :";
                       cin>>d;
                       if(d>1) s->deleteelsewhere(d);
                       else cout<<"\nThis position doesnt lie in the  given range..";
                       print_list();
                       break;
              default: cout<<"\nInvalid input.";

          }

          cout<<"\n Do you want to insert more nodes(Y/N) : ";cin>>ch;

    }while(ch=='Y'||ch=='y');

    cout<<"\nDisplaying Final Result : ";
    print_list();
    delete s;
    //getch();
}
