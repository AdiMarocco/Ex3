#define LINE 256
#define WORD 30
//#include<Ex3.h>
#include<stdio.h>
#include <string.h>
//get one line from the txt
int get_line(char s[]){
    char k;
    int i=0;
    if (scanf("%c",&k) == EOF){
        return -1;
    }
//loop - scan all the line, when it is end of line or file
while (k!='\n'){
    s[i]=k;
    i++;
    if (scanf("%c",&k) == EOF){
        s[i]=k;
        i++;
    break;}
    } 
    s[i]='\0';  
return i;}

//check if str2 is substring of str1 - if so return 1
int substring(char * str1, char * str2){
    for(int i=0;i<strlen(str1);i++){
        if(str1[i]==str2[0]){
            int k=i+1;
            for(int j=1;j<strlen(str2);j++){
                if(k==strlen(str1)){
                    break;}
                if(str1[k]==str2[j]){
                    k++;
                }
                else{
                    break;
                }
                if(j==strlen(str2)-1){
                return 1;
                }
            }
       }
    }
return 0; }
//print the lines and check if the word is is the line- if so print this line
void print_lines(char * str){
        char oneline[LINE];
        int size = 0;
       while (size>=0){
        size = get_line(oneline);
        if(size!=-1 &&substring(oneline,str)==1){
            printf("%s\n",oneline);
        }
       }   
}
//scan one word from the txt
int getword(char w[]){
    char k;
    int i=0;
   if (scanf("%c",&k)==EOF){
    return -1; }

while(k>=33&&k<=126){
    w[i]=k;
    i++;
    if(scanf("%c",&k) == EOF){
        break; }
    }
    w[i]='\0';  
return i;}
//check if s and t are equal or 
int similar (char* s, char* t){
    if(strlen(s)>strlen(t)+1||strlen(s)<strlen(t)){
        return 0; }
    int k=0;
    int j=0;
    if(strlen(s)==strlen(t)){
        if(strcmp(t,s)==0){
            return 1;
        }
        else{
            return 0;
        }
    }
    for(int i=0;i<strlen(s);i++){
        if(s[i]==t[j]){
            j++;
        }
        else{
            k++;
        }
    }
    if(k==1||k==0){
        return 1;}
return 0;}

void print_similar_words(char * str){
    char oneword[LINE];
        int size = 0;
       while (size>=0){
        size = getword(oneword);
        if(size!=-1 && similar(oneword,str)==1){
            printf("%s\n",oneword);
        }
       }  
}


int main(){
    char c[WORD];
    char k;
    int i=0;
    while (1)
    {
       scanf("%c",&k); 
       if(k!=' '){
            c[i]=k;
            i++;
       }
       else{
        break;
       }
    }
    c[i] = '\0';
    scanf("%c",&k);
    if(k=='a'){
        print_lines(c);
    }
     if(k=='b'){
        scanf("%c",&k);
        scanf("%c",&k);
        print_similar_words(c);
     }
    // char s[]="caat";
    // char t[]="catt";
    // //printf("similar: ");
    // printf("%d\n", similar(s,t));
    // // char w[WORD];
    // // printf("%d", getword(w));
}