#include<bits/stdc++.h>
using namespace std;
class date
{
    int d,m,y,s,m,h;
    int Hdiff_UTC,Mdiff_UTC;

    public:
    date()
    {
        /*// current date/time based on current system
        time_t now = time(0);

        // convert now to string form
        char* dt = ctime(&now);

        cout << "The local date and time is: " << dt << endl;

        // convert now to tm struct for UTC
        tm *gmtm = gmtime(&now);
        dt = asctime(gmtm);
        cout << "The UTC date and time is:"<< dt << endl;

    */
        d=1, m=1, y=1970, s=0, m=0, h=0;
        Hdiff_UTC=Mdiff_UTC=0;
    }

    date(string s)
    {
        d=1, m=1, y=1971, s=0, m=0, h=0;
        Hdiff_UTC=Mdiff_UTC=0;
    }

};

class tag
{
    string tagVal;
    tag* next;

    public:
    tag()        {tagVal("");next=NULL;}
    tag(string S){tagVal(S); next=NULL;}
};

class note
{
    string guid;
    date created;
    tag* tagList;
    string content;

    public:
    note()          {guid("NO GUID SET"); tagList=NULL; content("NO CONTENT PROVIDED");}
    note(string S)  {guid("NO GUID SET"); tagList=NULL; content("NO CONTENT PROVIDED");}
};

class notePad
{
    int size;
    note* noteList;

    public:
    notePad()           {size=0;noteList=NULL;}
    notePad(string S)   {size=0;noteList=NULL;}
    addNote()    {}
    updateNote() {}
    deleteNote() {}
    searchNote() {}

};

int main()
{
  string line;
  while(getline(cin, line))
  {
    # work on stored data in *line*

    int i=0,

    string guid="<guid>";

    while(i<line.size())
    {
        if(line[i]!=' ');
        else if(line[i]=='<')
        {

            if(line[i+1]=='n')         {



            }


            else if(line[i+1]=='g')    {



            }


            else if(line[i+1]=='c')    {



            }


            else if(line[i+1]=='t')    {



            }


            else if(line[i+1]=='/') {



            }
        }

    }
  }
  return 0;
}
