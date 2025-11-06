//system to display students data 
/*
name:Miyoge Sharon Nyatichi
reg no:PA106/G/28785/25
description:system to display students data
*/

#include <stdio.h>

struct Student {
    char name[50];
    int regNo;
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;

    fp = fopen("results.dat", "rb");
    if (fp == NULL) {
printf("Error opening file!\n");
        return 1;
}

printf("Student Name\tRegistration No\tMarks\n");


    while (fread(&s, sizeof(struct Student), 1, fp)) {
printf("%s\t\t%d\t\t%.2f\n", s.name, s.regNo, s.marks);
    }

    fclose(fp);
    return 0;
}
