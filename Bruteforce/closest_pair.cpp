//closest pair algo
//b171352 Harsha E2S2
//Time Complexity: O(n^2)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float find_distance(int,int,int,int);

int main(){
	
	struct closest{
		int x;
		int y;
	};
	
	struct closest c[100];
	
	int n,i,j,index1,index2;
	
	printf("Enter number of points:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("Enter x coordinate of point %d:",i+1);
		scanf("%d",&c[i].x);
		printf("Enter y coordinate of point %d:",i+1);
		scanf("%d",&c[i].y);
	}
	for(i=0;i<n;i++){
		printf("(%d,%d) ",c[i].x,c[i].y);
	}
	printf("\n");
	float min,x;
	
	min=find_distance(c[0].x,c[0].y,c[1].x,c[1].y);
	index1=0, index2=1;
	
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			x=find_distance(c[i].x,c[i].y,c[j].x,c[j].y);
			printf("%.2f , %.2f\n",x,min);
		}
		if(min>x){
			min=x;
			index1=i;
			index2=j;
		//	printf("%.2f \n",min);
		}
	}
	
	printf("Min Value: %.2f, Points: %d %d\n",min,index1,index2);
	return 0;
}

float find_distance(int x,int y, int xx, int yy){
	int temp=((xx-x)*(xx-x))+((yy-y)*(yy-y));
	//printf("%d %d%d %d%d   - ",temp,x,y,xx,yy);
	return sqrt(temp);
}
