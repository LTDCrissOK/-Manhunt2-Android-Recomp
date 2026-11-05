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

// Function: sub_00326A48
// Address: 0x326a48 - 0x326a70
void sub_00326A48_0x326a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326A48_0x326a48");
#endif

    ctx->pc = 0x326a48u;

    // 0x326a48: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x326a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x326a4c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x326a4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326a50: 0x24634460  addiu       $v1, $v1, 0x4460
    ctx->pc = 0x326a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17504));
    // 0x326a54: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x326a54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x326a58: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x326a58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x326a5c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x326a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x326a60: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x326a60u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x326a64: 0xa480000a  sh          $zero, 0xA($a0)
    ctx->pc = 0x326a64u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x326a68: 0x3e00008  jr          $ra
    ctx->pc = 0x326A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326A68u;
        // 0x326a6c: 0xa480000c  sh          $zero, 0xC($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326A70u;
}
