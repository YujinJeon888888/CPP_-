//#include <iostream>
//
//int main() {
//	int val1, val2;
//	int result = 0;
//	std::cout << "두 개의 숫자 입력: ";
//	std::cin >> val1 >> val2;//연속적으로 입력받을 수 있다.
//	//구분: 탭, 스베이스 바, enter키. 즉 공백에 의해 나눠짐
//
//	if (val1 < val2) {
//		for (int i = val1 + 1; i < val2; i++) {
//			result += i;
//		}
//	}
//	else {
//		for (int i = val2 + 1; i < val1; i++) {
//			result += i;
//		}
//	}
//
//	std::cout << "두 수 사이의 정수 합: " << result << std::endl;
//
//	return 0;
//}