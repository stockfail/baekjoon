#include <stdio.h>
#include <stdint.h>


int main (){
   char ID [50];
   scanf("%s", &ID);

   printf("%s?\?!", ID); // trigraph (??! -> |) 문자 대체 현상 \(이스케이프)로 헤결

    return 0;
}
