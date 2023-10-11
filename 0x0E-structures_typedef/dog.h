#ifndef _DOG_H_
#define _DOG_H_

/**
 *struct dog - a struct that creates the info of a dog
 *
 * @name: the name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: a struct that creats certain elements
 */

/**
 * dog_t - new name for the struct dog
 * 
 */

typedef struct dog dog_t;

struct dog
{
	char *name;
	float age;
	char *owner;

};


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
