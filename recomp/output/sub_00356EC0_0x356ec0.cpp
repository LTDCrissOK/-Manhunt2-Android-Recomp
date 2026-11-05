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

// Function: sub_00356EC0
// Address: 0x356ec0 - 0x356f48
void sub_00356EC0_0x356ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356EC0_0x356ec0");
#endif

    switch (ctx->pc) {
        case 0x356ed8u: goto label_356ed8;
        case 0x356f10u: goto label_356f10;
        default: break;
    }

    ctx->pc = 0x356ec0u;

    // 0x356ec0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x356ec0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356ec4: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x356ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x356ec8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x356EC8u;
    {
        const bool branch_taken_0x356ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x356ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356EC8u;
        // 0x356ecc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356ec8) {
            ctx->pc = 0x356EF8u;
            goto label_356ef8;
        }
    }
    ctx->pc = 0x356ED0u;
    // 0x356ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x356ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356ED0u;
        // 0x356ed4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356ED8u;
label_356ed8:
    // 0x356ed8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x356ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356edc: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x356edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x356ee0: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x356ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x356ee4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x356ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356ee8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x356ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x356eec: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x356eecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x356ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x356EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356EF0u;
        // 0x356ef4: 0xace30004  sw          $v1, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356EF8u;
label_356ef8:
    // 0x356ef8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x356ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356efc: 0x2449ca30  addiu       $t1, $v0, -0x35D0
    ctx->pc = 0x356efcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953520));
    // 0x356f00: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x356f00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356f04: 0x2468006c  addiu       $t0, $v1, 0x6C
    ctx->pc = 0x356f04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 108));
    // 0x356f08: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x356f08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356f0c: 0x0  nop
    ctx->pc = 0x356f0cu;
    // NOP
label_356f10:
    // 0x356f10: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x356f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x356f14: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x356f14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x356f18: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x356F18u;
    {
        const bool branch_taken_0x356f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356f18) {
            ctx->pc = 0x356F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x356F18u;
            // 0x356f1c: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x356F2Cu;
            goto label_356f2c;
        }
    }
    ctx->pc = 0x356F20u;
    // 0x356f20: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x356f20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x356f24: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x356F24u;
    {
        const bool branch_taken_0x356f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x356F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356F24u;
        // 0x356f28: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356f24) {
            ctx->pc = 0x356ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_356ed8;
        }
    }
    ctx->pc = 0x356F2Cu;
label_356f2c:
    // 0x356f2c: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x356f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x356f30: 0x68102a  slt         $v0, $v1, $t0
    ctx->pc = 0x356f30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x356f34: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x356F34u;
    {
        const bool branch_taken_0x356f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x356F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356F34u;
        // 0x356f38: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356f34) {
            ctx->pc = 0x356F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_356f10;
        }
    }
    ctx->pc = 0x356F3Cu;
    // 0x356f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x356F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356F3Cu;
        // 0x356f40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356F44u;
    // 0x356f44: 0x0  nop
    ctx->pc = 0x356f44u;
    // NOP
    ctx->pc = 0x356f48u;
}
