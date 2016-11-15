#include <iostream>
#define max_size 100

template <class QT> class Queue {
	QT q[max_size]; // array for queue elements 
	int size; // max num of elements, which can kept in queue
	int putloc;
	int getloc;
public:
	Queue(int len) {
		if (len > max_size)	len = max_size;
		else if (len <= 0) len = 1;

		size = len;
		putloc = getloc = 0;
	}
	void put(QT data) {
		if (putloc == size) {
			std::cout << "- queue is full" << std::endl;
		}
		putloc++;
		q[putloc] = data;
	}
	QT get() {
		if (getloc == putloc) {
			std::cout << "-- queue is empty" << std::endl;
				return 0;
		}
		getloc++;
		return q[getloc];
	}
};

int main() {
	Queue<int> intQa(3);
	Queue<double> dQb(15);

	intQa.put(1);
	intQa.put(2);
	intQa.put(3);
	intQa.put(4);

	dQb.put(5.4);
	dQb.put(6.0);
	
	std::cout << "Content of integral numbers Queue A: ";
	for (int i = 0; i < 4; i++) {
		std::cout << intQa.get() << " ";
	}
	std::cout << std::endl;

	std::cout << "Content of double numbers Queue B: ";
	for (int i = 0; i < 2; i++) {
		std::cout << dQb.get() << " ";
	}
	std::cout << std::endl;

	return 0;
}