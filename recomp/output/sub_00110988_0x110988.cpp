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

// Function: sub_00110988
// Address: 0x110988 - 0x1109b8
void sub_00110988_0x110988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110988_0x110988");
#endif

    switch (ctx->pc) {
        case 0x1109a4u: goto label_1109a4;
        default: break;
    }

    ctx->pc = 0x110988u;

    // 0x110988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11098c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11098cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110990: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x110990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x110994: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x110994u;
    {
        const bool branch_taken_0x110994 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x110998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110994u;
        // 0x110998: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110994) {
            ctx->pc = 0x1109ACu;
            goto label_1109ac;
        }
    }
    ctx->pc = 0x11099Cu;
    // 0x11099c: 0xc05fcb6  jal         func_17F2D8
    ctx->pc = 0x11099Cu;
    SET_GPR_U32(ctx, 31, 0x1109A4u);
    ctx->pc = 0x17F2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F2D8u, 0x11099Cu, 0x1109A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1109A4u;
label_1109a4:
    // 0x1109a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1109A4u;
    {
        const bool branch_taken_0x1109a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1109A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1109A4u;
        // 0x1109a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1109a4) {
            ctx->pc = 0x1109B0u;
            goto label_1109b0;
        }
    }
    ctx->pc = 0x1109ACu;
label_1109ac:
    // 0x1109ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1109acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1109b0:
    // 0x1109b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1109B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1109B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1109B0u;
        // 0x1109b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1109B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1109B8u;
}
