/*
What is the error in th following code? Why is wrong?

int f(int x)
{
    int x;
    //code for function body
}


answer : int x가 매개변수 뿐 아니라 함수 내부 블록에서도 한번 더 선언됨.
x는 이미 함수의 매개변수로 정의되어 있으므로, 같은 이름을 가진 지역변수를 다시 선언할 수 없다.
이는 이름 충돌을 일으켜 컴파일러 오류를 발생시킨다.

이를 해결하기 위해선 함수 내부에서 사용되는 지역변수의 이름(identifier)를
매개변수의 이름과 다르게 설정하여 해결해야 한다.
*/

