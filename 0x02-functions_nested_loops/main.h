/**
 * printalphabet - pronts the letters of tge english alpha
 *
 * Return: void
 *
 */
const char* printalphabet(void)
{
	char *apb = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;

	while (i < 26)
	{
		putchar(apb[i]);
		i++;
	}
}
