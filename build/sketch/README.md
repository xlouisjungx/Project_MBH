#line 1 "/home/songhyunsik/Project_MBH/README.md"
# Project_MBH
Second Project GitHub

- 디스플레이 받침대를 Tinkercad를 이용하여 설계함.
- 3D 프린터의 결과물을 보고, 받침대의 길이를 조정함.

- 네오 픽셀을 아두이노를 이용하여 사용법을 익힌 후, 패턴을 제작함.
- 라즈베리파이에서 아두이노 설치

- 제한적인 하드웨어의 부피에 보드를 넣어야하는 문제 발생 --> 아두이노 우노보드 대신, 나노보드를 시도
- 나노보드를 사용할 때에는 아두이노 앱에서 업로딩 하는 방식이 달랐다. / 추가적으로, Window 운영체제에서는 나노보드에 대한 추가적인 설치가 필요했다.
- 프로젝트의 하드웨어를 구매하여 아두이노 나노보드와 브레드 보드가 들어갈 공간을 확인함.

- 리눅스에서 나노보드를 사용하기 위해서는 윈도우에서처럼 추가 설치가 필요했다. 하지만 리눅스에서는 코드에러가 발생하여, 아두이노 우노보드를 사용하기도 결정하였다.

- Vscode에서 아두이노 확장팩을 설치하면 아두이노 코드를 보드에 업로드 할 수 있다.
- 아두이노에서 네오픽셀의 색상을 벼녁ㅇ을 담당한는 변수인 cnt를 SSH 통신 방식을 이용하여 라즈베리파이에 데이터를 넘겨주도록 추가하였다.

- curl -fsSL https://raw.githubusercontent.com/arduino/arduino-cli/master/install.sh | sh
- arduino-cli version
- arduino-cli config init
- arduino-cli core install arduino:avr
