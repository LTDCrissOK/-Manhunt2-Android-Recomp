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

// Function: sub_001FA170
// Address: 0x1fa170 - 0x1fa1c0
void sub_001FA170_0x1fa170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA170_0x1fa170");
#endif

    switch (ctx->pc) {
        case 0x1fa1b0u: goto label_1fa1b0;
        default: break;
    }

    ctx->pc = 0x1fa170u;

    // 0x1fa170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fa170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fa174: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1fa174u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa178: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fa178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fa17c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1fa17cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fa180: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1fa180u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1fa184: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1fa184u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1fa188: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x1fa188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x1fa18c: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x1fa18cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x1fa190: 0x7c400020  sq          $zero, 0x20($v0)
    ctx->pc = 0x1fa190u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 0));
    // 0x1fa194: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1fa194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1fa198: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fa198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa19c: 0xa043003a  sb          $v1, 0x3A($v0)
    ctx->pc = 0x1fa19cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 58), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fa1a0: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x1fa1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x1fa1a4: 0xa0400038  sb          $zero, 0x38($v0)
    ctx->pc = 0x1fa1a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 56), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fa1a8: 0xc07e870  jal         func_1FA1C0
    ctx->pc = 0x1FA1A8u;
    SET_GPR_U32(ctx, 31, 0x1FA1B0u);
    ctx->pc = 0x1FA1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA1A8u;
    // 0x1fa1ac: 0xa0400039  sb          $zero, 0x39($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 57), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA1C0u, 0x1FA1A8u, 0x1FA1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA1B0u;
label_1fa1b0:
    // 0x1fa1b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fa1b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa1b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA1B4u;
        // 0x1fa1b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA1B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA1BCu;
    // 0x1fa1bc: 0x0  nop
    ctx->pc = 0x1fa1bcu;
    // NOP
    ctx->pc = 0x1fa1c0u;
}
