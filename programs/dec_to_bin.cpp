#include <iostream>  
using namespace std;  
int main()  
{  
int a[10], n, i;    
cout<<"Enter the number to convert: ";    
cin>>n;    //12
for(i=0; n>0; i++)    
{    
a[i]=n%2;    //a[0] = 12 % 2 = 0; a[1] = 6 % 2 = 0; a[2] = 3 % 2 = 1;
n= n/2;      //n = 12/2 = 6;      n = 6/2 = 3;      n = 1/2;
}    
cout<<"Binary of the given number= ";    
for(i=i-1 ;i>=0 ;i--)    
{    
cout<<a[i];    
}    
}