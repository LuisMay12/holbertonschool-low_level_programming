#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a new type struct dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: A structure to store information
 * about a dog.
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
