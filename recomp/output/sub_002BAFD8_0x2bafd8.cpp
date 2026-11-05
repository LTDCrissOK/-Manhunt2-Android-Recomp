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

// Function: sub_002BAFD8
// Address: 0x2bafd8 - 0x2bb000
void sub_002BAFD8_0x2bafd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BAFD8_0x2bafd8");
#endif

    ctx->pc = 0x2bafd8u;

    // 0x2bafd8: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2bafd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2bafdc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2bafdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bafe0: 0x24633378  addiu       $v1, $v1, 0x3378
    ctx->pc = 0x2bafe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13176));
    // 0x2bafe4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2bafe4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2bafe8: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x2bafe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x2bafec: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2bafecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2baff0: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2baff0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2baff4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAFF4u;
        // 0x2baff8: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAFF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAFFCu;
    // 0x2baffc: 0x0  nop
    ctx->pc = 0x2baffcu;
    // NOP
    ctx->pc = 0x2bb000u;
}
