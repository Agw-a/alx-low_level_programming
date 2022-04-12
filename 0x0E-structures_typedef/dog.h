#ifndef _DOG_H_
#define _DOG_H_

/**
 * my_dog-typedef for struct dog
 */
typedef struct dog my_dog
/**
 * struct dog-struct which stores info on a dog.
 * @name:name of the dog
 * @age:age of the dog
 * @owner:owner of the dog.
 *
 * Description:struct "dog" that stores its name, age 
 * and the owner's name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
my_dog *new_dog(char *name, float age, char owner);
void free_dog(my_dog *d);

#endif
