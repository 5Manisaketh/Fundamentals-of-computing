#include <stdio.h>
int main() {
int first,second,temp;
 printf("enter first number:");
 scanf("%d,",first);
 printf("enter second number:");
 scanf("%d,",second);
 {
 temp=first;
 first=second;
 second=temp;
 printf("/n After swapping first number=%d/n",first );
 printf("After swapping second number=%d,",second);
}
return 0;
}

