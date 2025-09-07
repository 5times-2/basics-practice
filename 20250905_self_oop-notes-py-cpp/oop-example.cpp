# include <iostream>
using namespace std;

class Dog {                                 // class
	public:
		string name;                // attribute
		int age;

		// contructor
		Dog(string n, int a) {
			this->name = n; // this 指向物件記憶體
			this->age = a; // 如下面若使用d.age，則this == &d（位址）
					// 會到this指向的那塊記憶體取出裡面的age屬性
			}
		
		// method
		Void bark() {
			cout << this->name << "汪汪叫！" << endl;
			/*
			 * << 會將右邊的所有東西接續“鏈接”輸出至左邊
			 *  這裡的<<會先將this->name 給cout
			 *  再把“汪汪叫！”給cout
			 *  再把endl給cout
			 * */
	}
};

int main() {
	Dog d("小黑", 3); // 建立object
	Dog e("小黃", 1);
	d.bark(); 	  //呼叫 method
	cout << d.name << "今年" << d.age << "歲" << endl;

	return 0;
}
