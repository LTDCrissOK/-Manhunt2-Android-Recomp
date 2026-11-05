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

// Function: sub_003B0E38
// Address: 0x3b0e38 - 0x3b0e78
void sub_003B0E38_0x3b0e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B0E38_0x3b0e38");
#endif

    switch (ctx->pc) {
        case 0x3b0e50u: goto label_3b0e50;
        default: break;
    }

    ctx->pc = 0x3b0e38u;

    // 0x3b0e38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b0e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b0e3c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b0e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b0e40: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B0E40u;
    {
        const bool branch_taken_0x3b0e40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B0E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0E40u;
        // 0x3b0e44: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0e40) {
            ctx->pc = 0x3B0E60u;
            goto label_3b0e60;
        }
    }
    ctx->pc = 0x3B0E48u;
    // 0x3b0e48: 0xc0e5c52  jal         func_397148
    ctx->pc = 0x3B0E48u;
    SET_GPR_U32(ctx, 31, 0x3B0E50u);
    ctx->pc = 0x397148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397148u, 0x3B0E48u, 0x3B0E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0E50u;
label_3b0e50:
    // 0x3b0e50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b0e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b0e54: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x3b0e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x3b0e58: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3b0e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b0e5c: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x3b0e5cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_3b0e60:
    // 0x3b0e60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b0e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b0e64: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3b0e64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0e68: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0E68u;
        // 0x3b0e6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B0E70u;
    // 0x3b0e70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3b0e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b0e74: 0x0  nop
    ctx->pc = 0x3b0e74u;
    // NOP
    ctx->pc = 0x3b0e78u;
}
