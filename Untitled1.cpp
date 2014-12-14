//Enter your code here
//C++
//Enter your code here

#include<iostream>
using namespace std;
struct node
{
	int val;
    node* left;
    node* right;
};

int depth(node* root)
{

	if(!root)
    return 0;

    return max(depth(root->left),depth(root->right))+1;
}

int main()
{
	node* t=new node();
    node* l=new node();

    t->val=1;
    t->left=l;
    t->right=NULL;

    l->val=2;
    l->left=l->right=NULL;

	cout<<depth(t);

}

/*
#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<cstring>
using namespace std;
void countCommon(string S1, string S2)
{

	vector<bool> V(26,false);
    for(int i=0;i<S1.length();i++)
    if(S1[i]!=' ')V[S1[i]-65]=true;


    cout<<"Common alphabets are:\n";

    for(int i=0;i<S2.length();i++)   //second string
    if(S1[i]!=' '&& V[S2[i]-65])				//exists in first
    {
    	cout<<S2[i]<<"\n";			//printing alphabet

        V[S2[i]-65]=false;			//so that it doesnt get printed again on re-occurances

    }

}

int main()
{
	string S1,S2;
    S1=string("AMITABH BACHCHAN");
    S2=string("RAJNIKANTH");
    countCommon(S1,S2);


}
*/
