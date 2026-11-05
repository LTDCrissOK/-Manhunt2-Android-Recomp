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

// Function: sub_001341B0
// Address: 0x1341b0 - 0x1341e0
void sub_001341B0_0x1341b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001341B0_0x1341b0");
#endif

    switch (ctx->pc) {
        case 0x1341c8u: goto label_1341c8;
        default: break;
    }

    ctx->pc = 0x1341b0u;

    // 0x1341b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1341b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1341b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1341b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1341b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1341b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1341bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1341bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1341c0: 0xc04d296  jal         func_134A58
    ctx->pc = 0x1341C0u;
    SET_GPR_U32(ctx, 31, 0x1341C8u);
    ctx->pc = 0x1341C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1341C0u;
    // 0x1341c4: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134A58u, 0x1341C0u, 0x1341C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1341C8u;
label_1341c8:
    // 0x1341c8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1341c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1341cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1341ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1341d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1341d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1341d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1341D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1341D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1341D4u;
        // 0x1341d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1341D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1341DCu;
    // 0x1341dc: 0x0  nop
    ctx->pc = 0x1341dcu;
    // NOP
    ctx->pc = 0x1341e0u;
}
