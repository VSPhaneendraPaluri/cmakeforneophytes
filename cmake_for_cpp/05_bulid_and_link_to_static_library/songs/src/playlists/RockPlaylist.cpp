#pragma once

#include "RockPlaylist.h"

RockPlaylist::RockPlaylist()
{
  createSongs();
}

void RockPlaylist::setGenre(SongGenre_t genre_)
{
  genre = genre_;
}

std::vector<SongDetails> RockPlaylist::getPlaylist()
{
  return songsList;
}

void RockPlaylist::createSongs()
{
  songsList.push_back(SongDetails("Rock A", "Artist A", "Album A", 2011));
  songsList.push_back(SongDetails("Rock B", "Artist A", "Album A", 2011));
  songsList.push_back(SongDetails("Rock C", "Artist B", "Album A", 2011));
  songsList.push_back(SongDetails("Rock A", "Artist C", "Album B", 2014));
}
