#include <iostream>
#include <queue>
#include <vector>

using namespace std;

class Car{
public:
	int point;
	int x;
	int y;

	Car(int point,int x,int y){
		this->point = point;
		this->x = x;
		this->y = y;
	}

	int distance(){
		return x*x + y*y;
	}

	void display(){
		cout<<"Point Number "<<point<<" and coordinates "<<x<<" ,"<<y<<endl;
	}
};

class CarCompare{
public:
	bool operator()(Car a,Car b){
		// cout<<"operator overloading"<<endl;
		return a.distance()>b.distance();
	}
};

int main(){

	// priority_queue<int> pq;

	// priority_queue<int,vector<int>,greater<int> > pq;

	// pq.push(15);
	// pq.push(5);
	// pq.push(2);
	// pq.push(156);
	// pq.push(4);
	// pq.push(6);
	// pq.push(160);

	// while(!pq.empty()){
	// 	cout<<pq.top()<<endl;
	// 	pq.pop();
	// }

	priority_queue<Car,vector<Car>,CarCompare> pq;

	int x[] = {1,2,1,5,6,4};
	int y[] = {1,1,0,2,1,2};

	for(int i=0;i<6;i++){
		Car a(i,x[i],y[i]);
		pq.push(a);
	}

	while(!pq.empty()){
		Car a = pq.top();
		a.display();
		pq.pop();
	}

	// CarCompare cc;
	// cc(a,b);

	return 0;
}