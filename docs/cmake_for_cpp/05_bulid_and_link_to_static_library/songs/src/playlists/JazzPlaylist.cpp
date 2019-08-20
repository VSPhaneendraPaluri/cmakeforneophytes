#pragma once

#include "JazzPlaylist.h"

JazzPlaylist::JazzPlaylist()
{
  createSongs();
}

void JazzPlaylist::setGenre(SongGenre_t genre_)
{
  genre = genre_;
}

std::vector<SongDetails> JazzPlaylist::getPlaylist()
{
  return songsList;
}

void JazzPlaylist::createSongs()
{
  songsList.push_back(SongDetails("Jazz A", "Artist A", "Album A", 2011));
  songsList.push_back(SongDetails("Jazz B", "Artist A", "Album A", 2011));
  songsList.push_back(SongDetails("Jazz C", "Artist B", "Album A", 2011));
  songsList.push_back(SongDetails("Jazz A", "Artist C", "Album B", 2014));
}
