#include <stdlib.h>
#include "dog.h"

/**
 * *new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: NULL if function fails,
 * otherwise a pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;
	int i, j;

	if (name ==  NULL || owner == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;
	/* Memory allocation for new dog struct */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	/*Memory allocation for new_name*/
	new_name = malloc(i + 1);
	if (new_name == NULL)
	{
	free(new_dog);
	return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		new_name[i] = name[i];
	new_name[i] = '\0';
	/* Memory allocation for new_owner */
	new_owner = malloc(j + 1);
	if (new_owner == NULL)
	{
	free(new_name);
	free(new_dog);
	return (NULL);
	}
	for (j = 0; owner[j] != '\0'; j++)
		new_owner[j] = owner[j];
	new_owner[j] = '\0';
	/* Setting new dog's attributes */
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;
	return (new_dog);
}
