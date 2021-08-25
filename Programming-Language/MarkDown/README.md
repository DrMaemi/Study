# Mark-Down study

<br>

## 목차
<p>

[같은 문서 내 헤더로 링크 걸기](#같은-문서-내-헤더로-링크-걸기)
</p>
<p>

[중첩된 목록](#중첩된-목록)
</p>


<br><br>

## 같은 문서 내 헤더로 링크 걸기
<p>

- [보여줄 텍스트](#링크할 헤더) 형식으로 기입
- 스페이스바(띄어쓰기)는 '-'로 대체
- '.', '-', ':', '(', ')'는 무시한다(제거)
- 이모지는 무시한다(제거)
- 대문자는 소문자로 바꿔 쓴다
- 어떤 헤더는 '#'는 한 번만 쓴다
</p>

<br><br>

## 중첩된 목록
<p>

두 칸을 들여 쓰거나, `tab`키를 입력해 중첩된 목록을 만들 수 있다.
</p>

<p>

마크다운
```
1. 첫 번째 목록
    1. 첫 번째의 첫 번째 목록
    2. 첫 번째의 두 번째 목록
2. 2
    - 2 1
    - 2 2
        - 2 2 1
        - 2 2 2
    - 2 3
```
</p>
<p>

결과<br>
1. 첫 번째 목록
    1. 첫 번째의 첫 번째 목록
    2. 첫 번째의 두 번째 목록
2. 2
    - 2 1
    - 2 2
        - 2 2 1
        - 2 2 2
    - 2 3
</p>

<br><br>