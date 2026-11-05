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

// Function: sub_003A3760
// Address: 0x3a3760 - 0x3a37d8
void sub_003A3760_0x3a3760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3760_0x3a3760");
#endif

    switch (ctx->pc) {
        case 0x3a3784u: goto label_3a3784;
        case 0x3a3794u: goto label_3a3794;
        case 0x3a37b0u: goto label_3a37b0;
        case 0x3a37b8u: goto label_3a37b8;
        default: break;
    }

    ctx->pc = 0x3a3760u;

    // 0x3a3760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a3760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a3764: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a3764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a3768: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a3768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a376c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a376cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a3770: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3a3770u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3774: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a3774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a3778: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3a3778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3a377c: 0xc0e8d3e  jal         func_3A34F8
    ctx->pc = 0x3A377Cu;
    SET_GPR_U32(ctx, 31, 0x3A3784u);
    ctx->pc = 0x3A3780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A377Cu;
    // 0x3a3780: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A34F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A34F8u, 0x3A377Cu, 0x3A3784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3784u;
label_3a3784:
    // 0x3a3784: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a3784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3788: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a3788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a378c: 0xc0f3a04  jal         func_3CE810
    ctx->pc = 0x3A378Cu;
    SET_GPR_U32(ctx, 31, 0x3A3794u);
    ctx->pc = 0x3A3790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A378Cu;
    // 0x3a3790: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CE810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CE810u, 0x3A378Cu, 0x3A3794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3794u;
label_3a3794:
    // 0x3a3794: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a3794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a3798: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a3798u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a379c: 0x2484d5e0  addiu       $a0, $a0, -0x2A20
    ctx->pc = 0x3a379cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956512));
    // 0x3a37a0: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A37A0u;
    {
        const bool branch_taken_0x3a37a0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3A37A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A37A0u;
        // 0x3a37a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a37a0) {
            ctx->pc = 0x3A37B0u;
            goto label_3a37b0;
        }
    }
    ctx->pc = 0x3A37A8u;
    // 0x3a37a8: 0xc0f3050  jal         func_3CC140
    ctx->pc = 0x3A37A8u;
    SET_GPR_U32(ctx, 31, 0x3A37B0u);
    ctx->pc = 0x3CC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC140u, 0x3A37A8u, 0x3A37B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A37B0u;
label_3a37b0:
    // 0x3a37b0: 0xc0e8d4c  jal         func_3A3530
    ctx->pc = 0x3A37B0u;
    SET_GPR_U32(ctx, 31, 0x3A37B8u);
    ctx->pc = 0x3A3530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3530u, 0x3A37B0u, 0x3A37B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A37B8u;
label_3a37b8:
    // 0x3a37b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a37b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a37bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a37bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a37c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a37c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a37c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a37c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a37c8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3a37c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a37cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3A37CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A37D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A37CCu;
        // 0x3a37d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A37CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A37D4u;
    // 0x3a37d4: 0x0  nop
    ctx->pc = 0x3a37d4u;
    // NOP
    ctx->pc = 0x3a37d8u;
}
