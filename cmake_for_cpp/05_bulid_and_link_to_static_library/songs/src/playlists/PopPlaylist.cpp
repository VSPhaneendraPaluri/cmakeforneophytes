#pragma once

#include "PopPlaylist.h"

PopPlaylist::PopPlaylist()
{
  createSongs();
}

void PopPlaylist::setGenre(SongGenre_t genre_)
{
  genre = genre_;
}

std::vector<SongDetails> PopPlaylist::getPlaylist()
{
  return songsList;
}

void PopPlaylist::createSongs()
{
  songsList.push_back(SongDetails("Pop A", "Artist A", "Album A", 2011));
  songsList.push_back(SongDetails("Pop B", "Artist A", "Album A", 2011));
  songsList.push_back(SongDetails("Pop C", "Artist B", "Album A", 2011));
  songsList.push_back(SongDetails("Pop A", "Artist C", "Album B", 2014));
}
