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

// Function: sub_00396998
// Address: 0x396998 - 0x3969c0
void sub_00396998_0x396998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396998_0x396998");
#endif

    ctx->pc = 0x396998u;

    // 0x396998: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x396998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39699c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x39699cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3969a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3969a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3969a4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3969a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3969a8: 0x2442196c  addiu       $v0, $v0, 0x196C
    ctx->pc = 0x3969a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6508));
    // 0x3969ac: 0x8c6518e8  lw          $a1, 0x18E8($v1)
    ctx->pc = 0x3969acu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4018E8u));
    // 0x3969b0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3969b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x40196Cu));
    // 0x3969b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3969b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3969b8: 0x80e5a2c  j           func_3968B0
    ctx->pc = 0x3969B8u;
    ctx->pc = 0x3969BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3969B8u;
    // 0x3969bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3968B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3968B0u, 0x3969B8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3969C0u;
}
