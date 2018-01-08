cmake_minimum_required(VERSION 3.8)
project(productionline_sim)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp src/Factory.cpp include/Factory.h src/Ramp.cpp include/Ramp.h src/PackageQueue.cpp include/PackageQueue.h src/PackageSender.cpp include/PackageSender.h src/IntervalReportNotifier.cpp include/IntervalReportNotifier.h src/IPackageQueue.cpp include/IPackageQueue.h src/IPackageReceiver.cpp include/IPackageReceiver.h include/Storehouse.h include/IPackageDepot.h include/ReceiverPreferences.h include/Types/Package.h)
add_executable(productionline_sim ${SOURCE_FILES})