/*Inputs
4
3
5 4 4
1 2 3
3
10 10 9
2 5 4
3
3 3 9
9 1 3
4
2 8 1 5
2 8 1 9 


Output
1
2
3
2
*/





#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int size;
	    cin>>size;
	    int likes[size];
	    int comments[size];
	    
	    
	    for(int i=0; i<size; i++)
	    cin>>likes[i];
	    
	    for(int j=0; j<size; j++)
	    cin>>comments[j];
	    
	    int output[size];
	    
	    for(int k=0; k<size; k++)
	    {
	        output[k]=likes[k]+comments[k];
	    }
	    
	    
	    int winner=0;
	    for(int i=0; i<size; i++)
	    {
	        if(likes[winner]<likes[i])
	        {
	            winner=i;
	        }
	        if(likes[winner]==likes[i])
	        {
	            if(comments[i]>comments[winner])
	            {
	                winner=i;
	            }
	        }
	    }
	    std::cout <<winner+1<< std::endl;
	  }
	    
	
	return 0;
}
