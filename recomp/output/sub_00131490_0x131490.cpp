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

// Function: sub_00131490
// Address: 0x131490 - 0x1314d0
void sub_00131490_0x131490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131490_0x131490");
#endif

    switch (ctx->pc) {
        case 0x1314a0u: goto label_1314a0;
        case 0x1314b0u: goto label_1314b0;
        default: break;
    }

    ctx->pc = 0x131490u;

    // 0x131490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x131490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x131494: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x131494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x131498: 0xc043920  jal         func_10E480
    ctx->pc = 0x131498u;
    SET_GPR_U32(ctx, 31, 0x1314A0u);
    ctx->pc = 0x13149Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131498u;
    // 0x13149c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E480u, 0x131498u, 0x1314A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1314A0u;
label_1314a0:
    // 0x1314a0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1314A0u;
    {
        const bool branch_taken_0x1314a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1314a0) {
            ctx->pc = 0x1314A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1314A0u;
            // 0x1314a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1314C0u;
            goto label_1314c0;
        }
    }
    ctx->pc = 0x1314A8u;
    // 0x1314a8: 0xc095280  jal         func_254A00
    ctx->pc = 0x1314A8u;
    SET_GPR_U32(ctx, 31, 0x1314B0u);
    ctx->pc = 0x1314ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1314A8u;
    // 0x1314ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254A00u, 0x1314A8u, 0x1314B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1314B0u;
label_1314b0:
    // 0x1314b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1314b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1314b4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1314B4u;
    {
        const bool branch_taken_0x1314b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1314B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1314B4u;
        // 0x1314b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1314b4) {
            ctx->pc = 0x1314C0u;
            goto label_1314c0;
        }
    }
    ctx->pc = 0x1314BCu;
    // 0x1314bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1314bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1314c0:
    // 0x1314c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1314c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1314c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1314C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1314C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1314C4u;
        // 0x1314c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1314C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1314CCu;
    // 0x1314cc: 0x0  nop
    ctx->pc = 0x1314ccu;
    // NOP
    ctx->pc = 0x1314d0u;
}
