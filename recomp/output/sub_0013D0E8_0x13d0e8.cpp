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

// Function: sub_0013D0E8
// Address: 0x13d0e8 - 0x13d148
void sub_0013D0E8_0x13d0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D0E8_0x13d0e8");
#endif

    switch (ctx->pc) {
        case 0x13d0fcu: goto label_13d0fc;
        case 0x13d110u: goto label_13d110;
        default: break;
    }

    ctx->pc = 0x13d0e8u;

    // 0x13d0e8: 0x908202a8  lbu         $v0, 0x2A8($a0)
    ctx->pc = 0x13d0e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 680)));
    // 0x13d0ec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13D0ECu;
    {
        const bool branch_taken_0x13d0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D0ECu;
        // 0x13d0f0: 0x2488022c  addiu       $t0, $a0, 0x22C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d0ec) {
            ctx->pc = 0x13D104u;
            goto label_13d104;
        }
    }
    ctx->pc = 0x13D0F4u;
    // 0x13d0f4: 0x3e00008  jr          $ra
    ctx->pc = 0x13D0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D0F4u;
        // 0x13d0f8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D0F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D0FCu;
label_13d0fc:
    // 0x13d0fc: 0x3e00008  jr          $ra
    ctx->pc = 0x13D0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D0FCu;
        // 0x13d100: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D0FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D104u;
label_13d104:
    // 0x13d104: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13d104u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d108: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x13d108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    // 0x13d10c: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x13d10cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_13d110:
    // 0x13d110: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x13d110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13d114: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13d114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d118: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13D118u;
    {
        const bool branch_taken_0x13d118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D118u;
        // 0x13d11c: 0x1061021  addu        $v0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d118) {
            ctx->pc = 0x13D12Cu;
            goto label_13d12c;
        }
    }
    ctx->pc = 0x13D120u;
    // 0x13d120: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13d120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d124: 0x1065fff5  beq         $v1, $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x13D124u;
    {
        const bool branch_taken_0x13d124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x13d124) {
            ctx->pc = 0x13D0FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d0fc;
        }
    }
    ctx->pc = 0x13D12Cu;
label_13d12c:
    // 0x13d12c: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x13d12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x13d130: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x13d130u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13d134: 0x2ce30010  sltiu       $v1, $a3, 0x10
    ctx->pc = 0x13d134u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x13d138: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x13D138u;
    {
        const bool branch_taken_0x13d138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D138u;
        // 0x13d13c: 0x730c0  sll         $a2, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d138) {
            ctx->pc = 0x13D110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d110;
        }
    }
    ctx->pc = 0x13D140u;
    // 0x13d140: 0x3e00008  jr          $ra
    ctx->pc = 0x13D140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D140u;
        // 0x13d144: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D148u;
}
