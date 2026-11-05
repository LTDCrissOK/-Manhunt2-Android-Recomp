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

// Function: sub_00350F38
// Address: 0x350f38 - 0x351018
void sub_00350F38_0x350f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350F38_0x350f38");
#endif

    switch (ctx->pc) {
        case 0x350f80u: goto label_350f80;
        case 0x350f8cu: goto label_350f8c;
        case 0x350fb4u: goto label_350fb4;
        case 0x350fc8u: goto label_350fc8;
        default: break;
    }

    ctx->pc = 0x350f38u;

    // 0x350f38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x350f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x350f3c: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x350f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x350f40: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x350f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x350f44: 0x2442be70  addiu       $v0, $v0, -0x4190
    ctx->pc = 0x350f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950512));
    // 0x350f48: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x350f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x350f4c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x350f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x350f50: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x350f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x350f54: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x350f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x350f58: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x350f58u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5BBE74u));
    // 0x350f5c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x350f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x350f60: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x350f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x350f64: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x350f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x350f68: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x350f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x350f6c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x350f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x350f70: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x350F70u;
    {
        const bool branch_taken_0x350f70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x350F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350F70u;
        // 0x350f74: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350f70) {
            ctx->pc = 0x351000u;
            goto label_351000;
        }
    }
    ctx->pc = 0x350F78u;
    // 0x350f78: 0x2411000a  addiu       $s1, $zero, 0xA
    ctx->pc = 0x350f78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x350f7c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x350f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_350f80:
    // 0x350f80: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x350f80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x350f84: 0xc0d22dc  jal         func_348B70
    ctx->pc = 0x350F84u;
    SET_GPR_U32(ctx, 31, 0x350F8Cu);
    ctx->pc = 0x350F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350F84u;
    // 0x350f88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348B70u, 0x350F84u, 0x350F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350F8Cu;
label_350f8c:
    // 0x350f8c: 0x1451000f  bne         $v0, $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x350F8Cu;
    {
        const bool branch_taken_0x350f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x350F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350F8Cu;
        // 0x350f90: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350f8c) {
            ctx->pc = 0x350FCCu;
            goto label_350fcc;
        }
    }
    ctx->pc = 0x350F94u;
    // 0x350f94: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x350F94u;
    {
        const bool branch_taken_0x350f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x350F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350F94u;
        // 0x350f98: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350f94) {
            ctx->pc = 0x350FB8u;
            goto label_350fb8;
        }
    }
    ctx->pc = 0x350F9Cu;
    // 0x350f9c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x350f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x350fa0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x350fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350fa4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x350fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x350fa8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x350fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x350fac: 0xc0fbc50  jal         func_3EF140
    ctx->pc = 0x350FACu;
    SET_GPR_U32(ctx, 31, 0x350FB4u);
    ctx->pc = 0x350FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350FACu;
    // 0x350fb0: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EF140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF140u, 0x350FACu, 0x350FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350FB4u;
label_350fb4:
    // 0x350fb4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x350fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_350fb8:
    // 0x350fb8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x350FB8u;
    {
        const bool branch_taken_0x350fb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x350FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350FB8u;
        // 0x350fbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350fb8) {
            ctx->pc = 0x350FC8u;
            goto label_350fc8;
        }
    }
    ctx->pc = 0x350FC0u;
    // 0x350fc0: 0xc0d1e40  jal         func_347900
    ctx->pc = 0x350FC0u;
    SET_GPR_U32(ctx, 31, 0x350FC8u);
    ctx->pc = 0x350FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350FC0u;
    // 0x350fc4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347900u, 0x350FC0u, 0x350FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350FC8u;
label_350fc8:
    // 0x350fc8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x350fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_350fcc:
    // 0x350fcc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x350FCCu;
    {
        const bool branch_taken_0x350fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x350fcc) {
            ctx->pc = 0x350FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350FCCu;
            // 0x350fd0: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350FE0u;
            goto label_350fe0;
        }
    }
    ctx->pc = 0x350FD4u;
    // 0x350fd4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x350fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x350fd8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x350FD8u;
    {
        const bool branch_taken_0x350fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350FD8u;
        // 0x350fdc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350fd8) {
            ctx->pc = 0x350FF0u;
            goto label_350ff0;
        }
    }
    ctx->pc = 0x350FE0u;
label_350fe0:
    // 0x350fe0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x350FE0u;
    {
        const bool branch_taken_0x350fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x350FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350FE0u;
        // 0x350fe4: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350fe0) {
            ctx->pc = 0x350FF4u;
            goto label_350ff4;
        }
    }
    ctx->pc = 0x350FE8u;
    // 0x350fe8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x350fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x350fec: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x350fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_350ff0:
    // 0x350ff0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x350ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_350ff4:
    // 0x350ff4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x350ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x350ff8: 0x1462ffe1  bne         $v1, $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x350FF8u;
    {
        const bool branch_taken_0x350ff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x350FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350FF8u;
        // 0x350ffc: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350ff8) {
            ctx->pc = 0x350F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_350f80;
        }
    }
    ctx->pc = 0x351000u;
label_351000:
    // 0x351000: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x351000u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x351004: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x351004u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x351008: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x351008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35100c: 0x3e00008  jr          $ra
    ctx->pc = 0x35100Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35100Cu;
        // 0x351010: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35100Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351014u;
    // 0x351014: 0x0  nop
    ctx->pc = 0x351014u;
    // NOP
    ctx->pc = 0x351018u;
}
