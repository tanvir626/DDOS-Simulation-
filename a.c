#include<time.h> 
#include <unistd.h> 
#include <stdio.h>
int rsu(int a);
int main()
{
    time_t begin = time(NULL);
    int car;
    car=rsu(111);
    Attacker=rsu(153);
    printf("%d",car);
    time_t end = time(NULL);
    printf("The elapsed time is %ld seconds", (end - begin));
}
int rsu(int a)
{
    sleep(0.5);
    return a*1000/52;
}