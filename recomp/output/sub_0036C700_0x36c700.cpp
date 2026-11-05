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

// Function: sub_0036C700
// Address: 0x36c700 - 0x36c748
void sub_0036C700_0x36c700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C700_0x36c700");
#endif

    switch (ctx->pc) {
        case 0x36c72cu: goto label_36c72c;
        case 0x36c738u: goto label_36c738;
        default: break;
    }

    ctx->pc = 0x36c700u;

    // 0x36c700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c704: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x36c704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36c708: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36c708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36c70c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36c70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36c710: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x36c710u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x36c714: 0x26101f00  addiu       $s0, $s0, 0x1F00
    ctx->pc = 0x36c714u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7936));
    // 0x36c718: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x36c718u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6C1F0Cu));
    // 0x36c71c: 0x26050028  addiu       $a1, $s0, 0x28
    ctx->pc = 0x36c71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x36c720: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36c720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36c724: 0xc0db160  jal         func_36C580
    ctx->pc = 0x36C724u;
    SET_GPR_U32(ctx, 31, 0x36C72Cu);
    ctx->pc = 0x36C728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C724u;
    // 0x36c728: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C580u, 0x36C724u, 0x36C72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C72Cu;
label_36c72c:
    // 0x36c72c: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x36c72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x36c730: 0xc0db160  jal         func_36C580
    ctx->pc = 0x36C730u;
    SET_GPR_U32(ctx, 31, 0x36C738u);
    ctx->pc = 0x36C734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C730u;
    // 0x36c734: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C580u, 0x36C730u, 0x36C738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C738u;
label_36c738:
    // 0x36c738: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36c738u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c73c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36c73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36c740: 0x3e00008  jr          $ra
    ctx->pc = 0x36C740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C740u;
        // 0x36c744: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C748u;
}
