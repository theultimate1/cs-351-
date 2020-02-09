#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxlen 250
int main(int argc, char *argv[]) {
  if (argc < 2) {
    printf("Usage: %s FILENAME\n", argv[0]);
    exit(1);
  }
  else{
    //char temp[]="a";
      char *input=calloc(1000,sizeof(char));
      FILE *fptr;
      fptr=fopen(argv[1],"r");
      if (fptr == NULL) {
      fprintf(stderr, "Can't open input file!\n");
        exit(1);
      }
      //char*temp;
      while (fscanf(fptr, "%s", input) != EOF) {
        //temp=malloc(sizeof(input));
        encode(input);
        //free(temp);
          
        }
        fclose(fptr);


  }

  return 0;
}

void encode(char* string){
  { 
    int rLen; 
    char count[maxlen]; 
    int len = strlen(string); 
  
    /* If all characters in the string are different,  
    then size of destination string would be twice of input string. the upper bound becomes 2*len of source string  */
    char* dest = (char*)malloc(sizeof(char) * (len * 2 + 1)); 
  
    int i, j = 0, k; 
  
    for (i = 0; i < len; i++) { 
  
        
        dest[j++] = string[i]; 
  
        
        rLen = 1; 
        while (i + 1 < len && string[i] == string[i + 1]) { 
            rLen++; 
            i++; 
        } 
  
        
        sprintf(count, "%d", rLen); 
  
       
        for (k = 0; *(count + k); k++, j++) { 
            dest[j] = count[k]; 
        } 
    } 
  
    /*terminate the destination string */
    dest[j] = '\0'; 
     printf("%s",dest);
} 
  
}
