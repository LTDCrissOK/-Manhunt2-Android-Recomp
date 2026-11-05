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

// Function: sub_003ACF80
// Address: 0x3acf80 - 0x3acf98
void sub_003ACF80_0x3acf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ACF80_0x3acf80");
#endif

    ctx->pc = 0x3acf80u;

    // 0x3acf80: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3acf80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3acf84: 0x244291a0  addiu       $v0, $v0, -0x6E60
    ctx->pc = 0x3acf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939040));
    // 0x3acf88: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x3acf88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6591A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6591A4u, _value); } while (0);
    // 0x3acf8c: 0x3e00008  jr          $ra
    ctx->pc = 0x3ACF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ACF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACF8Cu;
        // 0x3acf90: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACF8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ACF94u;
    // 0x3acf94: 0x0  nop
    ctx->pc = 0x3acf94u;
    // NOP
    ctx->pc = 0x3acf98u;
}
