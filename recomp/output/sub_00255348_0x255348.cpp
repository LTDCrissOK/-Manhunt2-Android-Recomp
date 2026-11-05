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

// Function: sub_00255348
// Address: 0x255348 - 0x255370
void sub_00255348_0x255348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255348_0x255348");
#endif

    ctx->pc = 0x255348u;

    // 0x255348: 0x8c8205b0  lw          $v0, 0x5B0($a0)
    ctx->pc = 0x255348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1456)));
    // 0x25534c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25534Cu;
    {
        const bool branch_taken_0x25534c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25534Cu;
        // 0x255350: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25534c) {
            ctx->pc = 0x255364u;
            goto label_255364;
        }
    }
    ctx->pc = 0x255354u;
    // 0x255354: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x255354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x255358: 0x90435870  lbu         $v1, 0x5870($v0)
    ctx->pc = 0x255358u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x595870u));
    // 0x25535c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x25535Cu;
    {
        const bool branch_taken_0x25535c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25535c) {
            ctx->pc = 0x255368u;
            goto label_255368;
        }
    }
    ctx->pc = 0x255364u;
label_255364:
    // 0x255364: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x255364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_255368:
    // 0x255368: 0x3e00008  jr          $ra
    ctx->pc = 0x255368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255368u;
        // 0x25536c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255370u;
}
