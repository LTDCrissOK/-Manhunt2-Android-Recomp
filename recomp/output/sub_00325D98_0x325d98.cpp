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

// Function: sub_00325D98
// Address: 0x325d98 - 0x325dc0
void sub_00325D98_0x325d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325D98_0x325d98");
#endif

    ctx->pc = 0x325d98u;

    // 0x325d98: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x325d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x325d9c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x325d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x325da0: 0x90454770  lbu         $a1, 0x4770($v0)
    ctx->pc = 0x325da0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x474770u));
    // 0x325da4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x325da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x325da8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x325da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x325dac: 0xac80be8c  sw          $zero, -0x4174($a0)
    ctx->pc = 0x325dacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FBE8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBE8Cu, _value); } while (0);
    // 0x325db0: 0xa065d7e8  sb          $a1, -0x2818($v1)
    ctx->pc = 0x325db0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6BD7E8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6BD7E8u, _value); } while (0);
    // 0x325db4: 0x3e00008  jr          $ra
    ctx->pc = 0x325DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325DB4u;
        // 0x325db8: 0xac40be90  sw          $zero, -0x4170($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950544), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325DBCu;
    // 0x325dbc: 0x0  nop
    ctx->pc = 0x325dbcu;
    // NOP
    ctx->pc = 0x325dc0u;
}
