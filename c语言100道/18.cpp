#include <stdio.h>
#include <time.h>

int main()
{
    time_t rawtime;
    struct tm * timeinfo;
    char timE [80];
    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    strftime ( timE,80,"%a %b %d %I:%M:%S  %Y  ",timeinfo);
    printf ("Local time is:");
    printf ("%s", timE);
    return 0;
}
