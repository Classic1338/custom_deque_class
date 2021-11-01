template <typename T>

class deque {
public:
	T get_front() {
		return item[0];
	}

	T get_back() {
		return item[get_size()];
	}

	T at(int index) {
		return item[index];
	}

	void push_back(T data) {
		item[size] = data;
		size++;
	}

	void pop_back() {
		item[size] = {};
		size--;
	}

	size_t get_size() {
		return size - 1;
	}

	size_t get_length() {
		return size;
	}
private:
	int size = 0;
	T item[];
};