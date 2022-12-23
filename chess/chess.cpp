
#include <iostream>
#include <cstring>

int main()
{
	char chessboard[8][8];
	int x;
	int y;


	for ( x = 0; x < 8; x++) {
		for ( y = 0; y < 8; y++) {
			if ((y + x) % 2) {
				chessboard[x][y] = 'W';
			}
			else {
				chessboard[x][y] = 'B';
			}
		}
	}

	puts("Chessboard example");
	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
			printf("%c\t", chessboard[x][y]);
		putchar('\n');
	}
	return(0);

}

