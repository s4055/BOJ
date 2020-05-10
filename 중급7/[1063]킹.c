#include <stdio.h>
#include <string.h>

int main() {
	int n, kingX, kingY, stoneX, stoneY;
	char king[5], stone[5], input[5];

	scanf("%s %s %d", &king, &stone, &n);
	//printf("king : %s\nstone : %s\nn : %d\n", king, stone, n);
	kingX = 8 - (king[1] - '0'), kingY = king[0] - 'A';//king
	stoneX = 8 - (stone[1] - '0'), stoneY = stone[0] - 'A';//stone
	//printf("kingX, kingY : %d %d\nstoneX, stoneY : %d %d\n", kingX, kingY, stoneX, stoneY);

	while (n--) {
		scanf("%s", &input);

		int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
		if (input[0] == 'R' && strlen(input) == 1) x1 = kingX, y1 = kingY + 1, x2 = stoneX, y2 = stoneY + 1;
		else if (input[0] == 'L' && strlen(input) == 1) x1 = kingX, y1 = kingY - 1, x2 = stoneX, y2 = stoneY - 1;
		else if (input[0] == 'B' && strlen(input) == 1) x1 = kingX + 1, y1 = kingY, x2 = stoneX + 1, y2 = stoneY;
		else if (input[0] == 'T' && strlen(input) == 1) x1 = kingX - 1, y1 = kingY, x2 = stoneX - 1, y2 = stoneY;
		else if (input[0] == 'R' && input[1] == 'T' && strlen(input) == 2) x1 = kingX - 1, y1 = kingY + 1, x2 = stoneX - 1, y2 = stoneY + 1;
		else if (input[0] == 'L' && input[1] == 'T' && strlen(input) == 2) x1 = kingX - 1, y1 = kingY - 1, x2 = stoneX - 1, y2 = stoneY - 1;
		else if (input[0] == 'R' && input[1] == 'B' && strlen(input) == 2) x1 = kingX + 1, y1 = kingY + 1, x2 = stoneX + 1, y2 = stoneY + 1;
		else if (input[0] == 'L' && input[1] == 'B' && strlen(input) == 2) x1 = kingX + 1, y1 = kingY - 1, x2 = stoneX + 1, y2 = stoneY - 1;

		if (0 <= x1 && x1 < 8 && 0 <= y1 && y1 < 8) {
			if (x1 == stoneX && y1 == stoneY) {
				if (0 <= x2 && x2 < 8 && 0 <= y2 && y2 < 8) {
					kingX = x1, kingY = y1;
					stoneX = x2, stoneY = y2;
				}
			}
			else {
				kingX = x1, kingY = y1;
			}
		}
	}
	//printf("\n\nkingX, kingY : %d %d\nstoneX, stoneY : %d %d\n", kingX, kingY, stoneX, stoneY);
	printf("%c%d\n%c%d\n", kingY + 'A', 8 - kingX, stoneY + 'A', 8 - stoneX);
}