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

// Function: sub_003A81D0
// Address: 0x3a81d0 - 0x3a8208
void sub_003A81D0_0x3a81d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A81D0_0x3a81d0");
#endif

    switch (ctx->pc) {
        case 0x3a81ecu: goto label_3a81ec;
        default: break;
    }

    ctx->pc = 0x3a81d0u;

    // 0x3a81d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a81d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a81d4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3a81d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a81d8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A81D8u;
    {
        const bool branch_taken_0x3a81d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A81DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A81D8u;
        // 0x3a81dc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a81d8) {
            ctx->pc = 0x3A81F8u;
            goto label_3a81f8;
        }
    }
    ctx->pc = 0x3A81E0u;
    // 0x3a81e0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3a81e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3a81e4: 0xc0e9ebe  jal         func_3A7AF8
    ctx->pc = 0x3A81E4u;
    SET_GPR_U32(ctx, 31, 0x3A81ECu);
    ctx->pc = 0x3A81E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A81E4u;
    // 0x3a81e8: 0x24a5e640  addiu       $a1, $a1, -0x19C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7AF8u, 0x3A81E4u, 0x3A81ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A81ECu;
label_3a81ec:
    // 0x3a81ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A81ECu;
    {
        const bool branch_taken_0x3a81ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A81F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A81ECu;
        // 0x3a81f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a81ec) {
            ctx->pc = 0x3A81FCu;
            goto label_3a81fc;
        }
    }
    ctx->pc = 0x3A81F4u;
    // 0x3a81f4: 0x0  nop
    ctx->pc = 0x3a81f4u;
    // NOP
label_3a81f8:
    // 0x3a81f8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x3a81f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3a81fc:
    // 0x3a81fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a81fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a8200: 0x3e00008  jr          $ra
    ctx->pc = 0x3A8200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A8204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8200u;
        // 0x3a8204: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A8200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A8208u;
}
