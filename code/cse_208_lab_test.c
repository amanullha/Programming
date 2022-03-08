
#include <stdio.h>
#include <string.h>

int main()
{
    char string[] = "L I B E R A L";
    int i, j, min, max, length = strlen(string);
    char minChar = string[0], maxChar = string[0];
    int freq[length];


    for(i = 0; i < length; i++) {
        freq[i] = 1;
        for(j = i+1; j < length; j++) {
            if(string[i] == string[j] && string[i] != ' ' && string[i] != '0') {
                freq[i]++;

                string[j] = '0';
            }
        }
    }


    min = max = freq[0];
    for(i = 0; i < length; i++) {

        if(min > freq[i] && freq[i] != '0') {
            min = freq[i];
            minChar = string[i];
        }

        if(max < freq[i]) {
            max = freq[i];
            maxChar = string[i];
        }
    }

    printf("Minimum occurring character: %c\n", minChar);
    printf("Maximum occurring character: %c", maxChar);

    return 0;
}
