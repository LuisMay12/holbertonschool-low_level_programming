#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees memory allocated for a
 * dog structure.
 * @d: Pointer to the dog structure to free.
 *
 * Description: Frees allocated memory for name,
 * owner, and the dog structure.
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;

free(d->name);
free(d->owner);
free(d);
}
