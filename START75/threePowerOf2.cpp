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
	    string binary;
	    int res=0;
	    cin>>binary;
	    
	    if(binary=="1" || binary=="10")
	    std::cout << "No" << std::endl;
	    else{
	        for(int i=0; i<size; i++)
	        {
	            if(binary[i]=='1')
	            {
	                res++;
	            }
	        }
	        if(res<=3)
	        {
	            std::cout << "Yes" << std::endl;
	        }
	        else
	        {
	            std::cout << "No" << std::endl;
	        }
	    }
	    
	    
	}
	return 0;
}
