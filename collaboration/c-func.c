#include <stdio.h>
#include <malloc.h>
int add(int a,int b){
	return a+b;
}
int sub(int a,int b){
	return a-b;
}
int mul(int a,int b){
	return a*b;
}
float divide(float a,float b){
	if(b==0) 
	    return -1;
	else
	    return a/b;
}
int power(int a,int b){
	return a^b;
}
char* strconcate(const char A[],const char B[]){
	int a=0,b=0;
	char* str;
	while(A[a++] != '\0') ;
	while(B[b++] != '\0') ;
	str = malloc(a+b+1);
	for(int i=0;i<a;i++) *(str+i) = A[i];
	for(int i=0;i<b;i++) *(str+a+i)= B[i];
	*(str+a+b) = '\0';
	return str;
}
int strcount(const char A[]){
	int cnt=0;
	while(A[cnt++] != '\0') ;
	return cnt;
}


		
