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

// Function: sub_00362818
// Address: 0x362818 - 0x3628a0
void sub_00362818_0x362818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362818_0x362818");
#endif

    switch (ctx->pc) {
        case 0x362818u: goto label_362818;
        case 0x36281cu: goto label_36281c;
        case 0x362820u: goto label_362820;
        case 0x362824u: goto label_362824;
        case 0x362828u: goto label_362828;
        case 0x36282cu: goto label_36282c;
        case 0x362830u: goto label_362830;
        case 0x362834u: goto label_362834;
        case 0x362838u: goto label_362838;
        case 0x36283cu: goto label_36283c;
        case 0x362840u: goto label_362840;
        case 0x362844u: goto label_362844;
        case 0x362848u: goto label_362848;
        case 0x36284cu: goto label_36284c;
        case 0x362850u: goto label_362850;
        case 0x362854u: goto label_362854;
        case 0x362858u: goto label_362858;
        case 0x36285cu: goto label_36285c;
        case 0x362860u: goto label_362860;
        case 0x362864u: goto label_362864;
        case 0x362868u: goto label_362868;
        case 0x36286cu: goto label_36286c;
        case 0x362870u: goto label_362870;
        case 0x362874u: goto label_362874;
        case 0x362878u: goto label_362878;
        case 0x36287cu: goto label_36287c;
        case 0x362880u: goto label_362880;
        case 0x362884u: goto label_362884;
        case 0x362888u: goto label_362888;
        case 0x36288cu: goto label_36288c;
        case 0x362890u: goto label_362890;
        case 0x362894u: goto label_362894;
        case 0x362898u: goto label_362898;
        case 0x36289cu: goto label_36289c;
        default: break;
    }

    ctx->pc = 0x362818u;

label_362818:
    // 0x362818: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x362818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_36281c:
    // 0x36281c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36281cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_362820:
    // 0x362820: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x362820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_362824:
    // 0x362824: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x362824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_362828:
    // 0x362828: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x362828u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36282c:
    // 0x36282c: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x36282cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_362830:
    // 0x362830: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x362830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_362834:
    // 0x362834: 0x30427001  andi        $v0, $v0, 0x7001
    ctx->pc = 0x362834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)28673);
label_362838:
    // 0x362838: 0x38427001  xori        $v0, $v0, 0x7001
    ctx->pc = 0x362838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)28673);
label_36283c:
    // 0x36283c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_362840:
    if (ctx->pc == 0x362840u) {
        ctx->pc = 0x362840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36283Cu;
        // 0x362840: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362844u;
        goto label_362844;
    }
    ctx->pc = 0x36283Cu;
    {
        const bool branch_taken_0x36283c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x362840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36283Cu;
        // 0x362840: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36283c) {
            ctx->pc = 0x362880u;
            goto label_362880;
        }
    }
    ctx->pc = 0x362844u;
label_362844:
    // 0x362844: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x362844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_362848:
    // 0x362848: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x362848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
label_36284c:
    // 0x36284c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_362850:
    if (ctx->pc == 0x362850u) {
        ctx->pc = 0x362850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36284Cu;
        // 0x362850: 0x8c6402e4  lw          $a0, 0x2E4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 740)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362854u;
        goto label_362854;
    }
    ctx->pc = 0x36284Cu;
    {
        const bool branch_taken_0x36284c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x362850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36284Cu;
        // 0x362850: 0x8c6402e4  lw          $a0, 0x2E4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 740)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36284c) {
            ctx->pc = 0x362870u;
            goto label_362870;
        }
    }
    ctx->pc = 0x362854u;
label_362854:
    // 0x362854: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x362854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_362858:
    // 0x362858: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x362858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_36285c:
    // 0x36285c: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x36285cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_362860:
    // 0x362860: 0x40f809  jalr        $v0
label_362864:
    if (ctx->pc == 0x362864u) {
        ctx->pc = 0x362864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362860u;
        // 0x362864: 0x8e050034  lw          $a1, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362868u;
        goto label_362868;
    }
    ctx->pc = 0x362860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x362868u);
        ctx->pc = 0x362864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362860u;
        // 0x362864: 0x8e050034  lw          $a1, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362860u, 0x362868u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x362868u;
label_362868:
    // 0x362868: 0x10000006  b           . + 4 + (0x6 << 2)
label_36286c:
    if (ctx->pc == 0x36286Cu) {
        ctx->pc = 0x36286Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362868u;
        // 0x36286c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362870u;
        goto label_362870;
    }
    ctx->pc = 0x362868u;
    {
        const bool branch_taken_0x362868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36286Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362868u;
        // 0x36286c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362868) {
            ctx->pc = 0x362884u;
            goto label_362884;
        }
    }
    ctx->pc = 0x362870u;
label_362870:
    // 0x362870: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x362870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_362874:
    // 0x362874: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x362874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_362878:
    // 0x362878: 0x40f809  jalr        $v0
label_36287c:
    if (ctx->pc == 0x36287Cu) {
        ctx->pc = 0x36287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362878u;
        // 0x36287c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362880u;
        goto label_362880;
    }
    ctx->pc = 0x362878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x362880u);
        ctx->pc = 0x36287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362878u;
        // 0x36287c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362878u, 0x362880u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x362880u;
label_362880:
    // 0x362880: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x362880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_362884:
    // 0x362884: 0xc0d899c  jal         func_362670
label_362888:
    if (ctx->pc == 0x362888u) {
        ctx->pc = 0x362888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362884u;
        // 0x362888: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36288Cu;
        goto label_36288c;
    }
    ctx->pc = 0x362884u;
    SET_GPR_U32(ctx, 31, 0x36288Cu);
    ctx->pc = 0x362888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362884u;
    // 0x362888: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362670u, 0x362884u, 0x36288Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36288Cu;
label_36288c:
    // 0x36288c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36288cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_362890:
    // 0x362890: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x362890u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_362894:
    // 0x362894: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x362894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_362898:
    // 0x362898: 0x3e00008  jr          $ra
label_36289c:
    if (ctx->pc == 0x36289Cu) {
        ctx->pc = 0x36289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362898u;
        // 0x36289c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3628A0u;
        goto label_fallthrough_0x362898;
    }
    ctx->pc = 0x362898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362898u;
        // 0x36289c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x362898:
    ctx->pc = 0x3628A0u;
}
