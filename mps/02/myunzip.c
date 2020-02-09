#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc < 2) {
    printf("Usage: %s FILENAME\n", argv[0]);
    exit(1);
  }
  
      FILE *fptr;
      fptr=fopen(argv[1],"r");
      if (fptr == NULL) {
      fprintf(stderr, "Can't open input file!\n");
        exit(1);
      }
      //char*temp;
      //char *c = calloc(1000,sizeof(char));
      char k;
      int i;
      while (fscanf(fptr, "%c%d",&k,&i) != EOF) {
        //temp=malloc(sizeof(input));
        for (int j=0;j<i;j++){
          printf("%c",k);  
        }
        //free(temp);
          
        }
        fclose(fptr);
  
  return 0;
}
