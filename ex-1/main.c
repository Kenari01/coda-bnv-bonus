#include <stdlib.h>
#include <stdio.h>

int main()
{
    int numb;
    

    printf("Choisissez un nombre entre [0 - 100] : ");
    scanf("%d", &numb);

    if ((0 <= numb ) && (numb <= 100))
    {
    int count = 0;
   while(count < numb)
   {
    int x = count * 5;
    printf("%d * 5 = %d\n",count,x);
    count = count + 1;
   }
    }
    else
    {
    printf("Vous avez choisie un nombre trop élever ou non compris\n");
    }
    
    
}
    
     