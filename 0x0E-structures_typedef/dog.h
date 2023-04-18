#ifndef _HEADER_
#define _HEADER_

/**
  * struct dog - Dog attributes function in the program
  *
  * @name: The name of the dog entry in the program
  *
  * @age: The age of the dog function in the program
  *
  * @owner: The owner of the dog according to the program.
  *
  * Description: The attributes of a dog according to the program
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog structure
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
