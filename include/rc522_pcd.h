#pragma once

#include "rc522_types.h"

#ifdef __cplusplus
extern "C" {
#endif

esp_err_t rc522_pcd_set_rx_gain(const rc522_handle_t rc522, rc522_pcd_rx_gain_t gain);

#ifdef __cplusplus
}
#endif
