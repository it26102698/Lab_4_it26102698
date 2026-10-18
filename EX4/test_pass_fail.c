#include<stdio.h>
int main (void)
{
        int s1,s2,s3,avg;//s1=section1, s2=section2, s3=section3, avg=average
        printf("Enter the marks out of 100 for section1\n");
        scanf("%d",&s1);
        printf("Enter the marks out of 100 for section2\n");
        scanf("%d",&s2);
        printf("Enter the marks out of 100 for section3\n");
        scanf("%d",&s3);
        avg=(s1+s2+s3)/3;//calculating average
        if((s1>=70)&&(s2>=70)&&(s3>=70)&&(avg>=75)) //Check if indivdual subject marks are above 70 AND average is also above 75
        {
                printf("PASS\n");
        }
        else
        {
                printf("FAIL\n");
        }
        return 0;
}
