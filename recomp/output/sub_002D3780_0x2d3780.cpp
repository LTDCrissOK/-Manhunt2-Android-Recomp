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

// Function: sub_002D3780
// Address: 0x2d3780 - 0x2d37a8
void sub_002D3780_0x2d3780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3780_0x2d3780");
#endif

    ctx->pc = 0x2d3780u;

    // 0x2d3780: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2d3780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2d3784: 0x8c8600a8  lw          $a2, 0xA8($a0)
    ctx->pc = 0x2d3784u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x2d3788: 0x24a507ff  addiu       $a1, $a1, 0x7FF
    ctx->pc = 0x2d3788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2047));
    // 0x2d378c: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x2d378cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x2d3790: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x2d3790u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2d3794: 0xc5182a  slt         $v1, $a2, $a1
    ctx->pc = 0x2d3794u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2d3798: 0xc3280a  movz        $a1, $a2, $v1
    ctx->pc = 0x2d3798u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
    // 0x2d379c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D379Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D37A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D379Cu;
        // 0x2d37a0: 0xac8500a8  sw          $a1, 0xA8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D379Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D37A4u;
    // 0x2d37a4: 0x0  nop
    ctx->pc = 0x2d37a4u;
    // NOP
    ctx->pc = 0x2d37a8u;
}
