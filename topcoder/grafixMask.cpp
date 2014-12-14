#include<iostream>
#include<stack>
#include<string>
#include<vector>
#include<cstdio>
#include<sstream>
#include<algorithm>

using namespace std;

int doFill(int x, int y,bool visited[400][600])
{
    int result = 0;

    stack<int> s;
    s.push(x*1000+y);

    while (s.empty() == false) {
    int top = s.top();
    s.pop();
    int topx,topy;
    topx=top/1000;
    topy=top%1000;
    if (topx < 0 || topx >= 400) continue;

    if (topy < 0 || topy >= 600) continue;

    if (visited[topx][topy]) continue;

    visited[topx][topy] = true;
    result++;

    s.push(((topx+1)*1000+topy));
    s.push(((topx-1)*1000+topy));
    s.push((topx*1000+(topy+1)));
    s.push((topx*1000+(topy-1)));

    }

    return result;
}

class grafixMask
{
    public:
    vector<int> sortedAreas(vector<string> rectangles)
    {
        int i,j,k,n,val,x1,y1,x2,y2;
        n=rectangles.size();
        //n=sizeof rectangles/sizeof rectangles[0];   //Error coming from wrong size manipulation
        //cout<<"\n\nIn sortedAreas():\n\nSize:"<<n<<"\nPrinting argument by size : \n";

        //for(i=0;i<n;i++)
        //cout<<rectangles[i]<<"\n";
        //cout<<"\nPrinting argument by random indexes : \n";
        //cout<<rectangles[0]<<"\n"<<rectangles[1]<<"\n"<<rectangles[2]<<"\n"<<rectangles[3]<<"\n\n";


        //vector<string> rect(rectangles,rectangles+sizeof rectangles/sizeof rectangles[0]);

        //cout<<"\nPrinting \"Formed Vector\" by size : \n";
        //for(i=0;i<rect.size();i++)
        //    cout<<rect[i]<<"\n";

        //cout<<"\nPrinting \"Formed Vector\" by random indexes : \n";
        //cout<<rect[0]<<"\n"<<rect[1]<<"\n"<<rect[2]<<"\n"<<rect[3]<<"\n\n";
        //cout<<"segm fault before this line\n\n";

        vector<int> result;
        bool visited[400][600];
        for(i=0;i<400;i++)
        for(j=0;j<600;j++)
        visited[i][j]=false;

        //n=rect.size();
        for(k=0;k<n;k++)
        {
            istringstream ss(rectangles[k]);

            ss >> x1 >> y1 >> x2 >> y2;
            //printf("\n\nCoordinates for string %d : (%d,%d),(%d,%d)\n\n",k,x1,y1,x2,y2);
            for(i=x1;i<=x2;i++)
            for(j=y1;j<=y2;j++)
            visited[i][j]=true;

        }

        for(i=0;i<400;i++)
        for(j=0;j<600;j++)
            if (visited[i][j] == false)
            result.push_back(doFill(i,j,visited));

        n=result.size();
        //cout<<"\n\nPrinting result before sort : \n";
        //for(i=0;i<n;i++)
        //printf("%d\n",result[i]);

        sort(result.begin(),result.end());


        n=result.size();

        return result;
    }
};




int main()
{
    grafixMask G;
    int i,len;
    string s[]={"48 192 351 207", "48 392 351 407", "120 52 135 547", "260 52 275 547"};
    vector<string> x(s,s+sizeof(s)/sizeof s[0]);
    //len=sizeof x/sizeof x[0];
    len=x.size();
    //cout<<"In main():\n\nSize:"<<len<<"\n";

    //for(i=0;i<len;i++)
    //cout<<x[i]<<"\n";


    vector<int> res=G.sortedAreas(x);

    //len=sizeof res / sizeof res[0];
    len=res.size();
    cout<<"\n\nBack in main():\n\nSize of result : "<<len<<"\n\nPrinting result : \n";
    for(i=0;i<len;i++)
    printf("%d\n",res[i]);
}
