
#include<iostream>
#include<math.h> //added new headers
using namespace std;
int main(){
int num,d=0,n,r,p=0,a=0;   //a has to be 0
char choice;
cin>>num;     //repalced << with >>
cin>>choice;  //replaced << with >> 
switch(choice) //wrong spelling
{
case 'a':       //replaced a with 'a'
n=num;
while(n!=0)  //wrong condition
{
n=n/10;
d++;
}
n=num;
while(n!=0)
{
r=n%10;
a=a+pow(r,d);   //= insted of == and pow instead of sqr
n=n/10;
}
cout<<a<<"\n";  
break;      //missing break
case 'p':      //replaced p with 'p' 
n=num;
while(n!=0)
{
r=n%10;
p=(p*10)+r;  //replaced + with * and == with =
n=n/10;
}
cout<<p<<"\n"; 
                //removed continue
}
}

