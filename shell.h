#ifndef SHELL_H
#define SHELL_H

/***** MACROS *****/
#define PRINT(c) (write(STDERR_FILENO, c, _strlen(c)))
#define BUFSIZE 10240
#define DELIMITER " \t\r\n\a"

/*** STANDARD LIBRARIES ***/
#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>
#include <stdlib.h>






void signal_to_handle(int sig);
void prompt(void);


extern char **environ;

#endif /*SHELL_H*/
