#include<iostream>
using namespace std;

#define MAX_LINE 10
#define MAX_NODE 5

class Line {
public:
	int x, y;
	int key;
	bool check;
};
class kruskal {
	bool checking[MAX_NODE];
public:
	Line line[MAX_LINE];
	kruskal() {
		for (int i = 0; i < MAX_LINE; i++) {
			line[i].check = true;
		}
		for (int i = 0; i < MAX_NODE; i++) {
			checking[i] = false;
		}
	}
	void addLine(int x, int y, int key, int i) {
		line[i].x = x;
		line[i].y = y;
		line[i].key = key;

	}
	int findsmall() {  //제일 작은값 찾고 간선그리기
		int cnt;
		while (1) {
			int small = 99999;
			for (int i = 0; i < MAX_LINE; i++) {
				if (line[i].check) {
					if (small > line[i].key) {//최소값 
						small = line[i].key;
						cnt = i;
					}
				}
			}
			if (!(checking[line[cnt].x - 1] && checking[line[cnt].y - 1])) { //사이클검사
				checking[line[cnt].x - 1] = true;
				checking[line[cnt].y - 1] = true;
				break;
			}
			line[cnt].check = false;

		}
		cout << "최소 값 ; " << line[cnt].key << "x:" << line[cnt].x << "y:" << line[cnt].y << endl;
		return line[cnt].key;
	}


};


int main() {
	kruskal* kru = new kruskal();

	kru->addLine(1, 2, 5, 0);
	kru->addLine(1, 3, 10, 1);
	kru->addLine(1, 4, 8, 2);
	kru->addLine(1, 5, 7, 3);
	kru->addLine(2, 3, 5, 4);
	kru->addLine(2, 4, 3, 5);
	kru->addLine(2, 5, 6, 6);
	kru->addLine(3, 4, 1, 7);
	kru->addLine(3, 5, 3, 8);
	kru->addLine(4, 5, 1, 9);

	int getall = 0;
	for (int i = 0; i < MAX_NODE - 1; i++) {
		getall += kru->findsmall();

	}
	cout << "총가중치 : " << getall;


}