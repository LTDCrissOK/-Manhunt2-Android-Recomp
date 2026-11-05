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

// Function: sub_003A5FE8
// Address: 0x3a5fe8 - 0x3a6020
void sub_003A5FE8_0x3a5fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5FE8_0x3a5fe8");
#endif

    switch (ctx->pc) {
        case 0x3a6004u: goto label_3a6004;
        default: break;
    }

    ctx->pc = 0x3a5fe8u;

    // 0x3a5fe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a5fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a5fec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3a5fecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5ff0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A5FF0u;
    {
        const bool branch_taken_0x3a5ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5FF0u;
        // 0x3a5ff4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5ff0) {
            ctx->pc = 0x3A6010u;
            goto label_3a6010;
        }
    }
    ctx->pc = 0x3A5FF8u;
    // 0x3a5ff8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3a5ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3a5ffc: 0xc0e960a  jal         func_3A5828
    ctx->pc = 0x3A5FFCu;
    SET_GPR_U32(ctx, 31, 0x3A6004u);
    ctx->pc = 0x3A6000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5FFCu;
    // 0x3a6000: 0x24a5ddd0  addiu       $a1, $a1, -0x2230 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5828u, 0x3A5FFCu, 0x3A6004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6004u;
label_3a6004:
    // 0x3a6004: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A6004u;
    {
        const bool branch_taken_0x3a6004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6004u;
        // 0x3a6008: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6004) {
            ctx->pc = 0x3A6014u;
            goto label_3a6014;
        }
    }
    ctx->pc = 0x3A600Cu;
    // 0x3a600c: 0x0  nop
    ctx->pc = 0x3a600cu;
    // NOP
label_3a6010:
    // 0x3a6010: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x3a6010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_3a6014:
    // 0x3a6014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a6014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a6018: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6018u;
        // 0x3a601c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6020u;
}
