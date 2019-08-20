cmake_minimum_required(VERSION 3.0)

project(
  Songs
  LANGUAGES CXX
)

set(
  HEADERS
  include/genres/Classical.h
  include/genres/HeavyMetal.h
  include/genres/HipHop.h
  include/genres/Jazz.h
  include/genres/Pop.h
  include/genres/Rock.h
  include/playlists/ClassicalPlayList.h
  include/playlists/HeavyMetalPlayList.h
  include/playlists/HipHopPlayList.h
  include/playlists/JazzPlayList.h
  include/playlists/Playlist.h
  include/playlists/PopPlayList.h
  include/playlists/RockPlayList.h
  include/playlists/SongDetails.h
)

set(
  SOURCES
  src/genres/Classical.cpp
  src/genres/HeavyMetal.cpp
  src/genres/HipHop.cpp
  src/genres/Jazz.cpp
  src/genres/Pop.cpp
  src/genres/Rock.cpp
  src/playlists/ClassicalPlayList.cpp
  src/playlists/HeavyMetalPlayList.cpp
  src/playlists/HipHopPlayList.cpp
  src/playlists/JazzPlayList.cpp
  src/playlists/PopPlayList.cpp
  src/playlists/RockPlayList.cpp
  src/playlists/SongDetails.cpp
)

add_library(${PROJECT_NAME} STATIC ${SOURCES} ${HEADERS})
target_link_libraries(${PROJECT_NAME} SongCharacteristics)

target_include_directories(${PROJECT_NAME} PUBLIC include/genres/)
target_include_directories(${PROJECT_NAME} PUBLIC include/playlists/)
target_include_directories(${PROJECT_NAME} PUBLIC include/)
