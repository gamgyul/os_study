# 멀티스레드 프로그래밍

## 스레드란
스레드는 CPU의 기본단위  \
프로세스를 생성하는것은 많은 자원이 필요한일인데 새 프로세스가 할일이 기존 프로세스와 거의 동일 하다면  \
새 프로세스를 만드는 오버헤드가 많이 들기에 여러 스레드를 사용한것이 효율적이다.

### 멀티스레드의 장점

1. 응답성
    * 멀티스레드를 사용하면 blocking 되있거나 작업이 수행중에도 사용자에게 응답을 할수 있기때문에 응답성이 좋다.
2. 자원공유
    * 멀티스레드는 자동으로 프로세스와 자원과 메모리를 공유하기에 같은 주소 공간에 대해 작업을 하는 스레드를 여러개 가질 수 있다.
3. 경제성
    * 프로세스가 메모리 와 자원을 공유하는것은 오버헤드가 적고 경제적이다.
4. scalability
    * 다중으로 처리를 할 수 있는곳에서는 병렬로 처리가 가능하다.

### SINGAL HANDLING

신호는 UNIX에서 프로세스에 어떤 사건이 일어났음을 알려주기 위해 사용되는것으로 동기신호와 비동기신호가 있다.

동기 신호의 경우 잘못된 메모리 접근(SIGSEGV) 및 0으로 나누기(SIGFPE)등이 있다. 이런 경우에는 실행중인 동일한 프로세스에게 바로 전달된다.

비동기 신호의 경우 신호가 프로세스 외부에서 발생하면 비동기식으로 전달받는다. ctrl + c 로 키보드로 부터 인터럽트 발생(SIGINT)등이 있다

멀티스레드 환경에서 동기신호의 경우 신호를 발생한 스레드에만 전달하고 다른스레드에게는 전달되면안된다.
비동기식 신호의 경우 UNIX는 실호를 전달받을 스레드를 선택 할 수 있다.