#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    if(n<0) printf("Error");
    else if(n>0){
        if((n%3)==0) printf("Up");
        if((n%5)==0) printf("Go");
        if((n%7)==0) printf("!!");
    }
    else printf("No");
    /* TODO: 課題0508 */
    return 0;
}
