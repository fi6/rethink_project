cmake_minimum_required(VERSION 2.8.3)
project(tutorial_pkg)

add_compile_options(-std=c++11)

find_package(catkin REQUIRED COMPONENTS
  frontier_exploration
  grid_map_core
  grid_map_msgs
  grid_map_ros
  nav_msgs
  roscpp
  sensor_msgs
  tf
)

find_package( OpenCV REQUIRED )

catkin_package()

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
  ${OpenCV_INCLUDE_DIRS}
)

add_executable(tutorial_pkg_node src/tutorial_pkg_node.cpp)
add_executable(action_controller_node src/action_controller.cpp)
add_executable(mission_controller_node src/mission_controller.cpp)
add_executable(search_controller_node src/search_controller.cpp)
add_executable(drive_controller_node src/drive_controller.cpp)
add_executable(search_manager src/search_manager_node.cpp src/SearchManager.cpp)
add_executable(start_exploration src/explore_action_client.cpp)

target_link_libraries(tutorial_pkg_node
  ${catkin_LIBRARIES}
)

target_link_libraries(action_controller_node
  ${catkin_LIBRARIES}
  ${OpenCV_LIBRARIES}
)

target_link_libraries(mission_controller_node
  ${catkin_LIBRARIES}
)

target_link_libraries(search_controller_node
  ${catkin_LIBRARIES}
)

target_link_libraries(drive_controller_node
  ${catkin_LIBRARIES}
)

target_link_libraries(search_manager
  ${catkin_LIBRARIES}
)

target_link_libraries(start_exploration
  ${catkin_LIBRARIES}
)

install(DIRECTORY launch
	DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
)

install(DIRECTORY image_rec
  DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
)


install(DIRECTORY include
	DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
)

install(DIRECTORY rviz
  DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
)

install(DIRECTORY config
  DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
)

install(DIRECTORY scripts
  DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
  USE_SOURCE_PERMISSIONS
)

install(DIRECTORY deploymentScripts/
  DESTINATION ${CATKIN_GLOBAL_SHARE_DESTINATION}
  USE_SOURCE_PERMISSIONS
)

install(TARGETS tutorial_pkg_node action_controller_node mission_controller_node search_controller_node drive_controller_node search_manager start_exploration
  ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})
