#include <stdio.h>

int main() {
    FILE* filePointer = fopen("in.txt", "r+");
    char dataToBeRead[50];

    if (filePointer == NULL) {
        printf("in.txt file failed to open.");
    } else {
        while (fgets(dataToBeRead, 50, filePointer) != NULL) {
            printf("%s", dataToBeRead);
        }
        fclose(filePointer);
    }

    return 0;
}

// Programul va cuprinde crearea fişierului cu candidaţii înscrişi. În final
// trebuie să se obţină fişierele cu candidaţii admişi pe secţii şi cei respinşi
// pe baza mediei generale obţinute calculată astfel: 0.2*media_bacalaureat +
// 0.8*test_matematica.