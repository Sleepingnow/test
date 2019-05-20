#include<iostream>
using namespace std;
class Vehicle {
	protected:
		int maxSpeed;
		int weight;
	public:
		Vehicle(int m,int w)
		{
			maxSpeed = m;
			weight = w;
		}
		~Vehicle()
		{
			cout << "~Vehicle" << endl;
		}
		void virtual run()
		{
			cout << "Vehicle Run" << endl;
		}
		void virtual stop()
		{
			cout << "Vehicle Stop" << endl;
		}
		void display()
		{
			cout << "maxSpeed: " << maxSpeed << endl;
			cout << "weight: " << weight << endl;
		}
};

class Bicycle : public Vehicle {
	protected :
		int height;
	public:
		Bicycle(int m,int w,int h):Vehicle(m,w)
		{
			height = h;
		}
		~Bicycle()
		{
			cout << "~Bicycle" << endl;
		}
		void run() {
			cout << "Bicycle Run" << endl;
		}
		void stop() {
			cout << "Bicycle stop" << endl;
		}
		void display()
		{
			cout << "maxSpeed: " << maxSpeed << endl;
			cout << "weight: " << weight << endl;
			cout << "height: " << height << endl;
		}
};

class MotorCar : public Vehicle {
	protected:
		int seatNum;
	public:
		MotorCar(int m,int w,int s):Vehicle(m,w)
		{
			seatNum = s;
		}
		~MotorCar()
		{
			cout << "~MotorCar" << endl;
		}
		void run() {
			cout << "MotorCar Run" << endl;
		}
		void stop() {
			cout << "MotorCar stop" << endl;
		}
		void display()
		{
			cout << "maxSpeed: " << maxSpeed << endl;
			cout << "weight: " << weight << endl;
			cout << "seatNum: " << seatNum << endl;
		}
};

class MotorCycle : public Bicycle,public MotorCar 
{
	public:
		MotorCycle(int m, int w, int h, int s) :Bicycle(m, w, h) ,MotorCar(m, w, s)
		{
		}
		~MotorCycle()
		{
			cout << "~MotorCycle" << endl;
		}
		void run() {
			cout << "MotorCycle Run" << endl;
		}
		void stop() {
			cout << "MotorCycle stop" << endl;
		}
		void display()
		{
			cout << "maxSpeed: " << Bicycle::maxSpeed << endl;
			cout << "weight: " << Bicycle::weight << endl;
			cout << "height: " << height << endl;
			cout << "seatNum: " << seatNum << endl;
		}
};

int main() {
	Vehicle *vehicle = new Vehicle(300, 1000);
	Bicycle *bicycle = new Bicycle(40, 30, 1);
	MotorCar *motorcar = new MotorCar(100,300,4);
	MotorCycle *motorcycle = new MotorCycle(100, 100, 1, 4);
	vehicle->run();
	vehicle->stop();
	vehicle->display();

	cout << endl;
	bicycle->run();
	bicycle->stop();
	bicycle->display();

	cout << endl;
	motorcar->run();
	motorcar->stop();
	motorcar->display();

	cout << endl;
	motorcycle->run();
	motorcycle->stop();
	motorcycle->display();
	cout << endl;
	delete motorcycle;
	system("pause");
}