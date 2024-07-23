#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A new type describing a dog
 * @name: the name of the dog (pointer to char string)
 * @age: the age of the dog (float)
 * @owner: the owner of the dog (pointer to char string)
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
