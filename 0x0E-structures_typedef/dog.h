#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct of dog
 * @name: name of dog
 * @age: numer of year
 * @owner: name of the owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
