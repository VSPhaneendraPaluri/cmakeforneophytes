#include "HeavyMetal.h"

HeavyMetal::HeavyMetal()
{
}

HeavyMetal::~HeavyMetal()
{
}

void HeavyMetal::setGenreCharacteristics()
{
  setBpm(defaultBpm);
  setDanceability(defaultDanceability);
  setLoudness(defaultLoudness);
}

void HeavyMetal::createSongsList()
{
}

void HeavyMetal::setBpm(uint32_t bpm_)
{
  bpm = bpm_;
}

void HeavyMetal::setDanceability(Danceability_t danceability_)
{
  danceability = danceability_;
}

void HeavyMetal::setLoudness(Loudness_t loudness_)
{
  loudness = loudness_;
}

uint32_t HeavyMetal::getBpm() const
{
  return bpm;
}

Danceability_t HeavyMetal::getDanceability() const
{
  return danceability;
}

Loudness_t HeavyMetal::getLoudness() const
{
  return loudness;
}
