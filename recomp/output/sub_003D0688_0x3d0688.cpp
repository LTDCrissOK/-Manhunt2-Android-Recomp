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

// Function: sub_003D0688
// Address: 0x3d0688 - 0x3d0698
void sub_003D0688_0x3d0688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D0688_0x3d0688");
#endif

    ctx->pc = 0x3d0688u;

    // 0x3d0688: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3d0688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d068c: 0x3c04b000  lui         $a0, 0xB000
    ctx->pc = 0x3d068cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45056 << 16));
    // 0x3d0690: 0x80f4182  j           func_3D0608
    ctx->pc = 0x3D0690u;
    ctx->pc = 0x3D0694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0690u;
    // 0x3d0694: 0x34841010  ori         $a0, $a0, 0x1010 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4112);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0608u;
    entry_3d0608_0x3d0678(rdram, ctx, runtime); return;
    ctx->pc = 0x3D0698u;
}
