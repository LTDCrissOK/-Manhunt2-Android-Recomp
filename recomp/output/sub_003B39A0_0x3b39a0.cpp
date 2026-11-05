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

// Function: sub_003B39A0
// Address: 0x3b39a0 - 0x3b39d0
void sub_003B39A0_0x3b39a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B39A0_0x3b39a0");
#endif

    switch (ctx->pc) {
        case 0x3b39b4u: goto label_3b39b4;
        case 0x3b39bcu: goto label_3b39bc;
        default: break;
    }

    ctx->pc = 0x3b39a0u;

    // 0x3b39a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b39a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b39a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b39a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b39a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3b39a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3b39ac: 0xc0ecdba  jal         func_3B36E8
    ctx->pc = 0x3B39ACu;
    SET_GPR_U32(ctx, 31, 0x3B39B4u);
    ctx->pc = 0x3B39B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B39ACu;
    // 0x3b39b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B36E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B36E8u, 0x3B39ACu, 0x3B39B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B39B4u;
label_3b39b4:
    // 0x3b39b4: 0xc0ece74  jal         func_3B39D0
    ctx->pc = 0x3B39B4u;
    SET_GPR_U32(ctx, 31, 0x3B39BCu);
    ctx->pc = 0x3B39B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B39B4u;
    // 0x3b39b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B39D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B39D0u, 0x3B39B4u, 0x3B39BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B39BCu;
label_3b39bc:
    // 0x3b39bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b39bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b39c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3b39c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b39c4: 0x80ecdc0  j           func_3B3700
    ctx->pc = 0x3B39C4u;
    ctx->pc = 0x3B39C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B39C4u;
    // 0x3b39c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3700u;
    sub_003B3700_0x3b3700(rdram, ctx, runtime); return;
    ctx->pc = 0x3B39CCu;
    // 0x3b39cc: 0x0  nop
    ctx->pc = 0x3b39ccu;
    // NOP
    ctx->pc = 0x3b39d0u;
}
