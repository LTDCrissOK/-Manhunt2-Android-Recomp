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

// Function: sub_002C0060
// Address: 0x2c0060 - 0x2c0080
void sub_002C0060_0x2c0060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0060_0x2c0060");
#endif

    ctx->pc = 0x2c0060u;

    // 0x2c0060: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2c0060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2c0064: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2c0064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0068: 0x24633d28  addiu       $v1, $v1, 0x3D28
    ctx->pc = 0x2c0068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15656));
    // 0x2c006c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2c006cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2c0070: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2c0070u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2c0074: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0074u;
        // 0x2c0078: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C007Cu;
    // 0x2c007c: 0x0  nop
    ctx->pc = 0x2c007cu;
    // NOP
    ctx->pc = 0x2c0080u;
}
