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

// Function: sub_002D9D40
// Address: 0x2d9d40 - 0x2d9d98
void sub_002D9D40_0x2d9d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9D40_0x2d9d40");
#endif

    switch (ctx->pc) {
        case 0x2d9d58u: goto label_2d9d58;
        default: break;
    }

    ctx->pc = 0x2d9d40u;

    // 0x2d9d40: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D9D40u;
    {
        const bool branch_taken_0x2d9d40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9D40u;
        // 0x2d9d44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9d40) {
            ctx->pc = 0x2D9D88u;
            goto label_2d9d88;
        }
    }
    ctx->pc = 0x2D9D48u;
    // 0x2d9d48: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2d9d48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d9d4c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2D9D4Cu;
    {
        const bool branch_taken_0x2d9d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9d4c) {
            ctx->pc = 0x2D9D88u;
            goto label_2d9d88;
        }
    }
    ctx->pc = 0x2D9D54u;
    // 0x2d9d54: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x2d9d54u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2d9d58:
    // 0x2d9d58: 0x2462ff9f  addiu       $v0, $v1, -0x61
    ctx->pc = 0x2d9d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967199));
    // 0x2d9d5c: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x2d9d5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x2d9d60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D9D60u;
    {
        const bool branch_taken_0x2d9d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9D60u;
        // 0x2d9d64: 0x2462ffe0  addiu       $v0, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9d60) {
            ctx->pc = 0x2D9D70u;
            goto label_2d9d70;
        }
    }
    ctx->pc = 0x2D9D68u;
    // 0x2d9d68: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2d9d68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2d9d6c: 0x21e03  sra         $v1, $v0, 24
    ctx->pc = 0x2d9d6cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 24));
label_2d9d70:
    // 0x2d9d70: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x2d9d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2d9d74: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2d9d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2d9d78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d9d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d9d7c: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x2d9d7cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d9d80: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2D9D80u;
    {
        const bool branch_taken_0x2d9d80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9D80u;
        // 0x2d9d84: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9d80) {
            ctx->pc = 0x2D9D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d9d58;
        }
    }
    ctx->pc = 0x2D9D88u;
label_2d9d88:
    // 0x2d9d88: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9D88u;
        // 0x2d9d8c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9D90u;
    // 0x2d9d90: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2d9d90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2d9d94: 0x0  nop
    ctx->pc = 0x2d9d94u;
    // NOP
    ctx->pc = 0x2d9d98u;
}
