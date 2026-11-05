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

// Function: sub_003AA860
// Address: 0x3aa860 - 0x3aa8c8
void sub_003AA860_0x3aa860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA860_0x3aa860");
#endif

    switch (ctx->pc) {
        case 0x3aa88cu: goto label_3aa88c;
        case 0x3aa8a0u: goto label_3aa8a0;
        case 0x3aa8a8u: goto label_3aa8a8;
        default: break;
    }

    ctx->pc = 0x3aa860u;

    // 0x3aa860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3aa860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3aa864: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3aa864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3aa868: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3aa868u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa86c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3aa86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3aa870: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3aa870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa874: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3aa874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3aa878: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3aa878u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa87c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3aa87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3aa880: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3aa880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3aa884: 0xc0ea7d8  jal         func_3A9F60
    ctx->pc = 0x3AA884u;
    SET_GPR_U32(ctx, 31, 0x3AA88Cu);
    ctx->pc = 0x3AA888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA884u;
    // 0x3aa888: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F60u, 0x3AA884u, 0x3AA88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA88Cu;
label_3aa88c:
    // 0x3aa88c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aa88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa890: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3aa890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa894: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3aa894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa898: 0xc0eaa32  jal         func_3AA8C8
    ctx->pc = 0x3AA898u;
    SET_GPR_U32(ctx, 31, 0x3AA8A0u);
    ctx->pc = 0x3AA89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA898u;
    // 0x3aa89c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AA8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA8C8u, 0x3AA898u, 0x3AA8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA8A0u;
label_3aa8a0:
    // 0x3aa8a0: 0xc0ea7de  jal         func_3A9F78
    ctx->pc = 0x3AA8A0u;
    SET_GPR_U32(ctx, 31, 0x3AA8A8u);
    ctx->pc = 0x3AA8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA8A0u;
    // 0x3aa8a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F78u, 0x3AA8A0u, 0x3AA8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA8A8u;
label_3aa8a8:
    // 0x3aa8a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3aa8a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3aa8ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3aa8acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa8b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3aa8b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3aa8b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3aa8b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aa8b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3aa8b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3aa8bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3aa8bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3aa8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3AA8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AA8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA8C0u;
        // 0x3aa8c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA8C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AA8C8u;
}
