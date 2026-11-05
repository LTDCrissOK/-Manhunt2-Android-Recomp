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

// Function: sub_001B0624
// Address: 0x1b0624 - 0x1b0640
void sub_001B0624_0x1b0624(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0624_0x1b0624");
#endif

    switch (ctx->pc) {
        case 0x1b062cu: goto label_1b062c;
        case 0x1b0630u: goto label_1b0630;
        default: break;
    }

    ctx->pc = 0x1b0624u;

    // 0x1b0624: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B0624u;
    {
        const bool branch_taken_0x1b0624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0624u;
        // 0x1b0628: 0xc4c00008  lwc1        $f0, 0x8($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0624) {
            ctx->pc = 0x1B0630u;
            goto label_1b0630;
        }
    }
    ctx->pc = 0x1B062Cu;
label_1b062c:
    // 0x1b062c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b062cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b0630:
    // 0x1b0630: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b0630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0634: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b0634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b0638: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0638u;
        // 0x1b063c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0640u;
}
