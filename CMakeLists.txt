cmake_minimum_required(VERSION 3.8)
project(productionline_sim)

set(CMAKE_CXX_STANDARD 11)


set(SOURCE_FILES src/main.cpp src/Factory.cpp include/Factory.h src/Ramp.cpp include/Ramp.h src/PackageQueue.cpp include/PackageQueue.h src/PackageSender.cpp include/PackageSender.h src/IntervalReportNotifier.cpp include/IntervalReportNotifier.h include/IPackageQueue.h include/IPackageReceiver.h src/QueueType.cpp include/Types/QueueType.h include/Storehouse.h include/Worker.h include/IPackageDepot.h include/ReceiverPreferences.h include/Types/Package.h include/Types/types.h src/Storehouse.cpp include/IReportNotifier.h src/Worker.cpp include/Types/ReceiverType.h src/ReceiverPreferences.cpp include/Types/Package.cpp src/SpecyficTurnsReportNotifier.cpp)

add_executable(productionline_sim ${SOURCE_FILES})