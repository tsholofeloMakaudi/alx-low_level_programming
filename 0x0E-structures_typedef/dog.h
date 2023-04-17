#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dogs's basic info
 * @name: 1st member
 * @age: second member
 * @owner: 3rd member
 *
 * escription: longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_h;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
