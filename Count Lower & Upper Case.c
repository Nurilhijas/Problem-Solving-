#include<stdio.h>
int main()
{
int upper=0,lower=0;
char ch[80];
int i;
gets(ch);
i=0;
while(ch[i]!='\0')
{
	if(ch[i]>='A' && ch[i]<='Z')
	upper++;
	if(ch[i]>='a' && ch[i]<='z')
	lower++;
	i++;
}
printf("Uppercase Letters : %d\n",upper);
printf("\nLowercase Letters : %d\n",lower);
return 0;
}
