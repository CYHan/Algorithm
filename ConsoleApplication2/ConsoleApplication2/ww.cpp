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
	//���� ����
	std::array<int, _NUMBER_MAX> nNumber = { 0, };    //������ ��ȣ�� ��� �迭
	std::array<bool, _LOTTTO_MAX> bIndex = { false, };    //���� �ߺ� �Ǵ��� ���� �迭 

														  //��ȣ ����
	for (unsigned int i = 0; i<nNumber.size(); )
	{
		const auto nTempNum = GetNumber(1, _LOTTTO_MAX);  //�������� ��ȣ ����

		if (bIndex[nTempNum - 1] == false)           //������ ��ȣ�� �ε����� ��
		{
			bIndex[nTempNum - 1] = true;          //������ ��ȣ�� �ε��� �� ����
			nNumber[i++] = nTempNum;            //������ ��ȣ ����
		}
	}

	//����, �ּ��� ����� �������� �����Ѵ�.
	std::sort(nNumber.begin(), nNumber.end()/*, std::greater<int>( )*/);

	//���
	std::cout << nNumber;

	return 0;
}

int GetNumber(const int nMin, const int nMax)
{
	std::random_device rn;      //�õ� ��
	std::mt19937_64 rnd(rn());    //random_device�� �õ� ������ �Ͽ� �ʱ�ȭ

								  //������ ������ ����
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