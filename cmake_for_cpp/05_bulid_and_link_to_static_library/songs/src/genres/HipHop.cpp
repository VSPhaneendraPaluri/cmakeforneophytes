#include "HipHop.h"

HipHop::HipHop()
{
}

HipHop::~HipHop()
{
}

void HipHop::setGenreCharacteristics()
{
  setBpm(defaultBpm);
  setDanceability(defaultDanceability);
  setLoudness(defaultLoudness);
}

void HipHop::createSongsList()
{
}

void HipHop::setBpm(uint32_t bpm_)
{
  bpm = bpm_;
}

void HipHop::setDanceability(Danceability_t danceability_)
{
  danceability = danceability_;
}

void HipHop::setLoudness(Loudness_t loudness_)
{
  loudness = loudness_;
}

uint32_t HipHop::getBpm() const
{
  return bpm;
}

Danceability_t HipHop::getDanceability() const
{
  return danceability;
}

Loudness_t HipHop::getLoudness() const
{
  return loudness;
}
