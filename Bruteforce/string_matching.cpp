//string match algorith
//b171352 Harsha E2S2
//Time Complexity: O(mn)

#include <stdio.h>
#include <stdlib.h>

int main(){
	int m,n;
	printf("Enter size of parent string:");
	scanf("%d",&m);
	printf("Enter size of child string:");
	scanf("%d",&n);
	char str1[m];
	char str2[n];
	
	printf("Enter parent string:");
	scanf("%s",str1);
	
	printf("Enter child string:");
	scanf("%s",str2);
	
	printf("Given strings: %s , %s\n",str1,str2)	;
	
	int flag=0;
	int i,j;
	
	for(i=0;i<m+n-1;i++){
		for(j=i;j<i+n;j++){
			printf("%c %c \n",str1[j],str2[j-i]);
			if(str1[j]==str2[j-i])
				flag=1;
			else{
				flag=0;
				break;
			}
		}
		
		if(flag==1){
			printf("Found the match!!!\nIndex no %d",i);
			exit(0);
		}
		else
			continue;
	}
	
	printf("Sorry, value not found!");
	
	return 0;
}
