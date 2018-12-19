//題目:https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2864

#include <stdio.h>
#include <stdlib.h>
void main(){
	int input1,input2;
	int cnt=0;
	scanf("%d",&input1);

	for(int i=0;i<input1;i++){
		scanf("%d",&input2);
		int *array;
		array = (int*)malloc(input2 * sizeof(int));
		
		for(int j=0;j<input2;j++){
			 scanf("%d",&array[j]);
			// printf("%d\n",array[j]);
		}
		
		int up=0,down=0;
		for(int j=0;j<input2;j++){
			if(j==(input2+1))break;
			if(array[j]<array[j+1]) up++;
			else if(array[j]>array[j+1])down++;
		}
		cnt++;
		
		printf("Case %d: %d %d\n",cnt,up,down);
		free(array);
	}
}