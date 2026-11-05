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

// Function: sub_003DC860
// Address: 0x3dc860 - 0x3dc888
void sub_003DC860_0x3dc860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC860_0x3dc860");
#endif

    switch (ctx->pc) {
        case 0x3dc878u: goto label_3dc878;
        default: break;
    }

    ctx->pc = 0x3dc860u;

    // 0x3dc860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dc860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dc864: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3dc864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc868: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dc868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3dc86c: 0xac460010  sw          $a2, 0x10($v0)
    ctx->pc = 0x3dc86cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 6));
    // 0x3dc870: 0xc06fb70  jal         func_1BEDC0
    ctx->pc = 0x3DC870u;
    SET_GPR_U32(ctx, 31, 0x3DC878u);
    ctx->pc = 0x3DC874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC870u;
    // 0x3dc874: 0xac470014  sw          $a3, 0x14($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEDC0u, 0x3DC870u, 0x3DC878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC878u;
label_3dc878:
    // 0x3dc878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dc878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dc87c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC87Cu;
        // 0x3dc880: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC87Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC884u;
    // 0x3dc884: 0x0  nop
    ctx->pc = 0x3dc884u;
    // NOP
    ctx->pc = 0x3dc888u;
}
