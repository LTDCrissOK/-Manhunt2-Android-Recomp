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

// Function: sub_00127C68
// Address: 0x127c68 - 0x127cc8
void sub_00127C68_0x127c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127C68_0x127c68");
#endif

    switch (ctx->pc) {
        case 0x127c84u: goto label_127c84;
        case 0x127ca0u: goto label_127ca0;
        default: break;
    }

    ctx->pc = 0x127c68u;

    // 0x127c68: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x127C68u;
    {
        const bool branch_taken_0x127c68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x127c68) {
            ctx->pc = 0x127C7Cu;
            goto label_127c7c;
        }
    }
    ctx->pc = 0x127C70u;
    // 0x127c70: 0x90820a70  lbu         $v0, 0xA70($a0)
    ctx->pc = 0x127c70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2672)));
    // 0x127c74: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x127C74u;
    {
        const bool branch_taken_0x127c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127c74) {
            ctx->pc = 0x127C8Cu;
            goto label_127c8c;
        }
    }
    ctx->pc = 0x127C7Cu;
label_127c7c:
    // 0x127c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x127C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127C7Cu;
        // 0x127c80: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127C84u;
label_127c84:
    // 0x127c84: 0x3e00008  jr          $ra
    ctx->pc = 0x127C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127C84u;
        // 0x127c88: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127C8Cu;
label_127c8c:
    // 0x127c8c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x127C8Cu;
    {
        const bool branch_taken_0x127c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127C8Cu;
        // 0x127c90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127c8c) {
            ctx->pc = 0x127CC0u;
            goto label_127cc0;
        }
    }
    ctx->pc = 0x127C94u;
    // 0x127c94: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x127c94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127c98: 0x61180  sll         $v0, $a2, 6
    ctx->pc = 0x127c98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x127c9c: 0x0  nop
    ctx->pc = 0x127c9cu;
    // NOP
label_127ca0:
    // 0x127ca0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x127ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x127ca4: 0x8c430894  lw          $v1, 0x894($v0)
    ctx->pc = 0x127ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2196)));
    // 0x127ca8: 0x1065fff6  beq         $v1, $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x127CA8u;
    {
        const bool branch_taken_0x127ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x127CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127CA8u;
        // 0x127cac: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127ca8) {
            ctx->pc = 0x127C84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127c84;
        }
    }
    ctx->pc = 0x127CB0u;
    // 0x127cb0: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x127cb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x127cb4: 0xc7182b  sltu        $v1, $a2, $a3
    ctx->pc = 0x127cb4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x127cb8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x127CB8u;
    {
        const bool branch_taken_0x127cb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x127CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127CB8u;
        // 0x127cbc: 0x61180  sll         $v0, $a2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127cb8) {
            ctx->pc = 0x127CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127ca0;
        }
    }
    ctx->pc = 0x127CC0u;
label_127cc0:
    // 0x127cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x127CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127CC0u;
        // 0x127cc4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127CC8u;
}
