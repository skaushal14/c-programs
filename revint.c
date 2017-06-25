
#include<stdio.h>

#define false 0
#define true 1

revDigit(int num)
{
        static int revnum=0;

        if (num > 0)
        {
                revnum = revnum *10 + (num%10) ;
                revDigit(num/10);
        }
        else
                return 0;
        return revnum;
}


main()
{
        int num= 1234, num2=0;
        int revnum=0;
        int isNeg = false;

        printf("enter=\n");
        scanf("%d",&num);

        num2=num;

        if(num < 0)
                isNeg=true;

        while(0!=num)
        {
                revnum= revnum *10 + num %10;

                num /=10;
        }

        if(isNeg)
                revnum = revnum * (-1);
        printf("rev num =%d\n", revnum);

        if(num2 < 0)
        {
                isNeg=true;
                printf(" num =%d\n", num2);
                num2 = num2 * (-1);
        }

        printf(" num =%d\n", num2);

        revnum= revDigit(num2);
        if(isNeg)
                revnum = revnum * (-1);
        printf("recursion rev num =%d\n", revnum);
}
