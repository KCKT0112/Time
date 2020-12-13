#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#if defined(_WIN16) || defined(_WIN32) || defined(_WIN64)
#include <windows.h>
#elif defined(__linux__)
#include <unistd.h>
#else
#include <unistd.h>
#endif

int main()
{
    while (1)
    {
        time_t tt;
        char tmpbuf[80];
        tt = time(NULL);
        strftime(tmpbuf, 80, "%Y-%m-%d %H:%M:%S\n", localtime(&tt));
        printf("%s", tmpbuf);

        #if defined(_WIN16) || defined(_WIN32) || defined(_WIN64)
            system("cls");
        #elif defined(__linux__)
            system("clear");
        #else
            system("clear");
        #endif
    }
    return 0;
}