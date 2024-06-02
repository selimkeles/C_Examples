// main.c
#include "tablehandler.h"
#include <stdio.h>

int main(){
    for (int i = JANUARY; i < LAST; i++)
    {
        printf("name is: %s\t\t", lookupTable.name[i]);
        lookupTable.func[i](lookupTable.value[i]);
    }
    
    return 1;
}