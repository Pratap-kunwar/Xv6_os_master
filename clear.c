#include "types.h"
#include "stat.h"
#include "user.h"

#define LINES 200  // Increase number of lines to ensure shell is cleared

int main(void)
{
    // Try ANSI clear first (works in terminal emulators)
    printf(1, "\033[2J\033[H");

    // Fallback for Xv6 shell: print enough blank lines
    for(int i = 0; i < LINES; i++){
        printf(1, "\n");
    }

    exit();
}