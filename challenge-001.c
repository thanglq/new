
#include<stdio.h>
#include<math.h> 
int main()
{ 

    unsigned int N;
    int X, c, i=0, j=0;
  inputN:
    printf("input N:\n");
    scanf("%u", &N); 
  if ((N>=1) && (N<=100))  
    {
     unsigned long sum[N];
     inputX:
       printf("input X:\n");
       scanf("%d", &X);
         if ((X>=0)&&(X<=100))
           { 
             sum[i]=0;
             int chain;
             inputchain:              
              //printf("input %d\n", j+1 );
              scanf("%d", &chain);
              j++;
              if (chain>0)
               {
                 sum[i]=sum[i]+(chain*chain);
               }
              if (j<X)
               {
                 goto inputchain;
               }
             i++; 
             if (i<N)
              {
                j=0;
                goto inputX;
              }
           }
          else
           {
           printf("reinput X>=0\n");
           goto inputX;
           }
    printf("Sum of squares:\n");
    i=0;
    outsum:
     printf("%lu\n", sum[i]);
      i++;
      if (i<N)
       {
        goto outsum;
       }
    }
  else
    {
     printf("reinput N>=1\n");
     goto inputN;
    }

  //getch();
}
