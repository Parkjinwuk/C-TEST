#include <iostream>
#include "time.h"

// 편의를 위해 강의 자료에 나와있는 미로로 설정 해 주었다.
int maze[7][7] = { 1, 1, 1, 1, 1, 1, 1,
					1, 1, 0, 0, 0, 0, 1,
					1, 0, 0, 1, 1, 1, 1,
					1, 1, 0, 1, 0, 1, 1,
					1, 1, 0, 1, 0, 1, 1,
					1, 0, 0, 0, 0, 0, 1,
					1, 1, 1, 1, 1, 1, 1 };
int cur_row;
int cur_col;
int dir;
void Forward(int dir, int i, int j);
void display();
void delay(clock_t n);
int main()
{
	int i, j;
	int input;
	printf("미로 설정 (벽=1, 통로=0)\n"); // 미로 벽, 통로 정보 입력 받기.
	/*
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			scanf_s("%d", &input);
			maze[i + 1][j + 1] = input;
		}
	}
	*/

	while (1)
	{
		printf("시작 위치 설정(row, column) : ");
		scanf_s("%d %d", &cur_row, &cur_col);
		i = cur_row;
		j = cur_col;
		if (maze[cur_row][cur_col] == 0) // 오류 검사
			break;
		else
			printf("해당 위치는 벽으로 설정되었습니다. 다시 설정해 주세요.\n");
	}
	printf("시작 방향 설정(상 좌 우 하 순서로 2, 3, 4, 5) ");
	scanf_s("%d", &dir);
	maze[i][j] = dir;
	display();

	while (1)  // 미로 탈출 시작
	{
		delay(1000);
		i = cur_row;  // 현재 위치 업데이트
		j = cur_col;
		switch (dir)  // 진행 방향에 따라 판단해야 하는 벽의 순서를 바꿔 준다.
		{
		case 2:       // 진행 방향이 위쪽일 때, 좌상우하
			if (maze[i][j - 1] == 0) // 좌
				dir = 3;
			else
				if (maze[i - 1][j] == 0) // 상
					dir = 2;
				else
					if (maze[i][j + 1] == 0) // 우
						dir = 4;
					else
						dir = 5;
			break;
		case 3:        // 진행 방향이 왼쪽일 때, 하좌상우
			if (maze[i + 1][j] == 0) // 하
				dir = 5;
			else
				if (maze[i][j - 1] == 0) // 좌
					dir = 3;
				else
					if (maze[i - 1][j] == 0) // 상
						dir = 2;
					else
						dir = 4;
			break;

		case 4:        // 진행 방향이 오른쪽일 때, 상우하좌
			if (maze[i - 1][j] == 0) // 상
				dir = 2;
			else
				if (maze[i][j + 1] == 0) // 우
					dir = 4;
				else
					if (maze[i + 1][j] == 0) // 하
						dir = 5;
					else
						dir = 3;
			break;
		case 5:        // 진행 방향이 아래쪽일 때, 우하좌상
			if (maze[i][j + 1] == 0) // 우
				dir = 4;
			else
				if (maze[i + 1][j] == 0) // 하
					dir = 5;
				else
					if (maze[i][j - 1] == 0) // 좌
						dir = 3;
					else
						dir = 2;
			break;
		}
		Forward(dir, i, j); // 방향 설정 후 한 칸 전진
		printf("\n\n");
		display();

		if (maze[1][5] != 0) // 미로 출구 도달 시 종료
			break;
	}
	return 0;
}
void Forward(int dir, int i, int j)
{
	maze[i][j] = 0; // 현재 위치를 통로에 해당하도록 0으로 바꿔준다.
	// 각 방향에 해당하는 전진 방향에 맞게 x, y 좌표를 가감해준다.
	switch (dir)
	{
	case 2:
		i--;
		maze[i][j] = 2; // 도착한 좌표에서 어떤 방향을 향하고 있는지 알려주기 위함
		break;

	case 3:
		j--;
		maze[i][j] = 3;
		break;

	case 4:
		j++;
		maze[i][j] = 4;
		break;

	case 5:
		i++;
		maze[i][j] = 5;
		break;
	}
	cur_row = i;
	cur_col = j;


}

// 미로 출력
void display()
{
	int n, m;
	for (n = 1; n < 6; n++)
	{
		for (m = 1; m < 6; m++)
		{
			switch (maze[n][m])
			{
			case 0:
				printf("□ ");
				break;
			case 1:
				printf("■ ");
				break;
			case 2:  // 진행 방향 위쪽을 향하고 있을 경우
				printf("△ ");
				break;
			case 3:  // 진행 방향 왼쪽을 향하고 있을 경우 .. 
				printf("◁ ");
				break;
			case 4:
				printf("▷ ");
				break;
			case 5:
				printf("▽ ");
				break;
			}
		}
		printf("\n");
	}
}
void delay(clock_t n) // 딜레이 함수, 없어도 상관없다.
{
	clock_t start = clock();
	while (clock() - start < n);
}