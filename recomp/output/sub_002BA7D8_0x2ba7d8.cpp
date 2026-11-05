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

// Function: sub_002BA7D8
// Address: 0x2ba7d8 - 0x2ba818
void sub_002BA7D8_0x2ba7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA7D8_0x2ba7d8");
#endif

    switch (ctx->pc) {
        case 0x2ba7fcu: goto label_2ba7fc;
        default: break;
    }

    ctx->pc = 0x2ba7d8u;

    // 0x2ba7d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ba7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ba7dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ba7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ba7e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ba7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ba7e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ba7e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba7e8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ba7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ba7ec: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BA7ECu;
    {
        const bool branch_taken_0x2ba7ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba7ec) {
            ctx->pc = 0x2BA7F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA7ECu;
            // 0x2ba7f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA808u;
            goto label_2ba808;
        }
    }
    ctx->pc = 0x2BA7F4u;
    // 0x2ba7f4: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x2BA7F4u;
    SET_GPR_U32(ctx, 31, 0x2BA7FCu);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2BA7F4u, 0x2BA7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA7FCu;
label_2ba7fc:
    // 0x2ba7fc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2ba7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2ba800: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2ba800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2ba804: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ba804u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ba808:
    // 0x2ba808: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ba808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ba80c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA80Cu;
        // 0x2ba810: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA814u;
    // 0x2ba814: 0x0  nop
    ctx->pc = 0x2ba814u;
    // NOP
    ctx->pc = 0x2ba818u;
}
