# [TUẦN 3] POLYMORPHISM

## _[BUỔI 5] THEORY_

## I.Tính đa hình là gì ?

Sự kế thừa trong C++ cho phép có sự tương ứng giữa lớp cơ sở và các lớp dẫn xuất trong sơ đồ thừa kế:

- Một con trỏ có kiểu lớp cơ sở luôn có thể trỏ đến địa chỉ của một đối tượng của lớp dẫn xuất.
- Tuy nhiên, khi thực hiện lời gọi một phương thức của lớp, trình biên dịch sẽ quan tâm đến kiểu của con trỏ chứ không phải đối tượng mà con trỏ đang trỏ tới: **_phương thức của lớp mà con trỏ có kiểu được gọi_** chứ không phải phương thức của đối tượng mà con trỏ đang trỏ tới được gọi.

Ví dụ: Lớp mayAcer kế thừa từ lớp Mayvitinh, cả hai lớp này đều định nghĩa phương thức show()

```c++
class Mayvitinh{
	public:
	void show(){
	    cout << "mayvitinh" << endl;
	}
};
class mayAcer: public Mayvitinh{
    public:
    void show(){
        cout << "mayAcer" << endl;
    }
};
```

khi đó, nếu ta khai báo một con trỏ lớp mayAcer, nhưng lại trỏ vào địa chỉ của một đối tượng lớp Mayvitinh, thì chương trình sẽ gọi đến phương thức show() của lớp Mayvitinh, mà không gọi tới phương thức show() của lớp mayAcer.

Để giải quyết vấn đề này, chúng ta cần sử dụng đến tính đa hình trong Lập trình hướng đối tượng.

### => _Đa hình là khái niệm luôn đi kèm với kế thừa. Do tính kế thừa, một lớp có thể sử dụng lại các phương thức của lớp khác. Tuy nhiên, nếu cần thiết, lớp dẫn xuất cũng có thể định nghĩa lại một số phương thức của lớp cơ sở. Đó là sự nạp chồng phương thức trong kế thừa. Nhờ sự nạp chồng phương thức này, ta chỉ cần gọi tên phương thức bị nạp chồng từ đối tượng mà không cần quan tâm đó là đối tượng của lớp nào. Chương trình sẽ tự động kiểm tra xem đối tượng là thuộc kiểu lớp cơ sở hay thuộc lớp dẫn xuất, sau đó sẽ gọi phương thức tương ứng với lớp đó. Đó là tính đa hình._

Đa hình được coi là một trong những tính năng quan trọng của Lập trình hướng đối tượng.

## Các loại đa hình:

Tính đa hình chủ yếu được chia thành hai loại:

- Compile time Polymorphism.
- Runtime Polymorphism.

![](https://codelearn.io/Media/Default/Users/DatTrann/OOP/cpp-polymorphism.png)

## II.Virtual function (hàm ảo)

Hàm ảo (virtual function) là một hàm thành viên trong lớp cơ sở mà lớp dẫn xuất khi kế thừa **cần phải định nghĩa lại**.

Hàm ảo được sử dụng trong lớp cơ sở khi cần đảm bảo hàm ảo đó sẽ được **định nghĩa lại** trong lớp dẫn xuất. Việc này rất cần thiết trong trường hợp con trỏ có kiểu là lớp cơ sở trỏ đến đối tượng của lớp dẫn xuất.

Hàm ảo chỉ khác hàm thành phần thông thường khi được gọi từ **một con trỏ**. Sử dụng hàm ảo khi muốn con trỏ đang trỏ tới đối tượng của lớp nào thì hàm thành phần của lớp đó sẽ được gọi mà không xem xét đến kiểu của con trỏ.

VD: Trong ví dụ đầu tiên của bài có thể thấy chương trình sau khi chạy sẽ gọi đến phương thức show() của lớp Mayvitinh, mà không gọi tới phương thức show() của lớp mayAcer.

Vậy để chương trình gọi tới phương thức show() của lớp mayAcer ta sử dụng **hàm ảo virtual** như sau:

```c++
#include <iostream>
using namespace std;

class Mayvitinh{
	public:
	virtual void show(){
	    cout << "mayvitinh" << endl;
	}
};
class mayAcer: public Mayvitinh{
    public:
    void show(){
        cout << "mayAcer" << endl;
    }
};

int main(){
    mayAcer may1;
    Mayvitinh *tenmay = &may1;
    tenmay->show();
}
```

## III.Hàm thuần ảo (pure virtual function) là gì?

Hàm thuần ảo (pure virtual function) được sử dụng khi:

- Không cần sử dụng hàm này trong lớp cơ sở, chỉ phục vụ cho lớp dẫn xuất
- Lớp dẫn xuất bắt buộc phải định nghĩa lại hàm thuần ảo

Hàm thuần ảo không có thân hàm và bắt buộc phải kết thúc với **“= 0”**.

Lưu ý: Cú pháp “= 0” không phải là gán hàm thuần ảo có giá trị bằng 0. Nó chỉ là cú pháp cho biết đó là hàm thuần ảo (pure virtual function).

VD: Chúng ta có một lớp cơ sở là Shape. Các lớp dẫn xuất của lớp Shape là Triangle, Square và Circle. Chúng ta muốn tính diện tích của các hình này.

Chúng ta có thể tạo ra một hàm thuần ảo có tên là calculateArea() trong lớp Shape. Các lớp Triangle, Square và Circle phải định nghĩa lại hàm calculateArea() với công thức tính diện tích khác nhau cho mỗi hình.

```c++
class Shape{
public:
	// creating a pure virtual function
	virtual void calculateArea() = 0;
};
```

### **Lớp trừu tượng (abstract class)**

**Một lớp bao gồm hàm thuần ảo được gọi là lớp trừu tượng (abstract class)**. Trong ví dụ ở phần 1, Shape là một lớp trừu tượng.

Chúng ta **không thể tạo ra** các đối tượng của một lớp trừu tượng. Mục đích chính của lớp trừu tượng là để các lớp khác kế thừa lại.

```c++
#include <iostream>
using namespace std;

//Abstract class
class Shape{
protected:
	float dimension;
public:
	void getDimension(){
        cin >> dimension;
    }

    // pure virtual Function
    virtual float calculateArea() = 0;
};

// Derived class
class Square : public Shape{
public:
    float calculateArea() {
        return dimension * dimension;
    }
};

// Derived class
class Circle : public Shape{
public:
    float calculateArea() {
        return 3.14 * dimension * dimension;
    }
};

void main(){
	Square square;
    Circle circle;

    cout << "Enter the length of the square: ";
    square.getDimension();
    cout << "Area of square: " << square.calculateArea() << endl;

    cout << "\nEnter radius of the circle: ";
    circle.getDimension();
    cout << "Area of circle: " << circle.calculateArea() << endl;
	system("pause");
}
```

## IV.lớp cơ sở ảo (virtual base class)

Có một vấn đề khi một lớp cơ sở được kế thừa bởi nhiều lớp dẫn xuất. Ví dụ, xét tình huống các lớp kế thừa theo sơ đồ như sau:

![](https://gochocit.com/wp-content/uploads/2021/11/so-do-ke-thua-virtual-base-class-oop.png)

Hai lớp B và C kế thừa từ lớp A. Lớp D kế thừa từ cả hai lớp B và C. Như vậy, lớp A được kế thừa hai lần bởi lớp D. Lần thứ nhất được kế thừa thông qua lớp B, lần thứ hai được kế thừa thông qua lớp C.

Lúc này, nếu đối tượng của lớp D gọi đến một hàm được kế thừa từ lớp A thì sẽ gây ra một sự mơ hồ. Không biết hàm đó được kế thừa gián tiếp từ lớp B hay lớp C.

Để giải quyết tính không rõ ràng này, C++ có một cơ chế mà nhờ đó chỉ có một bản sao của lớp A ở trong lớp D. Đó là sử dụng **lớp cơ sở ảo (virtual base class)**.

sử dụng từ khóa **_vitual_** để khai báo lớp A là lớp cơ sở ảo trong các lớp B và C theo cú pháp sau:

```c++
class A{
//Định nghĩa lớp
};
class B : virtual public A{
//Định nghĩa lớp
};
class C : virtual public A{
//Định nghĩa lớp
};
class D : public B, public C{
//Định nghĩa lớp
};
```

Việc chỉ định A là lớp cơ sở ảo trong các lớp B và C, nghĩa là A sẽ chỉ xuất hiện một lần trong lớp D. Khai báo này không ảnh hưởng đến các lớp B và C.

**Lưu ý: Từ khóa virtual có thể đặt trước hoặc sau từ khóa public, private, protected**.

```c++
#include <iostream>
using namespace std;

class A{
public:
    void show()
    {
        cout << "Hello from A \n";
    }
};

class B : virtual public A{//lớp cơ sở ảo
};

class C : virtual public A{//lớp cơ sở ảo
};

class D : public B, public C{
};

void main(){
	D object;
    object.show();
	system("pause");
}
```

### **Hàm khởi tạo và hàm hủy đối với lớp cơ sở ảo**

Hàm khởi tạo của một lớp cơ sở ảo luôn luôn **được gọi trước** các hàm khởi tạo khác. Hàm hủy của một lớp cơ sở ảo luôn luôn **được gọi sau** các hàm hủy khác.
