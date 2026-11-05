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

// Function: sub_00205580
// Address: 0x205580 - 0x2055b0
void sub_00205580_0x205580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205580_0x205580");
#endif

    switch (ctx->pc) {
        case 0x2055a0u: goto label_2055a0;
        default: break;
    }

    ctx->pc = 0x205580u;

    // 0x205580: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x205580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x205584: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x205584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205588: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x205588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20558c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x20558cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x205590: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x205590u;
    {
        const bool branch_taken_0x205590 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x205594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205590u;
        // 0x205594: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205590) {
            ctx->pc = 0x2055A4u;
            goto label_2055a4;
        }
    }
    ctx->pc = 0x205598u;
    // 0x205598: 0xc0e7058  jal         func_39C160
    ctx->pc = 0x205598u;
    SET_GPR_U32(ctx, 31, 0x2055A0u);
    ctx->pc = 0x20559Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205598u;
    // 0x20559c: 0xac45001c  sw          $a1, 0x1C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C160u, 0x205598u, 0x2055A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2055A0u;
label_2055a0:
    // 0x2055a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2055a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2055a4:
    // 0x2055a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2055A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2055A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055A4u;
        // 0x2055a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2055A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2055ACu;
    // 0x2055ac: 0x0  nop
    ctx->pc = 0x2055acu;
    // NOP
    ctx->pc = 0x2055b0u;
}
