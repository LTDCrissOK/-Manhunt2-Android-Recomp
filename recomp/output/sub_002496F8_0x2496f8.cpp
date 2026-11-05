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

// Function: sub_002496F8
// Address: 0x2496f8 - 0x249748
void sub_002496F8_0x2496f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002496F8_0x2496f8");
#endif

    ctx->pc = 0x2496f8u;

    // 0x2496f8: 0x8c830334  lw          $v1, 0x334($a0)
    ctx->pc = 0x2496f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
    // 0x2496fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2496fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249700: 0x8c6201e4  lw          $v0, 0x1E4($v1)
    ctx->pc = 0x249700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 484)));
    // 0x249704: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x249704u;
    {
        const bool branch_taken_0x249704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249704u;
        // 0x249708: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249704) {
            ctx->pc = 0x249714u;
            goto label_249714;
        }
    }
    ctx->pc = 0x24970Cu;
    // 0x24970c: 0x9442002a  lhu         $v0, 0x2A($v0)
    ctx->pc = 0x24970cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
    // 0x249710: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x249710u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_249714:
    // 0x249714: 0x8c6201e8  lw          $v0, 0x1E8($v1)
    ctx->pc = 0x249714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 488)));
    // 0x249718: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x249718u;
    {
        const bool branch_taken_0x249718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x249718) {
            ctx->pc = 0x249728u;
            goto label_249728;
        }
    }
    ctx->pc = 0x249720u;
    // 0x249720: 0x9442002a  lhu         $v0, 0x2A($v0)
    ctx->pc = 0x249720u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
    // 0x249724: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x249724u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_249728:
    // 0x249728: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x249728u;
    {
        const bool branch_taken_0x249728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24972Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249728u;
        // 0x24972c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249728) {
            ctx->pc = 0x24973Cu;
            goto label_24973c;
        }
    }
    ctx->pc = 0x249730u;
    // 0x249730: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x249730u;
    {
        const bool branch_taken_0x249730 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x249734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249730u;
        // 0x249734: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249730) {
            ctx->pc = 0x24973Cu;
            goto label_24973c;
        }
    }
    ctx->pc = 0x249738u;
    // 0x249738: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x249738u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24973c:
    // 0x24973c: 0x3e00008  jr          $ra
    ctx->pc = 0x24973Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24973Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249744u;
    // 0x249744: 0x0  nop
    ctx->pc = 0x249744u;
    // NOP
    ctx->pc = 0x249748u;
}
