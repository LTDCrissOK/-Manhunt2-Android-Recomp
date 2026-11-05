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

// Function: sub_001AEF90
// Address: 0x1aef90 - 0x1af048
void sub_001AEF90_0x1aef90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AEF90_0x1aef90");
#endif

    switch (ctx->pc) {
        case 0x1aefb0u: goto label_1aefb0;
        case 0x1af018u: goto label_1af018;
        case 0x1af030u: goto label_1af030;
        default: break;
    }

    ctx->pc = 0x1aef90u;

    // 0x1aef90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aef90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aef94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1aef94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1aef98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1aef98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1aef9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1aef9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aefa0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aefa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aefa4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1aefa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1aefa8: 0xc06c148  jal         func_1B0520
    ctx->pc = 0x1AEFA8u;
    SET_GPR_U32(ctx, 31, 0x1AEFB0u);
    ctx->pc = 0x1AEFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEFA8u;
    // 0x1aefac: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0520u, 0x1AEFA8u, 0x1AEFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEFB0u;
label_1aefb0:
    // 0x1aefb0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1aefb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aefb4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1aefb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aefb8: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1AEFB8u;
    {
        const bool branch_taken_0x1aefb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AEFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEFB8u;
        // 0x1aefbc: 0x241001ba  addiu       $s0, $zero, 0x1BA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aefb8) {
            ctx->pc = 0x1AEFECu;
            goto label_1aefec;
        }
    }
    ctx->pc = 0x1AEFC0u;
    // 0x1aefc0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1aefc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1aefc4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AEFC4u;
    {
        const bool branch_taken_0x1aefc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AEFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEFC4u;
        // 0x1aefc8: 0x28620008  slti        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aefc4) {
            ctx->pc = 0x1AEFECu;
            goto label_1aefec;
        }
    }
    ctx->pc = 0x1AEFCCu;
    // 0x1aefcc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AEFCCu;
    {
        const bool branch_taken_0x1aefcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEFCCu;
        // 0x1aefd0: 0x2402010d  addiu       $v0, $zero, 0x10D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 269));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aefcc) {
            ctx->pc = 0x1AEFDCu;
            goto label_1aefdc;
        }
    }
    ctx->pc = 0x1AEFD4u;
    // 0x1aefd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AEFD4u;
    {
        const bool branch_taken_0x1aefd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEFD4u;
        // 0x1aefd8: 0x241000ff  addiu       $s0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aefd4) {
            ctx->pc = 0x1AEFE8u;
            goto label_1aefe8;
        }
    }
    ctx->pc = 0x1AEFDCu;
label_1aefdc:
    // 0x1aefdc: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AEFDCu;
    {
        const bool branch_taken_0x1aefdc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1AEFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEFDCu;
        // 0x1aefe0: 0x2402010b  addiu       $v0, $zero, 0x10B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 267));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aefdc) {
            ctx->pc = 0x1AEFECu;
            goto label_1aefec;
        }
    }
    ctx->pc = 0x1AEFE4u;
    // 0x1aefe4: 0x241000fd  addiu       $s0, $zero, 0xFD
    ctx->pc = 0x1aefe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
label_1aefe8:
    // 0x1aefe8: 0x52800b  movn        $s0, $v0, $s2
    ctx->pc = 0x1aefe8u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_1aefec:
    // 0x1aefec: 0x240201ba  addiu       $v0, $zero, 0x1BA
    ctx->pc = 0x1aefecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
    // 0x1aeff0: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AEFF0u;
    {
        const bool branch_taken_0x1aeff0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AEFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEFF0u;
        // 0x1aeff4: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeff0) {
            ctx->pc = 0x1AF00Cu;
            goto label_1af00c;
        }
    }
    ctx->pc = 0x1AEFF8u;
    // 0x1aeff8: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x1aeff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1aeffc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1aeffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1af000: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1af000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1af004: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AF004u;
    {
        const bool branch_taken_0x1af004 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF004u;
        // 0x1af008: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af004) {
            ctx->pc = 0x1AF020u;
            goto label_1af020;
        }
    }
    ctx->pc = 0x1AF00Cu;
label_1af00c:
    // 0x1af00c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1af00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af010: 0xc06b85c  jal         func_1AE170
    ctx->pc = 0x1AF010u;
    SET_GPR_U32(ctx, 31, 0x1AF018u);
    ctx->pc = 0x1AF014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF010u;
    // 0x1af014: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE170u, 0x1AF010u, 0x1AF018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF018u;
label_1af018:
    // 0x1af018: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AF018u;
    {
        const bool branch_taken_0x1af018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF018u;
        // 0x1af01c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af018) {
            ctx->pc = 0x1AF034u;
            goto label_1af034;
        }
    }
    ctx->pc = 0x1AF020u;
label_1af020:
    // 0x1af020: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1af020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af024: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1af024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1af028: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AF028u;
    SET_GPR_U32(ctx, 31, 0x1AF030u);
    ctx->pc = 0x1AF02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF028u;
    // 0x1af02c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AF028u, 0x1AF030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF030u;
label_1af030:
    // 0x1af030: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1af034:
    // 0x1af034: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1af034u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1af038: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1af038u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af03c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1af03cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1af040: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF040u;
        // 0x1af044: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF048u;
}
