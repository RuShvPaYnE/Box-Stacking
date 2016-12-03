#include <iostream>

using namespace std;

class Boxes{
	int weight, strength;
	
	public:
		void set_values(int,int);
};
void Boxes::set_values(int w, int s){
	weight = w;
	strength = s-w;
	
};

int main(){
	std::vector<Boxes> boxes;
	int weight;
	int strength;
cout << "Enter a box weight, or enter 0 to exit ";
cin >> weight;
while(weight != 0){
	cout << "Enter a box strength: ";
	cin >> strength;
	Boxes box;
	box.set_values(weight, strength);
	boxes.push_back(box);
	cout << "Enter a box weight, or enter 0 to exit ";
	cin >> weight;
	
}
cout << boxes;

	
	
	 
	
	
	
}
