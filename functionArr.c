#include <stdio.h>

int checkLenArr(char *pointerArr);

int main()
{

    char name[40] = "Kalata";

    int nameLength = checkLenArr(name);

    printf("%s is %d symbols", name, nameLength);

    return 0;
}

int checkLenArr(char *pointerArr)
{
    int counter = 0;
    for (int i = 0; pointerArr[i] != '\0'; i++)
    {
        counter++;
    }

    return counter;
}
