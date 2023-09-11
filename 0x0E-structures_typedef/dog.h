#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog struct
 *
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: a struct takes a dog data
 */

typedef struct dog
{
char *name;
float age;
char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
