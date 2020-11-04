#include<stdio.h>

int main()
{
	int tc,t;
	
	scanf("%d",&tc);
	
	for(t=0;t<tc;t++)
	{
		int g,p,i;
		int n;
		int a,b,c,d;
		int smoa,smob;
		int big;
		smoa=0;
		smob=0;
		big=0;
		
		scanf("%d%d",&g,&p);
		scanf("%d",&n);

		for(i=0;i<n;i++)
		{
			scanf("%d%d",&a,&b);
			smoa=smoa+a;
			smob=smob+b;
		}
		c=(smoa*g)+(smob*p);
		d=(smoa*p)+(smob*g);
		big=c;
		if (big>d)
		{
			big=d;
		}
		printf("%d\n",big);
	}
}
