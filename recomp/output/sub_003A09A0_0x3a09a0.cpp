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

// Function: sub_003A09A0
// Address: 0x3a09a0 - 0x3a09f0
void sub_003A09A0_0x3a09a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A09A0_0x3a09a0");
#endif

    switch (ctx->pc) {
        case 0x3a09b0u: goto label_3a09b0;
        case 0x3a09e0u: goto label_3a09e0;
        default: break;
    }

    ctx->pc = 0x3a09a0u;

    // 0x3a09a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a09a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a09a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a09a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a09a8: 0xc0ecbe4  jal         func_3B2F90
    ctx->pc = 0x3A09A8u;
    SET_GPR_U32(ctx, 31, 0x3A09B0u);
    ctx->pc = 0x3B2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2F90u, 0x3A09A8u, 0x3A09B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A09B0u;
label_3a09b0:
    // 0x3a09b0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x3a09b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x3a09b4: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x3a09b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x3a09b8: 0x2463b7f0  addiu       $v1, $v1, -0x4810
    ctx->pc = 0x3a09b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948848));
    // 0x3a09bc: 0x2484b7f8  addiu       $a0, $a0, -0x4808
    ctx->pc = 0x3a09bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948856));
    // 0x3a09c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3a09c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x40B7F0u));
    // 0x3a09c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a09c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a09c8: 0x24066590  addiu       $a2, $zero, 0x6590
    ctx->pc = 0x3a09c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26000));
    // 0x3a09cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a09ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3a09d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A09D0u;
    {
        const bool branch_taken_0x3a09d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A09D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A09D0u;
        // 0x3a09d4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a09d0) {
            ctx->pc = 0x3A09E0u;
            goto label_3a09e0;
        }
    }
    ctx->pc = 0x3A09D8u;
    // 0x3a09d8: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3A09D8u;
    SET_GPR_U32(ctx, 31, 0x3A09E0u);
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3A09D8u, 0x3A09E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A09E0u;
label_3a09e0:
    // 0x3a09e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a09e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a09e4: 0x80ecbea  j           func_3B2FA8
    ctx->pc = 0x3A09E4u;
    ctx->pc = 0x3A09E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A09E4u;
    // 0x3a09e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FA8u;
    sub_003B2FA8_0x3b2fa8(rdram, ctx, runtime); return;
    ctx->pc = 0x3A09ECu;
    // 0x3a09ec: 0x0  nop
    ctx->pc = 0x3a09ecu;
    // NOP
    ctx->pc = 0x3a09f0u;
}
