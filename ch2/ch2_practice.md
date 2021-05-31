# 2장 시스템 구조
2.1 파일 관리에 관련된 운영체제의 다섯가지 중요한 활동

    1. 파일 생성 및 삭제
    2. 디렉토리에 대한 생성 및 삭제
    3. 파일 이름 및 타입 등 속성 설정
    4. 파일 이동 및 복사에 대한 연산

2.2 사용자가 컴퓨터 시스템을 더 펴나게 사용하도록 설계된 운영체제의 다섯가지 서비스

    1. 사용자 인터페이스
    2. 프로그램 수행
    3. 입출력 연산
    4. 파일시스템 조작
    5. 통신

2.3 왜 just in time 컴파일러가 java 프로그램을 수행하기 위해 유용한가?

    java는 인터프리터 방식인데 바이트 코드로 소스코드를 바꾸어둔다음 그때그때 기계어로 바꾸어 성능을 개선할 수 있다.

2.4 운영체제가 제공하는 서비스의 기능은 크게 두범주로 나뉜다. 두 범주를 간략히 설명하고 비교하시오.
    
    1. 사용자에게 도움을 주는기능
    2. 시스템 자체의 효율적인 동작을 보장하는 기능

2.5 메카니즘과 정책의 분리과 바람직한 이유는?
    
    정책의 변경이 메카나지므의 변경을 요구하게 되는 상황을 막을 수 있다.

2.6 운영체제가 제공하는 시스템-호출 인터페이스를 사용하여 사용자가 새로운 명령어 해석기를 개발하는게 가능한가?
    
    가능하다. 고수준언어를 기계어로 바꿔주는 컴파일러가 대표적이다.

2.7 명령 해석기의 목적은 무엇인가? 일반적으로 그것을 왜 커널로 부터 분리하는가?

    명령해석기는 사용자와 OS사이의 인터페이스로 사용자의 명령을 받아서 수행하는 목적이다. 명령해석기가 커널에 포함되면 항상 메모리에 상주하게되어 메모리를 많이 차지하고 낭비하게 되서 분리를 한다.