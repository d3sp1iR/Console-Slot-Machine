cmake_minimum_required(VERSION 3.10)

# имя проекта
project(SlotMachine)

# стандарт языка
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# собираем исполняемый файл из исходников
add_executable(slot src/main.cpp)
