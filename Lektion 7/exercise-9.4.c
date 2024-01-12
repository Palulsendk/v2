#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char *p, char *q, size_t size, char *temp){
    memcpy(temp, p, size);
    memcpy(p, q, size);
    memcpy(q, temp, size);
}

void bsort(void *base, size_t n, size_t size, int(*compar)(const void *, const void *)){
    int i, j;
    char *bbase = (char*)base,        /* base by byte */
    *tempspace = malloc(size),   /* temp space used by swap */
    *el_j_minus_1_ptr, *el_j_ptr;

    for (i = 0; i < n - 1; ++i){
        for (j = n - 1; j > i; --j){
            el_j_minus_1_ptr = bbase + (j-1) * size;  /* a pointer to element j   */
            el_j_ptr = bbase + j * size;              /* a pointer to element j-1 */
            if (compar((void*)el_j_minus_1_ptr, (void*)el_j_ptr) > 0)
                swap(el_j_minus_1_ptr, el_j_ptr, size, tempspace);
        }
    }

    free(tempspace);
}

void prn_array(char* s , const int a[] , int n){
    int   i;

    printf("\n    %s sorting:", s);
    for (i = 0; i < n; ++i)
        printf("%5d", a[i]);
    putchar('\n');
}

int int_compar(const void *ip1, const void *ip2){
    int result;
    int *ipi1 = (int *)ip1,
            *ipi2 = (int *) ip2;

    if (*ipi1 < *ipi2)
        result = -1;
    else if (*ipi1 > *ipi2)
        result = 1;
    else
        result = 0;

    return result;
}

int main(void){
    int   a[] = {7, 3, 66, 3, -5, 22, -77, 2};
    int   n;

    n = sizeof(a) / sizeof(int);
    prn_array("Before", a, n);
    bsort(a, n, sizeof(int), int_compar);
    prn_array(" After", a, n);
    putchar('\n');
    return 0;
}
