#include<stdio.h>
#include<limits.h>
void main ()
{
  printf("%hd to %hi\n",SHRT_MIN,SHRT_MAX);
  printf("%d to %i\n",INT_MIN,INT_MAX);
  printf("%ld to %li\n",LONG_MIN,LONG_MAX);
  printf("%lld to %lli\n",LLONG_MIN,LLONG_MAX);
}
