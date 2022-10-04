//{ Driver Code Starts
//Initial Template for Java

import java.util.Scanner;

class Main {

    
// } Driver Code Ends
//User function Template for Java

public static int nSum(int n){
    int ans = 0;

    //Write your code here to calculate and return sum of n number.
    
    ans = n*(n+1)/2;
    
    return ans;
}

//{ Driver Code Starts.

    public static void main(String[] args)
    {
        Scanner scn = new Scanner(System.in);
        int t = scn.nextInt();
        while(t-- > 0) {
            int n = scn.nextInt();
            int ans = nSum(n);
            System.out.println(ans);
        }
        scn.close();
    }
}
// } Driver Code Ends
