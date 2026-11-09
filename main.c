#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int a=n%3;
    int b=n%5;
    int c=n%7;
    if(n<0) printf("Error");
    else if(a!=0 && (a==0 || b==0 || c==0)){
        if(a==0 ) printf("Up");
        if(b==0 ) printf("Go");
        if(c==0 ) printf("!!");
    }
    else printf("No");
    /* TODO: 課題0508 */
    return 0;
}
