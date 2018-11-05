#include <stdio.h>

void compare(int *a,int *b);
void main(){
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF){
		int aa = a;
		int bb = b;
		if(a>b){
		compare(&a,&b);}
		
		int i;
		int cnt=0;
		int max=0;
		for(i=a;i<=b;i++){
			int temp=i;
	
			
			while(temp!=1)
			{
				if(temp%2==1) temp=3*temp+1;
				else temp = temp/2;
				cnt++;
			
			}
			if(cnt>max){
				max=cnt;}
				cnt=0;
			
				
			
		}
		printf("%d %d %d\n",aa,bb,max+1);
	}
}

void compare(int *a,int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}