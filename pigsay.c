#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
  char *text;
  int i, len=0;
  for (i=1; i<argc; i++) {
    len += strlen(argv[i]);
    len +=1;
  }
  text = malloc(len);
  for(int i=1; i<argc; i++){
    strcat(text, argv[i]);
    if (i != argc -1) {
      strcat(text, " ");
    }
  }
  len -= 1;
  printf("  /\\_____/\\    -----------------------------\n");
  printf(" /         \\  |%-29s|\n", text);
  printf(" | O     O |  /-----------------------------\n");
  printf(" |   ___   | /\n");
  printf(" \\  |o_o|  /\n");
  printf("  \\_______/\n");

  exit(0);
}
