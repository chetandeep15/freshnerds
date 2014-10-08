#include<bits/stdc++.h>
using namespace std;
int max(int a, int b)
{
	return(a>b)? a:b;
}
bool anagram(char *s1,char *s2) 
{
	int i=0;
	int n1=strlen(s1);
	int n2=strlen(s2);
	sort(s1,s1+n1);
	sort(s2,s2+n2);
	while(i<max(n1,n2))
	{
		if(s1[i]==s2[i]||(s1[i]==' '||s2[i]==' '))
		{
			i++;
		}
		else
		{
			return false;
		}
	}
	return true;
}

		   
	
int main()
{
	char str1[100],str2[100];
	
	printf("enter first string\n");
	gets(str1);
	printf("enter second string\n");
	gets(str2);
	
	if (anagram(str1,str2))
	        {
	        	printf("Is anagram\n");

	        }
	        else
	        {
	        	printf("not anagram\n");
	        } 
	        

	return 0; 

}
