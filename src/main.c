#include <stdio.h>
#include <string.h>
#include <time.h>

#ifdef _WIN32
    #include <windows.h>
    #define IS_POSIX 0
#else
    #include <unistd.h>
    #define IS_POSIX 1
#endif


#define BOLD_BLUE "\033[1;34m"
#define BOLD_WHITE "\033[1;37m"
#define RESET "\033[0m"

void help();
void it();
void ld();
void clist();

int main(int argc, char *argv[]){
    if(argc == 1){
        printf("Please pass a parameter. To see commands, type \"-cl\"");
    }

    if(argc == 2){
        if(strcmp(argv[1], "-h") == 0){
            help();
        }
        if(strcmp(argv[1], "-it") == 0){
            it();
        }
        if(strcmp(argv[1], "-cl") == 0){
            clist();
        }
        if(strcmp(argv[1], "-ld") == 0){
            ld();
        }
    }
    
    return 0;
}

void help(){
    printf("CliStuff is an excuse to make a cli, it serves no specific purpous, but does smaller things.");
}

void it(){
    printf("%s", BOLD_BLUE);
    printf("Pinging \"google.com\" ");
    printf("%s", RESET);
    
    while(1){
        system("ping google.com");
    }
}

void ld(){
    if(IS_POSIX == 1){
        system("ls -la");
    }
    if(IS_POSIX == 0){
        system("dir");
    }
}

void clist(){
    printf("%s", BOLD_WHITE);

    printf("List of commands:  \n");
    printf("Help - \"-h\" - A command that describes this application. \n");
    printf("Internet Test - \"-it\" - A command that tests your internet by pinging google.com . \n");
    printf("List Directory - \"-ld\" - A command that prints the contents of the directory currently in. \n");
    printf("Command List - \"-cl\" - A command that lists the commands available \n");
    
    printf("%s", RESET);
}