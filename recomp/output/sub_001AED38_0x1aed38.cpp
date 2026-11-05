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

// Function: sub_001AED38
// Address: 0x1aed38 - 0x1aee20
void sub_001AED38_0x1aed38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AED38_0x1aed38");
#endif

    switch (ctx->pc) {
        case 0x1aed60u: goto label_1aed60;
        case 0x1aedecu: goto label_1aedec;
        case 0x1aee04u: goto label_1aee04;
        default: break;
    }

    ctx->pc = 0x1aed38u;

    // 0x1aed38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aed38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aed3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1aed3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1aed40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1aed40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1aed44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1aed44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aed48: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1aed48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1aed4c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1aed4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aed50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aed50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aed54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1aed54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1aed58: 0xc06c148  jal         func_1B0520
    ctx->pc = 0x1AED58u;
    SET_GPR_U32(ctx, 31, 0x1AED60u);
    ctx->pc = 0x1AED5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AED58u;
    // 0x1aed5c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0520u, 0x1AED58u, 0x1AED60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AED60u;
label_1aed60:
    // 0x1aed60: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1aed60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aed64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1aed64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aed68: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1AED68u;
    {
        const bool branch_taken_0x1aed68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AED6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED68u;
        // 0x1aed6c: 0x241001ba  addiu       $s0, $zero, 0x1BA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aed68) {
            ctx->pc = 0x1AEDC0u;
            goto label_1aedc0;
        }
    }
    ctx->pc = 0x1AED70u;
    // 0x1aed70: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1aed70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1aed74: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1AED74u;
    {
        const bool branch_taken_0x1aed74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED74u;
        // 0x1aed78: 0x28620008  slti        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aed74) {
            ctx->pc = 0x1AEDC0u;
            goto label_1aedc0;
        }
    }
    ctx->pc = 0x1AED7Cu;
    // 0x1aed7c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AED7Cu;
    {
        const bool branch_taken_0x1aed7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aed7c) {
            ctx->pc = 0x1AEDA0u;
            goto label_1aeda0;
        }
    }
    ctx->pc = 0x1AED84u;
    // 0x1aed84: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AED84u;
    {
        const bool branch_taken_0x1aed84 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AED88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED84u;
        // 0x1aed88: 0x24100107  addiu       $s0, $zero, 0x107 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aed84) {
            ctx->pc = 0x1AED98u;
            goto label_1aed98;
        }
    }
    ctx->pc = 0x1AED8Cu;
    // 0x1aed8c: 0x24020108  addiu       $v0, $zero, 0x108
    ctx->pc = 0x1aed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
    // 0x1aed90: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1AED90u;
    {
        const bool branch_taken_0x1aed90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED90u;
        // 0x1aed94: 0x53800b  movn        $s0, $v0, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aed90) {
            ctx->pc = 0x1AEDC0u;
            goto label_1aedc0;
        }
    }
    ctx->pc = 0x1AED98u;
label_1aed98:
    // 0x1aed98: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1AED98u;
    {
        const bool branch_taken_0x1aed98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED98u;
        // 0x1aed9c: 0x241000fa  addiu       $s0, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aed98) {
            ctx->pc = 0x1AEDC0u;
            goto label_1aedc0;
        }
    }
    ctx->pc = 0x1AEDA0u;
label_1aeda0:
    // 0x1aeda0: 0x4600008  bltz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AEDA0u;
    {
        const bool branch_taken_0x1aeda0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1AEDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEDA0u;
        // 0x1aeda4: 0x240201ba  addiu       $v0, $zero, 0x1BA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeda0) {
            ctx->pc = 0x1AEDC4u;
            goto label_1aedc4;
        }
    }
    ctx->pc = 0x1AEDA8u;
    // 0x1aeda8: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AEDA8u;
    {
        const bool branch_taken_0x1aeda8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEDA8u;
        // 0x1aedac: 0x24100103  addiu       $s0, $zero, 0x103 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeda8) {
            ctx->pc = 0x1AEDBCu;
            goto label_1aedbc;
        }
    }
    ctx->pc = 0x1AEDB0u;
    // 0x1aedb0: 0x24020104  addiu       $v0, $zero, 0x104
    ctx->pc = 0x1aedb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x1aedb4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AEDB4u;
    {
        const bool branch_taken_0x1aedb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEDB4u;
        // 0x1aedb8: 0x53800b  movn        $s0, $v0, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aedb4) {
            ctx->pc = 0x1AEDC0u;
            goto label_1aedc0;
        }
    }
    ctx->pc = 0x1AEDBCu;
label_1aedbc:
    // 0x1aedbc: 0x241000f7  addiu       $s0, $zero, 0xF7
    ctx->pc = 0x1aedbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
label_1aedc0:
    // 0x1aedc0: 0x240201ba  addiu       $v0, $zero, 0x1BA
    ctx->pc = 0x1aedc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
label_1aedc4:
    // 0x1aedc4: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AEDC4u;
    {
        const bool branch_taken_0x1aedc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AEDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEDC4u;
        // 0x1aedc8: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aedc4) {
            ctx->pc = 0x1AEDE0u;
            goto label_1aede0;
        }
    }
    ctx->pc = 0x1AEDCCu;
    // 0x1aedcc: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x1aedccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1aedd0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1aedd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1aedd4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1aedd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aedd8: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AEDD8u;
    {
        const bool branch_taken_0x1aedd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEDD8u;
        // 0x1aeddc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aedd8) {
            ctx->pc = 0x1AEDF4u;
            goto label_1aedf4;
        }
    }
    ctx->pc = 0x1AEDE0u;
label_1aede0:
    // 0x1aede0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aede0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aede4: 0xc06b85c  jal         func_1AE170
    ctx->pc = 0x1AEDE4u;
    SET_GPR_U32(ctx, 31, 0x1AEDECu);
    ctx->pc = 0x1AEDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEDE4u;
    // 0x1aede8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE170u, 0x1AEDE4u, 0x1AEDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEDECu;
label_1aedec:
    // 0x1aedec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AEDECu;
    {
        const bool branch_taken_0x1aedec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEDECu;
        // 0x1aedf0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aedec) {
            ctx->pc = 0x1AEE08u;
            goto label_1aee08;
        }
    }
    ctx->pc = 0x1AEDF4u;
label_1aedf4:
    // 0x1aedf4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1aedf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aedf8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1aedf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1aedfc: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AEDFCu;
    SET_GPR_U32(ctx, 31, 0x1AEE04u);
    ctx->pc = 0x1AEE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEDFCu;
    // 0x1aee00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AEDFCu, 0x1AEE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEE04u;
label_1aee04:
    // 0x1aee04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aee04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aee08:
    // 0x1aee08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aee08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aee0c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1aee0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aee10: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1aee10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aee14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1aee14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aee18: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE18u;
        // 0x1aee1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEE18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AEE20u;
}
