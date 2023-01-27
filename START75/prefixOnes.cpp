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
	    
	    string prefix;
	    cin>>prefix;
	    
	    int ans=0;
	    int i=0;
	    for(i=0; i<size; i++)
	    {
	        if(prefix[i]=='1')
	        {
	            ans++;
	        }
	        else
	        break;
	    }
	    int res=0;
	    for(int x=i; x<size; x++)
	    {
	        if(prefix[x]=='1')
	        {
	            int temp=0;
	            while(prefix[x++]=='1')
	            {
	                temp++;
	            }
	            x--;
	            res=max(res,temp);
	        }
	    }
	    ans=res+ans;
	    std::cout << ans << std::endl;
	}
	return 0;
}
