#include<stdio.h>
int main()
{
	int n,total,a,tc=0,ts=0,tr=0;
	float perc,pers,perr;
	char b;
	scanf("%d",&n);
	for(int i=1;i<n+1;i++)
	{
	  scanf("%d %c",&a,&b);
	  if(b=='C'){ tc+=a;  }
	  else if(b=='S'){ ts+=a;}
	  else if(b=='R'){ tr+=a;}
	}
	total=tc+ts+tr;
	perc=(tc*100.0)/total;
	pers=(ts*100.0)/total;
	perr=(tr*100.0)/total;
	printf("Total: %d cobaias\n",total);
	printf("Total de coelhos: %d\n",tc);
	printf("Total de ratos: %d\n",tr);
	printf("Total de sapos: %d\n",ts);
	printf("Percentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n",perc,perr,pers);
	return 0;

}
