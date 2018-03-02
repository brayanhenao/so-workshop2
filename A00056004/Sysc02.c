#include <stdlib.h>
#include <stdio.h>
#include <memory.h>
#include <time.h>
#include <ctype.h>
#include <unistd.h>
#include <linux/reboot.h>
 
int restart(int delay)
{
    sleep(delay);
    return reboot(LINUX_REBOOT_CMD_RESTART);
}
 
int main(void)
{
    printf("REINICIANDO EL COMPUTADOR POR MEDIO DE UN SYSTEM CALL");
    fflush(stdout);
    restart(0);
    return 0;
}

