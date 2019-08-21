#pragma once

#include "SongCharacteristics.h"
#include "SongDetails.h"

#include <vector>

class Classical : public SongCharacteristics
{
  public:
    explicit Classical();
    ~Classical();

    void setGenreCharacteristics();

  protected:
    void setBpm (uint32_t bpm_) final;
    void setDanceability (Danceability_t danceability_) final;
    void setLoudness (Loudness_t loudness_) final;

    virtual uint32_t getBpm() const final;
    virtual Danceability_t getDanceability() const final;
    virtual Loudness_t getLoudness() const final;

  private:
    uint32_t bpm {0};
    Danceability_t danceability {Danceability_t::LOW};
    Loudness_t loudness {Loudness_t::LOW};

    static constexpr uint32_t defaultBpm {40};
    static constexpr Danceability_t defaultDanceability {Danceability_t::LOW};
    static constexpr Loudness_t defaultLoudness {Loudness_t::LOW};
};
