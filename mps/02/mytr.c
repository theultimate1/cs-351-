#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  
  if (argc < 3) {
    printf("Usage: %s STRING1 STRING2\n", argv[0]);
    printf("       %s -d STRING\n", argv[0]);
    exit(1);
  }else{
    /*if(strcmp(argv[3],"<")==0){
    
      FILE *fptr;

      fptr=fopen(argv[4],"r");
      char temp[]="A";
      char *line=temp;
      if (fptr){
        while((fscanf(fptr,"%*[^\n]",line)!=EOF)){
          
          if(strcmp(argv[1],"-d")==0){
            deleteWord(line,argv[2]);
          }else{
            replaceWord(line,argv[1],argv[2]);
          }

        }
      }
      fclose(fptr);

    }*/
    if (strcmp(argv[1],"-d")==0){
      char temp[]="a";
      char *input=temp;
      while(1){
        //printf("\nenter your words\n");
        if((scanf("%s",input))==EOF){
          exit(0);
        }
        deleteWord(input,argv[2]);
        //printf("%s",input);
        
        
        }
    }
    
    else{
        char label[]="a";
        char* input=label;
        while(1){
        printf("enter your words\n");
        if((scanf("%s",input))==EOF){
          exit(30);
        }
        replaceWord(input,argv[1],argv[2]);
        
        
        }
        
       

    
    
  }
  
  }

  
  return 0;
}

void replaceWord(char *s, char *old, 
                                  char *new) 
{ 
    char *result; 
    int i, cnt = 0; 
    int newlen = strlen(new); 
    int oldlen = strlen(old); 
  
    // Counting the number of times old word 
    // occur in the string 
    for (i = 0; s[i] != '\0'; i++) 
    { 
        if (strstr(&s[i], old) == &s[i]) 
        { 
            cnt++; 
  
            // Jumping to index after the old word. 
            i += oldlen - 1; 
        } 
    } 
  
    // Making new string of enough length 
    result = (char *)malloc(i + cnt * (newlen - oldlen) + 1); 
  
    i = 0; 
    while (*s) 
    { 
        // compare the substring with the result 
        if (strstr(s, old) == s) 
        { 
            strcpy(&result[i], new); 
            i += newlen; 
            s += oldlen; 
        } 
        else
            result[i++] = *s++; 
    } 
  
    result[i] = '\0'; 
    printf("%s\n",result);
} 
void deleteWord(char *s,char *rm){
     char *match=s;
    int len = strlen(rm);
    while ((match = strstr(match, rm))) {
        *match = '\0';
        strcat(s, match+len);
        match++;
    }
    printf("%s",s);
}
    