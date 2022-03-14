#include <stdio.h>

long long int fun(long long int a, long long int b){
    while((a%=b)!= 0 && (b%=0)!=0);
    return a+b;
}

int main(){
    int v1, v2, d1, d2, up, down, sum ;
    while(scanf("%d %d %d %d", &v1, &d1, &v2, d2)){
        if(v1== 0 &&  d1== 0 && v2== 0 && d2== 0){
            break;
        };
        if((d1/v1) < (d2/v2)){
            printf("You own me a beer!\n");
        }else {
            printf("No Beer for the captain.\n");
        }
        up = d1*v2 +d2*v1;
        down = 2*v1*v2;
        sum = fun(up, down);
        up/=sum, down/=sum;
        if(down == 1){
            printf("Avg. arrival time: %d\n", up);
        }else{
            printf("Avg. arrival time:%d/%d\n", up, down);
        }
    }
}
