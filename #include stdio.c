#include <stdio.h>

int main() {
    int num;
    printf("enter the number:");
    scanf("%d",&num);
if(num%3==0&&num%5==0){
    printf("Good Number");
}
if(num%3==0&&num%5!=0){
    printf("Bad Number");
}
if(num%5==0&&num%3!=0){
    printf("Poor Number");
}
if(num%3!=0&&num%5!=0){
    printf("-1");
}
 return 0;
}

