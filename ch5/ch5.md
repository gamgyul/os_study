# CPU 스케쥴링

CPU 스케쥴링은 multi 프로그램 OS의 기본. CPU를 프로세스간에 교환해서 효율적으로 CPU를 사용한다.  \
어떤 프로세스가 I/O 요청과 같이 대기를 해야할 경우 CPU를 다른 프로세스에 할당해주는 식으로 운용된다.

### CPU-IO 버스트 사이클

CPU 스케쥴링은 프로세스의 특성에 좌우되는데 프로세스는 크게 CPU실행과 입출력 대기로 구성된다.   \
CPU 버스트는 일반적으로 -지수함수식으로 구성되서 짧은 시간의 버스트를 많이 갖게 된다.

### CPU 스케줄러

CPU가 유휴 상태가 될때마다 준비완료 큐에 있는 프로세스들 중에 실행할 프로세스를 선택하게된다.  \
또한 스케주루링 알고리즘에 의해서 프로세스가 선택이 되어 CPU가 할당된다.

### 다중처리기 스케쥴링

CPU를 여러개를 사용할 경우 load sharing이 가능하고 또 해야한다.
#### 비대칭 다중 처리
* 마스터 역할을 하는 처리스케줄를 여러개를 사용할  담당하고 다른 처리기가 코드를 수행하는식으로 동작한다.
* 단순하지만 load balancinig 이 안될 수가 있다.
#### 대칭 다중처리 (SMP: Symmetric Multiprocessing)
* 각 처리기가 독자적으로 스케줄링 수행
* 여러 처리기가 공동의 자료에 접근하고 여러 처리기가 한프로세스를 선택하지 않게 해야하고 구현이 어려움
* 대부분의 현재 OS가 SMP를 지원
#### 처리기 친화성
처리기 마다 캐시를 가지고 있는데 어떤 프로세스가 한 프로세서에서 다른 프로세서로 넘어가게 되면 캐시를 옮기는 비용이 소모가됨  \
해당 현상을 막기위해 같은 프로세스가 같은 프로세서에서 실행시키려고하는데 이를 ``처리기 친화성``이라고 한다.(processor Affinity)

* Windows 스케쥴링
    * 우선순위를 기반으로한 선점 스케줄링 알고리즘.
    * 스케줄링 담당하는 부분을 dispatcher라고 부름.
* LINUX 스케쥴링
    * 프로세스와 쓰레드 구분없이 task라는 단위로 스케쥴링
    * 두개의 우선순위 범위를 가진 우선순위 기반