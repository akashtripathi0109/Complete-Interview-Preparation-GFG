/*There are times when your answer is a floating point that contains undesired amount of digits after decimal. Here, we'll learn how to get a precise answer out of a floating number. You are given two floating numbers a and b. You need to output a/b and decimal precision of a/b upto 3 places after the decimal point.

Note: You may use setprecision and fixed.

Example:

Input:
a = 5.43
b = 2.653
Output:
2.04674 2.047
Explanation:
Value of a/b is printed with and 
without decimal precision.


User Task:
Your task is to complete the provided function.

Constraints:
1 <= a, b,<= 100*/



#include <bits/stdc++.h>
using namespace std;

void precise(float a, float b)
{
    
    float c = a/b;
    cout << c << " " << setprecision(3) << fixed << c << endl;
    
    cout<<endl;
}


void precise(float , float );


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    float a,b;
	    cin>>a>>b;
	    precise(a,b);
	    
	}
	return 0;
}
