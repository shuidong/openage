// Copyright 2014-2016 the openage authors. See copying.md for legal info.

#pragma once

#include "../gamedata/sound_file.gen.h"

namespace openage {
namespace audio {


enum class loader_policy_t {
	IN_MEMORY,
	DYNAMIC
};


const char *loader_policy_t_to_str(loader_policy_t val);
std::ostream &operator <<(std::ostream &os, loader_policy_t val);


loader_policy_t from_loader_policy(const gamedata::audio_loader_policy_t loader_policy);


}} // openage::audio
