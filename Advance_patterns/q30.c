#include<stdio.h>
void main()
{
    for(int i=5;i>=1;i--)
    {
        for(int j=5;j>=i;j--)
        {
            printf("*");
        }
        for(int k=1;k<=i;k++)
        { 
            if(k==1||i==k)
            {
            printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

/*		OUTPUT

**       * 
***     * 
****   * 
***** * 
****** 

*/
