#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog basic info
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
