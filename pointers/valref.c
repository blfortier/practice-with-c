#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int red;
    int green;
    int blue;
}
Pixel;

void copy(int* a, int* b)
{
    *b = *a;
}
// & on int returns address   * returns value

void changeArray(int a[])
{
    a[0] = 5;
}

int main(void)
{

    char* name = "Brittney";

    //printf("%s\n", name);

    for (int i = strlen(name) - 1; i >= 0; i--)
    {
        char temp = name[i];
        printf("%c", temp);
    }

    printf("\n");

    /*Pixel pixel;
    pixel.red = 255;
    printf("red: %d\n", pixel.red);*/

  /*  printf("Hello, World!\n");
    int x = 3, y = 7;
    int arr[5] = {1, 2, 3, 4 , 5};

    printf("y is: %d\n", y);
    copy(&x, &y);
    printf("y is now: %d\n", y);

    printf("arr[0] is : %d\n", arr[0]);
    changeArray(arr);
    printf("arr[0] is now: %i\n", arr[0]);*/
}