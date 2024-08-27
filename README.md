Polycarp đang rất cần một chiếc xẻng! Anh ấy đến cửa hàng và chọn một chiếc xẻng phù hợp. Chiếc xẻng mà Policarp chọn được bán với giá k burles. Giả sử rằng có vô số loại xẻng như vậy trong cửa hàng.

Trong túi của Polycarp có một số lượng không giới hạn "đồng xu 10-burle" và chính xác một đồng xu r burle ( 1 ≤  r  ≤ 9 ).

Số lượng xẻng tối thiểu mà Polycarp phải mua là bao nhiêu để anh ta có thể trả tiền mua mà không cần trả lại? Rõ ràng là anh ta có thể trả tiền mua 10 cái xẻng mà không cần trả lại (bằng cách trả số tiền cần thiết là 10 đồng burle và không sử dụng đồng r burle). Nhưng có lẽ anh ta có thể mua ít xẻng hơn và trả tiền mà không cần trả lại. Lưu ý rằng Polycarp nên mua ít nhất một cái xẻng.

Đầu vào:

Dòng đầu vào chứa hai số nguyên k và r ( 1 ≤  k  ≤ 1000 , 1 ≤  r  ≤ 9 ) — giá của một chiếc xẻng và mệnh giá của đồng xu trong túi Polycarp khác với "đồng xu 10 burle".

Hãy nhớ rằng ông có số lượng tiền xu không giới hạn mệnh giá là 10, nghĩa là Polycarp có đủ tiền để mua bất kỳ số lượng xẻng nào.

Đầu ra:

In ra số lượng xẻng tối thiểu mà Polycarp phải mua để anh ta có thể trả tiền mà không phải trả lại tiền thừa.

Giải quyết:

1. Chúng bắt đầu từ n = 1, tính tổng số tiền n x k
2. Kiểm tra điều kiện: nếu số tiền đó chia hết cho 10 hoặc kết thúc bằng chữ số r, thì đó là số lượng xẻng cần mua.
3. Nếu không thỏa mãn, tiếp tục tăng giá trị n và kiểm tra lại.
