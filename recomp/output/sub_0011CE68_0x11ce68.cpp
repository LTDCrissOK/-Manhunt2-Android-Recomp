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

// Function: sub_0011CE68
// Address: 0x11ce68 - 0x11cea0
void sub_0011CE68_0x11ce68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011CE68_0x11ce68");
#endif

    switch (ctx->pc) {
        case 0x11ce84u: goto label_11ce84;
        case 0x11ce90u: goto label_11ce90;
        default: break;
    }

    ctx->pc = 0x11ce68u;

    // 0x11ce68: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x11ce68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x11ce6c: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x11ce6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x11ce70: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11ce70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ce74: 0xffbf0118  sd          $ra, 0x118($sp)
    ctx->pc = 0x11ce74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 31));
    // 0x11ce78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11ce78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ce7c: 0xc09e062  jal         func_278188
    ctx->pc = 0x11CE7Cu;
    SET_GPR_U32(ctx, 31, 0x11CE84u);
    ctx->pc = 0x11CE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CE7Cu;
    // 0x11ce80: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278188u, 0x11CE7Cu, 0x11CE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CE84u;
label_11ce84:
    // 0x11ce84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ce84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ce88: 0xc04767c  jal         func_11D9F0
    ctx->pc = 0x11CE88u;
    SET_GPR_U32(ctx, 31, 0x11CE90u);
    ctx->pc = 0x11CE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CE88u;
    // 0x11ce8c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D9F0u, 0x11CE88u, 0x11CE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CE90u;
label_11ce90:
    // 0x11ce90: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x11ce90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x11ce94: 0xdfbf0118  ld          $ra, 0x118($sp)
    ctx->pc = 0x11ce94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x11ce98: 0x3e00008  jr          $ra
    ctx->pc = 0x11CE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CE98u;
        // 0x11ce9c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CE98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CEA0u;
}
