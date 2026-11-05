#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001564c0
// Address: 0x1564c0 - 0x1564cc
void entry_001564c0_0x1564c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001564c0_0x1564c0");
#endif

    ctx->pc = 0x1564c0u;

    // 0x1564c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1564c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1564c4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1564c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1564c8: 0xfa210530  sqc2        $vf1, 0x530($s1)
    ctx->pc = 0x1564c8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1328), _mm_castps_si128(ctx->vu0_vf[1]));
    ctx->pc = 0x1564ccu;
}
