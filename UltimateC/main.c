// ULTIMATE  :  UFC 선수명단을 꾸리고 가상전투를 펼치자
// 
// 1. 단계별 세분화
// 2. 라이브러리 함수를 꾸밀것(main.c 에는 호출만하겠지)
// 3. 함수, 변수명은 직관적이고 이해하기 좋은 일정한 규칙을 가진걸로 하자

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ConfirmFighters(void);
double Fighting(int x,int y);
int main(void) {

	// 선수 명단 확인(추가 / 수정 / 삭제)
	ConfirmFighters();

	// 게임 시작
	// 선수 2명 뽑기

	// fighting()
	int x, y;
	Fighting(x, y);
	// 게임 결과로 순위 바뀔때
	AfterFight

	// 선수 명단 .txt 파일로 저장

	return 0;
}