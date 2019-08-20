#pragma once

#include "HipHopPlaylist.h"

HipHopPlaylist::HipHopPlaylist()
{
  createSongs();
}

void HipHopPlaylist::setGenre(SongGenre_t genre_)
{
  genre = genre_;
}

std::vector<SongDetails> HipHopPlaylist::getPlaylist()
{
  return songsList;
}

void HipHopPlaylist::createSongs()
{
  songsList.push_back(SongDetails("HipHop A", "Artist A", "Album A", 2011));
  songsList.push_back(SongDetails("HipHop B", "Artist A", "Album A", 2011));
  songsList.push_back(SongDetails("HipHop C", "Artist B", "Album A", 2011));
  songsList.push_back(SongDetails("HipHop A", "Artist C", "Album B", 2014));
}
