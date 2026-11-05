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

// Function: sub_002ACB70
// Address: 0x2acb70 - 0x2acc80
void sub_002ACB70_0x2acb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACB70_0x2acb70");
#endif

    switch (ctx->pc) {
        case 0x2acbb0u: goto label_2acbb0;
        case 0x2acbb8u: goto label_2acbb8;
        case 0x2acbc4u: goto label_2acbc4;
        case 0x2acbd0u: goto label_2acbd0;
        case 0x2acbe0u: goto label_2acbe0;
        case 0x2acbf4u: goto label_2acbf4;
        case 0x2acc1cu: goto label_2acc1c;
        case 0x2acc34u: goto label_2acc34;
        case 0x2acc40u: goto label_2acc40;
        case 0x2acc5cu: goto label_2acc5c;
        default: break;
    }

    ctx->pc = 0x2acb70u;

    // 0x2acb70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2acb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2acb74: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2acb74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2acb78: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2acb78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2acb7c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2acb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2acb80: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2acb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2acb84: 0x2491001c  addiu       $s1, $a0, 0x1C
    ctx->pc = 0x2acb84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x2acb88: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2acb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2acb8c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x2acb8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2acb90: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x2acb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x2acb94: 0x2494008c  addiu       $s4, $a0, 0x8C
    ctx->pc = 0x2acb94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 140));
    // 0x2acb98: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2acb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2acb9c: 0x3c150047  lui         $s5, 0x47
    ctx->pc = 0x2acb9cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)71 << 16));
    // 0x2acba0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2acba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2acba4: 0x8c53bd50  lw          $s3, -0x42B0($v0)
    ctx->pc = 0x2acba4u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x2acba8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2acba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acbac: 0x0  nop
    ctx->pc = 0x2acbacu;
    // NOP
label_2acbb0:
    // 0x2acbb0: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x2ACBB0u;
    SET_GPR_U32(ctx, 31, 0x2ACBB8u);
    ctx->pc = 0x2ACBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACBB0u;
    // 0x2acbb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x2ACBB0u, 0x2ACBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACBB8u;
label_2acbb8:
    // 0x2acbb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2acbb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acbbc: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x2ACBBCu;
    SET_GPR_U32(ctx, 31, 0x2ACBC4u);
    ctx->pc = 0x2ACBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACBBCu;
    // 0x2acbc0: 0x26a5dc68  addiu       $a1, $s5, -0x2398 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294958184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x2ACBBCu, 0x2ACBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACBC4u;
label_2acbc4:
    // 0x2acbc4: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2acbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2acbc8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2ACBC8u;
    SET_GPR_U32(ctx, 31, 0x2ACBD0u);
    ctx->pc = 0x2ACBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACBC8u;
    // 0x2acbcc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2ACBC8u, 0x2ACBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACBD0u;
label_2acbd0:
    // 0x2acbd0: 0x38500001  xori        $s0, $v0, 0x1
    ctx->pc = 0x2acbd0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2acbd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2acbd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acbd8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2ACBD8u;
    SET_GPR_U32(ctx, 31, 0x2ACBE0u);
    ctx->pc = 0x2ACBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACBD8u;
    // 0x2acbdc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2ACBD8u, 0x2ACBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACBE0u;
label_2acbe0:
    // 0x2acbe0: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x2acbe0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2acbe4: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2ACBE4u;
    {
        const bool branch_taken_0x2acbe4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACBE4u;
        // 0x2acbe8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acbe4) {
            ctx->pc = 0x2ACC34u;
            goto label_2acc34;
        }
    }
    ctx->pc = 0x2ACBECu;
    // 0x2acbec: 0xc0b950c  jal         func_2E5430
    ctx->pc = 0x2ACBECu;
    SET_GPR_U32(ctx, 31, 0x2ACBF4u);
    ctx->pc = 0x2ACBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACBECu;
    // 0x2acbf0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5430u, 0x2ACBECu, 0x2ACBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACBF4u;
label_2acbf4:
    // 0x2acbf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2acbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acbf8: 0x5080000f  beql        $a0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2ACBF8u;
    {
        const bool branch_taken_0x2acbf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2acbf8) {
            ctx->pc = 0x2ACBFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ACBF8u;
            // 0x2acbfc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ACC38u;
            goto label_2acc38;
        }
    }
    ctx->pc = 0x2ACC00u;
    // 0x2acc00: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x2acc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x2acc04: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x2acc04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x2acc08: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2ACC08u;
    {
        const bool branch_taken_0x2acc08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2acc08) {
            ctx->pc = 0x2ACC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ACC08u;
            // 0x2acc0c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ACC38u;
            goto label_2acc38;
        }
    }
    ctx->pc = 0x2ACC10u;
    // 0x2acc10: 0x8c900274  lw          $s0, 0x274($a0)
    ctx->pc = 0x2acc10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 628)));
    // 0x2acc14: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x2ACC14u;
    SET_GPR_U32(ctx, 31, 0x2ACC1Cu);
    ctx->pc = 0x2ACC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACC14u;
    // 0x2acc18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2ACC14u, 0x2ACC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACC1Cu;
label_2acc1c:
    // 0x2acc1c: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2acc1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x2acc20: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ACC20u;
    {
        const bool branch_taken_0x2acc20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ACC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACC20u;
        // 0x2acc24: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acc20) {
            ctx->pc = 0x2ACC38u;
            goto label_2acc38;
        }
    }
    ctx->pc = 0x2ACC28u;
    // 0x2acc28: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x2acc28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2acc2c: 0xc0d9080  jal         func_364200
    ctx->pc = 0x2ACC2Cu;
    SET_GPR_U32(ctx, 31, 0x2ACC34u);
    ctx->pc = 0x2ACC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACC2Cu;
    // 0x2acc30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364200u, 0x2ACC2Cu, 0x2ACC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACC34u;
label_2acc34:
    // 0x2acc34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2acc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2acc38:
    // 0x2acc38: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2ACC38u;
    SET_GPR_U32(ctx, 31, 0x2ACC40u);
    ctx->pc = 0x2ACC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACC38u;
    // 0x2acc3c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2ACC38u, 0x2ACC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACC40u;
label_2acc40:
    // 0x2acc40: 0x2631001c  addiu       $s1, $s1, 0x1C
    ctx->pc = 0x2acc40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x2acc44: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x2acc44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2acc48: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x2ACC48u;
    {
        const bool branch_taken_0x2acc48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ACC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACC48u;
        // 0x2acc4c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acc48) {
            ctx->pc = 0x2ACBB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2acbb0;
        }
    }
    ctx->pc = 0x2ACC50u;
    // 0x2acc50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2acc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acc54: 0xc0bf040  jal         func_2FC100
    ctx->pc = 0x2ACC54u;
    SET_GPR_U32(ctx, 31, 0x2ACC5Cu);
    ctx->pc = 0x2ACC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACC54u;
    // 0x2acc58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC100u, 0x2ACC54u, 0x2ACC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACC5Cu;
label_2acc5c:
    // 0x2acc5c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2acc5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2acc60: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2acc60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2acc64: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2acc64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2acc68: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2acc68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2acc6c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2acc6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2acc70: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x2acc70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2acc74: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2acc74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2acc78: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACC78u;
        // 0x2acc7c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACC80u;
}
