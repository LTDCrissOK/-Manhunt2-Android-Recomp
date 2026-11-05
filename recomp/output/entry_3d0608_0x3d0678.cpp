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

// Function: entry_3d0608
// Address: 0x3d0608 - 0x3d0678
void entry_3d0608_0x3d0678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_3d0608_0x3d0678");
#endif

    switch (ctx->pc) {
        case 0x3d0620u: goto label_3d0620;
        default: break;
    }

    ctx->pc = 0x3d0608u;

    // 0x3d0608: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x3d0608u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x3d060c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3d060cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3d0610: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3d0610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3d0614: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3D0614u;
    {
        const bool branch_taken_0x3d0614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0614u;
        // 0x3d0618: 0x3c060001  lui         $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0614) {
            ctx->pc = 0x3D0644u;
            goto label_3d0644;
        }
    }
    ctx->pc = 0x3D061Cu;
    // 0x3d061c: 0x0  nop
    ctx->pc = 0x3d061cu;
    // NOP
label_3d0620:
    // 0x3d0620: 0x42000039  di
    ctx->pc = 0x3d0620u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x3d0624: 0x40f  sync.p
    ctx->pc = 0x3d0624u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3d0628: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x3d0628u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x3d062c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x3d062cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x3d0630: 0x0  nop
    ctx->pc = 0x3d0630u;
    // NOP
    // 0x3d0634: 0x0  nop
    ctx->pc = 0x3d0634u;
    // NOP
    // 0x3d0638: 0x0  nop
    ctx->pc = 0x3d0638u;
    // NOP
    // 0x3d063c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3D063Cu;
    {
        const bool branch_taken_0x3d063c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d063c) {
            ctx->pc = 0x3D0620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d0620;
        }
    }
    ctx->pc = 0x3D0644u;
label_3d0644:
    // 0x3d0644: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x3d0644u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x3d0648: 0x40f  sync.p
    ctx->pc = 0x3d0648u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3d064c: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x3d064cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x3d0650: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x3d0650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x3d0654: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3d0654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3d0658: 0x40826000  mtc0        $v0, Status
    ctx->pc = 0x3d0658u;
    ctx->cop0_status = GPR_U32(ctx, 2) & 0xFF57FFFF;
    // 0x3d065c: 0x40f  sync.p
    ctx->pc = 0x3d065cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3d0660: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x3d0660u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x3d0664: 0x409ff000  mtc0        $ra, ErrorEPC
    ctx->pc = 0x3d0664u;
    ctx->cop0_errorepc = GPR_U32(ctx, 31);
    // 0x3d0668: 0x40f  sync.p
    ctx->pc = 0x3d0668u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3d066c: 0x42000018  eret
    ctx->pc = 0x3d066cu;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
    // 0x3d0670: 0x3e00008  jr          $ra
    ctx->pc = 0x3D0670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D0670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D0678u;
}
