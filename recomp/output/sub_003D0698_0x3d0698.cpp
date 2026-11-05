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

// Function: sub_003D0698
// Address: 0x3d0698 - 0x3d06a8
void sub_003D0698_0x3d0698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D0698_0x3d0698");
#endif

    ctx->pc = 0x3d0698u;

    // 0x3d0698: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3d0698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d069c: 0x3c04b000  lui         $a0, 0xB000
    ctx->pc = 0x3d069cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45056 << 16));
    // 0x3d06a0: 0x80f4182  j           func_3D0608
    ctx->pc = 0x3D06A0u;
    ctx->pc = 0x3D06A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D06A0u;
    // 0x3d06a4: 0x34841020  ori         $a0, $a0, 0x1020 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0608u;
    entry_3d0608_0x3d0678(rdram, ctx, runtime); return;
    ctx->pc = 0x3D06A8u;
}
