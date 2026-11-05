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

// Function: sub_00209168
// Address: 0x209168 - 0x209190
void sub_00209168_0x209168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209168_0x209168");
#endif

    switch (ctx->pc) {
        case 0x20917cu: goto label_20917c;
        default: break;
    }

    ctx->pc = 0x209168u;

    // 0x209168: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x209168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20916c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20916cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x209170: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x209170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x209174: 0xc08246e  jal         func_2091B8
    ctx->pc = 0x209174u;
    SET_GPR_U32(ctx, 31, 0x20917Cu);
    ctx->pc = 0x209178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209174u;
    // 0x209178: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2091B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2091B8u, 0x209174u, 0x20917Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20917Cu;
label_20917c:
    // 0x20917c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x20917cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209180: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x209180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x209184: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209184u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209188: 0x3e00008  jr          $ra
    ctx->pc = 0x209188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20918Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209188u;
        // 0x20918c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209190u;
}
