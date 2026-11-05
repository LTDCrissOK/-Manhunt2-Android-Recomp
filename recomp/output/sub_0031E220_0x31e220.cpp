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

// Function: sub_0031E220
// Address: 0x31e220 - 0x31e258
void sub_0031E220_0x31e220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E220_0x31e220");
#endif

    ctx->pc = 0x31e220u;

    // 0x31e220: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31e220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x31e224: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x31e224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x31e228: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x31e228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x31e22c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x31e22cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x31e230: 0xa040bdac  sb          $zero, -0x4254($v0)
    ctx->pc = 0x31e230u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FBDACu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FBDACu, _value); } while (0);
    // 0x31e234: 0xa060bdad  sb          $zero, -0x4253($v1)
    ctx->pc = 0x31e234u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FBDADu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FBDADu, _value); } while (0);
    // 0x31e238: 0xac80bdb0  sw          $zero, -0x4250($a0)
    ctx->pc = 0x31e238u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FBDB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBDB0u, _value); } while (0);
    // 0x31e23c: 0x3e00008  jr          $ra
    ctx->pc = 0x31E23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E23Cu;
        // 0x31e240: 0xaca0bdb4  sw          $zero, -0x424C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294950324), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E23Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E244u;
    // 0x31e244: 0x0  nop
    ctx->pc = 0x31e244u;
    // NOP
    // 0x31e248: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x31e248u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x31e24c: 0x0  nop
    ctx->pc = 0x31e24cu;
    // NOP
    // 0x31e250: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x31e250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31e254: 0x0  nop
    ctx->pc = 0x31e254u;
    // NOP
    ctx->pc = 0x31e258u;
}
