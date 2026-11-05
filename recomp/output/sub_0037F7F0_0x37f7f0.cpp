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

// Function: sub_0037F7F0
// Address: 0x37f7f0 - 0x37f828
void sub_0037F7F0_0x37f7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037F7F0_0x37f7f0");
#endif

    switch (ctx->pc) {
        case 0x37f804u: goto label_37f804;
        case 0x37f80cu: goto label_37f80c;
        case 0x37f818u: goto label_37f818;
        default: break;
    }

    ctx->pc = 0x37f7f0u;

    // 0x37f7f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37f7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37f7f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x37f7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x37f7f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x37f7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x37f7fc: 0xc0e01ee  jal         func_3807B8
    ctx->pc = 0x37F7FCu;
    SET_GPR_U32(ctx, 31, 0x37F804u);
    ctx->pc = 0x37F800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F7FCu;
    // 0x37f800: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3807B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3807B8u, 0x37F7FCu, 0x37F804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F804u;
label_37f804:
    // 0x37f804: 0xc0dedae  jal         func_37B6B8
    ctx->pc = 0x37F804u;
    SET_GPR_U32(ctx, 31, 0x37F80Cu);
    ctx->pc = 0x37F808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F804u;
    // 0x37f808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B6B8u, 0x37F804u, 0x37F80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F80Cu;
label_37f80c:
    // 0x37f80c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x37f80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f810: 0xc0e01fe  jal         func_3807F8
    ctx->pc = 0x37F810u;
    SET_GPR_U32(ctx, 31, 0x37F818u);
    ctx->pc = 0x37F814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F810u;
    // 0x37f814: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3807F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3807F8u, 0x37F810u, 0x37F818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F818u;
label_37f818:
    // 0x37f818: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x37f818u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37f81c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x37f81cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37f820: 0x3e00008  jr          $ra
    ctx->pc = 0x37F820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37F824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F820u;
        // 0x37f824: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37F820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37F828u;
}
