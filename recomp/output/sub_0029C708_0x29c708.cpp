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

// Function: sub_0029C708
// Address: 0x29c708 - 0x29c748
void sub_0029C708_0x29c708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C708_0x29c708");
#endif

    switch (ctx->pc) {
        case 0x29c72cu: goto label_29c72c;
        default: break;
    }

    ctx->pc = 0x29c708u;

    // 0x29c708: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29c708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29c70c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29c70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29c710: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x29c710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x29c714: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x29C714u;
    {
        const bool branch_taken_0x29c714 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c714) {
            ctx->pc = 0x29C718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C714u;
            // 0x29c718: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C724u;
            goto label_29c724;
        }
    }
    ctx->pc = 0x29C71Cu;
    // 0x29c71c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29C71Cu;
    {
        const bool branch_taken_0x29c71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C71Cu;
        // 0x29c720: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c71c) {
            ctx->pc = 0x29C734u;
            goto label_29c734;
        }
    }
    ctx->pc = 0x29C724u;
label_29c724:
    // 0x29c724: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29C724u;
    SET_GPR_U32(ctx, 31, 0x29C72Cu);
    ctx->pc = 0x29C728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C724u;
    // 0x29c728: 0x24840238  addiu       $a0, $a0, 0x238 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29C724u, 0x29C72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C72Cu;
label_29c72c:
    // 0x29c72c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29c72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29c730: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x29c730u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_29c734:
    // 0x29c734: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29c734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c738: 0x3e00008  jr          $ra
    ctx->pc = 0x29C738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C738u;
        // 0x29c73c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C740u;
    // 0x29c740: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x29c740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29c744: 0x0  nop
    ctx->pc = 0x29c744u;
    // NOP
    ctx->pc = 0x29c748u;
}
