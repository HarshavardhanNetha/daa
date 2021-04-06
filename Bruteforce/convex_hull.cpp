//covexhull bruteforce
//b171325 Harsha

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	struct point{
		int x;
		int y;
	};
	
	int i,j,k,n;
	printf("Enter the no. of points:");
	scanf("%d",&n);
	
	struct point arr[n];
	
	for(i=0;i<n;i++){
		printf("Enter x y:");
		scanf("%d %d",&arr[i].x,&arr[i].y);
	}
	
	for(i=0;i<n;i++){
		printf("(%d,%d) ",arr[i].x,arr[i].y);
	}
	
	
	int a,b,c,cc,lflag,hflag;
	for(i=0;i<n;i++){
		for(j=i+1;j<n+1;j++){
			//find a b c values
			a=arr[j].y-arr[i].y;
			b=arr[j].x-arr[i].x;
			c=(arr[i].x*arr[j].y) - (arr[j].x*arr[i].y) ;
			
			//printf("%d %d %d\n",a,b,c);
			
			lflag=0,hflag=0;
			for(k=i;k<n;k++){
			
				if(((arr[k].x!=arr[i].x) or (arr[k].y!=arr[i].y)) and ((arr[k].x!=arr[j].x) or (arr[k].y!=arr[j].y))){
					//printf("(%d , %d)",arr[k].x,arr[k].y);
					cc=(arr[k].x*arr[j].y) - (arr[j].x*arr[k].y) ;
					//printf("%d",cc);
						if(cc<c){
							if(lflag==1)
								break;
							lflag=1; //lowflag will become 1
							//printf("L Flag %d\n",lflag);
						}
						else{
							if(hflag==1)
								break;
							hflag=1; //highflag will become 1, means first value is high
							//printf("H Flag %d\n",hflag);
						}
				}
			
			}
		}
			//printf("L Flag: %d  H Flag: %d",lflag,hflag);
			if(lflag==1 and hflag==1){
				//printf("Failed: (%d,%d)\n",arr[k].x,arr[k].y);
			}
			else{
				//printf(">(%d,%d)\n",arr[k].x,arr[k].y);
				printf(">%d \n",k);
			}
	}
	
	return 0;	
}
