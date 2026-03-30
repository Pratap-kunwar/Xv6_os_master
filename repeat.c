#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[])
{
    if(argc < 3){
        printf(1, "Usage: repeat number word\n");
        exit();
    }

    int n = atoi(argv[1]);  // convert first argument to integer

    for(int i = 0; i < n; i++){
        printf(1, "%s\n", argv[2]);
    }

    exit();
}