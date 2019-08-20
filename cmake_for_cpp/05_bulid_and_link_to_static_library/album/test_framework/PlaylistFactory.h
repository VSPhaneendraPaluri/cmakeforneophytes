#pragma once

#include "Playlist.h"
#include "SongDetails.h"
#include <memory>
#include <vector>

class PlaylistFactory
{
  public:
    static PlaylistFactory& instance()
    {
      static PlaylistFactory songsFactoryObject;
      return songsFactoryObject;
    }
  
    std::vector<Playlist *> getPlaylists();
    std::vector<std::vector<SongDetails> > getSongLists();

  private:
    PlaylistFactory();
    void createGenres();

    std::vector<Playlist *> playlists{};
    std::vector<std::vector<SongDetails> > songlists{};
};

