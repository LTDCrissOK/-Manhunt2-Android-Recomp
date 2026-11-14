#pragma once
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif
void mh_gs_reset(void);
void mh_gs_window(void *window);
void mh_gs_gif(int path, const uint8_t *data, uint32_t bytes);
void mh_gs_write(uint32_t address, uint64_t value, unsigned bytes);
void mh_gs_read_fifo(uint8_t *dst, uint32_t bytes);
void mh_gs_frame(uint64_t csr, uint64_t smode2);
#ifdef __cplusplus
}
#endif
