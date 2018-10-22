#include <math.h>
#include <stdlib.h>
int sieve(int n) {
  n-=2;
  unsigned int s=n*log(n*log(n))/24,c=1,d,e,i;
  char*b=calloc(s,1);
  while(--n&&(i=c*c*3+(1&c?4*c+1:2*c))>>3<s){
    for(e=(1&c?(d=6*c+4):2*(d=6*c+2))/3;i>>3<s;b[i>>3]|=1<<(i&7),b[i+e>>3]|=1<<(i+e&7), i+=d);
    for(c++;b[c>>3]&1<<(c&7);c++);
  }
  for(;n--;)for(c++;b[c>>3]&1<<(c&7);c++);
  return c*3+(c%2?2:1);
}
