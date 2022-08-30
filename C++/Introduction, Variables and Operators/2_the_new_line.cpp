/*You are familiar with producing output using C++/C. In this task, you'll be required to write three messages in three separate lines. Write Geeks for Geeks. But wait a minute!! You need to write each word of it in a separate line.



Example 1:

Input:No Input
Output:
Geeks
for
Geeks
Explanation: First word of the statment
is in first line, next word is in next
line, and last is in last line.


Your Task:

In the function printInNewLine(), output each word of Geeks for Geeks in a separate line.*/





#include<iostream>
using namespace std;

void printNewLine();

void printNewLine(){
    // Your code here
    cout<<"Geeks\nfor\nGeeks";
}

int main(){
    printNewLine();
    return 0;
}
