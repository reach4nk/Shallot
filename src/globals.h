#ifndef GLOBALS_H
#define GLOBALS_H

#ifndef EXTERN
#define EXTERN extern
#endif

#include "config.h"
#include "defines.h"

#include <regex.h>
#include <stdint.h>
#include <pthread.h>

// global variables (saves us the trouble of passing pointers around)
// TODO: stop being lazy and pass this stuff where it's needed
// TODO: also put settings in a struct
EXTERN uint64_t loop, elim;
EXTERN uint8_t found, monitor, maxexectime;
EXTERN pthread_t lucky_thread;
EXTERN regex_t *regex;
EXTERN char prefix[BASE32_ONIONLEN];
EXTERN size_t prefix_size;

#endif
