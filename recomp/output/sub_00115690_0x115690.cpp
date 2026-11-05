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

// Function: sub_00115690
// Address: 0x115690 - 0x1156c8
void sub_00115690_0x115690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115690_0x115690");
#endif

    switch (ctx->pc) {
        case 0x1156a4u: goto label_1156a4;
        case 0x1156acu: goto label_1156ac;
        default: break;
    }

    ctx->pc = 0x115690u;

    // 0x115690: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x115690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x115694: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x115694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x115698: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x115698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11569c: 0xc0455c2  jal         func_115708
    ctx->pc = 0x11569Cu;
    SET_GPR_U32(ctx, 31, 0x1156A4u);
    ctx->pc = 0x1156A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11569Cu;
    // 0x1156a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115708u, 0x11569Cu, 0x1156A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1156A4u;
label_1156a4:
    // 0x1156a4: 0xc042254  jal         func_108950
    ctx->pc = 0x1156A4u;
    SET_GPR_U32(ctx, 31, 0x1156ACu);
    ctx->pc = 0x1156A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1156A4u;
    // 0x1156a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108950u, 0x1156A4u, 0x1156ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1156ACu;
label_1156ac:
    // 0x1156ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1156acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1156b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1156b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1156b4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1156b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1156b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1156b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1156bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1156BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1156C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1156BCu;
        // 0x1156c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1156BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1156C4u;
    // 0x1156c4: 0x0  nop
    ctx->pc = 0x1156c4u;
    // NOP
    ctx->pc = 0x1156c8u;
}
