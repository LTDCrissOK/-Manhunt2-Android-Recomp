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

// Function: sub_00245610
// Address: 0x245610 - 0x245658
void sub_00245610_0x245610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245610_0x245610");
#endif

    switch (ctx->pc) {
        case 0x245638u: goto label_245638;
        case 0x245644u: goto label_245644;
        default: break;
    }

    ctx->pc = 0x245610u;

    // 0x245610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x245610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x245614: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x245614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x245618: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x245618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24561c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24561cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245620: 0x8e020418  lw          $v0, 0x418($s0)
    ctx->pc = 0x245620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
    // 0x245624: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x245624u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x245628: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x245628u;
    {
        const bool branch_taken_0x245628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245628) {
            ctx->pc = 0x24562Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245628u;
            // 0x24562c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245648u;
            goto label_245648;
        }
    }
    ctx->pc = 0x245630u;
    // 0x245630: 0xc08bd96  jal         func_22F658
    ctx->pc = 0x245630u;
    SET_GPR_U32(ctx, 31, 0x245638u);
    ctx->pc = 0x245634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245630u;
    // 0x245634: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x245630u, 0x245638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245638u;
label_245638:
    // 0x245638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x245638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24563c: 0xc08a15a  jal         func_228568
    ctx->pc = 0x24563Cu;
    SET_GPR_U32(ctx, 31, 0x245644u);
    ctx->pc = 0x245640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24563Cu;
    // 0x245640: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228568u, 0x24563Cu, 0x245644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245644u;
label_245644:
    // 0x245644: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x245644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_245648:
    // 0x245648: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x245648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24564c: 0x3e00008  jr          $ra
    ctx->pc = 0x24564Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24564Cu;
        // 0x245650: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24564Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245654u;
    // 0x245654: 0x0  nop
    ctx->pc = 0x245654u;
    // NOP
    ctx->pc = 0x245658u;
}
