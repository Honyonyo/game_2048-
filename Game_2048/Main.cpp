#include "MainGame.h"
//#include <stdio.h>

/*
* 콘솔창 사이즈 60*60
* 폰트크기 14 (화면해상도에 따라 원하시는 만큼조절해서 봐주세요)
* 
* */
/*
Help창 설정중*/
int main() {
	system("mode con cols=60 lines=60");	//콘솔 사이즈 60*60변경
	SetConsoleOutputCP(CP_UTF8);
	CursorView();

	MainGame mg;
		
	return 0;
}


