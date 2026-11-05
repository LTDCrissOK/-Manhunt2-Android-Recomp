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

// Function: sub_00205550
// Address: 0x205550 - 0x205580
void sub_00205550_0x205550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205550_0x205550");
#endif

    switch (ctx->pc) {
        case 0x20556cu: goto label_20556c;
        default: break;
    }

    ctx->pc = 0x205550u;

    // 0x205550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x205550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x205554: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x205554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x205558: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x205558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x20555c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x20555Cu;
    {
        const bool branch_taken_0x20555c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20555c) {
            ctx->pc = 0x205560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20555Cu;
            // 0x205560: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205574u;
            goto label_205574;
        }
    }
    ctx->pc = 0x205564u;
    // 0x205564: 0xc0e6e40  jal         func_39B900
    ctx->pc = 0x205564u;
    SET_GPR_U32(ctx, 31, 0x20556Cu);
    ctx->pc = 0x39B900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B900u, 0x205564u, 0x20556Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20556Cu;
label_20556c:
    // 0x20556c: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x20556cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x205570: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x205570u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_205574:
    // 0x205574: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x205574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205578: 0x3e00008  jr          $ra
    ctx->pc = 0x205578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20557Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205578u;
        // 0x20557c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205580u;
}
