#include "heart-rate-reader.h"

HeartRateReader heartRateReader;

OBS_DECLARE_MODULE()
OBS_MODULE_USE_DEFAULT_LOCALE("bluetooth-heart-rate-plugin", "en-US")

bool obs_module_load(void)
{
	return true;
}

void obs_module_unload(void)
{
}