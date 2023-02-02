#include <stdio.h>
int main() {
	int i,n ;
	int t1=0,t2=1;
	int a=t1+t2;
     printf("enter thenumberof terms:");	
		scanf("%d,",&n);
	printf("fibonacci series:%d,%d" , t1 ,t2);
	for( i=3;i<=n;++i){
	
	t1=a;
	t1=t2;
	a=t1+t2;
	
}
return 0;
}
