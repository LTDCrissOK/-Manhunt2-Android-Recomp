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

// Function: sub_00326780
// Address: 0x326780 - 0x3267b0
void sub_00326780_0x326780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326780_0x326780");
#endif

    ctx->pc = 0x326780u;

    // 0x326780: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x326780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x326784: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x326784u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x326788: 0xac44be90  sw          $a0, -0x4170($v0)
    ctx->pc = 0x326788u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3FBE90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBE90u, _value); } while (0);
    // 0x32678c: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x32678cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x326790: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x326790u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x326794: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x326794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x326798: 0xaca22c70  sw          $v0, 0x2C70($a1)
    ctx->pc = 0x326798u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x482C70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482C70u, _value); } while (0);
    // 0x32679c: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x32679cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x3267a0: 0xacc32c6c  sw          $v1, 0x2C6C($a2)
    ctx->pc = 0x3267a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x482C6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482C6Cu, _value); } while (0);
    // 0x3267a4: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x3267a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x3267a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3267A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3267ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3267A8u;
        // 0x3267ac: 0xace22c74  sw          $v0, 0x2C74($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 11380), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3267A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3267B0u;
}
