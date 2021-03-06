# 원격 접속

<br><br>

## 목차
- [1. 윈도우 - PuTTY](#1-윈도우---putty)
- [2. WSL, Linux - SSH](#2-wsl-linux---ssh)
- [3. VS Code SSH](#3-VS-Code-SSH)

<br>

## 1. 윈도우 - PuTTY
[PuTTY 공식 홈페이지](https://www.chiark.greenend.org.uk/~sgtatham/putty/latest.html)
<div align="center">
  <figure>
    <img src="resources/PuTTY/1. PuTTY 공식 홈페이지에서 설치 파일 다운.png" alt="1. PuTTY 공식 홈페이지에서 설치 파일 다운" width="70%">
    <div align="center"><figcation>1. PuTTY 공식 홈페이지에서 설치 파일 다운</figcation></div>
  </figure>
</div>
<br>
<div align="center">
  <figure>
    <img src="resources/PuTTY/2. PuTTYgen 검색.png" alt="2. PuTTYgen 검색" width="30%">
    <div align="center"><figcation>2. PuTTYgen 검색</figcation></div>
  </figure>
</div>
<br>
<div align="center">
  <figure>
    <img src="resources/PuTTY/3. PuTTYgen 실행 기본 화면 - Load 클릭.png" alt="3. PuTTYgen 실행 기본 화면 - Load 클릭" width="50%">
    <div align="center"><figcation>3. PuTTYgen 실행 기본 화면 - Load 클릭</figcation></div>
  </figure>
</div>
<br>
<div align="center">
  <figure>
    <img src="resources/PuTTY/4. 원하는 pem 파일 선택.png" alt="4. 원하는 pem 파일 선택" width="50%">
    <div align="center"><figcation>4. 원하는 pem 파일 선택</figcation></div>
  </figure>
</div>
<br>
<div align="center">
  <figure>
    <img src="resources/PuTTY/5. pem 파일 로드 성공.png" alt="5. pem 파일 로드 성공" width="50%">
    <div align="center"><figcation>5. pem 파일 로드 성공</figcation></div>
  </figure>
</div>
<br>
<div align="center">
  <figure>
    <img src="resources/PuTTY/6. save private key 클릭.png" alt="6. save private key 클릭" width="50%">
    <div align="center"><figcation>6. save private key 클릭</figcation></div>
  </figure>
</div>
<br>
<div align="center">
  <figure>
    <img src="resources/PuTTY/7. ppk 확장자로 저장.png" alt="7. ppk 확장자로 저장" width="50%">
    <div align="center"><figcation>7. ppk 확장자로 저장</figcation></div>
  </figure>
</div>
<br>
<div align="center">
  <figure>
    <img src="resources/PuTTY/8. PuTTY 검색.png" alt="8. PuTTY 검색" width="30%">
    <div align="center"><figcation>8. PuTTY 검색</figcation></div>
  </figure>
</div>
<br>
<div align="center">
  <figure>
    <img src="resources/PuTTY/9. Session에서 Public IP와 SSH 접속 포트 22 입력.png" alt="9. Session에서 Public IP와 SSH 접속 포트 22 입력" width="50%">
    <div align="center"><figcation>9. Session에서 Public IP와 SSH 접속 포트 22 입력</figcation></div>
  </figure>
</div>
<br>
<div align="center">
  <figure>
    <img src="resources/PuTTY/10. Connection - SSH - Auth에서 key browse.png" alt="10. Connection - SSH - Auth에서 key browse" width="50%">
    <div align="center"><figcation>10. Connection - SSH - Auth에서 key browse</figcation></div>
  </figure>
</div>
<br>
<div align="center">
  <figure>
    <img src="resources/PuTTY/11. 변환해뒀던 ppk 파일 선택.png" alt="11. 변환해뒀던 ppk 파일 선택" width="50%">
    <div align="center"><figcation>11. 변환해뒀던 ppk 파일 선택</figcation></div>
  </figure>
</div>
<br>
<div align="center">
  <figure>
    <img src="resources/PuTTY/12. Open.png" alt="12. Open" width="50%">
    <div align="center"><figcation>12. Open</figcation></div>
  </figure>
</div>
<br>
<div align="center">
  <figure>
    <img src="resources/PuTTY/13. 첫 접속 시 확인 메세지 Accept.png" alt="13. 첫 접속 시 확인 메세지 Accept" width="50%">
    <div align="center"><figcation>13. 첫 접속 시 확인 메세지 Accept</figcation></div>
  </figure>
</div>
<br>
<div align="center">
  <figure>
    <img src="resources/PuTTY/14. login as에 사용자명 입력.png" alt="14. login as에 사용자명 입력" width="60%">
    <div align="center"><figcation>14. login as에 사용자명 입력</figcation></div>
  </figure>
</div>


<br><br>

## 2. WSL, Linux - SSH
<p>

```
ssh -i </path/to/.pem file> <user name>@<Public IP>
```
예시
```
ssh -i ../my_ssh_key.pem ubuntu@13.22.205.2
```
</p>
<br>

### 2.1. SSH 터널링 - 포트 포워딩
<p>

SSH 터널링에 포트 포워딩 기술을 더해 클라이언트가 서버의 어플리케이션에 접근할 수 있다.
</p>
<p>

```
ssh -CNf -L <임의의 내 로컬 포트>:127.0.0.1:<앱 동작 포트> -i <ssh 키 경로> <호스트 네임>@<공인 IP>
```
예시
```
ssh -CNf -L 3333:127.0.0.1:33533 -i my_ssh_key.pem ubuntu@3.123.123.183
```
백그라운드로 수행되는 것을 원하지 않으면 `f` 옵션을 제거한다.
</p>
<p>

**minikube 실습**
```
# 서버(AWS 인스턴스)에서 대쉬보드 실행
$ minikube dashboard --url
...
http://127.0.0.1:33533/api/v1/namespaces/kubernetes-dashboard/services/http:kubernetes-dashboard:/proxy/
```
```
# ssh 터널링. 내 로컬 터미널에서 다음 명령어 입력
$ ssh -CNf -L 3333:127.0.0.1:33533 -i soma-kubernetes.pem ubuntu@3.123.123.183
```
```
# 내 로컬에서 브라우저를 열고 다음 url로 접속
http://127.0.0.1:3333/api/v1/namespaces/kubernetes-dashboard/services/http:kubernetes-dashboard:/proxy/
```
</p>

<br><br>

## 3. VS Code SSH
<p>

[VS Code SSH 원격 접속](https://github.com/drmaemi/tree/master/Tools/VS-Code/SSH_원격접속.md)
</p>