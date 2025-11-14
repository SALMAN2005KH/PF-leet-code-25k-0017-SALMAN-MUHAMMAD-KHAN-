#include<stdio.h>

int main(){
	int num[]={4,3,2,1};
	int i,j,n=4;
    for(i=0;i<n;i++){
    	if(num[i]%2==0){
    		num[i]=0;
		}
		else{
			num[i]=1;
		}
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(num[i]>num[j]){
				int temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",num[i]);
	}
	return 0;
}
