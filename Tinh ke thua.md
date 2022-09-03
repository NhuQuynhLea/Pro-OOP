# [TUẦN 2] INHERITANCE

## _[BUỔI 3] THEORY_

## **I.Kế thừa là gì?**

Kế thừa là một trong các tính chất đặc trưng của lập trình hướng đối tượng, bên cạnh tính đóng gói (encapsulation), che giấu thông tin (hiding information), tính đa hình (polymorphism) và tính trừu tượng (abstraction).

Kế thừa (inheritance) là một tính chất đặc trưng của lập trình hướng đối tượng. Nó có nghĩa là một class thừa hưởng lại tất cả các thuộc tính, phương thức của class mà nó kế thừa, ngoài ra có thể mở rộng các thành phần kế thừa và bổ sung thêm các thành phần mới.

Class kế thừa từ một class khác gọi là lớp con (child class hay subclass) hay lớp dẫn xuất (derived class). Class được lớp khác kế thừa được gọi là lớp cha (parent class hay superclass) hay lớp cơ sở (base class).

### **Ưu điểm của Tính kế thừa**

Nhìn chung, Tính kế thừa có một số ưu điểm như sau:

- Tính kế thừa giúp tăng khả năng tái sử dụng. Khi một lớp kế thừa hoặc dẫn xuất một lớp khác, thì nó có thể truy cập tất cả các chức năng của lớp mà nó kế thừa.

- Khả năng tái sử dụng nâng cao độ tin cậy. Chúng ta chỉ cần kiểm tra và gỡ lỗi với mã lớp cha, chứ không cần kiểm tra từng lớp con.

- Khi mã được tái sử dụng, sẽ giúp giảm chi phí phát triển và bảo trì.

- Các lớp con sẽ tuân thủ theo một giao diện (interface) chuẩn.

- Tính kế thừa giúp hạn chế sự dư thừa mã và hỗ trợ khả năng mở rộng mã.

- Lập trình viên có điều kiện thuận lợi để tạo các thư viện lớp (class libraries).

### **Nhược điểm của Tính kế thừa**

Bên cạnh những ưu điểm nêu trên, Tính kế thừa có một số nhược điểm sau:

- Các chức năng được kế thừa hoạt động chậm hơn chức năng bình thường, vì nó được thực hiện gián tiếp (lấy từ lớp cha) chứ không phải trực tiếp.

- Thông thường, các dữ liệu thành viên trong lớp cha không được sử dụng. Điều này có thể dẫn đến lãng phí bộ nhớ.

- Tính kế thừa làm tăng sự kết nối giữa lớp cơ sở và lớp kế thừa. Một thay đổi trong lớp cha sẽ ảnh hưởng đến tất cả các lớp con.

- Nếu sử dụng Tính kế thừa không đúng cách có thể dẫn đến các cách giải quyết sai lầm sau này.

VD: Áp dụng tính kế thừa vào ba lớp trên ta sẽ tạo ra một lớp Class Mayvitinh có các thuộc tính và phương thức: chieudai, chieurong và upRam() và các lớp Class mayAcer, Class mayAsus, Class mayLenovo sẽ kế thừa từ Class Mayvitinh

![](https://codelearn.io/Media/Default/Users/DatTrann/OOP/oie_YChEV8lyjB0s.png)

Hình ảnh trên cho thấy khi áp dụng tính kế thừa, ta chỉ cần viết một lần các phương thức kia trong lớp cha và cho các lớp con kế thừa lại. Điều này sẽ tránh việc sai sót khi sửa và tăng khả năng sử dụng lại. Ví dụ, nếu bạn muốn thêm một lớp Class mayMac , bạn chỉ cần khai báo nó kế thừa từ Class Mayvitinh là cũng có thể dùng được các thuộc tính và phương thức trên rồi.

### **Cú pháp khai báo tính kế thừa:**

```c++
class lopcon : phamvitruycap
{
   // nội dung lớp con
};
```

vd:

```c++
#include <bits/stdc++.h>
using namespace std;

//Lớp Cha
class Mayvitinh {
public:
    int chieudai;
};

// Lớp con kế thừa từ lớp cha
class mayAcer : public Mayvitinh {
public:
    int length;
};

int main() {
    mayAcer may1;
    may1.chieudai = 6;
    may1.length = 23;
    cout << "Chieu dai: " << may1.chieudai << endl;
    cout << "Length: " << may1.length << endl;

    return 0;
}
```

Trong chương trình trên, class mayAcer là lớp con, nó sẽ được kế thừa các thành viên dữ liệu dạng public từ class Mayvitinh. Nếu để các thành viên dữ liệu trên dạng private thì sẽ không thể dùng kế thừa.

**Lưu ý:**

- _public_: Nếu kế thừa ở dạng này, sau khi kế thừa, tất cả các thành viên dạng public lớp cha sẽ public ở lớp con, dạng protected ở lớp cha vẫn sẽ là protected ở lớp con.

- _protected_: Nếu dùng protected thì sau khi kế thừa, tất cả các thành viên dạng public lớp cha sẽ trở thành protected tại lớp con.

- _private_: Trường hợp ta sử dụng private, thì sau khi kế thừa, tất cả các thành viên dạng public và protected ở lớp cha sẽ thành private tại lớp con.

### **Các loại kế thừa**

**1. Đơn kế thừa(Single Inheritance):**

Đơn kế thừa: nghĩa là một lớp chỉ được kế thừa từ đúng một lớp khác. Hay nói cách khác, lớp con chỉ có duy nhất một lớp cha.

![](https://codelearn.io/Media/Default/Users/DatTrann/OOP/images.png)

_Cú pháp khai báo đơn kế thừa:_

```c++
class lopcon : phamvidulieu lopcha
{
  // nội dung lớp con
};
```

**2. Đa kế thừa (Multiple Inheritance):**

Đa kế thừa là một tính năng của ngôn ngữ C++. Trong đó một lớp có thể kế thừa từ nhiều hơn một lớp khác. Nghĩa là một lớp con được kế thừa từ nhiều hơn một lớp cơ sở.

![](https://codelearn.io/Media/Default/Users/DatTrann/OOP/Multiple-Inheritance.png)

_Cú pháp khai báo đa kế thừa:_

```c++
class lopcon : phamvitruycap lopcha1, phamvitruycap lopcha2, ....
{
  // nội dung của lớp con
};
```

## **II. Nạp chồng hàm (Function overloading)**

Nạp chồng hàm (function overloading) là tính năng của ngôn ngữ C++ (không có trong C). Kỹ thuật này cho phép sử dụng cùng một tên gọi cho nhiều hàm (có cùng mục đích). Nhưng khác nhau về kiểu dữ liệu tham số hoặc số lượng tham số.

```c++
// các hàm trùng tên nhưng khác danh sách tham số
int test() { }
int test(int a) { }
float test(double a) { }
int test(int a, double b) { }
```

### **Một số hàm không thể nạp chồng trong C++**

_1. Hàm chỉ khác nhau kiểu trả về_

```c++
// Error code
int test(int a) { }
double test(int b){ }
```

_2.Tham số hàm kiểu typedef_

Khai báo typedef chỉ là một bí danh (không phải kiểu dữ liệu mới)

_3.Tham số hàm kiểu con trỏ _ và mảng []\*

Tham số hàm con trỏ \* và mảng [] là tương đương. Lúc này, khai báo mảng [] được chuyển đổi ngầm định thành một con trỏ.

```c++
int foo(int *x);
int foo(int x[]); // compiler error
```

## **III.Nạp chồng toán tử (operator overloading)**

Nạp chồng toán tử trong C++ là các hàm có tên đặc biệt. Tên hàm gồm từ khóa operator và theo sau là ký hiệu của toán tử đang được định nghĩa.

Nạp chồng toán tử được dùng để định nghĩa lại các toán tử có sẵn như ++, – -, +, -, \*, /,… cho kiểu dữ liệu (class) do người lập trình tự định nghĩa. Nhằm tạo ra toán tử cùng tên nhưng thực hiện trên các lớp khác nhau chứ không phải trên các kiểu dữ liệu nguyên thủy.

```c++
#include <iostream>
using namespace std;

class ThoiGian
{
public:
    int hour;
    int minute;
public:
    ThoiGian() : hour(0), minute(0) {}  //hàm tạo mạc định
    ThoiGian(int h, int m) : hour(h) , minute(m) {} // hàm tạo 2 tham số
    ThoiGian operator++ () // hàm nạp chồng toán tử ++ tiền tố
    {
        ++minute;
        if (minute >= 60)
        {
            ++hour;
            minute -= 60;
        }
        return ThoiGian(hour, minute);
    }
    ThoiGian operator++(int) //hàm nạp chồng toán tử ++ hậu tố
    {
        ThoiGian T(hour, minute);
        ++minute;
        if (minute >= 60)
        {
            ++hour;
            minute -= 60;
        }
        return T;
    }
    ThoiGian operator +(ThoiGian& Ts) //hàm nạp chồng toán tử + một ngôi
    {
        ThoiGian T;
        T.hour = this->hour + Ts.hour;
        T.minute = this->minute + Ts.minute;
        if (T.minute >= 60)
        {
            ++T.hour;
            T.minute -= 60;
        }
        return T;
    }
// nạp chồng toán tử - hai ngôi
    friend ThoiGian operator - (ThoiGian& T1, ThoiGian& T2)
    {
        ThoiGian T;
        T.hour = T1.hour - T2.hour;
        T.minute = T1.minute - T2.minute;
        return T;
    }
    friend istream& operator >> (istream& is, ThoiGian& T) //nạp chồng toán tử nhập
    {
        cout << "hour = ";
        is >> T.hour;
        cout << "minute = ";
        is >> T.minute;
        return is;
    }
    friend ostream& operator << (ostream& os, ThoiGian& T) // nạp chồng toán tử xuất
    {
        os << T.hour << "h:" << T.minute << "p" << endl;
        return os;
    }
    friend bool operator < (ThoiGian& T1, ThoiGian& T2)
    {
        if (T1.hour == T2.hour)
        {
            if (T1.minute < T2.minute)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else if(T1.hour < T2.hour)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    ThoiGian T1(8, 59), T2(6, 24);
    ThoiGian T3;
    T3 = T1 + T2;  //test nạp chồng toán tử +
    cout << "Thoi gian hien tai cua T3 la: ";
    cout << T3; //test toán tử xuất <<
    if (T3++.minute == 24) //test nạp chồng toán tử ++ hậu tố
    {
        cout << "Hau to false" << endl;
        cout << T3;
    }
    else
    {
        cout << "Hau to true" << endl;
    }
    cout << "Thoi gian sau khi thuc hien phep toan ++ hau to la: ";
    cout << T3;
    cout << "Thoi gian hien tai cua T3 la: ";
    cout << T3;
    if (++T3.minute == 25) //test nạp chồng toán tử ++ tiền tố
    {
        cout << "Tien to true" << endl;
    }
    else
    {
        cout << "Tien to false" << endl;
        cout << T3;
    }
    cout << "Thoi gian sau khi thuc hien phep toan ++ tien to la: ";
    cout << T3;
    ThoiGian T4;
    T4 = T1 - T2; // test nạp chồng toán tử - hai ngôi
    cout << "Thong tin T4 ";
    cout << T4;
    ThoiGian T5;
    cout << "Nhap thong tin T5" << endl;
    cin >> T5; // test nạp chồng toán tử nhập >>
    cout << "Thong tin vua nhap la: ";
    cout << T5;
    if (T5 < T4)
    {
        cout << "T5 < T4" << endl;
    }
    else
    {
        cout << "T5 > T4" << endl;
    }
    return 0;
}
```

## **IV.Ghi đè hàm (Function Overriding)**

Kế thừa cho phép lập trình viên ứng dụng tạo một lớp thừa kế từ một lớp có sẵn. Lớp thừa kế sẽ kế thừa các tính năng của lớp chính (lớp đã tồn tại).

Giả sử, cả hai lớp chính và lớp thừa kế đều có một hàm thành viên với cùng tên và cùng đối số (số lượng và kiểu của các đối số).

Nếu bạn tạo một đối tượng của lớp thừa kế và gọi hàm thành viên tồn tại ở cả hai lớp (lớp chính và lớp kế thừa), hàm thành viên của lớp kế thừa sẽ được gọi và hàm của lớp chính sẽ bị bỏ qua.

Tính năng này trong C++ được gọi là ghi đè hàm

![](https://vimentor.com/storage/upload/ckeditor/05-04-2019-18-13-12-image.png)

Để truy xuất một hàm bị ghi đè của lớp chính từ lớp kế thừa, toán tử phân giải phạm vi :: được sử dụng.

![](https://vimentor.com/storage/upload/ckeditor/05-04-2019-18-13-38-image.png)

_So Sánh_

**Overloading**

- Thể hiện đa hình tại compile time

- Thêm hành vi cho phương thức

- Có thể khác nhau về số lượng và kiểu dữ liệu của tham số

- Xảy ra trong cùng một class

**Overriding**

- Thể hiện đa hình tại runtime

- Thay đổi hành vi hiện tại của phương thức

- Số lượng và kiểu dữ liệu của tham số phải giống nhau

- Xảy ra ở 2 class có quan hệ kế thừa

## **V.Hàm Friend**

Nếu một hàm được định nghĩa là một hàm friend trong C++, thì dữ liệu private và protected của một lớp có thể được truy cập bằng cách sử dụng hàm.

**Đặc điểm của hàm Friend:**

- Hàm không nằm trong phạm vi của lớp mà nó đã được khai báo là friend.

- Nó không thể được gọi bằng cách sử dụng đối tượng vì nó không nằm trong phạm vi của lớp đó.

- Nó có thể được gọi như một hàm bình thường mà không cần sử dụng đối tượng.

- Nó không thể truy cập trực tiếp vào tên thành viên và phải sử dụng tên đối tượng và dấu chấm toán tử với tên thành viên.

- Nó có thể được khai báo trong phần private hoặc public.

**Cú pháp**

Đặt từ khoá **friend** phía trước, sau đó khai báo như một hàm thông thường

```c++
#include <iostream>
using namespace std;
class B; // khai bao lop B
class A {
    int x;

public:
    void setdata(int i) {
        x = i;
    }
    friend void min(A, B); // ham friend
};
class B {
    int y;

public:
    void setdata(int i) {
        y = i;
    }
    friend void min(A, B); // ham friend
};

void min(A a, B b) {
    if (a.x <= b.y)
        std::cout << a.x << std::endl;
    else
        std::cout << b.y << std::endl;
}
int main() {
    A a;
    B b;
    a.setdata(10);
    b.setdata(20);
    min(a, b);
    return 0;
}
```
