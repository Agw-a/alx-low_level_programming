#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat-concatenates two strings.
 * @s1:first string
 * @s2:second string
 * @n:amount of bytes
 *
 * Return:pointer to a newly allocated space
 * if function fails null is returned.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strno;
	unsigned int js1, js2, jstrno, i;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	for (js1 = 0; s1[js1] != '\0'; js1++)
	;
	for (js2 = 0; s2[js2] != '\0'; js2++)
	;
	if (n > js2)
	n = js2;
	jstrno = js1 + n;
	strno = malloc (jstrno + 1);
	if (strno == NULL)
	return (NULL);
	for (i = 0; i < jstrno; i++)
	if (i < js1)
	strno[i] = s1[i];
	else
	strno[i] = s2[i - js1];
	strno[i] = '\0';
	return (strno);
}
