/*
Ý tưởng:
Polycarp muốn mua số lượng xẻng tối thiểu sao cho anh ta có thể trả tiền mà không phải nhận lại tiền thừa. Anh ấy có thể trả bằng số lượng không giới hạn đồng 10-burle và một đồng r-burle.
Giả sử giá của một chiếc xẻng là k. Polycarp phải trả một số tiền n x k, với n là số lượng xẻng mà anh ta mua.
Polycarp có hai cách để không phải nhận lại tiền thừa:

    1. Tổng số tiền phải trả n x k chia hết cho 10.
    2. Tổng số tiền phải trả n x k kết thúc bằng r.

Chiến lược:
    1. Chúng bắt đầu từ n = 1, tính tổng số tiền n x k
    2. Kiểm tra điều kiện: nếu số tiền đó chia hết cho 10 hoặc kết thúc bằng chữ số r, thì đó là số lượng xẻng cần mua.
    3. Nếu không thỏa mãn, tiếp tục tăng giá trị n và kiểm tra lại.
*/
#include <stdio.h>

int main() {
    int k, r;
    
    // Đọc giá của một chiếc xẻng và mệnh giá của đồng xu
    scanf("%d %d", &k, &r);
    
    // Biến lưu số lượng xẻng
    int n = 1;
    
    // Lặp qua từng số lượng xẻng để tìm kết quả phù hợp
    while (1) {
        int total = n * k;
        
        // Kiểm tra nếu tổng số tiền chia hết cho 10 hoặc có chữ số cuối là r
        if (total % 10 == 0 || total % 10 == r) {
            printf("%d\n", n);
            break;
        }
        
        // Tăng số lượng xẻng
        n++;
    }
    
    return 0;
}
