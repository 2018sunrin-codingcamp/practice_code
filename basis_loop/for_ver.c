#include <stdio.h>
int main(){
  int dan, num, i;
  printf(“내가 특별히 구구단을 알려주지 몇단이 궁금한가?”);
  scanf(“%d”, &dan);
  for(num=1; num<10; num++){
	printf(“%dx%d=%d \n”, dan, num, dan*num);
  }
  return 0;
}
