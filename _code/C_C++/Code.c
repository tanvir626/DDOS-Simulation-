#include<time.h> 
#include <unistd.h> 
#include <stdio.h>
int rsu(int a);
int main()
{
    time_t begin = time(NULL);
    int car1,car2;
    car1=rsu(111);
    //car2=rsu(153);
    //printf("%d",car);
    time_t end = time(NULL);
    printf("The elapsed time is %ld seconds", (end - begin));
}
int rsu(int a)
{
    if (a>=111)
    {
    sleep(0.5);
    return a*1000/52;
    }
    else
    {
        sleep(5);
    return a*1000/52;
    }
}
