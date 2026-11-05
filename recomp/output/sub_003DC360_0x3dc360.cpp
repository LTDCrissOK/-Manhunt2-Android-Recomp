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

// Function: sub_003DC360
// Address: 0x3dc360 - 0x3dc378
void sub_003DC360_0x3dc360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC360_0x3dc360");
#endif

    ctx->pc = 0x3dc360u;

    // 0x3dc360: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3dc360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3dc364: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3dc364u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x3dc368: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC368u;
        // 0x3dc36c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC370u;
    // 0x3dc370: 0xac8203ac  sw          $v0, 0x3AC($a0)
    ctx->pc = 0x3dc370u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 940), GPR_U32(ctx, 2));
    // 0x3dc374: 0x0  nop
    ctx->pc = 0x3dc374u;
    // NOP
    ctx->pc = 0x3dc378u;
}
