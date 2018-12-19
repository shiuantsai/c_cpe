/*題目:https://uva.onlinejudge.org/external/105/10550.pdf
解法:
參考這篇才懂得:http://hellowalk.blogspot.com/2018/10/java-uva-10550-combination-lock.html
指針有40格而轉盤有360度 所以指針每動1格都要9度 (轉盤跟指針是相反方向的)
*/
#include <stdio.h>
#include <stdlib.h>
void main(){
	int st,a,b,c;
	//當還有輸入且四個數不全為0才進迴圈
	while(scanf("%d%d%d%d",&st,&a,&b,&c) && (st || a || b || c)){
		//順時針轉兩圈=720度
		int sum=720;
		//0順時(轉盤)轉到第一個數字30意即"指針"逆時針轉動10格，所以10*9=90度 
		sum+=(((40+st-a)%40)*9);
		//逆時針轉一圈=360度
		sum+=360;
		//逆時針轉到第二個數
		sum+=(((40+b-a)%40)*9);
		//順時針轉到第三個數
		sum+=(((40+b-c)%40)*9);
		printf("%d\n",sum);
	}

}