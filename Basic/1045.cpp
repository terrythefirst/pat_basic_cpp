#include <stdio.h>
  
int main()  
{  
    int N;  
    scanf("%d",&N);  
    int i = 0 , max = 0 ,  maxi = 0;  
    int Nums[100000] = {0};  
    int n;  
    for (i ; i < N; i++)  
    {  
        scanf("%d",&n);  
        if (n > max) // 如果比现在最大值大 一定可以进来  
        {  
            Nums[maxi] = n;  
            maxi++;  
            max = n;  
        }  
        else // 不能成为主元 但却可以淘汰其他主元  
        {  
            int j = 0;  
            for ( j = maxi-1; j >=0 ; j--)  
            {  
                if (Nums[j] > n)  
                {  
                    Nums[j] = 0;  
                    maxi--;  
                }  
                else  
                {  
                    maxi = j+1;  
                    break;  
                }  
            }  
  
        }  
    }  
    printf("%d\n",maxi);
    if (maxi != 0)  
    {  
        for (i = 0 ; i < maxi-1 ; i++)  
        	printf("%d ",Nums[i]);
        printf("%d",Nums[i]); 
    }  
    else  
        printf("\n"); 
    return 0; 
} 
