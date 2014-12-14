#include<iostream>
#include<cstdio>
#include<map>
#include<algorithm>
using namespace std;

int main()
{
    /*
    	N : No of records
    	
    	S : char array that takes input for record
    	
    	year,month : used to extract date
    	i : general for loop iterator
    	tran_cost : transaction amount of current record
    	charge : charges calculated for the given transaction
    	charge_int : integral charge rounded to next integer as specified
    	
    	tran_cost_int : temporary integer part of current transaction amount
    	tran_cost_fp : temporary fractional part of current transaction amount
    	
    	tran_div : temporary divisor for evaluating decimal part
    	
    	fp : temporary boolean variable used to check whether decimal point has occured
    	
    */
    freopen("input.txt","rt",stdin);
    freopen("output.txt","w",stdout);
    	
    int N,year,month,i,tran_cost_int,charge_int;
    
    float tran_cost,tran_cost_fp,tran_div,charge;
    bool fp=false;    
    char S[100];
    
    /*
    
		Map is being used to store the current transaction done by each merchant in a particular month of a year.
		Also the no of free transactions done till now is stored along with them.
		
		format:    
    	map < pair <string    ,    pair<int,   int> > ,     pair<float    ,       int>   > M;
    				   |                 |      |                  |               |
    				   merchant        month   year              total          no of free 
    				   name										transactions    trnsctions done this month
    				   											cost for month
    
    */
    
    map < pair <string, pair<int,int> > , pair<float,int> > M;
    map < pair <string, pair<int,int> > , pair<float,int> >::iterator it;
    
    
    //input
    cin>>N;
    gets(S); // inputting N give a blank line to S so we need extra gets
    
    while(N--)  //Going through all records
    {
    
    S[0]='\0';
    
    //  mer : Name of merchant of current record
    string mer;
    
    //inputting record
    gets(S);//cout<<S<<"\n";
    
    if(S[0]=='\0') continue; // if blank line
    
    
    //Calculating Date,Month,Year
    year=0;
    for(i=0;i<4;i++)
    year=year*10+S[i]-48;
    
    month=10*(S[5]-48)+S[6]-48;
    
    
    //cout<<month<<" "<<year;
    
      
    
    //Forming a string for the name of merchant
    for(i=11;S[i]!='\0'&&S[i]!=',';i++)
    mer.push_back(S[i]);
    
    
    //cout<<mer<<"\n";
    
    
    //Calculating Transaction Costs
    tran_cost=0.0;
    tran_cost_int=0;
    tran_cost_fp=0.0;
    tran_div=10.0;
    fp=false;
    if(S[i]==',')i++;
    
    for(;S[i]!='\0';i++)
    {
    	
    	if(S[i]=='.'){fp=true;continue;} //decimal point encountered
    	
    	if(!fp)			//integer part
    		tran_cost_int=tran_cost_int*10+(S[i]-48);
    	else		//fractional part
    	{
    		tran_cost_fp=tran_cost_fp+(float)(S[i]-48)/tran_div;
    		tran_div*=10;
    	}
    }
    
    //total transaction cost
    tran_cost=tran_cost_int+tran_cost_fp;

    
    /*
    	Map operations start here.
    	First, we try finding an entry in map for current record (merchant name, month, year)
    
    */
    it=M.find( make_pair( mer,make_pair(month,year) ) );
    
    
    if(it!=M.end())
    {
    	
    	/*
    		if found we arrive here
    		cases to consider:
    		1. free transaction
    		2. paid trans
    			a. We have currently done 50000 total tran and we get 0.5% rate now
    			b. we didnt do that much so follow normal rates for given three ranges of charges
    				
    		
    	*/

		if(tran_cost<=5000.00&&(*it).second.second<2) //case 1
        {
        	(*it).second.first+=tran_cost;	//updating total trnsc in map
        	(*it).second.second++;			//updating no of free trnsc in map
        	charge_int=0;
        	charge=0.0;
        	printf("%.2f\n",(float)charge_int); //printing 2 decimal places
        }       	
    	else
    	{
    		if((*it).second.first>=50000.00)	//case 2a
    			charge=(0.005*tran_cost);
    		else if(tran_cost<5000.00)charge=(0.02*tran_cost);  //cases 2b here on
    		else if(tran_cost<10000.00)charge=(0.015*tran_cost);
    		else	charge=(0.01*tran_cost);
    				
    		//charge rounded to next int
    		charge_int=((charge-(int)charge)==0.0?(int)charge:((int)charge)+1);
    		
    		//updating trnsc cost in map
    		(*it).second.first+=tran_cost;
    		
    		printf("%.2f\n",(float)charge_int);
    	}
    	
    	
    }
    else
    {
        //cout<<"not found";
        /*
         Record not found in map
         So this is first trnsc in current month by given mechant
         cases to consider:
         1. Free transc
         2. General rates for given ranges
        
        
        */
    	if(tran_cost<=5000.00)   //case 1
        charge=0.0;
        else if(tran_cost<10000)	//case 2 here on
        charge=(0.015*tran_cost);
        else
        charge=(0.01*tran_cost);
     
     	//cahrge roundded to nexxt int
        charge_int=((charge-(int)charge)==0.0?(int)charge:((int)charge)+1);
        
        //cout<<" "<<charge<< "   "<<charge_int<<"\n\n";   
        
        /* insering record in map
        	cases:
        	1.free trnsc
        	2. paid trnsc*/
        	
        
        if(tran_cost!=0.0&&charge==0.0)
        	M[ make_pair( mer,make_pair(month,year) ) ]= make_pair(tran_cost,1) ;
        else
        	M[ make_pair( mer,make_pair(month,year) ) ]= make_pair(tran_cost,0) ;
        	
        	
        printf("%.2f\n",(float)charge_int);   //printing charge to 2 deciomal places
    } 

    //cout<<tran_cost_int<<"\n"<<tran_cost_fp<<"\n"<<tran_cost<<"\n";
    
    }//end of while
    
    
    return 0;
}
