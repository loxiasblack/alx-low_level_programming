#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int array[3] = {34, 36, 37};
   int size = sizeof(array) / sizeof(array[0]);
   int *array_ptr = &array[1];

   int a = 3;
   int *b = &a;
   int **c = &b;
   int ***d = &c;
   /*printf("%d\n",*(array + 2));
   printf("%d\n", size);
   printf("%p\n",array);

   printf("first element %i\n", *(array_ptr++));
   printf("second element %d\n", *(array_ptr++));
   printf("thirs element %d\n", *array_ptr);*/

   /*printf("%d\n",array_ptr[1]);
   printf("%p\n", array_ptr);
   printf("%p\n",&array[1]);*/

    printf("%d\n", ***d);
    printf(" **d value %p is adress of c pointer %p and it's the value of b pointer %p\n",**d,*c,b);


    return (0);
}
