- - -
# 2023_1_2 진행 상황
- - -
* 우분투 20.04 버전 설치
    * image 주소: https://releases.ubuntu.com/focal/ 데스크탑 버전 설치
* ROS2 설치:
    * foxy: sudo apt install ros-foxy-desktop ros-foxy-rmw-fastrtps* ros-foxy-rmw-cyclonedds*
* testpub testsub 으로 ROS2 정상작동 확인
* turtlesim_node 실행 후 teleop 으로 움직임 확인
* RQT를 사용하여 turtlesim_node 움직임 제어
* ROS2 python package 생성
    * class 생성 후 패키지 내의 main으로만 동작하도록 객체지향적 설계

- - -
# 2023_1_3 진행 상황
- - -
* QoS(Quality of Service, 서비스 품질)을 이용한 ROS2 설계
* ros2 run 명령어를 통해 package 실행 확인
* Saas 연습  google slide : https://docs.google.com/presentation/d/1jwksntFzRzFbpEtHJCzOahT5loVWIPO-PtTMm4BnxtY/edit?usp=sharing
* turtlesim의 이동경로를 변경하는 package을 통해 움직임 제어 확인