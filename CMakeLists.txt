project(bluetooth-heart-rate-plugin)

set(bluetooth-heart-rate-plugin_SOURCES
	plugin-main.cpp
	heart-rate-reader.cpp
	heart-rate-reader.h)

add_library(bluetooth-heart-rate-plugin MODULE
	${bluetooth-heart-rate-plugin_SOURCES})

find_package(Qt5Bluetooth ${FIND_MODE})

target_link_libraries(bluetooth-heart-rate-plugin
	libobs
	${bluetooth-heart-rate-plugin_SOURCES_PLATFORM_DEPS}
	Qt5::Bluetooth)
	
install_obs_plugin_with_data(bluetooth-heart-rate-plugin data)