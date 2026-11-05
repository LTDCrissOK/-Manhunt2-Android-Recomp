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

// Function: sub_00208708
// Address: 0x208708 - 0x208738
void sub_00208708_0x208708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208708_0x208708");
#endif

    ctx->pc = 0x208708u;

    // 0x208708: 0x240200f8  addiu       $v0, $zero, 0xF8
    ctx->pc = 0x208708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    // 0x20870c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x20870cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208710: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x208710u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x208714: 0x38e3003b  xori        $v1, $a3, 0x3B
    ctx->pc = 0x208714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)59);
    // 0x208718: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x208718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x20871c: 0xc3100b  movn        $v0, $a2, $v1
    ctx->pc = 0x20871cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x208720: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x208720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x208724: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x208724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x208728: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x208728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20872c: 0x3e00008  jr          $ra
    ctx->pc = 0x20872Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20872Cu;
        // 0x208730: 0x8c820028  lw          $v0, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20872Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208734u;
    // 0x208734: 0x0  nop
    ctx->pc = 0x208734u;
    // NOP
    ctx->pc = 0x208738u;
}
