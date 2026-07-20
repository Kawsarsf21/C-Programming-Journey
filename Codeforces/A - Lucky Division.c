#include<stdio.h>
int main()
{
	int n,lu[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
	scanf("%d",&n);
	for(int i=0;i<14;i++){
		if(n==lu[i]||n%lu[i]==0){printf("YES\n");return 0;}

	}
	printf("NO\n");return 0;
}

