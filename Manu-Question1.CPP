
#include <iostream.h>
#include <stdio.h>
#include <string.h> //wrong spelling
#define len strlen //to change len to strlen
int getFIndex(char[],char);       //FUNCTION DEFINTIONS
int getLIndex(char[],char);
int main()
{
	char str[100];
	char ch;
	int Lindex,Findex;
	gets(str);           //missing ; and need gets
	cin>>ch;
	Lindex = getLIndex(str,ch);
	Findex= getFIndex(str,ch);
	if(Lindex!=-1)
		cout<<Findex<<endl<<Lindex;
	else
		cout<<"NOT FOUND"<<endl;
	return 0;
}
int getFIndex(char string[100],char  c)     //need char array and function name was interchanged
{
	int size = len(string),i=0;
	while(i<size)
	{

		if(string[i]==c){     //== needed
		    return i;
		   break;
		}
		i++;
	}

}
int getLIndex(char string[100],char c)  //missing data type and function name changed
{
	int size = len(string);
	int i=size;
	while( i>=0)                        //extra ;
{
		if(string[i]==c){
		    return i;
 break;
		}
	i--;
}
return -1;      //not found case
}
