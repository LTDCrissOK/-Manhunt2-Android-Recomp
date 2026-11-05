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

// Function: sub_0012EA10
// Address: 0x12ea10 - 0x12eb18
void sub_0012EA10_0x12ea10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012EA10_0x12ea10");
#endif

    switch (ctx->pc) {
        case 0x12ea4cu: goto label_12ea4c;
        case 0x12ea5cu: goto label_12ea5c;
        case 0x12ea68u: goto label_12ea68;
        case 0x12ea74u: goto label_12ea74;
        case 0x12ea88u: goto label_12ea88;
        case 0x12eab4u: goto label_12eab4;
        case 0x12eac8u: goto label_12eac8;
        case 0x12ead4u: goto label_12ead4;
        case 0x12eae8u: goto label_12eae8;
        default: break;
    }

    ctx->pc = 0x12ea10u;

    // 0x12ea10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x12ea10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12ea14: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12ea14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12ea18: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x12ea18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12ea1c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x12ea1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ea20: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12ea20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12ea24: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x12ea24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ea28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12ea28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12ea2c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12ea2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ea30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12ea30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12ea34: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x12ea34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x12ea38: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x12ea38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x12ea3c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x12ea3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x12ea40: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x12ea40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x12ea44: 0xc04566a  jal         func_1159A8
    ctx->pc = 0x12EA44u;
    SET_GPR_U32(ctx, 31, 0x12EA4Cu);
    ctx->pc = 0x12EA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EA44u;
    // 0x12ea48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159A8u, 0x12EA44u, 0x12EA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EA4Cu;
label_12ea4c:
    // 0x12ea4c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x12EA4Cu;
    {
        const bool branch_taken_0x12ea4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA4Cu;
        // 0x12ea50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ea4c) {
            ctx->pc = 0x12EAECu;
            goto label_12eaec;
        }
    }
    ctx->pc = 0x12EA54u;
    // 0x12ea54: 0xc045530  jal         func_1154C0
    ctx->pc = 0x12EA54u;
    SET_GPR_U32(ctx, 31, 0x12EA5Cu);
    ctx->pc = 0x12EA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EA54u;
    // 0x12ea58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1154C0u, 0x12EA54u, 0x12EA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EA5Cu;
label_12ea5c:
    // 0x12ea5c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12ea5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ea60: 0xc0421d8  jal         func_108760
    ctx->pc = 0x12EA60u;
    SET_GPR_U32(ctx, 31, 0x12EA68u);
    ctx->pc = 0x12EA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EA60u;
    // 0x12ea64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108760u, 0x12EA60u, 0x12EA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EA68u;
label_12ea68:
    // 0x12ea68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12ea68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ea6c: 0xc0421e2  jal         func_108788
    ctx->pc = 0x12EA6Cu;
    SET_GPR_U32(ctx, 31, 0x12EA74u);
    ctx->pc = 0x12EA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EA6Cu;
    // 0x12ea70: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108788u, 0x12EA6Cu, 0x12EA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EA74u;
label_12ea74:
    // 0x12ea74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12ea74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ea78: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x12EA78u;
    {
        const bool branch_taken_0x12ea78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA78u;
        // 0x12ea7c: 0x2417000e  addiu       $s7, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ea78) {
            ctx->pc = 0x12EAE0u;
            goto label_12eae0;
        }
    }
    ctx->pc = 0x12EA80u;
    // 0x12ea80: 0x2416000f  addiu       $s6, $zero, 0xF
    ctx->pc = 0x12ea80u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x12ea84: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x12ea84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_12ea88:
    // 0x12ea88: 0x10570005  beq         $v0, $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12EA88u;
    {
        const bool branch_taken_0x12ea88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x12EA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA88u;
        // 0x12ea8c: 0x24110006  addiu       $s1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ea88) {
            ctx->pc = 0x12EAA0u;
            goto label_12eaa0;
        }
    }
    ctx->pc = 0x12EA90u;
    // 0x12ea90: 0x50560005  beql        $v0, $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x12EA90u;
    {
        const bool branch_taken_0x12ea90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x12ea90) {
            ctx->pc = 0x12EA94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EA90u;
            // 0x12ea94: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EAA8u;
            goto label_12eaa8;
        }
    }
    ctx->pc = 0x12EA98u;
    // 0x12ea98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12EA98u;
    {
        const bool branch_taken_0x12ea98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA98u;
        // 0x12ea9c: 0x8e84000c  lw          $a0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ea98) {
            ctx->pc = 0x12EAB8u;
            goto label_12eab8;
        }
    }
    ctx->pc = 0x12EAA0u;
label_12eaa0:
    // 0x12eaa0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12EAA0u;
    {
        const bool branch_taken_0x12eaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EAA0u;
        // 0x12eaa4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eaa0) {
            ctx->pc = 0x12EAB4u;
            goto label_12eab4;
        }
    }
    ctx->pc = 0x12EAA8u;
label_12eaa8:
    // 0x12eaa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12eaa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eaac: 0xc046180  jal         func_118600
    ctx->pc = 0x12EAACu;
    SET_GPR_U32(ctx, 31, 0x12EAB4u);
    ctx->pc = 0x12EAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EAACu;
    // 0x12eab0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118600u, 0x12EAACu, 0x12EAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EAB4u;
label_12eab4:
    // 0x12eab4: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x12eab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_12eab8:
    // 0x12eab8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x12eab8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eabc: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x12eabcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x12eac0: 0xc04c662  jal         func_131988
    ctx->pc = 0x12EAC0u;
    SET_GPR_U32(ctx, 31, 0x12EAC8u);
    ctx->pc = 0x12EAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EAC0u;
    // 0x12eac4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131988u, 0x12EAC0u, 0x12EAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EAC8u;
label_12eac8:
    // 0x12eac8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12eac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eacc: 0xc0421e2  jal         func_108788
    ctx->pc = 0x12EACCu;
    SET_GPR_U32(ctx, 31, 0x12EAD4u);
    ctx->pc = 0x12EAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EACCu;
    // 0x12ead0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108788u, 0x12EACCu, 0x12EAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EAD4u;
label_12ead4:
    // 0x12ead4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12ead4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ead8: 0x5600ffeb  bnel        $s0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x12EAD8u;
    {
        const bool branch_taken_0x12ead8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ead8) {
            ctx->pc = 0x12EADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EAD8u;
            // 0x12eadc: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EA88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ea88;
        }
    }
    ctx->pc = 0x12EAE0u;
label_12eae0:
    // 0x12eae0: 0xc0421e0  jal         func_108780
    ctx->pc = 0x12EAE0u;
    SET_GPR_U32(ctx, 31, 0x12EAE8u);
    ctx->pc = 0x12EAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EAE0u;
    // 0x12eae4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108780u, 0x12EAE0u, 0x12EAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EAE8u;
label_12eae8:
    // 0x12eae8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12eae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12eaec:
    // 0x12eaec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12eaecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12eaf0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12eaf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12eaf4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12eaf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12eaf8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12eaf8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12eafc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x12eafcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12eb00: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x12eb00u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12eb04: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x12eb04u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12eb08: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x12eb08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12eb0c: 0x3e00008  jr          $ra
    ctx->pc = 0x12EB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EB0Cu;
        // 0x12eb10: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EB0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EB14u;
    // 0x12eb14: 0x0  nop
    ctx->pc = 0x12eb14u;
    // NOP
    ctx->pc = 0x12eb18u;
}
