
#include <stdio.h>
#include <string.h>
int main()
{
    int num;
    int result = 0;
    scanf("%d", &num);
    int arr[num][3];
    
    for(int i = 0; i < num; i++){
        for(int j =0; j < 3; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(int i = 0; i < num; i++){
        int sum = 0;
        for(int j =0; j < 3; j++){
            sum += arr[i][j];
        }
        if(sum > 1){
            result++;
        }
        sum = 0;
    }
    
    printf("%d\n", result);

    return 0;
}
