#include <stdio.h>

int CountDigit( int number, int digit );

int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

    return 0;
}

int CountDigit( int number, int digit ){
    int cnt=0;
    int bit;
    if (number ==0 &&digit==0){
        cnt=1;
    }else{
        while(number!=0){
            bit = number%10;
            if(bit <0){
                bit=-bit;
            }
            if(bit == digit){
                cnt++;
            }
            number=number/10;

        }
    }

    return cnt;
}