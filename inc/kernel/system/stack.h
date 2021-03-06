#pragma once
#include <stddef.h>
#include <stdint.h>

/************************
 *** Team Kitty, 2020 ***
 ***     Chroma       ***
 ***********************/

typedef struct stackframe {
  struct stackframe* rbp;
  size_t rip;
} stackframe_t;

void StackTrace(size_t cycles);