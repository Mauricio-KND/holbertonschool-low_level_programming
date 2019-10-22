#ifndef DOG_H
#define DOG_H
/**
 *struct dog - Information about the dog.
 *@name: Name of the dog.
 *@age: Age of the dog.
 *@owner: Owner of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
