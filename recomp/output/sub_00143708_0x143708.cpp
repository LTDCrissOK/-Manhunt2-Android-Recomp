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

// Function: sub_00143708
// Address: 0x143708 - 0x143750
void sub_00143708_0x143708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143708_0x143708");
#endif

    switch (ctx->pc) {
        case 0x143724u: goto label_143724;
        case 0x14373cu: goto label_14373c;
        default: break;
    }

    ctx->pc = 0x143708u;

    // 0x143708: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x143708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14370c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x14370cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x143710: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x143710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x143714: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x143714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x143718: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x143718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14371c: 0xc04e86c  jal         func_13A1B0
    ctx->pc = 0x14371Cu;
    SET_GPR_U32(ctx, 31, 0x143724u);
    ctx->pc = 0x143720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14371Cu;
    // 0x143720: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A1B0u, 0x14371Cu, 0x143724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143724u;
label_143724:
    // 0x143724: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x143724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x143728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x143728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14372c: 0x8c620780  lw          $v0, 0x780($v1)
    ctx->pc = 0x14372cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F0780u));
    // 0x143730: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x143730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x143734: 0xc050de2  jal         func_143788
    ctx->pc = 0x143734u;
    SET_GPR_U32(ctx, 31, 0x14373Cu);
    ctx->pc = 0x143738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143734u;
    // 0x143738: 0xac620780  sw          $v0, 0x780($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 1920), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143788u, 0x143734u, 0x14373Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14373Cu;
label_14373c:
    // 0x14373c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14373cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143740: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x143740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x143744: 0x3e00008  jr          $ra
    ctx->pc = 0x143744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143744u;
        // 0x143748: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14374Cu;
    // 0x14374c: 0x0  nop
    ctx->pc = 0x14374cu;
    // NOP
    ctx->pc = 0x143750u;
}
