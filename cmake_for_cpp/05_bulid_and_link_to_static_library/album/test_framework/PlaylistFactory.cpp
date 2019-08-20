#include "PlaylistFactory.h"
#include "SongGenre.h"
#include "ClassicalPlaylist.h"
#include "HeavyMetalPlaylist.h"
#include "HipHopPlaylist.h"
#include "JazzPlaylist.h"
#include "PopPlaylist.h"
#include "RockPlaylist.h"

PlaylistFactory::PlaylistFactory()
{
  createGenres();
}

void PlaylistFactory::createGenres()
{
  Playlist * classic = new ClassicalPlaylist();
  classic->setGenre(SongGenre_t::CLASSICAL);
  playlists.push_back(classic);
  songlists.push_back(classic->getPlaylist());

  Playlist * heavymetal = new HeavyMetalPlaylist();
  heavymetal->setGenre(SongGenre_t::HEAVYMETAL);
  playlists.push_back(heavymetal);
  songlists.push_back(heavymetal->getPlaylist());

  Playlist * hiphop = new HipHopPlaylist();
  hiphop->setGenre(SongGenre_t::HIPHOP);
  playlists.push_back(hiphop);
  songlists.push_back(hiphop->getPlaylist());

  Playlist * jazz = new JazzPlaylist();
  jazz->setGenre(SongGenre_t::JAZZ);
  playlists.push_back(jazz);
  songlists.push_back(jazz->getPlaylist());

  Playlist * pop = new PopPlaylist();
  pop->setGenre(SongGenre_t::POP);
  playlists.push_back(pop);
  songlists.push_back(pop->getPlaylist());

  Playlist * rock = new RockPlaylist();
  rock->setGenre(SongGenre_t::ROCK);
  playlists.push_back(rock);
  songlists.push_back(rock->getPlaylist());
}

std::vector<Playlist *> PlaylistFactory::getPlaylists()
{
  return playlists;
}

std::vector<std::vector<SongDetails> > PlaylistFactory::getSongLists()
{
  return songlists;
}
