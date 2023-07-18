/*void pputchar()
{
	putchar('_');
	putchar('p');
	putchar('u');
	putchar('t');
	putchar('c');
	putchar('h');
	putchar('a');
	putchar('r');
	putchar('\n');
}*/
void print_alphabet(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
	putchar(lowercase);
	lowercase++;
	}
	putchar('\n');
}
