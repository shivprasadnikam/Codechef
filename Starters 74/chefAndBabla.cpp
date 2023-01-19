
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int size;
	    cin>>size;
	    
	    vector<int>positive,negative;
	    int temp;
	    int maxi=INT_MIN;
	    int mini=INT_MAX;
	    
	    for(int i=0; i<size; i++)
	    {
	        cin>>temp;
	        if(temp>=0)
	        {
	            positive.push_back(temp);
	            mini=min(mini,temp);
	        }
	        else
	        {
	            negative.push_back(temp);
	            maxi=max(maxi,temp);
	        }
	    }
	    if(maxi==0 || mini==0)
	    {
	        std::cout << "-1" << std::endl;
	    }
	    else if(maxi==INT_MIN)
	    {
	        std::cout << mini-1 << std::endl;
	    }
	    else if(mini==INT_MAX)
	    {
	        std::cout << abs(maxi+1) << std::endl;
	    }
	    else
	    {
	        std::cout << min(mini,abs(maxi))-1 << std::endl;
	    }
	    
	    
	}
	
}
