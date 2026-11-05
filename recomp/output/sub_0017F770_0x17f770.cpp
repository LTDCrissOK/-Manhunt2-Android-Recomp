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

// Function: sub_0017F770
// Address: 0x17f770 - 0x17f7e0
void sub_0017F770_0x17f770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F770_0x17f770");
#endif

    switch (ctx->pc) {
        case 0x17f7b0u: goto label_17f7b0;
        case 0x17f7bcu: goto label_17f7bc;
        case 0x17f7ccu: goto label_17f7cc;
        default: break;
    }

    ctx->pc = 0x17f770u;

    // 0x17f770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17f770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17f774: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17f774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17f778: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x17f778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x17f77c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17f77cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f780: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17f780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17f784: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F784u;
    {
        const bool branch_taken_0x17f784 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x17F788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F784u;
        // 0x17f788: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f784) {
            ctx->pc = 0x17F798u;
            goto label_17f798;
        }
    }
    ctx->pc = 0x17F78Cu;
    // 0x17f78c: 0xae20041c  sw          $zero, 0x41C($s1)
    ctx->pc = 0x17f78cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1052), GPR_U32(ctx, 0));
    // 0x17f790: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x17F790u;
    {
        const bool branch_taken_0x17f790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F790u;
        // 0x17f794: 0xae200418  sw          $zero, 0x418($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1048), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f790) {
            ctx->pc = 0x17F7CCu;
            goto label_17f7cc;
        }
    }
    ctx->pc = 0x17F798u;
label_17f798:
    // 0x17f798: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17f798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17f79c: 0xae20041c  sw          $zero, 0x41C($s1)
    ctx->pc = 0x17f79cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1052), GPR_U32(ctx, 0));
    // 0x17f7a0: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x17F7A0u;
    {
        const bool branch_taken_0x17f7a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F7A0u;
        // 0x17f7a4: 0xae220418  sw          $v0, 0x418($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1048), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f7a0) {
            ctx->pc = 0x17F7CCu;
            goto label_17f7cc;
        }
    }
    ctx->pc = 0x17F7A8u;
    // 0x17f7a8: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x17F7A8u;
    SET_GPR_U32(ctx, 31, 0x17F7B0u);
    ctx->pc = 0x17F7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F7A8u;
    // 0x17f7ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x17F7A8u, 0x17F7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F7B0u;
label_17f7b0:
    // 0x17f7b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17f7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f7b4: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x17F7B4u;
    SET_GPR_U32(ctx, 31, 0x17F7BCu);
    ctx->pc = 0x17F7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F7B4u;
    // 0x17f7b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x17F7B4u, 0x17F7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F7BCu;
label_17f7bc:
    // 0x17f7bc: 0xae22041c  sw          $v0, 0x41C($s1)
    ctx->pc = 0x17f7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1052), GPR_U32(ctx, 2));
    // 0x17f7c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17f7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f7c4: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x17F7C4u;
    SET_GPR_U32(ctx, 31, 0x17F7CCu);
    ctx->pc = 0x17F7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F7C4u;
    // 0x17f7c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x17F7C4u, 0x17F7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F7CCu;
label_17f7cc:
    // 0x17f7cc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17f7ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f7d0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x17f7d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17f7d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17f7d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x17F7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F7D8u;
        // 0x17f7dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F7E0u;
}
