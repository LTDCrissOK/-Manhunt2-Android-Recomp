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

// Function: sub_00374B28
// Address: 0x374b28 - 0x374b78
void sub_00374B28_0x374b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374B28_0x374b28");
#endif

    switch (ctx->pc) {
        case 0x374b68u: goto label_374b68;
        default: break;
    }

    ctx->pc = 0x374b28u;

    // 0x374b28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x374b2c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x374b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x374b30: 0x24426050  addiu       $v0, $v0, 0x6050
    ctx->pc = 0x374b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24656));
    // 0x374b34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374b38: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x374b38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x374b3c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x374b3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374b40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x374b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x374b44: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x374b44u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x374b48: 0x22bfe  dsrl32      $a1, $v0, 15
    ctx->pc = 0x374b48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 15));
    // 0x374b4c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x374B4Cu;
    {
        const bool branch_taken_0x374b4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x374B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374B4Cu;
        // 0x374b50: 0x71027  nor         $v0, $zero, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374b4c) {
            ctx->pc = 0x374B5Cu;
            goto label_374b5c;
        }
    }
    ctx->pc = 0x374B54u;
    // 0x374b54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x374B54u;
    {
        const bool branch_taken_0x374b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374B54u;
        // 0x374b58: 0xa72825  or          $a1, $a1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374b54) {
            ctx->pc = 0x374B60u;
            goto label_374b60;
        }
    }
    ctx->pc = 0x374B5Cu;
label_374b5c:
    // 0x374b5c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x374b5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_374b60:
    // 0x374b60: 0xc0dd2a0  jal         func_374A80
    ctx->pc = 0x374B60u;
    SET_GPR_U32(ctx, 31, 0x374B68u);
    ctx->pc = 0x374A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374A80u, 0x374B60u, 0x374B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374B68u;
label_374b68:
    // 0x374b68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x374B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374B6Cu;
        // 0x374b70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374B74u;
    // 0x374b74: 0x0  nop
    ctx->pc = 0x374b74u;
    // NOP
    ctx->pc = 0x374b78u;
}
