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

// Function: sub_001726E0
// Address: 0x1726e0 - 0x172718
void sub_001726E0_0x1726e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001726E0_0x1726e0");
#endif

    switch (ctx->pc) {
        case 0x172700u: goto label_172700;
        default: break;
    }

    ctx->pc = 0x1726e0u;

    // 0x1726e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1726e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1726e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1726e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1726e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1726e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1726ec: 0x8c8200b4  lw          $v0, 0xB4($a0)
    ctx->pc = 0x1726ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x1726f0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1726F0u;
    {
        const bool branch_taken_0x1726f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1726F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1726F0u;
        // 0x1726f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1726f0) {
            ctx->pc = 0x172708u;
            goto label_172708;
        }
    }
    ctx->pc = 0x1726F8u;
    // 0x1726f8: 0xc05864c  jal         func_161930
    ctx->pc = 0x1726F8u;
    SET_GPR_U32(ctx, 31, 0x172700u);
    ctx->pc = 0x1726FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1726F8u;
    // 0x1726fc: 0x8c8400b0  lw          $a0, 0xB0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161930u, 0x1726F8u, 0x172700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172700u;
label_172700:
    // 0x172700: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x172700u;
    {
        const bool branch_taken_0x172700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172700u;
        // 0x172704: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172700) {
            ctx->pc = 0x17270Cu;
            goto label_17270c;
        }
    }
    ctx->pc = 0x172708u;
label_172708:
    // 0x172708: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17270c:
    // 0x17270c: 0x3e00008  jr          $ra
    ctx->pc = 0x17270Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17270Cu;
        // 0x172710: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17270Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172714u;
    // 0x172714: 0x0  nop
    ctx->pc = 0x172714u;
    // NOP
    ctx->pc = 0x172718u;
}
