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

// Function: sub_001AEC40
// Address: 0x1aec40 - 0x1aed38
void sub_001AEC40_0x1aec40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AEC40_0x1aec40");
#endif

    switch (ctx->pc) {
        case 0x1aec60u: goto label_1aec60;
        case 0x1aec70u: goto label_1aec70;
        case 0x1aec94u: goto label_1aec94;
        case 0x1aecb0u: goto label_1aecb0;
        case 0x1aecccu: goto label_1aeccc;
        case 0x1aed00u: goto label_1aed00;
        case 0x1aed18u: goto label_1aed18;
        default: break;
    }

    ctx->pc = 0x1aec40u;

    // 0x1aec40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aec40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aec44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1aec44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1aec48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1aec48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aec4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aec4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aec50: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1aec50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1aec54: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1aec54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1aec58: 0xc06c11c  jal         func_1B0470
    ctx->pc = 0x1AEC58u;
    SET_GPR_U32(ctx, 31, 0x1AEC60u);
    ctx->pc = 0x1AEC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEC58u;
    // 0x1aec5c: 0x241201ba  addiu       $s2, $zero, 0x1BA (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0470u, 0x1AEC58u, 0x1AEC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEC60u;
label_1aec60:
    // 0x1aec60: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1aec60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1aec64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1aec64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aec68: 0xc08db00  jal         func_236C00
    ctx->pc = 0x1AEC68u;
    SET_GPR_U32(ctx, 31, 0x1AEC70u);
    ctx->pc = 0x1AEC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEC68u;
    // 0x1aec6c: 0x8c64bd50  lw          $a0, -0x42B0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C00u, 0x1AEC68u, 0x1AEC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEC70u;
label_1aec70:
    // 0x1aec70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aec70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aec74: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1aec74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aec78: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x1aec78u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x1aec7c: 0x12040003  beq         $s0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AEC7Cu;
    {
        const bool branch_taken_0x1aec7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        if (branch_taken_0x1aec7c) {
            ctx->pc = 0x1AEC8Cu;
            goto label_1aec8c;
        }
    }
    ctx->pc = 0x1AEC84u;
    // 0x1aec84: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1AEC84u;
    {
        const bool branch_taken_0x1aec84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC84u;
        // 0x1aec88: 0x261200e8  addiu       $s2, $s0, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aec84) {
            ctx->pc = 0x1AECD4u;
            goto label_1aecd4;
        }
    }
    ctx->pc = 0x1AEC8Cu;
label_1aec8c:
    // 0x1aec8c: 0xc06c148  jal         func_1B0520
    ctx->pc = 0x1AEC8Cu;
    SET_GPR_U32(ctx, 31, 0x1AEC94u);
    ctx->pc = 0x1AEC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEC8Cu;
    // 0x1aec90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0520u, 0x1AEC8Cu, 0x1AEC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEC94u;
label_1aec94:
    // 0x1aec94: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1aec94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aec98: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x1aec98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1aec9c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AEC9Cu;
    {
        const bool branch_taken_0x1aec9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aec9c) {
            ctx->pc = 0x1AECB8u;
            goto label_1aecb8;
        }
    }
    ctx->pc = 0x1AECA4u;
    // 0x1aeca4: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x1aeca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x1aeca8: 0xc08f672  jal         func_23D9C8
    ctx->pc = 0x1AECA8u;
    SET_GPR_U32(ctx, 31, 0x1AECB0u);
    ctx->pc = 0x1AECACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AECA8u;
    // 0x1aecac: 0x241200ef  addiu       $s2, $zero, 0xEF (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 239));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x1AECA8u, 0x1AECB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AECB0u;
label_1aecb0:
    // 0x1aecb0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AECB0u;
    {
        const bool branch_taken_0x1aecb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AECB0u;
        // 0x1aecb4: 0x240300f1  addiu       $v1, $zero, 0xF1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aecb0) {
            ctx->pc = 0x1AECD0u;
            goto label_1aecd0;
        }
    }
    ctx->pc = 0x1AECB8u;
label_1aecb8:
    // 0x1aecb8: 0x4600007  bltz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AECB8u;
    {
        const bool branch_taken_0x1aecb8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1AECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AECB8u;
        // 0x1aecbc: 0x240201ba  addiu       $v0, $zero, 0x1BA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aecb8) {
            ctx->pc = 0x1AECD8u;
            goto label_1aecd8;
        }
    }
    ctx->pc = 0x1AECC0u;
    // 0x1aecc0: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x1aecc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x1aecc4: 0xc08f672  jal         func_23D9C8
    ctx->pc = 0x1AECC4u;
    SET_GPR_U32(ctx, 31, 0x1AECCCu);
    ctx->pc = 0x1AECC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AECC4u;
    // 0x1aecc8: 0x241200ee  addiu       $s2, $zero, 0xEE (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 238));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x1AECC4u, 0x1AECCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AECCCu;
label_1aeccc:
    // 0x1aeccc: 0x240300f0  addiu       $v1, $zero, 0xF0
    ctx->pc = 0x1aecccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_1aecd0:
    // 0x1aecd0: 0x62900b  movn        $s2, $v1, $v0
    ctx->pc = 0x1aecd0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_1aecd4:
    // 0x1aecd4: 0x240201ba  addiu       $v0, $zero, 0x1BA
    ctx->pc = 0x1aecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
label_1aecd8:
    // 0x1aecd8: 0x12420006  beq         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AECD8u;
    {
        const bool branch_taken_0x1aecd8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AECD8u;
        // 0x1aecdc: 0x121880  sll         $v1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aecd8) {
            ctx->pc = 0x1AECF4u;
            goto label_1aecf4;
        }
    }
    ctx->pc = 0x1AECE0u;
    // 0x1aece0: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x1aece0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1aece4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1aece4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1aece8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1aece8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aecec: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AECECu;
    {
        const bool branch_taken_0x1aecec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AECECu;
        // 0x1aecf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aecec) {
            ctx->pc = 0x1AED08u;
            goto label_1aed08;
        }
    }
    ctx->pc = 0x1AECF4u;
label_1aecf4:
    // 0x1aecf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aecf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aecf8: 0xc06b85c  jal         func_1AE170
    ctx->pc = 0x1AECF8u;
    SET_GPR_U32(ctx, 31, 0x1AED00u);
    ctx->pc = 0x1AECFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AECF8u;
    // 0x1aecfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE170u, 0x1AECF8u, 0x1AED00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AED00u;
label_1aed00:
    // 0x1aed00: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AED00u;
    {
        const bool branch_taken_0x1aed00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED00u;
        // 0x1aed04: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aed00) {
            ctx->pc = 0x1AED1Cu;
            goto label_1aed1c;
        }
    }
    ctx->pc = 0x1AED08u;
label_1aed08:
    // 0x1aed08: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1aed08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aed0c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1aed0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1aed10: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AED10u;
    SET_GPR_U32(ctx, 31, 0x1AED18u);
    ctx->pc = 0x1AED14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AED10u;
    // 0x1aed14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AED10u, 0x1AED18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AED18u;
label_1aed18:
    // 0x1aed18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aed18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aed1c:
    // 0x1aed1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aed1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aed20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1aed20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aed24: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1aed24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aed28: 0x3e00008  jr          $ra
    ctx->pc = 0x1AED28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED28u;
        // 0x1aed2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AED28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AED30u;
    // 0x1aed30: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1aed30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1aed34: 0x0  nop
    ctx->pc = 0x1aed34u;
    // NOP
    ctx->pc = 0x1aed38u;
}
