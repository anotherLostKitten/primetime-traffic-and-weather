#include <math.h>
#include <stdlib.h>
int sieve(int n){unsigned int s=n*log(n*log(n)
-1)/24,c=1,d,e,i;char* b=calloc(s,1);for(n-=2;
--n&&(i=c*c*3+(1&c?4*c+1:2*c))>>3<s;){for(e=(1
& c?(d=6*c+4):2*(d=6*c+2))/3;i>>3<s;b[i>>3]|=1
<<(i&7),i+=d)if(i+e>>3<s)b[i+e>>3]|=1<<(i+e&7)
;for(;b[++c>>3]&1<<(c&7););}for(;n--;)for(;b [
++c>>3]&1<<(c&7););free(b);return c*3+(c&1?2:1);}
