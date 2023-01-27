#include <iostream>
#include <map>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int sRangeF,eRangeF,sRangeS,eRangeS;
	    cin>>sRangeF>>eRangeF>>sRangeS>>eRangeS;
	    map<int,int>ans;
	    for(int i=sRangeF; i<=eRangeF; ++i)
	    {
	        ans[i]=i;
	    }
	    for(int j=sRangeS; j<=eRangeS; ++j)
	    {
	        ans[j]=j;
	    }
	    std::cout << ans.size() << std::endl;
	}
	return 0;
}
