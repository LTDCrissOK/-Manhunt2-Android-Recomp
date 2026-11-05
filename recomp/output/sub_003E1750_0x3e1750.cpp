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

// Function: sub_003E1750
// Address: 0x3e1750 - 0x3e1778
void sub_003E1750_0x3e1750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1750_0x3e1750");
#endif

    switch (ctx->pc) {
        case 0x3e176cu: goto label_3e176c;
        default: break;
    }

    ctx->pc = 0x3e1750u;

    // 0x3e1750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e1750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e1754: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3e1754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3e1758: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e1758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e175c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3e175cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1760: 0x24422d38  addiu       $v0, $v0, 0x2D38
    ctx->pc = 0x3e1760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11576));
    // 0x3e1764: 0xc0a7622  jal         func_29D888
    ctx->pc = 0x3E1764u;
    SET_GPR_U32(ctx, 31, 0x3E176Cu);
    ctx->pc = 0x3E1768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1764u;
    // 0x3e1768: 0xac620278  sw          $v0, 0x278($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 632), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D888u, 0x3E1764u, 0x3E176Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E176Cu;
label_3e176c:
    // 0x3e176c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e176cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e1770: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1770u;
        // 0x3e1774: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1778u;
}
