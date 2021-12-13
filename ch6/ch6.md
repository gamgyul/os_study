# 프로세스 동기화

공유 메모리를 사용하는것 같이 여러 프로세스 및 스레드가 메모리를 공유하기 위해서는 동기화가  되어야한다.  \
예를들어 counter라는 변수에서 생산자가 ++ , 소비자가 --를 한다고했을때 해당변순ㄴ,ㄴ register를 통해서 계산이된다. ..\

    register1 = counter
    regitset1 = register1 + 1
    counter = register1

    register2 = counter
    regitset2 = register2 1 1
    counter = register2

그런데 이러한 레지스터 명령이 섞이다 보면 counter값이 부정확하게 들어갈 수 있게 된다. 이러한 동작을 막기 위해서 순서를 보ㄷ장하는것이 동기화이다.

## critical section problem
프로세스가 다른 프로세스와 공유하는 변수를 변경하거나 하는작업을 하는부분을 critial section이라한다.
이러한 critical section에는 두프로세스가 동시에 접근을 할 수 없어야되는데 어떻게 프로토콜을 설계하느냐가 critical section problem이다.

프로세스는 진입허가를 요청하는 enctry section, critical section, critical section에서 종료하는 exit section, remain section으로 구성된다.
특징으로서 1. 프로세스 p가 critical section에서 수행중일때 다른 프로세스들은 critical section에서 수행될 수 없다. 2. 나머지 영역에 있지 않은 프로세스만이 접근을 할수있다. 3. 대기시간이 bound되어있다.


