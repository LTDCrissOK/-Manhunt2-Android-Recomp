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

// Function: sub_001BED90
// Address: 0x1bed90 - 0x1bedc0
void sub_001BED90_0x1bed90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BED90_0x1bed90");
#endif

    switch (ctx->pc) {
        case 0x1bedb4u: goto label_1bedb4;
        default: break;
    }

    ctx->pc = 0x1bed90u;

    // 0x1bed90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bed90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bed94: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1bed94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bed98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bed98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bed9c: 0x8ca30104  lw          $v1, 0x104($a1)
    ctx->pc = 0x1bed9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x1beda0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1beda0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1beda4: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x1beda4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
    // 0x1beda8: 0x24c50070  addiu       $a1, $a2, 0x70
    ctx->pc = 0x1beda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x1bedac: 0xc06fb70  jal         func_1BEDC0
    ctx->pc = 0x1BEDACu;
    SET_GPR_U32(ctx, 31, 0x1BEDB4u);
    ctx->pc = 0x1BEDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEDACu;
    // 0x1bedb0: 0xac400010  sw          $zero, 0x10($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEDC0u, 0x1BEDACu, 0x1BEDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEDB4u;
label_1bedb4:
    // 0x1bedb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bedb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bedb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEDB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEDB8u;
        // 0x1bedbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEDB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEDC0u;
}
