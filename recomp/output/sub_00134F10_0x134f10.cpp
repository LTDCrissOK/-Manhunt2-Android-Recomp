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

// Function: sub_00134F10
// Address: 0x134f10 - 0x134fa8
void sub_00134F10_0x134f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134F10_0x134f10");
#endif

    switch (ctx->pc) {
        case 0x134f30u: goto label_134f30;
        default: break;
    }

    ctx->pc = 0x134f10u;

    // 0x134f10: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x134f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x134f14: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x134f14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x134f18: 0x244b8ed0  addiu       $t3, $v0, -0x7130
    ctx->pc = 0x134f18u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938320));
    // 0x134f1c: 0x24090009  addiu       $t1, $zero, 0x9
    ctx->pc = 0x134f1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x134f20: 0x256c0004  addiu       $t4, $t3, 0x4
    ctx->pc = 0x134f20u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x134f24: 0x256a000c  addiu       $t2, $t3, 0xC
    ctx->pc = 0x134f24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 12));
    // 0x134f28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x134f28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134f2c: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x134f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_134f30:
    // 0x134f30: 0x8b1021  addu        $v0, $a0, $t3
    ctx->pc = 0x134f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x134f34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x134f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134f38: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x134F38u;
    {
        const bool branch_taken_0x134f38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x134F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F38u;
        // 0x134f3c: 0x8c1021  addu        $v0, $a0, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134f38) {
            ctx->pc = 0x134F48u;
            goto label_134f48;
        }
    }
    ctx->pc = 0x134F40u;
    // 0x134f40: 0x3e00008  jr          $ra
    ctx->pc = 0x134F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F40u;
        // 0x134f44: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134F48u;
label_134f48:
    // 0x134f48: 0x39030004  xori        $v1, $t0, 0x4
    ctx->pc = 0x134f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)4);
    // 0x134f4c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x134F4Cu;
    {
        const bool branch_taken_0x134f4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x134F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F4Cu;
        // 0x134f50: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134f4c) {
            ctx->pc = 0x134F84u;
            goto label_134f84;
        }
    }
    ctx->pc = 0x134F54u;
    // 0x134f54: 0xc9102a  slt         $v0, $a2, $t1
    ctx->pc = 0x134f54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x134f58: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x134F58u;
    {
        const bool branch_taken_0x134f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x134f58) {
            ctx->pc = 0x134F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134F58u;
            // 0x134f5c: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134F88u;
            goto label_134f88;
        }
    }
    ctx->pc = 0x134F60u;
    // 0x134f60: 0x14c90006  bne         $a2, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x134F60u;
    {
        const bool branch_taken_0x134f60 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 9));
        ctx->pc = 0x134F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F60u;
        // 0x134f64: 0x81900  sll         $v1, $t0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134f60) {
            ctx->pc = 0x134F7Cu;
            goto label_134f7c;
        }
    }
    ctx->pc = 0x134F68u;
    // 0x134f68: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x134f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x134f6c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x134f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x134f70: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x134f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x134f74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x134f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x134f78: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x134f78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_134f7c:
    // 0x134f7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x134F7Cu;
    {
        const bool branch_taken_0x134f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F7Cu;
        // 0x134f80: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134f7c) {
            ctx->pc = 0x134F90u;
            goto label_134f90;
        }
    }
    ctx->pc = 0x134F84u;
label_134f84:
    // 0x134f84: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x134f84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_134f88:
    // 0x134f88: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x134f88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134f8c: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x134f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_134f90:
    // 0x134f90: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x134f90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x134f94: 0x2ce30004  sltiu       $v1, $a3, 0x4
    ctx->pc = 0x134f94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x134f98: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x134F98u;
    {
        const bool branch_taken_0x134f98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x134F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F98u;
        // 0x134f9c: 0x72100  sll         $a0, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134f98) {
            ctx->pc = 0x134F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_134f30;
        }
    }
    ctx->pc = 0x134FA0u;
    // 0x134fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x134FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134FA0u;
        // 0x134fa4: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134FA8u;
}
