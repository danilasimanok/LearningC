#include <stdio.h>

#define n 5

void printr(int R[n][n])
{
	int i,j;
	for(i=n-1;i>=0;i--){
		for(j=0;j<n;j++){
			printf("%i ",R[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int R[n][n]={{0,0,0,0,0},{1,0,0,0,0},{1,1,0,0,0},{0,0,1,0,0},{0,0,1,1,0}};
	printr(R);
	
	int i,j,k;
	int T[n][n];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			T[i][j]=R[i][j];
	for(k=0;k<n;k++)
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				T[i][j]=T[i][j]||(T[i][k]&&T[k][j]);
	
	printf("\n");
	printr(T);
	return 0;
}