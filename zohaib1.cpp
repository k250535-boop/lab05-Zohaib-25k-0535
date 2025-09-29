#include<stdio.h>
int main(){
	char x,y,z;
	scanf("%c",&x);
	scanf("%c",&y);
	scanf("%c",&z);
	
	if(x>y && x>z){
		printf("%c is greater than y and z",x);
	}
	else if(y>x && y>z){
		printf("%c is greater than x and z",y);
	}
	else if(z>y && z>x){
		printf("%c is greater than y and x",z);
	}
	return 0;
}
