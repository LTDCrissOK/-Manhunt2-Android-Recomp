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

// Function: sub_003268E8
// Address: 0x3268e8 - 0x326918
void sub_003268E8_0x3268e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003268E8_0x3268e8");
#endif

    ctx->pc = 0x3268e8u;

    // 0x3268e8: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x3268e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x3268ec: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x3268ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3268f0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3268f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3268f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3268f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3268f8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3268f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3268fc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x3268fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x326900: 0xa0800010  sb          $zero, 0x10($a0)
    ctx->pc = 0x326900u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x326904: 0xa0800011  sb          $zero, 0x11($a0)
    ctx->pc = 0x326904u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x326908: 0xa0800012  sb          $zero, 0x12($a0)
    ctx->pc = 0x326908u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x32690c: 0x3e00008  jr          $ra
    ctx->pc = 0x32690Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32690Cu;
        // 0x326910: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32690Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326914u;
    // 0x326914: 0x0  nop
    ctx->pc = 0x326914u;
    // NOP
    ctx->pc = 0x326918u;
}
