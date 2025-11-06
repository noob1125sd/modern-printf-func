#include <stdio.h>
#include <string.h>
#include <unistd.h>

void printsf(char text[],int  time){

    char buffer[50] = "";
    strcpy(buffer, text);
    
    for (int i=0; i < strlen(text); i++)
    {
        putchar(buffer[i]);
        fflush(stdout);
        usleep(time * 1000 / strlen(text));
    }
    printf("\n");
}

int main()
{
    printf("\033[93m");
    printsf("i wanna da-", 700);
    printsf("i wanna dance in the lights", 2800);
    printsf("i wanna ro-", 1000);
    printsf("i wanna rock your body", 3300);
    printsf("i wanna go", 700);
    printsf("i wanna go for a ride", 2500);
    usleep(500 * 1000);
    printsf("Hop in the music and", 2100);
    printsf("Rock your body", 1500);
    printsf("Rock that body", 1000);
    printsf("come on", 500);
    printsf("come on", 500);
    printsf("Rock that body", 900);

    printf("\033[33m");
    printsf("(rock your body)", 1200);
    printf("\033[93m");

    printsf("Rock that body", 1000);
    printsf("come on", 500);
    printsf("come on", 500);
    printsf("Rock", 300);
    usleep(300 * 1000);
    printsf("that", 300);
    usleep(300 * 1000);
    printsf("body", 300);
    printsf("Rock that body", 1000);
    printsf("come on", 500);
    printsf("come on", 500);
    printsf("Rock that body", 900);

    printf("\033[33m");
    printsf("(rock your body)", 1200);
    printf("\033[93m");

    printsf("Rock that body", 1000);
    printsf("come on", 500);
    printsf("come on", 500);
    printsf("Rock", 300);
    usleep(300 * 1000);
    printsf("that", 300);
    usleep(300 * 1000);
    printsf("body", 300);
    printf("\033[0m");

    return 0;

}