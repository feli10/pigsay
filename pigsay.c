#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
  char *text;
  int i, len=0;
  char *line1;
  char *line2;
  for (i=1; i<argc; i++) {
    len += strlen(argv[i]);
    len +=1;
  }
  text = malloc(len);
  for(i=1; i<argc; i++){
    strcat(text, argv[i]);
    if (i != argc -1) {
      strcat(text, " ");
    }
  }
  len -= 1;
  line1 = malloc(len);
  line2 = malloc(len);
  for(i=1; i<=len; i++){
    strcat(line1, "-");
    strcat(line2, "-");
  }
  printf("  /\\_____/\\    %s\n", line1);
  printf(" /         \\  |%s|\n", text);
  printf(" | O     O |  /%s\n", line2);
  printf(" |   ___   | /\n");
  printf(" \\  |o_o|  /\n");
  printf("  \\_______/\n");

  exit(0);
}
