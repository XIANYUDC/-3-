#include <stdio.h>
#include <string.h>
int main()
{
	char P1[1000],P2[10]={0},P3[100],P4[100];
	char *p1=P1, *p2 = P2,*p3=P3,*p4=P4;
	int i=0,num = 0,a=0,b=0;
	printf(" ‰»Î\n");
	gets(P1);
	gets(P2);
	a = strlen(p1);
	b = strlen(p2);
	strcpy(p4, p1);
	for (i = 0; p4!=NULL; i++)
	{
		if ((p3=strstr(p4, p2)) != NULL)
		{
			num++;
			p3 += b;
		}
		p4=p3;
	}
	printf("%d", num);
	return 0;
}