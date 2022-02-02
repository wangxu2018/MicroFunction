# 限制cmake版本
CMAKE_MINIMUM_REQUIRED (VERSION 3.0)

# 项目名称
PROJECT (MicroFunction)

# 设置C++版本
SET (CMAKE_CXX_STANDARD 11)

# 链接main所需的头文件目录
INCLUDE_DIRECTORIES (
    ${CMAKE_SOURCE_DIR}/SplitStrByWord
    )

# 生成可执行文件calc
ADD_EXECUTABLE (microFunction main.cpp)

# 递归当前目录及子目录下的所有cpp文件为SOURCE变量
FILE (GLOB_RECURSE SOURCE "*.CPP")

# 移除其中的main.cpp文件
LIST (REMOVE_ITEM SOURCE ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)

# 生成静态库
ADD_LIBRARY (func ${SOURCE})

# 将功能函数生成的静态库链接到二进制文件
TARGET_LINK_LIBRARIES(microFunction func)