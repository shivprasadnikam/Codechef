#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int sellingPrice,profit;
	    cin>>sellingPrice>>profit;
	    std::cout << (sellingPrice*1.1)-(sellingPrice-profit) << std::endl;
	}
	return 0;
}
