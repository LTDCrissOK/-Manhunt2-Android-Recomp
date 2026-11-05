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

// Function: sub_00327040
// Address: 0x327040 - 0x327070
void sub_00327040_0x327040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327040_0x327040");
#endif

    ctx->pc = 0x327040u;

    // 0x327040: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x327040u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327044: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x327044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x327048: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x327048u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x32704c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x32704cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x327050: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x327050u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x327054: 0xa4800058  sh          $zero, 0x58($a0)
    ctx->pc = 0x327054u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 0));
    // 0x327058: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x327058u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x32705c: 0xa4800006  sh          $zero, 0x6($a0)
    ctx->pc = 0x32705cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x327060: 0xa4800004  sh          $zero, 0x4($a0)
    ctx->pc = 0x327060u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x327064: 0x3e00008  jr          $ra
    ctx->pc = 0x327064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327064u;
        // 0x327068: 0xa4800002  sh          $zero, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32706Cu;
    // 0x32706c: 0x0  nop
    ctx->pc = 0x32706cu;
    // NOP
    ctx->pc = 0x327070u;
}
