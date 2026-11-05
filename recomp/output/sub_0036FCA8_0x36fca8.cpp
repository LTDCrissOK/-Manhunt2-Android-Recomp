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

// Function: sub_0036FCA8
// Address: 0x36fca8 - 0x36fcd8
void sub_0036FCA8_0x36fca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036FCA8_0x36fca8");
#endif

    switch (ctx->pc) {
        case 0x36fcbcu: goto label_36fcbc;
        case 0x36fcc8u: goto label_36fcc8;
        default: break;
    }

    ctx->pc = 0x36fca8u;

    // 0x36fca8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36fca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36fcac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36fcacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36fcb0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36fcb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36fcb4: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x36FCB4u;
    SET_GPR_U32(ctx, 31, 0x36FCBCu);
    ctx->pc = 0x36FCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FCB4u;
    // 0x36fcb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x36FCB4u, 0x36FCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FCBCu;
label_36fcbc:
    // 0x36fcbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36fcbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fcc0: 0xc0dbf36  jal         func_36FCD8
    ctx->pc = 0x36FCC0u;
    SET_GPR_U32(ctx, 31, 0x36FCC8u);
    ctx->pc = 0x36FCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FCC0u;
    // 0x36fcc4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FCD8u, 0x36FCC0u, 0x36FCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FCC8u;
label_36fcc8:
    // 0x36fcc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36fcc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36fccc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36fcccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36fcd0: 0x3e00008  jr          $ra
    ctx->pc = 0x36FCD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36FCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FCD0u;
        // 0x36fcd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FCD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36FCD8u;
}
