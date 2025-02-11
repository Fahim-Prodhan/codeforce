#include <stdio.h>
 
int main()
{
    int t, i, n, rslt;
    scanf("%d", &t);
 
    for(i=1; i<=t; i++){
        scanf("%d",&n);
 
        if(n<=2){
            printf("0\n");
        }
        else{
            rslt = (n-1)/2;
            printf("%d\n", rslt);
        }
    }
 
    return 0;
}
