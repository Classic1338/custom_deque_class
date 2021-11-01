//Custom datatypes MUST have a default constructor, otherwise it'll error!
struct color_t {
	color_t() = default;
	color_t(int r, int g, int b, int a) :
	r(r),
	g(g),
	b(b),
	a(a)
	{}

	int r, g, b, a;
};

template <typename T>
class deque {
public:
	T get_front() {
		return item[0];
	}

	T get_back() {
		return item[get_size()];
	}

	T at(const int& index) {
		if (index >= size) {
			printf("index out of range! \n");

			return item[0];
		}

		return item[index];
	}

	bool is_empty() {
		return size == 0;
	}

	void clear_deque() {
		static int deque_size = size;

		for (int i = 0; i < deque_size; i++) {
			pop_back();
		//	delete[] item;
		}
	}

	void push_back(T data) {
	//	item = new T[size];
		item[size] = data;
		size++;
	}

	void pop_back() {
		size--;
		item[get_length()] = {};
	//	delete[] item;
	}

	void clear_index(const int& index) {
		item[index] = {};
		size--;
	}

	int get_size() {
		return size - 1;
	}

	int get_length() {
		return size;
	}

	void force_size(const int& max_size) {
		if (size > max_size) {
			pop_back();
		}
	}
private:
	int size = 0;
	T item[];
	//T* item;
};