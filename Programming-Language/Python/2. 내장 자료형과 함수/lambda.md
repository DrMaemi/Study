# 람다(lambda)
람다식, 또는 람다 함수는 프로그래밍 언어에서 사용되는 개념으로 익명 함수(匿名函數, Anonymous functions)를 지칭하는 용어이다. 프로그래밍 언어학적으로 파고들면 이것만 한 달 이상 배우는 경우도 많으며, 실제로 여러 대학들에서 사용하는 프로그래밍 언어 교재에서도 꽤나 많은 분량을 차지하는 개념이다. 실무적으로는 코드의 간결함, 지연 연산을 통한 퍼포먼스 향상, 그리고 기존 이터레이션 관련 코드를 구현하는 데 있어 불필요한 부분들을 제거할 수 있다는 점에서 비교적 중요하게 다루어지고 있다. 람다식은 주로 고차 함수에 인자(argument)로 전달되거나 고차 함수가 돌려주는 결과값으로 쓰인다.

<br>

## 장점
특징 | 설명
-- | --
코드의 간결성 | 효율적인 람다 함수 사용을 통해 불필요한 루프문 삭제 가능
퍼포먼스 향상 | 지연 연산을 이용해 효율적 퍼포먼스 기대, 불필요한 연산 배제 가능

<br>

## 단점
특징 | 설명
-- | --
디버깅 제약 | 디버깅 시 함수 콜스택 추적이 어려움
코드 이해 어려움 | 람다식을 남용할 시 오히려 코드를 이해하기 어려울 수 있음

<br>

## 사용법
형식
```
lambda 인자: 표현식
```
<p>

```python
def f(x, y):
    return x+y

if __name__ == '__main__':
    print(f(3, 5))
    print(lambda x, y: x+y(3, 5))
    print((lambda x, y: x+y)(3, 5))
```
</p>
<p>

결과
```
8
<function <lambda> at 0x000001AC40D5B1F8>
8
```
</p>

<br>

## 응용
### map()
형식
```
map(함수, iterable 객체)
```
iterable 객체 각 요소에 명시된 함수를 적용한다.
<p>

```python
>>> list(map(lambda x:x**2, range(5)))
[0, 1, 4, 9, 16]
```
</p>

<br>

### reduce()
형식
```
reduce(함수, iterable 객체)
```
<p>

```python
>>> from fuctools import reduce
>>> reduce(lambda x, y: x+y, range(5))
10
>>> reduce(lambda x, y: x+y, 'abcde')
'abcde'
```
</p>

<br>

## 참조
3.5 람다(lambda), 왕초보를 위한 Python: 쉽게 풀어 쓴 기초 문법과 실습, 2021년 11월 28일 접속, [https://wikidocs.net/64](https://wikidocs.net/64)