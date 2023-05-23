#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's info
 * @name:the 1th  member
 * @age: the 2nd  member
 * @owner: the 3rd  member
 *
 * Description: description of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t; /**
 * dog_t - typedef for struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif

