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

// Function: sub_003D8FA0
// Address: 0x3d8fa0 - 0x3d9000
void sub_003D8FA0_0x3d8fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8FA0_0x3d8fa0");
#endif

    ctx->pc = 0x3d8fa0u;

    // 0x3d8fa0: 0x94830010  lhu         $v1, 0x10($a0)
    ctx->pc = 0x3d8fa0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3d8fa4: 0x94820008  lhu         $v0, 0x8($a0)
    ctx->pc = 0x3d8fa4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3d8fa8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D8FA8u;
    {
        const bool branch_taken_0x3d8fa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D8FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8FA8u;
        // 0x3d8fac: 0x30a600ff  andi        $a2, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8fa8) {
            ctx->pc = 0x3D8FD0u;
            goto label_3d8fd0;
        }
    }
    ctx->pc = 0x3D8FB0u;
    // 0x3d8fb0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3d8fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3d8fb4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D8FB4u;
    {
        const bool branch_taken_0x3d8fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8fb4) {
            ctx->pc = 0x3D8FB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D8FB4u;
            // 0x3d8fb8: 0x94830008  lhu         $v1, 0x8($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D8FD8u;
            goto label_3d8fd8;
        }
    }
    ctx->pc = 0x3D8FBCu;
    // 0x3d8fbc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3d8fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3d8fc0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3d8fc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d8fc4: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x3d8fc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3d8fc8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3D8FC8u;
    {
        const bool branch_taken_0x3d8fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D8FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8FC8u;
        // 0x3d8fcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8fc8) {
            ctx->pc = 0x3D8FF8u;
            goto label_3d8ff8;
        }
    }
    ctx->pc = 0x3D8FD0u;
label_3d8fd0:
    // 0x3d8fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8FD0u;
        // 0x3d8fd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8FD8u;
label_3d8fd8:
    // 0x3d8fd8: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x3d8fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3d8fdc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3d8fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3d8fe0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3d8fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3d8fe4: 0x9064fff8  lbu         $a0, -0x8($v1)
    ctx->pc = 0x3d8fe4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x3d8fe8: 0x86202b  sltu        $a0, $a0, $a2
    ctx->pc = 0x3d8fe8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3d8fec: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3D8FECu;
    {
        const bool branch_taken_0x3d8fec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8FECu;
        // 0x3d8ff0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8fec) {
            ctx->pc = 0x3D8FF8u;
            goto label_3d8ff8;
        }
    }
    ctx->pc = 0x3D8FF4u;
    // 0x3d8ff4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d8ff4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d8ff8:
    // 0x3d8ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9000u;
}
