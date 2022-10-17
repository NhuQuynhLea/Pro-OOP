# [TUẦN 4] SFML & GAME THEORY

## _[Buổi 1]: SFML_

## I.Thư viện SFML

SFML ﻿ (là viết tắt của Simple and Fast Multimedia Library)
là một API đa phương tiện đơn giản, nhanh chóng, đa nền tảng và hướng đối tượng. Nó cung cấp quyền truy cập vào cửa sổ, đồ họa, âm thanh và mạng. Nó được viết bằng C ++ và có các ràng buộc cho nhiều ngôn ngữ khác nhau như C, .Net, Ruby, Python..

SFML ﻿ bao gồm 5 modules: Audio, Graphics, Network, System, Window.

- **System**: gồm các class liên quan với hệ thống như làm thời gian, xử lí unicode
- **Window**: liên quan tới việc tạo, đóng và xử lí sự kiện cửa số.
- **Graphics**: bao gồm các class về việc render đồ họa
- **Audio**: bao gồm các class về xử lí âm thanh, ta có thể dùng để phát một file nhạc hoặc ghi âm cho máy tính và lưu thành file.
- **Network**

## II.Lý thuyết game cơ bản

### **- Game 2D :**

Game 2D là game không thể xoay góc quay và không có ấn tượng ba chiều rõ rệt. Game này cuộn bản đồ theo hai chiều là ngang và thẳng. Bên cạnh đó, từ nhân vật, tiền cảnh, hậu cảnh,… của game 2D giống phim hoạt hình cắt giấy (mọi thứ đều từ hình vẽ trên giấy).

Các thể loại game:

- Game mô phỏng.
- Game offline.
- Game Casual.
- Game mạng xã hội.
- Game thực tế ảo – VR.
- Game tương tác ảo – AR.

### **-Game loop :**

Game loop thường được gọi là vòng lặp trò chơi vì nó kiểm soát thời gian tồn tại của một ứng dụng, đảm bảo rằng ứng dụng sẽ được làm mới / cập nhật cho đến khi đóng cửa sổ

![](https://static.packt-cdn.com/products/9781849696845/graphics/6845_01_02.jpg)
Đầu tiên, chúng tôi xử lý các sự kiện từ cửa sổ, sau đó cập nhật trò chơi và cuối cùng hiển thị kết quả trên màn hình.

### **- Deltatime :**

Game là một chương trình có vòng lặp vô hạn, mỗi lần lặp là một lần cập nhật các đối tượng trong game (1 khung hình hoặc frame )

Số khung hình trên một giây gọi là **fps** ( frame per second )

Vấn đề : vận tốc của chiếc xe đang phụ thuộc vào fps: fps càng cao thì xe di chuyển càng nhanh và ngược lại.

Điều này gây ra hiện tượng chiếc xe di chuyển nhanh chậm phụ thuộc vào phần cứng của thiết bị

Đây là lúc Delta time xuất hiện.

**1/fps** = deltaTime => **Là khoảng thời gian giữa hai khung hình liên tiếp**

Vận tốc xe = 10\*fps ( pixel/s )

```c++
void Update(float deltaTime)
{
    car.move(10*deltaTime,0);
}
```

### **- Sprite, Texture :**

![](https://www.sfml-dev.org/tutorials/2.5/images/graphics-sprites-definition.png)

Sprites và Textures đều là hình ảnh.

Sprite là một hình ảnh có thể được sử dụng như một đối tượng 2d, có tọa độ (x, y) và bạn có thể di chuyển, phá hủy hoặc tạo ra trong trò chơi.

Một Texture cũng là một hình ảnh, nhưng nó sẽ được sử dụng để thay đổi sự xuất hiện của một object. Ví dụ: bạn có thể thiết lập một Textures cho các mặt của một khối lập phương, một lớp (như nền) hoặc thậm chí một sprite. Nhưng vì Textures không phải là object, bạn không thể di chuyển chúng trong suốt trò chơi.

### **- Animation :**

2D Animation trong game 2D dùng để tạo các chuyển động cho các nhân vật cho game sinh động hơn

Về lý thuyết, cơ chế chuyển động của animation khá giống với phim điện ảnh ở việc tạo thành chuyển động bằng nhiều ảnh khác nhau trong cùng một khung hình, nối tiếp nhau thành một chuỗi hình ảnh. Khi đó sẽ tạo thành ảo ảnh thị giác về chuyển động trong khoảng thời gian nhất định ở 24 bức/giây.

Hình dưới chứa 16 sprites để tạo ra chuỗi hoạt họa như trên.

![](https://resources.stdio.vn/content/article/5ef61d66a37a5e67beb441f0/resources/res-1600942983-1600942983676.png)
