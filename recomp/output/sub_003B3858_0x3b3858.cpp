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

// Function: sub_003B3858
// Address: 0x3b3858 - 0x3b38a0
void sub_003B3858_0x3b3858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B3858_0x3b3858");
#endif

    switch (ctx->pc) {
        case 0x3b3874u: goto label_3b3874;
        case 0x3b3880u: goto label_3b3880;
        case 0x3b3888u: goto label_3b3888;
        default: break;
    }

    ctx->pc = 0x3b3858u;

    // 0x3b3858: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b3858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b385c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b385cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b3860: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b3860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3864: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b3864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b3868: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b3868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b386c: 0xc0ecdba  jal         func_3B36E8
    ctx->pc = 0x3B386Cu;
    SET_GPR_U32(ctx, 31, 0x3B3874u);
    ctx->pc = 0x3B3870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B386Cu;
    // 0x3b3870: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B36E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B36E8u, 0x3B386Cu, 0x3B3874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3874u;
label_3b3874:
    // 0x3b3874: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b3874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3878: 0xc0ece28  jal         func_3B38A0
    ctx->pc = 0x3B3878u;
    SET_GPR_U32(ctx, 31, 0x3B3880u);
    ctx->pc = 0x3B387Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3878u;
    // 0x3b387c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B38A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B38A0u, 0x3B3878u, 0x3B3880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3880u;
label_3b3880:
    // 0x3b3880: 0xc0ecdc0  jal         func_3B3700
    ctx->pc = 0x3B3880u;
    SET_GPR_U32(ctx, 31, 0x3B3888u);
    ctx->pc = 0x3B3884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3880u;
    // 0x3b3884: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3700u, 0x3B3880u, 0x3B3888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3888u;
label_3b3888:
    // 0x3b3888: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b3888u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b388c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b388cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3890: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b3890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b3894: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b3894u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b3898: 0x3e00008  jr          $ra
    ctx->pc = 0x3B3898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3898u;
        // 0x3b389c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B38A0u;
}
