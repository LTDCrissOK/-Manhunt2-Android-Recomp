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

// Function: sub_0031F118
// Address: 0x31f118 - 0x31f150
void sub_0031F118_0x31f118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031F118_0x31f118");
#endif

    ctx->pc = 0x31f118u;

    // 0x31f118: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31f118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31f11c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31f11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31f120: 0xac8219bc  sw          $v0, 0x19BC($a0)
    ctx->pc = 0x31f120u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6588), GPR_U32(ctx, 2));
    // 0x31f124: 0xa08319c4  sb          $v1, 0x19C4($a0)
    ctx->pc = 0x31f124u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6596), (uint8_t)GPR_U32(ctx, 3));
    // 0x31f128: 0xa0801a10  sb          $zero, 0x1A10($a0)
    ctx->pc = 0x31f128u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6672), (uint8_t)GPR_U32(ctx, 0));
    // 0x31f12c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x31f12cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x31f130: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x31f130u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x31f134: 0xa0800010  sb          $zero, 0x10($a0)
    ctx->pc = 0x31f134u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x31f138: 0xa0800011  sb          $zero, 0x11($a0)
    ctx->pc = 0x31f138u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x31f13c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x31f13cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x31f140: 0xac8019b4  sw          $zero, 0x19B4($a0)
    ctx->pc = 0x31f140u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6580), GPR_U32(ctx, 0));
    // 0x31f144: 0xac8019b8  sw          $zero, 0x19B8($a0)
    ctx->pc = 0x31f144u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6584), GPR_U32(ctx, 0));
    // 0x31f148: 0x3e00008  jr          $ra
    ctx->pc = 0x31F148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F148u;
        // 0x31f14c: 0xac8019c0  sw          $zero, 0x19C0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 6592), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F150u;
}
