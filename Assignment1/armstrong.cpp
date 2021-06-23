#include<bits/stdc++.h>
using namespace std;  
int main()  
{  
int n,r,sum=0,temp,power;    
cout<<"Enter the Number=  ";    
cin>>n;    
temp=n;    
while(n>0)    
{    
r=n%10;    
power=round(pow(r,n));
sum+=power;   
n=n/10;    
}    
if(temp==sum)    
cout<<"Armstrong Number."<<endl;    
else    
cout<<"Not Armstrong Number."<<endl;   
return 0;  
}  