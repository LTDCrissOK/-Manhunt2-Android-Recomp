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

// Function: sub_001BECA8
// Address: 0x1beca8 - 0x1bece0
void sub_001BECA8_0x1beca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BECA8_0x1beca8");
#endif

    switch (ctx->pc) {
        case 0x1becd0u: goto label_1becd0;
        default: break;
    }

    ctx->pc = 0x1beca8u;

    // 0x1beca8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1beca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1becac: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1becacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1becb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1becb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1becb4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1becb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1becb8: 0x8ca30104  lw          $v1, 0x104($a1)
    ctx->pc = 0x1becb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x1becbc: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x1becbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1becc0: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x1becc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
    // 0x1becc4: 0xac460010  sw          $a2, 0x10($v0)
    ctx->pc = 0x1becc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 6));
    // 0x1becc8: 0xc06fb70  jal         func_1BEDC0
    ctx->pc = 0x1BECC8u;
    SET_GPR_U32(ctx, 31, 0x1BECD0u);
    ctx->pc = 0x1BECCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BECC8u;
    // 0x1beccc: 0x24e50070  addiu       $a1, $a3, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEDC0u, 0x1BECC8u, 0x1BECD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BECD0u;
label_1becd0:
    // 0x1becd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1becd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1becd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BECD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BECD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BECD4u;
        // 0x1becd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BECD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BECDCu;
    // 0x1becdc: 0x0  nop
    ctx->pc = 0x1becdcu;
    // NOP
    ctx->pc = 0x1bece0u;
}
