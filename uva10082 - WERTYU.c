/*
get() // 抓整個字串
getchar//抓單一個字元
*/
#include <stdio.h>
#include <string.h>
void main(){
	char str[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	
	char input;
	while((input=getchar())!=EOF){
	
		if(input==' ' || input=='\n'){
			printf("%c",input);
			continue;
		}
		int len = strlen(str);
		
		for(int i=0;i<len;i++){
			if(input == str[i]){
					printf("%c",str[i-1]);
					break;
				}
		}
	}
	
}