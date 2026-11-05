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

// Function: sub_00126718
// Address: 0x126718 - 0x126740
void sub_00126718_0x126718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126718_0x126718");
#endif

    ctx->pc = 0x126718u;

    // 0x126718: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x126718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x12671c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x12671cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x126720: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x126720u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x126724: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x126724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x126728: 0xac400240  sw          $zero, 0x240($v0)
    ctx->pc = 0x126728u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 576), GPR_U32(ctx, 0));
    // 0x12672c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12672cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126730: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x126730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126734: 0xa0600244  sb          $zero, 0x244($v1)
    ctx->pc = 0x126734u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 580), (uint8_t)GPR_U32(ctx, 0));
    // 0x126738: 0x3e00008  jr          $ra
    ctx->pc = 0x126738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126738u;
        // 0x12673c: 0xac800248  sw          $zero, 0x248($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126740u;
}
