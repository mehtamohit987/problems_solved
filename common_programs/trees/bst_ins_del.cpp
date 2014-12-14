#include<iostream>
#include<conio.h>
using namespace std;
class BSTnode
{
      public:
      int ele;
      BSTnode* left;
      BSTnode* right;
      BSTnode(int key){ele=key;left=right=NULL;}
};
void add(BSTnode* root,int key)
{
     if(root==NULL)
        root=new BSTnode(key);
     else if(key<=root->ele)
          add(root->left,key);
     else
          add(root->right,key);
}
void preorder(BSTnode* root)
{
     if(root==NULL)
     return;
     cout<<"\n"<<root->ele;
     preorder(root->left);
     preorder(root->right);
}
BSTnode* find(BSTnode* root,int key)
{
         if(root==NULL||(root->ele)==key)
         return root;
         else if(key<root->ele)
              find(root->left,key);
         else
              find(root->right,key);
}
BSTnode* mini(BSTnode* root)
{
         if(root==NULL||root->left==NULL)
           return root;
         else
           mini(root->left);
}
BST
int main()
{
    BSTnode* root=NULL;
    int a;
    for(int i=0;i<3;i++){
    cout<<"\nEnter for adding:";
    cin>>a;
    add(root,a);
    }
    cout<<"\n min :";
    BSTnode* min=mini(root);
    cout<<min->ele;
    getch();
 cout<<"\nDisplay : ";
 preorder(root);
 
 getch();
 return 0;
    
}
