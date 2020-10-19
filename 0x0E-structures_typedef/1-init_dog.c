#include "dog.h"

/**
 *init_dog - initializes a variable of type struct dog
 *
 *@d: pointer
 *
 *@name: dog's name
 *
 *@age: dog's age
 *
 *@owner: nae of owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

if (!d)
return;

d->name = name;
d->age = age;
d->owner = owner;

}
