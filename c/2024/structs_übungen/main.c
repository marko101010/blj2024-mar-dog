#include <stdio.h>
typedef struct MyStruct {
  char word[8];
  int number;
}
TMyStruct;int main(void)  {
  TMyStruct newStruct;
  newStruct.number = 17;
  printf("%d\n", newStruct.number);
  TMyStruct myArray[5] = {0};
  for (int i = 0; i < 5; i++)  {

    myArray[i] = newStruct;
    }
  myArray[0].number = 10;
  return 0;
}