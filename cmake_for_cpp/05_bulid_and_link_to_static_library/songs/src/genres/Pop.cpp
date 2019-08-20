#include "Pop.h"

Pop::Pop()
{
}

Pop::~Pop()
{
}

void Pop::setGenreCharacteristics()
{
  setBpm(defaultBpm);
  setDanceability(defaultDanceability);
  setLoudness(defaultLoudness);
}

void Pop::createSongsList()
{
}

void Pop::setBpm(uint32_t bpm_)
{
  bpm = bpm_;
}

void Pop::setDanceability(Danceability_t danceability_)
{
  danceability = danceability_;
}

void Pop::setLoudness(Loudness_t loudness_)
{
  loudness = loudness_;
}

uint32_t Pop::getBpm() const
{
  return bpm;
}

Danceability_t Pop::getDanceability() const
{
  return danceability;
}

Loudness_t Pop::getLoudness() const
{
  return loudness;
}
