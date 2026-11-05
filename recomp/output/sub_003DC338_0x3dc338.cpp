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

// Function: sub_003DC338
// Address: 0x3dc338 - 0x3dc360
void sub_003DC338_0x3dc338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC338_0x3dc338");
#endif

    ctx->pc = 0x3dc338u;

    // 0x3dc338: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3dc338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3dc33c: 0x90620038  lbu         $v0, 0x38($v1)
    ctx->pc = 0x3dc33cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x3dc340: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC340u;
        // 0x3dc344: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC348u;
    // 0x3dc348: 0xac820680  sw          $v0, 0x680($a0)
    ctx->pc = 0x3dc348u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1664), GPR_U32(ctx, 2));
    // 0x3dc34c: 0x0  nop
    ctx->pc = 0x3dc34cu;
    // NOP
    // 0x3dc350: 0xac820334  sw          $v0, 0x334($a0)
    ctx->pc = 0x3dc350u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 820), GPR_U32(ctx, 2));
    // 0x3dc354: 0x0  nop
    ctx->pc = 0x3dc354u;
    // NOP
    // 0x3dc358: 0xac820338  sw          $v0, 0x338($a0)
    ctx->pc = 0x3dc358u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 824), GPR_U32(ctx, 2));
    // 0x3dc35c: 0x0  nop
    ctx->pc = 0x3dc35cu;
    // NOP
    ctx->pc = 0x3dc360u;
}
