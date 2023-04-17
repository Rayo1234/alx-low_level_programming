#ifndef DOG_H
#define DOG_H

/**
 * struct dog - it is defines a new type
 * @name: first member
 * @age: second member
 * @owner: third member
 * Return: 0
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

