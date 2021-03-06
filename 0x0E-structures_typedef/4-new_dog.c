#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
int _strlen(char *s);

/**
  * new_dog - Create a new dog
  * @name: String, dog's name
  * @age: dog's age
  * @owner: dog's owner
  * Return: Pointer to type dog_t
  */

dog_t *new_dog(char *name, float age, char *owner)
{
int i;
dog_t *doggy = malloc(sizeof(dog_t));

	if (doggy == NULL || name == '\0' || owner == '\0')
		return (NULL);

	doggy->name = malloc(sizeof(char) * (_strlen(name) + 1));
	doggy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

		if (doggy->name == NULL || doggy->owner == NULL)
		{
			free(doggy->name);
			free(doggy->owner);
			free(doggy);
			return (NULL);
		}
	for (i = 0; name[i]; i++)
		doggy->name[i] = name[i];
		doggy->name[i] = '\0';
	for (i = 0; owner[i]; i++)
		doggy->owner[i] = owner[i];
		doggy->owner[i] = '\0';
	doggy->age = age;
return (doggy);
}


/**
   * _strlen - return length of a string.
    *@s : character
     * Return: integer
      */

int _strlen(char *s)
{
	int i = 0;
	int c = 0;

	while (s[i] != '\0')
	{
		c++;
		i++;
	}
return (c);
}
