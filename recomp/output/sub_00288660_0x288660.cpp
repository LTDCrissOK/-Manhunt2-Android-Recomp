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

// Function: sub_00288660
// Address: 0x288660 - 0x288688
void sub_00288660_0x288660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288660_0x288660");
#endif

    switch (ctx->pc) {
        case 0x288678u: goto label_288678;
        default: break;
    }

    ctx->pc = 0x288660u;

    // 0x288660: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x288660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x288664: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x288664u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x288668: 0x8c44c708  lw          $a0, -0x38F8($v0)
    ctx->pc = 0x288668u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6BC708u));
    // 0x28866c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28866cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x288670: 0xc0a21a6  jal         func_288698
    ctx->pc = 0x288670u;
    SET_GPR_U32(ctx, 31, 0x288678u);
    ctx->pc = 0x288698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288698u, 0x288670u, 0x288678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288678u;
label_288678:
    // 0x288678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x288678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28867c: 0x3e00008  jr          $ra
    ctx->pc = 0x28867Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28867Cu;
        // 0x288680: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28867Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288684u;
    // 0x288684: 0x0  nop
    ctx->pc = 0x288684u;
    // NOP
    ctx->pc = 0x288688u;
}
