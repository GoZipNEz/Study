# Stack

## 1. Stack 이란
  LIFO(Last In First Out)구조의 자료구조로 하노이탑처럼 데이터가 차곡차곡 쌓이며 위에서만 접근이 가능.
## 2. 사용 방법  
  선언 : #include<stack>
  
  정의 : stack<자료형> 변수명
## 3. Stack 함수
  push(데이터) : 데이터를 저장한다.
  
  pop() : 가장 마지막으로 push 된 데이터를 제거.
  
  top() : 가장 마지막으로 push 된 데이터를 반환.
  
  size() : stack의 현재 size를 반환(데이터 개수)
  
  empty() : stack이 비어있는지 여부를 반환
  
  swap(stack1, stack2) : 스택의 데이터 변경.
