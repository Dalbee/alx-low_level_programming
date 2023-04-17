#ifndef DOG_H
#define DOG_H

/**
* struct dog - This structure defines the following elements of a dog
* @name: The First element
* @age: The Second element
* @owner: The Third element
*
* Description: Longer description
*/

struct dog
	{
		char *name;
		float age;
		char *owner;
	};


/**
* dog_w - typedef for struct dog
*/
typedef struct dog dog_w;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_w *new_dog(char *name, float age, char *owner);
void free_dog(dog_w *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);


#endif
