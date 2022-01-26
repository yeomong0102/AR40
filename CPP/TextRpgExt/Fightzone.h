#pragma once

// Fightzone의 경우 멤버 변수가 있는게 아니라 표현만 하려고 만든 것이기 때문에 
// 전방선언을 해야한다
class Player;
class Monster;

// 위의 선언이 없다면 아래에 코드에서 Player와 Monster 포인터들은 전부 쓸수 없게 된다
// 당연히 위에 헤더를 연결시키면 되지만 순환참조를 조심해야하고 꼬일수도 있어서
// 선언을 여기서 해 헤더를 늘리지 않으려고 한다
class Fightzone
{
	
// public:
// 전방선언은 기본적으로 어떤 자료형의 참조형을 사용 할때만 적용된다
// 참조형일 경우 컴파일러가 어차피 8(4)바이트로 판단해서 크기를 잡기 때문에
// Monster의 세부적인 사항을 알 필요가 없는 것이다
// 	   Monster.NewMonster;  XX


// public:
// void Fight(Player& _Player, Monster& _Monster);
// {
// 
// }
// public:
//	 Fightzone();
};
