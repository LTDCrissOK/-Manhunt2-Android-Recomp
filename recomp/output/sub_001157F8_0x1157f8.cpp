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

// Function: sub_001157F8
// Address: 0x1157f8 - 0x115848
void sub_001157F8_0x1157f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001157F8_0x1157f8");
#endif

    switch (ctx->pc) {
        case 0x11581cu: goto label_11581c;
        case 0x11582cu: goto label_11582c;
        default: break;
    }

    ctx->pc = 0x1157f8u;

    // 0x1157f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1157f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1157fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1157fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x115800: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x115800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x115804: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x115804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115808: 0x8e040088  lw          $a0, 0x88($s0)
    ctx->pc = 0x115808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x11580c: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x11580Cu;
    {
        const bool branch_taken_0x11580c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11580c) {
            ctx->pc = 0x115810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11580Cu;
            // 0x115810: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115834u;
            goto label_115834;
        }
    }
    ctx->pc = 0x115814u;
    // 0x115814: 0xc045eee  jal         func_117BB8
    ctx->pc = 0x115814u;
    SET_GPR_U32(ctx, 31, 0x11581Cu);
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x115814u, 0x11581Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11581Cu;
label_11581c:
    // 0x11581c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x11581cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x115820: 0x8e050088  lw          $a1, 0x88($s0)
    ctx->pc = 0x115820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x115824: 0xc042136  jal         func_1084D8
    ctx->pc = 0x115824u;
    SET_GPR_U32(ctx, 31, 0x11582Cu);
    ctx->pc = 0x115828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115824u;
    // 0x115828: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084D8u, 0x115824u, 0x11582Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11582Cu;
label_11582c:
    // 0x11582c: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x11582cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x115830: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x115830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_115834:
    // 0x115834: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x115834u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115838: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x115838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11583c: 0x3e00008  jr          $ra
    ctx->pc = 0x11583Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11583Cu;
        // 0x115840: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11583Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115844u;
    // 0x115844: 0x0  nop
    ctx->pc = 0x115844u;
    // NOP
    ctx->pc = 0x115848u;
}
