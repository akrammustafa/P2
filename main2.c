#include <stdio.h>
#include <math.h>
//Akram MUSTAFA
//150116905
int x_num(int n,int k)
{
    int f=0;
    int e=0;
    int var=n;
    while (var!= 0) {
        var= var/ 10;
        e++;
    }

    for(int i=0;i<k;i++){ // function for adding n and k types by operation
        f=f*pow(10,e)+n;
    }
    return f;
}
int superDigit(int t){
    if(t<10){
        return t;
    }
    else{
        int sum=0;
        int m=0;
        while(t>0)
        {
            m=t%10;
            sum=sum+m;
            t=t/10;
        }
        if(sum<10)
            return sum;
        else
            superDigit(sum);
    }
}

int main()
{
    int n,k;
    printf("Please enter a number (n=): ");
    scanf("%d",&n);
    printf("\nPlease enter repetition factor (k=): ");
    scanf("%d",&k);
    int x=x_num(n,k);
    int super_Digit=superDigit(x);
    printf("Super digit of number %d is %d",x,super_Digit);
}