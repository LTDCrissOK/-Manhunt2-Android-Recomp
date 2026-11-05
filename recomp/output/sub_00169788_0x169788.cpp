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

// Function: sub_00169788
// Address: 0x169788 - 0x1697b8
void sub_00169788_0x169788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169788_0x169788");
#endif

    switch (ctx->pc) {
        case 0x16979cu: goto label_16979c;
        default: break;
    }

    ctx->pc = 0x169788u;

    // 0x169788: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x169788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16978c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16978cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x169790: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x169790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x169794: 0xc05a64c  jal         func_169930
    ctx->pc = 0x169794u;
    SET_GPR_U32(ctx, 31, 0x16979Cu);
    ctx->pc = 0x169798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169794u;
    // 0x169798: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169930u, 0x169794u, 0x16979Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16979Cu;
label_16979c:
    // 0x16979c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16979cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1697a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1697a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1697a4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1697a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1697a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1697a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1697ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1697ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1697B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1697ACu;
        // 0x1697b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1697ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1697B4u;
    // 0x1697b4: 0x0  nop
    ctx->pc = 0x1697b4u;
    // NOP
    ctx->pc = 0x1697b8u;
}
