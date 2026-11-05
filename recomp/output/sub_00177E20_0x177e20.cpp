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

// Function: sub_00177E20
// Address: 0x177e20 - 0x177e70
void sub_00177E20_0x177e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177E20_0x177e20");
#endif

    switch (ctx->pc) {
        case 0x177e34u: goto label_177e34;
        case 0x177e48u: goto label_177e48;
        default: break;
    }

    ctx->pc = 0x177e20u;

    // 0x177e20: 0x90820158  lbu         $v0, 0x158($a0)
    ctx->pc = 0x177e20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x177e24: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x177E24u;
    {
        const bool branch_taken_0x177e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177E24u;
        // 0x177e28: 0x248400d8  addiu       $a0, $a0, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177e24) {
            ctx->pc = 0x177E3Cu;
            goto label_177e3c;
        }
    }
    ctx->pc = 0x177E2Cu;
    // 0x177e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x177E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177E2Cu;
        // 0x177e30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177E34u;
label_177e34:
    // 0x177e34: 0x3e00008  jr          $ra
    ctx->pc = 0x177E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177E34u;
        // 0x177e38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177E3Cu;
label_177e3c:
    // 0x177e3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x177e3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177e40: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x177e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x177e44: 0x0  nop
    ctx->pc = 0x177e44u;
    // NOP
label_177e48:
    // 0x177e48: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x177e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x177e4c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x177e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177e50: 0x1065fff8  beq         $v1, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x177E50u;
    {
        const bool branch_taken_0x177e50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x177E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177E50u;
        // 0x177e54: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177e50) {
            ctx->pc = 0x177E34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177e34;
        }
    }
    ctx->pc = 0x177E58u;
    // 0x177e58: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x177e58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x177e5c: 0x2cc30010  sltiu       $v1, $a2, 0x10
    ctx->pc = 0x177e5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x177e60: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x177E60u;
    {
        const bool branch_taken_0x177e60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x177E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177E60u;
        // 0x177e64: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177e60) {
            ctx->pc = 0x177E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177e48;
        }
    }
    ctx->pc = 0x177E68u;
    // 0x177e68: 0x3e00008  jr          $ra
    ctx->pc = 0x177E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177E68u;
        // 0x177e6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177E70u;
}
