#include <iostream>   //std::cout
#include <random>     //std::mt19937_64
#include <array>      //std::array
#include <algorithm>  //std::sort
#include <functional> //std::greater

#define _NUMBER_MAX 6
#define _LOTTTO_MAX 45

int GetNumber(const int nMin, const int nMax);
std::ostream& operator<<(std::ostream& ostr, const std::array<int, _NUMBER_MAX>& arr);

int main()
{
	//변수 선언
	std::array<int, _NUMBER_MAX> nNumber = { 0, };    //생성된 번호가 담길 배열
	std::array<bool, _LOTTTO_MAX> bIndex = { false, };    //빠른 중복 판단을 위한 배열 

														  //번호 생성
	for (unsigned int i = 0; i<nNumber.size(); )
	{
		const auto nTempNum = GetNumber(1, _LOTTTO_MAX);  //랜덤으로 번호 생성

		if (bIndex[nTempNum - 1] == false)           //생성된 번호와 인덱스를 비교
		{
			bIndex[nTempNum - 1] = true;          //생성된 번호와 인덱스 값 변경
			nNumber[i++] = nTempNum;            //생성된 번호 삽입
		}
	}

	//정렬, 주석을 지우면 내림차순 정렬한다.
	std::sort(nNumber.begin(), nNumber.end()/*, std::greater<int>( )*/);

	//출력
	std::cout << nNumber;

	return 0;
}

int GetNumber(const int nMin, const int nMax)
{
	std::random_device rn;      //시드 값
	std::mt19937_64 rnd(rn());    //random_device를 시드 값으로 하여 초기화

								  //랜덤의 범위를 지정
	std::uniform_int_distribution<int> nDist(nMin, nMax);

	return nDist(rnd);
}

std::ostream& operator<<(std::ostream& ostr, const std::array<int, _NUMBER_MAX>& arr)
{
	for (auto &i : arr)
	{
		ostr << " " << i;
	}

	return ostr;
}