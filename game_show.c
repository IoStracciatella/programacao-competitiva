#include <stdio.h>
#include <stdlib.h>

int main() {
    int c, va, mv = 100, i, j, *v;
    
    scanf("%d", &c);
    
    v = malloc(c * sizeof(int));
    
    for (i = 0; i < c; i++) {
        scanf("%d", &v[i]);
    }
    
    for (i = 0; i < c; i++) {
        va = 0;
        
        for (int j = 0; j < i; j++) {
            va += v[i];
        }
        
        if (va > mv) {
            mv = va;
        }
    }
    
    printf("%d", mv);

    free(v);

    return 0;
}