#pragma once

#include "HeavyMetalPlaylist.h"

HeavyMetalPlaylist::HeavyMetalPlaylist()
{
  createSongs();
}

void HeavyMetalPlaylist::setGenre(SongGenre_t genre_)
{
  genre = genre_;
}

std::vector<SongDetails> HeavyMetalPlaylist::getPlaylist()
{
  return songsList;
}

void HeavyMetalPlaylist::createSongs()
{
  songsList.push_back(SongDetails("HeavyMetal A", "Artist A", "Album A", 2011));
  songsList.push_back(SongDetails("HeavyMetal B", "Artist A", "Album A", 2011));
  songsList.push_back(SongDetails("HeavyMetal C", "Artist B", "Album A", 2011));
  songsList.push_back(SongDetails("HeavyMetal A", "Artist C", "Album B", 2014));
}
