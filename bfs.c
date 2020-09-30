#include<stdio.h>
#include<stdlib.h>
int a[10][10],q[10],visited[10],n,f=0,r=1;

void bfs(int v)
{
	for(int i=1;i<=n;i++)
	{
		if(a[v][i]==1 && visited[i]==0)
		{
			q[r++]=i;
		}
	}
	if(f<=r)
	{

		visited[q[++f]]=1;
		printf("%d\n",q[f]);
		bfs(q[f]);
	}
}


int main()
{
	int v;
	printf("enter the number of vertisis\n");
	scanf("%d",&n);
	printf("enter matrix\n");
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for (int i = 1; i <= n; ++i)
	{
		visited[i]=0;
		q[i]=0;
	}
	printf("enter the starting vertex\n");
	scanf("%d",&v);
	bfs(v);

}

