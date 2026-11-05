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

// Function: sub_0011DB28
// Address: 0x11db28 - 0x11db70
void sub_0011DB28_0x11db28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011DB28_0x11db28");
#endif

    switch (ctx->pc) {
        case 0x11db4cu: goto label_11db4c;
        default: break;
    }

    ctx->pc = 0x11db28u;

    // 0x11db28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11db28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11db2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11db2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11db30: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11db30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11db34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11db34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11db38: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x11db38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11db3c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x11DB3Cu;
    {
        const bool branch_taken_0x11db3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11db3c) {
            ctx->pc = 0x11DB40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DB3Cu;
            // 0x11db40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DB58u;
            goto label_11db58;
        }
    }
    ctx->pc = 0x11DB44u;
    // 0x11db44: 0xc047ef2  jal         func_11FBC8
    ctx->pc = 0x11DB44u;
    SET_GPR_U32(ctx, 31, 0x11DB4Cu);
    ctx->pc = 0x11FBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBC8u, 0x11DB44u, 0x11DB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DB4Cu;
label_11db4c:
    // 0x11db4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11db4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11db50: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x11db50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x11db54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11db54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11db58:
    // 0x11db58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11db58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11db5c: 0x3e00008  jr          $ra
    ctx->pc = 0x11DB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DB5Cu;
        // 0x11db60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DB5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DB64u;
    // 0x11db64: 0x0  nop
    ctx->pc = 0x11db64u;
    // NOP
    // 0x11db68: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x11db68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11db6c: 0x0  nop
    ctx->pc = 0x11db6cu;
    // NOP
    ctx->pc = 0x11db70u;
}
