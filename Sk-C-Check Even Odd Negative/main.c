//
//  main.c
//  Sk-C-Check Even Odd Negative
//
//  Created by Student P_04 on 24/10/16.
//  Copyright © 2016 Siddharth Koshiyar. All rights reserved.
//

#include <stdio.h>
void checkodd(int a[10]);
void checkeven(int a[10]);
void checknegative(int a[10]);

int main()
{
    int a[10],i;
    printf("Enter the value of Array:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    checkodd(a);
    checkeven(a);
    checknegative(a);
    return 0;
    
    
}
void checkodd(int a[10])
{
    int i;
    printf("ODD\n");
    for(i=0;i<10;i++)
    {
        if(a[i]%2!=0 && a[i]>=0)
        {
            printf("%d \n",a[i]);
        }
    }
}
void checkeven(int a[10])
{
    int i;
    printf("EVEN\n");

    for(i=0;i<10;i++)
    {
        if(a[i]%2==0 && a[i]>=0)
        {
            printf("%d \n",a[i]);
        }
    }
}
void checknegative(int a[10])
{
    int i;
    printf("NEGATIVE\n");

    for(i=0;i<10;i++)
    {
        if(a[i]<0)
        {
            printf("%d \n",a[i]);
        }
    }
}



