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

// Function: sub_003379B8
// Address: 0x3379b8 - 0x337a00
void sub_003379B8_0x3379b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003379B8_0x3379b8");
#endif

    switch (ctx->pc) {
        case 0x3379e0u: goto label_3379e0;
        default: break;
    }

    ctx->pc = 0x3379b8u;

    // 0x3379b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3379b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3379bc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3379bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3379c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3379c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3379c4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3379c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3379c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3379c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3379cc: 0x26040074  addiu       $a0, $s0, 0x74
    ctx->pc = 0x3379ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
    // 0x3379d0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x3379d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3379d4: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x3379d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x3379d8: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3379D8u;
    SET_GPR_U32(ctx, 31, 0x3379E0u);
    ctx->pc = 0x3379DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3379D8u;
    // 0x3379dc: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3379D8u, 0x3379E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3379E0u;
label_3379e0:
    // 0x3379e0: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x3379e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x3379e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3379e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3379e8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3379e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3379ec: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x3379ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x3379f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3379f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3379f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3379F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3379F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3379F4u;
        // 0x3379f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3379F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3379FCu;
    // 0x3379fc: 0x0  nop
    ctx->pc = 0x3379fcu;
    // NOP
    ctx->pc = 0x337a00u;
}
