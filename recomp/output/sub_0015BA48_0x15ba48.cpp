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

// Function: sub_0015BA48
// Address: 0x15ba48 - 0x15bb90
void sub_0015BA48_0x15ba48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015BA48_0x15ba48");
#endif

    switch (ctx->pc) {
        case 0x15baa0u: goto label_15baa0;
        case 0x15bac0u: goto label_15bac0;
        case 0x15baccu: goto label_15bacc;
        case 0x15bae0u: goto label_15bae0;
        case 0x15baf4u: goto label_15baf4;
        case 0x15bb38u: goto label_15bb38;
        default: break;
    }

    ctx->pc = 0x15ba48u;

    // 0x15ba48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15ba48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15ba4c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x15ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x15ba50: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x15ba50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x15ba54: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x15ba54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x15ba58: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15ba58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ba5c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x15ba5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x15ba60: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x15ba60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x15ba64: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x15ba64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x15ba68: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x15ba68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x15ba6c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x15ba6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x15ba70: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x15ba70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x15ba74: 0x8c43a9d4  lw          $v1, -0x562C($v0)
    ctx->pc = 0x15ba74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FA9D4u));
    // 0x15ba78: 0x8e640b68  lw          $a0, 0xB68($s3)
    ctx->pc = 0x15ba78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2920)));
    // 0x15ba7c: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x15BA7Cu;
    {
        const bool branch_taken_0x15ba7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15BA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA7Cu;
        // 0x15ba80: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ba7c) {
            ctx->pc = 0x15BB14u;
            goto label_15bb14;
        }
    }
    ctx->pc = 0x15BA84u;
    // 0x15ba84: 0x92620a20  lbu         $v0, 0xA20($s3)
    ctx->pc = 0x15ba84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2592)));
    // 0x15ba88: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x15BA88u;
    {
        const bool branch_taken_0x15ba88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA88u;
        // 0x15ba8c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ba88) {
            ctx->pc = 0x15BB0Cu;
            goto label_15bb0c;
        }
    }
    ctx->pc = 0x15BA90u;
    // 0x15ba90: 0x24140070  addiu       $s4, $zero, 0x70
    ctx->pc = 0x15ba90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x15ba94: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x15ba94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ba98: 0x2541818  mult        $v1, $s2, $s4
    ctx->pc = 0x15ba98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15ba9c: 0x0  nop
    ctx->pc = 0x15ba9cu;
    // NOP
label_15baa0:
    // 0x15baa0: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x15baa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x15baa4: 0xac550338  sw          $s5, 0x338($v0)
    ctx->pc = 0x15baa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 824), GPR_U32(ctx, 21));
    // 0x15baa8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15baa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15baac: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x15baacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x15bab0: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x15BAB0u;
    {
        const bool branch_taken_0x15bab0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BAB0u;
        // 0x15bab4: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bab0) {
            ctx->pc = 0x15BAF8u;
            goto label_15baf8;
        }
    }
    ctx->pc = 0x15BAB8u;
    // 0x15bab8: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x15BAB8u;
    SET_GPR_U32(ctx, 31, 0x15BAC0u);
    ctx->pc = 0x15BABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BAB8u;
    // 0x15babc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x15BAB8u, 0x15BAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BAC0u;
label_15bac0:
    // 0x15bac0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15bac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bac4: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x15BAC4u;
    SET_GPR_U32(ctx, 31, 0x15BACCu);
    ctx->pc = 0x15BAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BAC4u;
    // 0x15bac8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x15BAC4u, 0x15BACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BACCu;
label_15bacc:
    // 0x15bacc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15BACCu;
    {
        const bool branch_taken_0x15bacc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BACCu;
        // 0x15bad0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bacc) {
            ctx->pc = 0x15BAE8u;
            goto label_15bae8;
        }
    }
    ctx->pc = 0x15BAD4u;
    // 0x15bad4: 0xae200334  sw          $zero, 0x334($s1)
    ctx->pc = 0x15bad4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 820), GPR_U32(ctx, 0));
    // 0x15bad8: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x15BAD8u;
    SET_GPR_U32(ctx, 31, 0x15BAE0u);
    ctx->pc = 0x15BADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BAD8u;
    // 0x15badc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x15BAD8u, 0x15BAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BAE0u;
label_15bae0:
    // 0x15bae0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15BAE0u;
    {
        const bool branch_taken_0x15bae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BAE0u;
        // 0x15bae4: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bae0) {
            ctx->pc = 0x15BAF8u;
            goto label_15baf8;
        }
    }
    ctx->pc = 0x15BAE8u;
label_15bae8:
    // 0x15bae8: 0xae200338  sw          $zero, 0x338($s1)
    ctx->pc = 0x15bae8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 824), GPR_U32(ctx, 0));
    // 0x15baec: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x15BAECu;
    SET_GPR_U32(ctx, 31, 0x15BAF4u);
    ctx->pc = 0x15BAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BAECu;
    // 0x15baf0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x15BAECu, 0x15BAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BAF4u;
label_15baf4:
    // 0x15baf4: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x15baf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_15baf8:
    // 0x15baf8: 0x92620a20  lbu         $v0, 0xA20($s3)
    ctx->pc = 0x15baf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2592)));
    // 0x15bafc: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x15bafcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15bb00: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x15bb00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15bb04: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x15BB04u;
    {
        const bool branch_taken_0x15bb04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB04u;
        // 0x15bb08: 0x2541818  mult        $v1, $s2, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bb04) {
            ctx->pc = 0x15BAA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15baa0;
        }
    }
    ctx->pc = 0x15BB0Cu;
label_15bb0c:
    // 0x15bb0c: 0x8ec2a9d4  lw          $v0, -0x562C($s6)
    ctx->pc = 0x15bb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294945236)));
    // 0x15bb10: 0xae620b68  sw          $v0, 0xB68($s3)
    ctx->pc = 0x15bb10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2920), GPR_U32(ctx, 2));
label_15bb14:
    // 0x15bb14: 0x92630a20  lbu         $v1, 0xA20($s3)
    ctx->pc = 0x15bb14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2592)));
    // 0x15bb18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15bb18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bb1c: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x15bb1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x15bb20: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x15BB20u;
    {
        const bool branch_taken_0x15bb20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB20u;
        // 0x15bb24: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bb20) {
            ctx->pc = 0x15BB60u;
            goto label_15bb60;
        }
    }
    ctx->pc = 0x15BB28u;
    // 0x15bb28: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x15bb28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bb2c: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x15bb2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x15bb30: 0x871818  mult        $v1, $a0, $a3
    ctx->pc = 0x15bb30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15bb34: 0x0  nop
    ctx->pc = 0x15bb34u;
    // NOP
label_15bb38:
    // 0x15bb38: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x15bb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x15bb3c: 0x8c430338  lw          $v1, 0x338($v0)
    ctx->pc = 0x15bb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 824)));
    // 0x15bb40: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x15BB40u;
    {
        const bool branch_taken_0x15bb40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB40u;
        // 0x15bb44: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bb40) {
            ctx->pc = 0x15BB4Cu;
            goto label_15bb4c;
        }
    }
    ctx->pc = 0x15BB48u;
    // 0x15bb48: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x15bb48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15bb4c:
    // 0x15bb4c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x15bb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15bb50: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x15bb50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15bb54: 0x86182b  sltu        $v1, $a0, $a2
    ctx->pc = 0x15bb54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x15bb58: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x15BB58u;
    {
        const bool branch_taken_0x15bb58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB58u;
        // 0x15bb5c: 0x871818  mult        $v1, $a0, $a3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bb58) {
            ctx->pc = 0x15BB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15bb38;
        }
    }
    ctx->pc = 0x15BB60u;
label_15bb60:
    // 0x15bb60: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x15bb60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bb64: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x15bb64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bb68: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x15bb68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15bb6c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x15bb6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15bb70: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x15bb70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15bb74: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x15bb74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15bb78: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x15bb78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15bb7c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x15bb7cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15bb80: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x15bb80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15bb84: 0x3e00008  jr          $ra
    ctx->pc = 0x15BB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB84u;
        // 0x15bb88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BB84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BB8Cu;
    // 0x15bb8c: 0x0  nop
    ctx->pc = 0x15bb8cu;
    // NOP
    ctx->pc = 0x15bb90u;
}
