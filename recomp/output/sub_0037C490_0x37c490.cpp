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

// Function: sub_0037C490
// Address: 0x37c490 - 0x37c4d0
void sub_0037C490_0x37c490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037C490_0x37c490");
#endif

    switch (ctx->pc) {
        case 0x37c4c0u: goto label_37c4c0;
        default: break;
    }

    ctx->pc = 0x37c490u;

    // 0x37c490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37c490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37c494: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37c494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37c498: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37c498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37c49c: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x37C49Cu;
    {
        const bool branch_taken_0x37c49c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C49Cu;
        // 0x37c4a0: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c49c) {
            ctx->pc = 0x37C4ACu;
            goto label_37c4ac;
        }
    }
    ctx->pc = 0x37C4A4u;
    // 0x37c4a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x37C4A4u;
    {
        const bool branch_taken_0x37c4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C4A4u;
        // 0x37c4a8: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c4a4) {
            ctx->pc = 0x37C4B0u;
            goto label_37c4b0;
        }
    }
    ctx->pc = 0x37C4ACu;
label_37c4ac:
    // 0x37c4ac: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x37c4acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_37c4b0:
    // 0x37c4b0: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x37c4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x37c4b4: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x37c4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x37c4b8: 0xc0dd720  jal         func_375C80
    ctx->pc = 0x37C4B8u;
    SET_GPR_U32(ctx, 31, 0x37C4C0u);
    ctx->pc = 0x37C4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C4B8u;
    // 0x37c4bc: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375C80u, 0x37C4B8u, 0x37C4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C4C0u;
label_37c4c0:
    // 0x37c4c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37c4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37c4c4: 0x3e00008  jr          $ra
    ctx->pc = 0x37C4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C4C4u;
        // 0x37c4c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C4C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C4CCu;
    // 0x37c4cc: 0x0  nop
    ctx->pc = 0x37c4ccu;
    // NOP
    ctx->pc = 0x37c4d0u;
}
