#include <stdio.h>
 
int count = 0;
 
void fun(int a) {
    for (int i = 2; i < a; i++) {
        if (a % i == 0) {
            count++;
            break;
        }
    }
}
 
int main() {
    int n;
    scanf("%d", &n);
 
    int temp2 = n - 4;
    for (int i = 4; i < temp2; i++) {
        fun(i);
        fun(temp2);
        if (count == 2) {
            printf("%d %d\n", i, temp2);
            break;
        } else {
            count = 0;
            temp2--;
        }
    }
 
    return 0;
}
