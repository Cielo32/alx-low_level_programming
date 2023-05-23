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

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcopy(char *dest, char *src);
int _strlen(const char *str);

#endif
