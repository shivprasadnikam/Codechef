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
	    int b[size];
	    int countOfZero=0;
	    int countOfOne=0;
	    
	    for(int i=0; i<size; i++)
	    {
	        cin>>b[i];
	    }
	    
	    for(int i=0; i<size; i++)
	    {
	        if(b[i]==0)
	        countOfZero++;
	        else
	        countOfOne++;
	    }
	    if(size%2!=0)
	    {
	        if(countOfOne%2==0)
	        {
	            std::cout << "No" << std::endl;
	        }
	        else
	        std::cout << "Yes" << std::endl;
	    }
	    else
	    {
	        if(countOfOne%2)
	        std::cout << "No" << std::endl;
	        else
	        std::cout << "Yes" << std::endl;
	    }
	    
	    
	    
	    /*
	    if(countOfOne==countOfZero)
	    std::cout << "Yes" << std::endl;
	    else if(countOfZero==size || countOfOne==size)
	    cout<<"Yes"<<endl;
	    else
	    std::cout << "No" << std::endl;*/
	}
	return 0;
}
