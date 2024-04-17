#ifndef MAIN_H
#define MAIN_H

#include "hash_tables.h"
hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);

#endif /* MAIN_H */

