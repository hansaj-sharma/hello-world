#include<stdio.h>
#include<math.h>

//cash program for cs50

void main()
{
//variable declaration
    float  dollar   ;
    int cents , cents_copy;
    int count=0 , n25=0 , n10=0 , n5=0 , n1=0 ;

    printf("Enter change owned :");
    scanf("%f",&dollar );

    cents =round(dollar*100);
    cents_copy=cents ;

// 25 , 10 , 5 , 1

    if(cents>=25)
    {
        n25=cents/25;
        cents=cents%25;
      //  printf("\n%d",cents);

    }

    if(cents<25 && cents>=10)
    {
        n10=cents/10;
        cents=cents%10;
      //   printf("\n%d",cents);
    }

    if(cents<10 && cents>=5)
    {
        n5=cents/5;
        cents=cents%5;
      //   printf("\n%d",cents);
    }

    if(cents<5 && cents>=1)
    {
        n1=cents/1;
        cents=cents%1;
        // printf("\n%d",cents);
    }

count = n25 + n10 + n5 + n1;
                                                                                                                 //printf("\n%d\n%d\n%d\n%d",n25,n10,n5,n1);

printf("%d\n",count);




}// end of main
