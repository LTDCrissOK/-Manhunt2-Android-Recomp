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

// Function: sub_001247F0
// Address: 0x1247f0 - 0x124898
void sub_001247F0_0x1247f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001247F0_0x1247f0");
#endif

    switch (ctx->pc) {
        case 0x124820u: goto label_124820;
        case 0x124838u: goto label_124838;
        case 0x12484cu: goto label_12484c;
        case 0x124864u: goto label_124864;
        case 0x124870u: goto label_124870;
        default: break;
    }

    ctx->pc = 0x1247f0u;

    // 0x1247f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1247f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1247f4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1247f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1247f8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1247f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1247fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1247fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124800: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x124800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x124804: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x124804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124808: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x124808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x12480c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x12480cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124810: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x124810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x124814: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x124814u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124818: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x124818u;
    SET_GPR_U32(ctx, 31, 0x124820u);
    ctx->pc = 0x12481Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124818u;
    // 0x12481c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x124818u, 0x124820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124820u;
label_124820:
    // 0x124820: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x124820u;
    {
        const bool branch_taken_0x124820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124820u;
        // 0x124824: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124820) {
            ctx->pc = 0x12487Cu;
            goto label_12487c;
        }
    }
    ctx->pc = 0x124828u;
    // 0x124828: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x124828u;
    {
        const bool branch_taken_0x124828 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124828u;
        // 0x12482c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124828) {
            ctx->pc = 0x124878u;
            goto label_124878;
        }
    }
    ctx->pc = 0x124830u;
    // 0x124830: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x124830u;
    SET_GPR_U32(ctx, 31, 0x124838u);
    ctx->pc = 0x124834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124830u;
    // 0x124834: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x124830u, 0x124838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124838u;
label_124838:
    // 0x124838: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x124838u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
    // 0x12483c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12483cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124840: 0x261087a0  addiu       $s0, $s0, -0x7860
    ctx->pc = 0x124840u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936480));
    // 0x124844: 0xc046860  jal         func_11A180
    ctx->pc = 0x124844u;
    SET_GPR_U32(ctx, 31, 0x12484Cu);
    ctx->pc = 0x124848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124844u;
    // 0x124848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A180u, 0x124844u, 0x12484Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12484Cu;
label_12484c:
    // 0x12484c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12484cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124850: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x124850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124854: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x124854u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124858: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x124858u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12485c: 0xc046642  jal         func_119908
    ctx->pc = 0x12485Cu;
    SET_GPR_U32(ctx, 31, 0x124864u);
    ctx->pc = 0x124860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12485Cu;
    // 0x124860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x12485Cu, 0x124864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124864u;
label_124864:
    // 0x124864: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x124864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124868: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x124868u;
    SET_GPR_U32(ctx, 31, 0x124870u);
    ctx->pc = 0x12486Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124868u;
    // 0x12486c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x124868u, 0x124870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124870u;
label_124870:
    // 0x124870: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x124870u;
    {
        const bool branch_taken_0x124870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124870u;
        // 0x124874: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124870) {
            ctx->pc = 0x12487Cu;
            goto label_12487c;
        }
    }
    ctx->pc = 0x124878u;
label_124878:
    // 0x124878: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x124878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12487c:
    // 0x12487c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x12487cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124880: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x124880u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x124884: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x124884u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124888: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x124888u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12488c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12488cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x124890: 0x3e00008  jr          $ra
    ctx->pc = 0x124890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124890u;
        // 0x124894: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124898u;
}
