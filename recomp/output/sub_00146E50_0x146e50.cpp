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

// Function: sub_00146E50
// Address: 0x146e50 - 0x146f10
void sub_00146E50_0x146e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146E50_0x146e50");
#endif

    switch (ctx->pc) {
        case 0x146e88u: goto label_146e88;
        case 0x146e94u: goto label_146e94;
        case 0x146eb0u: goto label_146eb0;
        case 0x146ec4u: goto label_146ec4;
        case 0x146ed0u: goto label_146ed0;
        case 0x146ee0u: goto label_146ee0;
        default: break;
    }

    ctx->pc = 0x146e50u;

    // 0x146e50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x146e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x146e54: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x146e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x146e58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x146e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x146e5c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x146e5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146e60: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x146e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x146e64: 0x8c42bd38  lw          $v0, -0x42C8($v0)
    ctx->pc = 0x146e64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x48BD38u));
    // 0x146e68: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x146e68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146e6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x146e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x146e70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x146e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x146e74: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x146e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x146e78: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x146E78u;
    {
        const bool branch_taken_0x146e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146E78u;
        // 0x146e7c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146e78) {
            ctx->pc = 0x146E9Cu;
            goto label_146e9c;
        }
    }
    ctx->pc = 0x146E80u;
    // 0x146e80: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x146E80u;
    {
        const bool branch_taken_0x146e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146E80u;
        // 0x146e84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146e80) {
            ctx->pc = 0x146EF0u;
            goto label_146ef0;
        }
    }
    ctx->pc = 0x146E88u;
label_146e88:
    // 0x146e88: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x146e88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x146e8c: 0xc0f6230  jal         func_3D88C0
    ctx->pc = 0x146E8Cu;
    SET_GPR_U32(ctx, 31, 0x146E94u);
    ctx->pc = 0x146E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146E8Cu;
    // 0x146e90: 0x2484bd48  addiu       $a0, $a0, -0x42B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D88C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D88C0u, 0x146E8Cu, 0x146E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146E94u;
label_146e94:
    // 0x146e94: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x146E94u;
    {
        const bool branch_taken_0x146e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146E94u;
        // 0x146e98: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146e94) {
            ctx->pc = 0x146EF0u;
            goto label_146ef0;
        }
    }
    ctx->pc = 0x146E9Cu;
label_146e9c:
    // 0x146e9c: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x146E9Cu;
    {
        const bool branch_taken_0x146e9c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x146EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146E9Cu;
        // 0x146ea0: 0x2651bd38  addiu       $s1, $s2, -0x42C8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294950200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146e9c) {
            ctx->pc = 0x146EECu;
            goto label_146eec;
        }
    }
    ctx->pc = 0x146EA4u;
    // 0x146ea4: 0x3c140049  lui         $s4, 0x49
    ctx->pc = 0x146ea4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)73 << 16));
    // 0x146ea8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x146ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x146eac: 0x0  nop
    ctx->pc = 0x146eacu;
    // NOP
label_146eb0:
    // 0x146eb0: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x146EB0u;
    {
        const bool branch_taken_0x146eb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x146EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146EB0u;
        // 0x146eb4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146eb0) {
            ctx->pc = 0x146EBCu;
            goto label_146ebc;
        }
    }
    ctx->pc = 0x146EB8u;
    // 0x146eb8: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x146eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_146ebc:
    // 0x146ebc: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x146EBCu;
    SET_GPR_U32(ctx, 31, 0x146EC4u);
    ctx->pc = 0x146EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146EBCu;
    // 0x146ec0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x146EBCu, 0x146EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146EC4u;
label_146ec4:
    // 0x146ec4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x146ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146ec8: 0xc051e12  jal         func_147848
    ctx->pc = 0x146EC8u;
    SET_GPR_U32(ctx, 31, 0x146ED0u);
    ctx->pc = 0x146ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146EC8u;
    // 0x146ecc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147848u, 0x146EC8u, 0x146ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146ED0u;
label_146ed0:
    // 0x146ed0: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x146ED0u;
    {
        const bool branch_taken_0x146ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146ED0u;
        // 0x146ed4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146ed0) {
            ctx->pc = 0x146E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146e88;
        }
    }
    ctx->pc = 0x146ED8u;
    // 0x146ed8: 0xc0f6230  jal         func_3D88C0
    ctx->pc = 0x146ED8u;
    SET_GPR_U32(ctx, 31, 0x146EE0u);
    ctx->pc = 0x146EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146ED8u;
    // 0x146edc: 0x2684bd58  addiu       $a0, $s4, -0x42A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294950232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D88C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D88C0u, 0x146ED8u, 0x146EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146EE0u;
label_146ee0:
    // 0x146ee0: 0x8e43bd38  lw          $v1, -0x42C8($s2)
    ctx->pc = 0x146ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950200)));
    // 0x146ee4: 0x5c60fff2  bgtzl       $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x146EE4u;
    {
        const bool branch_taken_0x146ee4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x146ee4) {
            ctx->pc = 0x146EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146EE4u;
            // 0x146ee8: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146eb0;
        }
    }
    ctx->pc = 0x146EECu;
label_146eec:
    // 0x146eec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x146eecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_146ef0:
    // 0x146ef0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x146ef0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146ef4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x146ef4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x146ef8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x146ef8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146efc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x146efcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x146f00: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x146f00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x146f04: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x146f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x146f08: 0x3e00008  jr          $ra
    ctx->pc = 0x146F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146F08u;
        // 0x146f0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146F10u;
}
