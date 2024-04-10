#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


void fill(int *line, int n, int range)
{
        int ndx;

        for (ndx = 0; ndx < range; ndx++)
        {
                line[ndx] = n;
                line[ndx + range - 1 ] = n;
        }

        return;
}

void fout(int *line, int range)
{
        int ndx;

        for (ndx = 0; ndx < range; ndx++)
        {
                printf("%d", line[ndx]);
        }
        printf("\n");
}

int main(int argc, char *argv)
{
        int in;
        int ndx;
        int *row;
        int range;
        int extent;

        scanf("%d", &in);
        row = (int *) malloc(2 * in * sizeof(int));

        printf("generating sequence:\n");
        range = in;
        extent = range;
        for (ndx = 0; ndx < in; ndx++)
        {
                fill(&row[ndx], in - ndx, range);
                fout(row, (2 * extent) - 1);
                range--;
        }
        range++;
        for (ndx = 1; ndx < in; ndx++)
        {
                fill(&row[in - ndx], ndx + 1, range);
                fout(row, (2 * extent) - 1);
                range++;
        }

}
