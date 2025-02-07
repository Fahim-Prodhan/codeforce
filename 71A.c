
#include <stdio.h>
#include <string.h>
int main()
{
    int num;
    scanf("%d", &num);
    char words[num][101];
    
    for(int i = 0; i < num; i++){
        scanf("%s", words[i]);
    }


    for(int j = 0; j < num; j++){
        
        if(strlen(words[j]) > 10){
            int x = strlen(words[j])-2;
            printf("%c%d%c\n",words[j][0],x,words[j][strlen(words[j])-1]);
        }else{
            printf("%s\n",words[j]);
        }
    }
    return 0;
}
