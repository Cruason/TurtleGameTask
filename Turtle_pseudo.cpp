#include<iostream>
using namespace std;

class Turtle
{
	private:
		float speed;
	public:
		virtual void move() = 0;
		float get_speed()
		{
			return speed;
		}
		void set_speed(float speed)
		{
			this->speed = speed;
		}
}; 

class TurtleOne : public Turtle
{
	public:
		TurtleOne()
		{
			this->set_speed(5);
		}
		void move()
		{
			cout<<"Move with speed "<< get_speed() <<endl;
		}
};

class TurtleTwo : public Turtle
{
	private:
		float delay;
	public:
		TurtleTwo()
		{
			this->set_speed(5);
			set_delay(0.5);
		}
		void move()
		{
			cout<<"Move with speed "<< get_speed()<< " with delay "<< delay <<endl;
		}
		void set_delay(float delay)
		{
			this->delay = delay;
		}
};

class TurtleThree : public Turtle
{
	private:
		float delay;
	public:
		TurtleThree()
		{
			this->set_speed(5);
			set_delay(0.5);
		}
		void move()
		{
			cout<<"Move with speed "<< get_speed()<< " with delay "<< delay << " and back with delay "<< delay/2 <<endl;
		}
		void set_delay(float delay)
		{
			this->delay = delay;
		}
};

class Nest{
	Turtle *turtle;
	public: 
	void createTrutle(Turtle *turtle)
	{
		this -> turtle = turtle;
		turtle->move();
	}
	
};

int main()
{
	int presses = 0;
	int btnId;
	Nest nestOne, NestTwo, NestThree;
	while(presses != 3)
	{
		cin>>btnId;
		switch(btnId){
			case 1:
				nestOne.createTrutle(new TurtleOne());
				break;
			case 2:
				NestTwo.createTrutle(new TurtleTwo());
				break;
			case 3:
				NestThree.createTrutle(new TurtleThree());
				break;
		}
		presses++;
	}
	
	return 0;
}
