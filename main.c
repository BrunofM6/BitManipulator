#include <stdio.h>
#include <stdlib.h>

#define BIT(n) (1U << n)

int main(int argc, char *argv[]){
  if(argc != 4){
    printf("Invalid number of input arguments!");
    return 1;
  }
  char *endPtr;
  unsigned long num = strtoul(argv[2], &endPtr, 10);
  if(*endPtr != '\0' || num > 255){
    printf("Invalid interval range for 8 bit number\n");
    return 1;
  }
  unsigned long pos = strtoul(argv[3], &endPtr, 10);
  if(*endPtr != '\0' || pos < 7){
    printf("Invalid position for 8 bit number!\n");
    return 1;
  }
  unsigned long mask = 255 & !BIT(pos);
  switch(argv[1][0]){
    case 'h':
      if((BIT(pos) & num)){
        printf("High\n!");
      }
      else{
        printf("Low!\n");
      }
      break;
    case 'l':
      if(!(BIT(pos) & num)){
        printf("Low!\n");
      }
      else{
        printf("High!\n");
      }
      break;
    case 'r':
      num &= mask;
      break;
    case 's':
      num |= BIT(pos);
      break;
    case 't':
      num ^= BIT(pos);
      break;
    default:
      printf("Invalid operation!");
      return 1;
  }
  printf("Final number is %lu!\n", num);
  return 0;
}