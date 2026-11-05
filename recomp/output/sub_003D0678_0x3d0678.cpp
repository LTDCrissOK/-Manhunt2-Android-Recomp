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

// Function: sub_003D0678
// Address: 0x3d0678 - 0x3d0688
void sub_003D0678_0x3d0678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D0678_0x3d0678");
#endif

    ctx->pc = 0x3d0678u;

    // 0x3d0678: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3d0678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d067c: 0x3c04b000  lui         $a0, 0xB000
    ctx->pc = 0x3d067cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45056 << 16));
    // 0x3d0680: 0x80f4182  j           func_3D0608
    ctx->pc = 0x3D0680u;
    ctx->pc = 0x3D0684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0680u;
    // 0x3d0684: 0x34841000  ori         $a0, $a0, 0x1000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4096);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0608u;
    entry_3d0608_0x3d0678(rdram, ctx, runtime); return;
    ctx->pc = 0x3D0688u;
}
