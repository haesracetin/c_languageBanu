#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define name "esra"
#define surname "cetin"
#define age 20
#define password 147532698

int main() {
	char names[20];
    printf("Enter name: ");
    scanf("%s", names);
    
    char surnames[20];
    printf("Enter surname: ");
    scanf("%s",surnames);

    int ages;
    printf("Enter age: ");
    scanf("%d", &ages);

    int passwords;
    printf("Enter password: ");
    scanf("%d", &passwords);

    if (strcmp(names, name) == 0 && strcmp(surnames, surname) == 0 && ages == age && passwords  == password) {
        printf("Welcome to the system");
    } else {
        printf("Wrong name/surname/password/age");
    }
    return 0;
}

