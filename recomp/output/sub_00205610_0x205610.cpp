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

// Function: sub_00205610
// Address: 0x205610 - 0x205640
void sub_00205610_0x205610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205610_0x205610");
#endif

    switch (ctx->pc) {
        case 0x20562cu: goto label_20562c;
        default: break;
    }

    ctx->pc = 0x205610u;

    // 0x205610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x205610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x205614: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x205614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x205618: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x205618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x20561c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x20561Cu;
    {
        const bool branch_taken_0x20561c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20561c) {
            ctx->pc = 0x205620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20561Cu;
            // 0x205620: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205634u;
            goto label_205634;
        }
    }
    ctx->pc = 0x205624u;
    // 0x205624: 0xc0e6f72  jal         func_39BDC8
    ctx->pc = 0x205624u;
    SET_GPR_U32(ctx, 31, 0x20562Cu);
    ctx->pc = 0x39BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BDC8u, 0x205624u, 0x20562Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20562Cu;
label_20562c:
    // 0x20562c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x20562cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x205630: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x205630u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_205634:
    // 0x205634: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x205634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205638: 0x3e00008  jr          $ra
    ctx->pc = 0x205638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205638u;
        // 0x20563c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205640u;
}
