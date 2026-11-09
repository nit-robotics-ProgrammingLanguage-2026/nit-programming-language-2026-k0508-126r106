#include <stdio.h>

int main(void)
{
    int n;
    int a;
    scanf("%d", &n);
    if(n<0) printf("Error");   
    else{    
        if(n%3==0 && n!=0){ printf("Up"); a++;}
        if(n%5==0 && n!=0){ printf("Go"); a++;}
        if(n%7==0 && n!=0){ printf("!!"); a++;}
        if(a<=0) printf("No");
        }    /* TODO: 課題0508 */
    return 0;
}
