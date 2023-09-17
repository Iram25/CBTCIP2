#include<stdio.h>

int main()
{
    int i;
    while(i=1)
    {
        int op,c;
        float R,T,P,I;//R is rate of intreest,T is time of interest,P is principle ammount,I is Interest.
        float dep,with,bal=0;
        char name[20];
        printf("Select Operation :\n");
        printf("1.Create Account\n2.Deposite\n3.Withdraw Funds\n4.Check Balance\n5.Calculate Interest\n");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
            printf("Enter Account Holder's Name:\n");
            scanf("%s",&name);
            printf("Enter Initial Deposit \n");
            scanf("%f",&dep);
            bal=bal+ dep;
            printf("Balance in your account : %f\n",bal);
            break;
            case 2:
            printf("Enter Deposit ammount\n");
            scanf("%f",&dep);
            bal=bal+dep;
            printf("Balance in your account : %f\n",bal);
            break;
            case 3:
            printf("Enter Withdraw Ammount\n");
            scanf("%f",&with);
            bal=bal-with;
            printf("Balance in your account : %f\n",bal);
            break;
            case 4:
            printf("Balance in your account : %f\n",bal);
            break;
            case 5:
            printf("Enter rate of Interest:\n");
            scanf("%f",&R);
            printf("Enter principle Ammount:\n");
            scanf("%f",&P);
            printf("Enter Time for Interest:\n");
            scanf("%f",&T);
            I= (P*R*T)/100;
            printf("Interest= %f\n",I);
            break;
            default:
            printf("Error\n");
            break;
        }
        printf("1.Exite\n2.Continue\n");
        scanf("%d",&c);
        if(c==1)
        {
           break;
        }
    }
    
}
