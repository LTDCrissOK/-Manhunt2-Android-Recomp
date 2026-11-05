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

// Function: sub_0028B6F8
// Address: 0x28b6f8 - 0x28b710
void sub_0028B6F8_0x28b6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B6F8_0x28b6f8");
#endif

    ctx->pc = 0x28b6f8u;

    // 0x28b6f8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x28b6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x28b6fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28b6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b700: 0x2442ac88  addiu       $v0, $v0, -0x5378
    ctx->pc = 0x28b700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945928));
    // 0x28b704: 0xac440134  sw          $a0, 0x134($v0)
    ctx->pc = 0x28b704u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6BADBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BADBCu, _value); } while (0);
    // 0x28b708: 0x3e00008  jr          $ra
    ctx->pc = 0x28B708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B708u;
        // 0x28b70c: 0xac430130  sw          $v1, 0x130($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B710u;
}
