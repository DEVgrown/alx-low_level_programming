#include "main.h"
/**
 * wildcmp
 * @s1 : string
 * Return: int value
 */
int wildcmp(char *s1, char *s2) {
	if (*s1 == '\0' && *s2 == '\0') {
	return 1;
	}
/**
 * char
 * @s2 : try matching
 * Return : int value
 */
	if (*s2 == '*') {
	return (wildcmp(s1, s2+1) || (*s1 != '\0' && wildcmp(s1+1, s2)));
	}
/**
 *
 * @s1 == @s2
 * Return : int value
 */
	if (*s1 == *s2) {
	return wildcmp(s1+1, s2+1);
	}
	return 0;
}
