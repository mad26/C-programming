//Escape sequences in c
#include<stdio.h>
int main()
{ 
  //horizontal tab
  printf("hello \t world");
  //vertical tab
  printf("hello \v world");
  //new line
  printf("hello \n world");
  // double quotes
  printf("\"hello world\"");
  //single quotes
  printf("\'hello world\'");
  //question mark
  printf("hello world\?");
  //backslash
  printf("\\hello world");
  //formfeed
  printf("hello \f world");
  //carriage return
  printf("hello \r world");
  //null character
  printf("hello world\0");
  //alert sound
  printf("\a");
  //backspace
  printf("hello \b world");
return 0;
}
