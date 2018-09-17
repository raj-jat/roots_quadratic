#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

using namespace std;

int main()
{
 float a,b,c;
 cout<<"Enter the coefficient of square of x : ";
 cin>>a;
 cout<<"Enter the coefficient of x : ";
 cin>>b;
 cout<<"Enter the value of c : ";
 cin>>c;
 
 float r1=0.00,r2=0.00;
 
 if((b*b-4*a*c)<0)
     {
   cout<<"\nImaginary Root Occurs";
   getch();
   exit(1);
  }
 
 float rr=sqrt(b*b-4*a*c);
 r1=(-b+rr)/(2*a);
 r2=(-b-rr)/(2*a);
 cout<<endl<<endl;
 cout<<"The first root is : "<<r1<<endl;
 cout<<"The second root is : "<<r2<<endl;
 getch();
 return(0);
 
}