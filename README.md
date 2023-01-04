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
* 두 종류의 turtlesim에 각각의 namespace를 추가하여 개별로 움직임 제어
    * ros2 run packagename command --ros-args -r __ns:=/namespacename
* 한 스크린 내에 두 개 이상의 turtlesim 스폰 후 개별로 움직임 제어
    * ros2 service call /spawn turtlesim/srv/Spawn "x: 5.5, y: 7.0, theha: 1.5, name: 'turtle2'}"
* turtlesim의 색상, 펜 두께 변경하기
    * ros2 service call /turtle1/set_pen turtlesim/srv/SetPen "{r: 100, g: 50, b: 200, width: 5}"
* opencv의 기초 운용방법에 대해 학습

- - -
# 2023_1_4 진행 상황
- - -
* Interface 설계
    * 사용자 인터페이스 생성
    * ros2 pkg create --build-type ament_cmake class_test_interface

* 사용자 인터페이스를 활용한 service 생성
* action 기능을 활용하여 Fibonacci 수열 결과 출력

