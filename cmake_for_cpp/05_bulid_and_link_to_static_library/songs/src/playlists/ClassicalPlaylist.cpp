#pragma once

#include "ClassicalPlaylist.h"

ClassicalPlaylist::ClassicalPlaylist()
{
  createSongs();
}

void ClassicalPlaylist::setGenre(SongGenre_t genre_)
{
  genre = genre_;
}

std::vector<SongDetails> ClassicalPlaylist::getPlaylist()
{
  return songsList;
}

void ClassicalPlaylist::createSongs()
{
  songsList.push_back(SongDetails("Classical A", "Artist A", "Album A", 2011));
  songsList.push_back(SongDetails("Classical B", "Artist A", "Album A", 2011));
  songsList.push_back(SongDetails("Classical C", "Artist B", "Album A", 2011));
  songsList.push_back(SongDetails("Classical A", "Artist C", "Album B", 2014));
}
