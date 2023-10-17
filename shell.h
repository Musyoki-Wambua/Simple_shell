#ifndef HEADER_H
#define HEADER_H

/***** MACROS *****/
#define PRINT(c) (write(STDERR_FILENO, c, _strlen(c)))
#define BUFSIZE 10240
#define DELIMITER " \t\r\n\a"

char *enter(char *string);
char *space(char *str);
void hashtag_handler(char *buff);

#endif /*HEADER_H*/
