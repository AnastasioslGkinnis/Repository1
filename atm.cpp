#include<stdio.h>


int main()
{
    int input;
    printf(" Deposit money (press 1)\n Withdraw money (press 2)\n Balance inquiry (press 3)\n Log out (press 4)\n");
    scanf("%d",&input);

    while (input!=4){
    int pin=2345,t=3,log=1000;
    int pinl,ka;
    if (input<0){
    printf(" Deposit money (press 1)\n Withdraw money (press 2)\n Balance inquiry (press 3)\n Log out (press 4)\n");
    scanf("%d",&input);}
    printf("Enter pin\n");
    scanf("%d",&pinl);
    //authentikopoihsh me pin ,orio 3 prospathies
    while (pin!=pinl)
    {
        t=t-1;
        printf("Wrong pin,Remaining tries %d\n",t);
        scanf("%d",&pinl);
        if (t==0)
        {
            if(pin==pinl)
            {
                break ;
            }
            printf("Denied,No Remaining tries\n");
            return 0;
        }}
    if (input==1){
         printf("Deposit amount :\n");
         scanf("%f",&ka);
         log=log+ka;
    }
     if (input==2){
         printf("Withdraw amount :\n");
         scanf("%f",&ka);
         log=log-ka;
    }
    if (input==3){
         printf("Balance inquiry %d:\n",log);
    }
    if (input==4){
        break;}
    input=-1;}
    printf("Goodbye => \n");
    return 0;
}
