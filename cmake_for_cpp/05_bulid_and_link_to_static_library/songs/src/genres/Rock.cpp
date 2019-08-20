#include "Rock.h"

Rock::Rock()
{
}

Rock::~Rock()
{
}

void Rock::setGenreCharacteristics()
{
  setBpm(defaultBpm);
  setDanceability(defaultDanceability);
  setLoudness(defaultLoudness);
}

void Rock::createSongsList()
{
}

void Rock::setBpm(uint32_t bpm_)
{
  bpm = bpm_;
}

void Rock::setDanceability(Danceability_t danceability_)
{
  danceability = danceability_;
}

void Rock::setLoudness(Loudness_t loudness_)
{
  loudness = loudness_;
}

uint32_t Rock::getBpm() const
{
  return bpm;
}

Danceability_t Rock::getDanceability() const
{
  return danceability;
}

Loudness_t Rock::getLoudness() const
{
  return loudness;
}
