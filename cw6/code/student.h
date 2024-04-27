#ifndef _STUDENT_H_
#define _STUDENT_H_

#define STR_SIZE 24

typedef struct {
    char surname[STR_SIZE];
    char processors_count[STR_SIZE];
    char processors_type[STR_SIZE];
    char volume[STR_SIZE];
    char  gpu_type[STR_SIZE];
    char gpu_volume[STR_SIZE];
    char  type[STR_SIZE];
    char venture_count[STR_SIZE];
    char venture_capacity[STR_SIZE];
    char integrated_controller_count[STR_SIZE];
    char peripheral_device_count[STR_SIZE];
    char os[STR_SIZE];
} PC;

#endif