#include"dog.h"
#include<stdio.h>

/**
 * init_dog - fuction that  initialize a variable of type struct dog
 * @name : its name
 * @age : its age
 * @owner : its owner
 * @d : pointer
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog my_dog;

	my_dog.name = name;
	my_dog.age = age;
	my_dog.owner = owner;
}
