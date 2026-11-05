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

// Function: sub_001A4850
// Address: 0x1a4850 - 0x1a4878
void sub_001A4850_0x1a4850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4850_0x1a4850");
#endif

    switch (ctx->pc) {
        case 0x1a4868u: goto label_1a4868;
        default: break;
    }

    ctx->pc = 0x1a4850u;

    // 0x1a4850: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a4854: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a4858: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1a4858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a485c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1a485cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1a4860: 0xc0f7200  jal         func_3DC800
    ctx->pc = 0x1A4860u;
    SET_GPR_U32(ctx, 31, 0x1A4868u);
    ctx->pc = 0x1A4864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4860u;
    // 0x1a4864: 0x2484f020  addiu       $a0, $a0, -0xFE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC800u, 0x1A4860u, 0x1A4868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4868u;
label_1a4868:
    // 0x1a4868: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a486c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A486Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A486Cu;
        // 0x1a4870: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A486Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4874u;
    // 0x1a4874: 0x0  nop
    ctx->pc = 0x1a4874u;
    // NOP
    ctx->pc = 0x1a4878u;
}
