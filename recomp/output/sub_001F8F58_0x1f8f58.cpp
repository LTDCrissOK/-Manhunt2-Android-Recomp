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

// Function: sub_001F8F58
// Address: 0x1f8f58 - 0x1f9020
void sub_001F8F58_0x1f8f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8F58_0x1f8f58");
#endif

    switch (ctx->pc) {
        case 0x1f8f98u: goto label_1f8f98;
        case 0x1f8fbcu: goto label_1f8fbc;
        case 0x1f8fe0u: goto label_1f8fe0;
        default: break;
    }

    ctx->pc = 0x1f8f58u;

    // 0x1f8f58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f8f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f8f5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f8f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f8f60: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f8f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f8f64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f8f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f8f68: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f8f68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8f6c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f8f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f8f70: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f8f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f8f74: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1f8f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1f8f78: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f8f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f8f7c: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x1f8f7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1f8f80: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F8F80u;
    {
        const bool branch_taken_0x1f8f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F80u;
        // 0x1f8f84: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8f80) {
            ctx->pc = 0x1F8FF8u;
            goto label_1f8ff8;
        }
    }
    ctx->pc = 0x1F8F88u;
    // 0x1f8f88: 0x241335e3  addiu       $s3, $zero, 0x35E3
    ctx->pc = 0x1f8f88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 13795));
    // 0x1f8f8c: 0x3c15004a  lui         $s5, 0x4A
    ctx->pc = 0x1f8f8cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)74 << 16));
    // 0x1f8f90: 0x2414fffb  addiu       $s4, $zero, -0x5
    ctx->pc = 0x1f8f90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1f8f94: 0x265035b0  addiu       $s0, $s2, 0x35B0
    ctx->pc = 0x1f8f94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 13744));
label_1f8f98:
    // 0x1f8f98: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1f8f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f8f9c: 0x50530012  beql        $v0, $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F8F9Cu;
    {
        const bool branch_taken_0x1f8f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x1f8f9c) {
            ctx->pc = 0x1F8FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8F9Cu;
            // 0x1f8fa0: 0x92420008  lbu         $v0, 0x8($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8FE8u;
            goto label_1f8fe8;
        }
    }
    ctx->pc = 0x1F8FA4u;
    // 0x1f8fa4: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x1f8fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1f8fa8: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1F8FA8u;
    {
        const bool branch_taken_0x1f8fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f8fa8) {
            ctx->pc = 0x1F8FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8FA8u;
            // 0x1f8fac: 0x92420008  lbu         $v0, 0x8($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8FE8u;
            goto label_1f8fe8;
        }
    }
    ctx->pc = 0x1F8FB0u;
    // 0x1f8fb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f8fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8fb4: 0xc080700  jal         func_201C00
    ctx->pc = 0x1F8FB4u;
    SET_GPR_U32(ctx, 31, 0x1F8FBCu);
    ctx->pc = 0x1F8FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8FB4u;
    // 0x1f8fb8: 0x26a49c38  addiu       $a0, $s5, -0x63C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C00u, 0x1F8FB4u, 0x1F8FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8FBCu;
label_1f8fbc:
    // 0x1f8fbc: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x1f8fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1f8fc0: 0xae130008  sw          $s3, 0x8($s0)
    ctx->pc = 0x1f8fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
    // 0x1f8fc4: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F8FC4u;
    {
        const bool branch_taken_0x1f8fc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8FC4u;
        // 0x1f8fc8: 0xae140000  sw          $s4, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8fc4) {
            ctx->pc = 0x1F8FE4u;
            goto label_1f8fe4;
        }
    }
    ctx->pc = 0x1F8FCCu;
    // 0x1f8fcc: 0x8e424ebc  lw          $v0, 0x4EBC($s2)
    ctx->pc = 0x1f8fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20156)));
    // 0x1f8fd0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8FD0u;
    {
        const bool branch_taken_0x1f8fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8FD0u;
        // 0x1f8fd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8fd0) {
            ctx->pc = 0x1F8FE0u;
            goto label_1f8fe0;
        }
    }
    ctx->pc = 0x1F8FD8u;
    // 0x1f8fd8: 0xc07e654  jal         func_1F9950
    ctx->pc = 0x1F8FD8u;
    SET_GPR_U32(ctx, 31, 0x1F8FE0u);
    ctx->pc = 0x1F8FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8FD8u;
    // 0x1f8fdc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1F8FD8u, 0x1F8FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8FE0u;
label_1f8fe0:
    // 0x1f8fe0: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x1f8fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_1f8fe4:
    // 0x1f8fe4: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x1f8fe4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
label_1f8fe8:
    // 0x1f8fe8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8fe8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8fec: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1f8fecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f8ff0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1F8FF0u;
    {
        const bool branch_taken_0x1f8ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8FF0u;
        // 0x1f8ff4: 0x26100090  addiu       $s0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8ff0) {
            ctx->pc = 0x1F8F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f8f98;
        }
    }
    ctx->pc = 0x1F8FF8u;
label_1f8ff8:
    // 0x1f8ff8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f8ff8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8ffc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f8ffcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f9000: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f9000u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9004: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f9004u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f9008: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f9008u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f900c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1f900cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f9010: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f9010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f9014: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9014u;
        // 0x1f9018: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F901Cu;
    // 0x1f901c: 0x0  nop
    ctx->pc = 0x1f901cu;
    // NOP
    ctx->pc = 0x1f9020u;
}
