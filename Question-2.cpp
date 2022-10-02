/*Write a program in C to demonstrate how to handle the pointers in the program. Go to the editor
Expected Output :

Address of m : 0x7ffcc3ad291c
 Value of m : 29 */

 #include<iostream>s

 using namespace std;

 int main()
{
    int m=29;
    int *z;
 
    z=&m;
    cout<<m<<endl;
    cout<<z;
}