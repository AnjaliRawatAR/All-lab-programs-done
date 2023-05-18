#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int T, N, i, m, d, s;
    scanf("%d", &T);
    for (i = 0; i < T; i++) {
        scanf("%d", &N);
        s = 0;
        m = N;
        while (m != 0) {
            d = m % 10;
            s += d;
            m /= 10;
      }
        printf("%d\n",s);
   }

    return 0;
}
