#include "main.h"

/**
 * is_prime_number - function prints weather prime num or not
 *
 * @n: parameter that taken to be checked
 *
 * Return: 1 if prime , 0 if not
*/

int is_prime_number(int n)
{
return (check_prime(n, 2));
}
/**
 * check_prime - function prints prime
 *
 * @n: parameter that taken to be checked
 * @othrn: parameter that taken to be checked
 *
 * Return: 1 if prime , 0 if otherwise
 */
int check_prime(int n, int othrn)
{
if (othrn >= n && n > 1)
return (1);
else if (n % othrn == 0 || n <= 1)
return (0);
else
return (check_prime(n, othrn + 1));
}
