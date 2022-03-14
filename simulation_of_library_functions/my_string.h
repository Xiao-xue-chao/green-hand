#pragma once

#include<stdio.h>
#include<string.h>
#include<assert.h>

size_t my_strlen(const char* arr);

char* my_strcpy(char* destination, const char* source);

int my_strcmp(const char* str1, const char* str2);

char* my_strcat(char* destination, const char* source);

char* my_strstr(const char* str1, const char* str2);

void* my_memcpy(void* destination, const void* source, size_t num);

void* my_memmove(void* destination, const void* source, size_t num);