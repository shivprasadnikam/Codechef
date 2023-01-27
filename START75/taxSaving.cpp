#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int earning,saving;
	    cin>>earning>>saving;
	    std::cout << earning-saving << std::endl;
	}
	return 0;
}
