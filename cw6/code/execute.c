#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "student.h"
#include "io.h"

void find(PC *s) {
    char errors[300] = "отсутствует информация о ";
    if (strcmp(s->surname, "NULL") == 0) {
        strcat(errors, "фамилии владельца, ");
    }
    if (strcmp(s->processors_count, "NULL") == 0) {
        strcat(errors, "количестве процессоров, ");
    }
    if (strcmp(s->processors_count, "0") == 0) {
        strcat(errors, "количестве процессоров, ");
    }
    if (strcmp(s->processors_type, "NULL") == 0) {
        strcat(errors, "типе процессоров, ");
    }
    if (strcmp(s->volume, "NULL") == 0) {
        strcat(errors, "объеме памяти, ");
    }
    if (strcmp(s->volume, "0") == 0) {
        strcat(errors, "объеме памяти, ");
    }
    if (strcmp(s->gpu_type, "NULL") == 0) {
        strcat(errors, "типе видеоконтроллера, ");
    }
    if (strcmp(s->gpu_volume, "NULL") == 0) {
        strcat(errors, "объеме видеопамяти, ");
    }
    if (strcmp(s->gpu_volume, "0") == 0) {
        strcat(errors, "объеме видеопамяти, ");
    }
    if (strcmp(s->type, "NULL") == 0) {
        strcat(errors, "типе, ");
    }
    if (strcmp(s->venture_count, "NULL") == 0) {
        strcat(errors, "количестве винчестеров, ");
    }
    if (strcmp(s->venture_count, "0") == 0) {
        strcat(errors, "количестве винчестеров, ");
    }
    if (strcmp(s->venture_capacity, "NULL") == 0) {
        strcat(errors, "емкости винчестеров, ");
    }
    if (strcmp(s->venture_capacity, "0") == 0) {
        strcat(errors, "емкости винчестеров, ");
    }
    if (strcmp(s->integrated_controller_count, "NULL") == 0) {
        strcat(errors, "количестве интегрированных контроллеров, ");
    }
    if (strcmp(s->integrated_controller_count, "0") == 0) {
        strcat(errors, "количестве интегрированных контроллеров, ");
    }
    if (strcmp(s->peripheral_device_count, "NULL") == 0) {
        strcat(errors, "количестве внешних устройств, ");
    }
    if (strcmp(s->peripheral_device_count, "0") == 0) {
        strcat(errors, "количестве внешних устройств, ");
    }
    if (strcmp(s->os, "NULL") == 0) {
        strcat(errors, "операционной системе, ");
    }
    if (strlen(errors) != 47) {
        errors[strlen(errors) - 2] = '.';
        printf("%s %s %s\n", "У пользователя", s->surname, errors);
    
    }
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("Usage:\n\t./execute DB_FILE\n");
        exit(0);
    }

    FILE *in = fopen(argv[1], "r");
    if (!in) {
        printf("I/O Error: can't open file.\n");
        exit(1);
    }
    PC s;

    while (student_read_bin(&s, in)) {
        find(&s);
    }

    fclose(in);
    // Each Student maps to { his average mark, his group }
    
    return 0;
}
