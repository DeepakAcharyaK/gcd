#include <stdio.h>
int greate(int num1,int num2);

int main(void) {
  int num1,num2;

  printf("Enter the num1 and num2");
  scanf("%d%d",&num1,&num2);

  int gcd=greate(num1,num2);

  printf("%d",gcd);
  return 0;
}

int greate(int num1,int num2){
  if(num1==0){
    return num2;
  }
  else if(num2==0){
    return num1;
  }else{
    return greate(num2,num1%num2);
  }
}
