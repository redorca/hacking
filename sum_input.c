#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LINELENGTH 80
static char line[LINELENGTH];
int main(int argc, char *argv[])
{
        char *puttr;
        char *tok;
        int total;
        int sum;
        int ndx;
        int *sequence;

        puttr = fgets(line, LINELENGTH, stdin);
        sscanf(puttr, "%d", &total);

        sequence = (int *) malloc(sizeof(int) * total);
        // printf("read in %d values\n", total);
        puttr = fgets(line, LINELENGTH, stdin);
        tok = strtok(puttr, " ");
        ndx = 0;
        while ((tok != NULL) && (ndx < total))
        {
                sequence[ndx++] = strtod(tok, NULL);
                tok = strtok(NULL, " ");
        }

        sum = 0;
        for (ndx = 0; ndx < total; ndx++)
        {
                sum += sequence[ndx];
                // printf("%d\n", sequence[ndx]);
        }
        printf("%d\n", sum);
        free(sequence);
}
