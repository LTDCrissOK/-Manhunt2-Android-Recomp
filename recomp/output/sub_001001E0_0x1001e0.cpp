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

// Function: sub_001001E0
// Address: 0x1001e0 - 0x100220
void sub_001001E0_0x1001e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001001E0_0x1001e0");
#endif

    switch (ctx->pc) {
        case 0x100204u: goto label_100204;
        default: break;
    }

    ctx->pc = 0x1001e0u;

    // 0x1001e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1001e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1001e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1001e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1001e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1001e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1001ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1001ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1001f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1001f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1001f4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1001F4u;
    {
        const bool branch_taken_0x1001f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1001f4) {
            ctx->pc = 0x1001F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1001F4u;
            // 0x1001f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100210u;
            goto label_100210;
        }
    }
    ctx->pc = 0x1001FCu;
    // 0x1001fc: 0xc04006e  jal         func_1001B8
    ctx->pc = 0x1001FCu;
    SET_GPR_U32(ctx, 31, 0x100204u);
    ctx->pc = 0x1001B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1001B8u, 0x1001FCu, 0x100204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100204u;
label_100204:
    // 0x100204: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x100204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100208: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x100208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x10020c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10020cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_100210:
    // 0x100210: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x100210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x100214: 0x3e00008  jr          $ra
    ctx->pc = 0x100214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100214u;
        // 0x100218: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10021Cu;
    // 0x10021c: 0x0  nop
    ctx->pc = 0x10021cu;
    // NOP
    ctx->pc = 0x100220u;
}
