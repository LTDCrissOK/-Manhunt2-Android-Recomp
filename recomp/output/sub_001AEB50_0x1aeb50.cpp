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

// Function: sub_001AEB50
// Address: 0x1aeb50 - 0x1aec40
void sub_001AEB50_0x1aeb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AEB50_0x1aeb50");
#endif

    switch (ctx->pc) {
        case 0x1aeb70u: goto label_1aeb70;
        case 0x1aeb80u: goto label_1aeb80;
        case 0x1aeba4u: goto label_1aeba4;
        case 0x1aebc0u: goto label_1aebc0;
        case 0x1aebdcu: goto label_1aebdc;
        case 0x1aec10u: goto label_1aec10;
        case 0x1aec28u: goto label_1aec28;
        default: break;
    }

    ctx->pc = 0x1aeb50u;

    // 0x1aeb50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aeb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aeb54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1aeb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1aeb58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1aeb58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeb5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aeb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aeb60: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1aeb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1aeb64: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1aeb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1aeb68: 0xc06c11c  jal         func_1B0470
    ctx->pc = 0x1AEB68u;
    SET_GPR_U32(ctx, 31, 0x1AEB70u);
    ctx->pc = 0x1AEB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEB68u;
    // 0x1aeb6c: 0x241201ba  addiu       $s2, $zero, 0x1BA (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0470u, 0x1AEB68u, 0x1AEB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEB70u;
label_1aeb70:
    // 0x1aeb70: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1aeb70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1aeb74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1aeb74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeb78: 0xc08db00  jal         func_236C00
    ctx->pc = 0x1AEB78u;
    SET_GPR_U32(ctx, 31, 0x1AEB80u);
    ctx->pc = 0x1AEB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEB78u;
    // 0x1aeb7c: 0x8c64bd50  lw          $a0, -0x42B0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C00u, 0x1AEB78u, 0x1AEB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEB80u;
label_1aeb80:
    // 0x1aeb80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aeb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aeb84: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1aeb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aeb88: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x1aeb88u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x1aeb8c: 0x12040003  beq         $s0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AEB8Cu;
    {
        const bool branch_taken_0x1aeb8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        if (branch_taken_0x1aeb8c) {
            ctx->pc = 0x1AEB9Cu;
            goto label_1aeb9c;
        }
    }
    ctx->pc = 0x1AEB94u;
    // 0x1aeb94: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1AEB94u;
    {
        const bool branch_taken_0x1aeb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB94u;
        // 0x1aeb98: 0x261200de  addiu       $s2, $s0, 0xDE (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 222));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeb94) {
            ctx->pc = 0x1AEBE4u;
            goto label_1aebe4;
        }
    }
    ctx->pc = 0x1AEB9Cu;
label_1aeb9c:
    // 0x1aeb9c: 0xc06c148  jal         func_1B0520
    ctx->pc = 0x1AEB9Cu;
    SET_GPR_U32(ctx, 31, 0x1AEBA4u);
    ctx->pc = 0x1AEBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEB9Cu;
    // 0x1aeba0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0520u, 0x1AEB9Cu, 0x1AEBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEBA4u;
label_1aeba4:
    // 0x1aeba4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1aeba4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeba8: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x1aeba8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1aebac: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AEBACu;
    {
        const bool branch_taken_0x1aebac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aebac) {
            ctx->pc = 0x1AEBC8u;
            goto label_1aebc8;
        }
    }
    ctx->pc = 0x1AEBB4u;
    // 0x1aebb4: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x1aebb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x1aebb8: 0xc08f672  jal         func_23D9C8
    ctx->pc = 0x1AEBB8u;
    SET_GPR_U32(ctx, 31, 0x1AEBC0u);
    ctx->pc = 0x1AEBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEBB8u;
    // 0x1aebbc: 0x241200e5  addiu       $s2, $zero, 0xE5 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x1AEBB8u, 0x1AEBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEBC0u;
label_1aebc0:
    // 0x1aebc0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AEBC0u;
    {
        const bool branch_taken_0x1aebc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEBC0u;
        // 0x1aebc4: 0x240300e6  addiu       $v1, $zero, 0xE6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aebc0) {
            ctx->pc = 0x1AEBE0u;
            goto label_1aebe0;
        }
    }
    ctx->pc = 0x1AEBC8u;
label_1aebc8:
    // 0x1aebc8: 0x4600007  bltz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AEBC8u;
    {
        const bool branch_taken_0x1aebc8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1AEBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEBC8u;
        // 0x1aebcc: 0x240201ba  addiu       $v0, $zero, 0x1BA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aebc8) {
            ctx->pc = 0x1AEBE8u;
            goto label_1aebe8;
        }
    }
    ctx->pc = 0x1AEBD0u;
    // 0x1aebd0: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x1aebd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x1aebd4: 0xc08f672  jal         func_23D9C8
    ctx->pc = 0x1AEBD4u;
    SET_GPR_U32(ctx, 31, 0x1AEBDCu);
    ctx->pc = 0x1AEBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEBD4u;
    // 0x1aebd8: 0x241200e4  addiu       $s2, $zero, 0xE4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x1AEBD4u, 0x1AEBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEBDCu;
label_1aebdc:
    // 0x1aebdc: 0x240300e7  addiu       $v1, $zero, 0xE7
    ctx->pc = 0x1aebdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
label_1aebe0:
    // 0x1aebe0: 0x62900b  movn        $s2, $v1, $v0
    ctx->pc = 0x1aebe0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_1aebe4:
    // 0x1aebe4: 0x240201ba  addiu       $v0, $zero, 0x1BA
    ctx->pc = 0x1aebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
label_1aebe8:
    // 0x1aebe8: 0x12420006  beq         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AEBE8u;
    {
        const bool branch_taken_0x1aebe8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AEBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEBE8u;
        // 0x1aebec: 0x121880  sll         $v1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aebe8) {
            ctx->pc = 0x1AEC04u;
            goto label_1aec04;
        }
    }
    ctx->pc = 0x1AEBF0u;
    // 0x1aebf0: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x1aebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1aebf4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1aebf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1aebf8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1aebf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aebfc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AEBFCu;
    {
        const bool branch_taken_0x1aebfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEBFCu;
        // 0x1aec00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aebfc) {
            ctx->pc = 0x1AEC18u;
            goto label_1aec18;
        }
    }
    ctx->pc = 0x1AEC04u;
label_1aec04:
    // 0x1aec04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aec04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aec08: 0xc06b85c  jal         func_1AE170
    ctx->pc = 0x1AEC08u;
    SET_GPR_U32(ctx, 31, 0x1AEC10u);
    ctx->pc = 0x1AEC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEC08u;
    // 0x1aec0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE170u, 0x1AEC08u, 0x1AEC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEC10u;
label_1aec10:
    // 0x1aec10: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AEC10u;
    {
        const bool branch_taken_0x1aec10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC10u;
        // 0x1aec14: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aec10) {
            ctx->pc = 0x1AEC2Cu;
            goto label_1aec2c;
        }
    }
    ctx->pc = 0x1AEC18u;
label_1aec18:
    // 0x1aec18: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1aec18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aec1c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1aec1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1aec20: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AEC20u;
    SET_GPR_U32(ctx, 31, 0x1AEC28u);
    ctx->pc = 0x1AEC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEC20u;
    // 0x1aec24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AEC20u, 0x1AEC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEC28u;
label_1aec28:
    // 0x1aec28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aec28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aec2c:
    // 0x1aec2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aec2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aec30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1aec30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aec34: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1aec34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aec38: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC38u;
        // 0x1aec3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AEC40u;
}
