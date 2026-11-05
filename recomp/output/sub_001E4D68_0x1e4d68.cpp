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

// Function: sub_001E4D68
// Address: 0x1e4d68 - 0x1e4da8
void sub_001E4D68_0x1e4d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4D68_0x1e4d68");
#endif

    switch (ctx->pc) {
        case 0x1e4d8cu: goto label_1e4d8c;
        case 0x1e4d98u: goto label_1e4d98;
        default: break;
    }

    ctx->pc = 0x1e4d68u;

    // 0x1e4d68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e4d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e4d6c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1e4d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1e4d70: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E4D70u;
    {
        const bool branch_taken_0x1e4d70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E4D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4D70u;
        // 0x1e4d74: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4d70) {
            ctx->pc = 0x1E4D98u;
            goto label_1e4d98;
        }
    }
    ctx->pc = 0x1E4D78u;
    // 0x1e4d78: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E4D78u;
    {
        const bool branch_taken_0x1e4d78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4D78u;
        // 0x1e4d7c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4d78) {
            ctx->pc = 0x1E4D9Cu;
            goto label_1e4d9c;
        }
    }
    ctx->pc = 0x1E4D80u;
    // 0x1e4d80: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1e4d80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1e4d84: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E4D84u;
    SET_GPR_U32(ctx, 31, 0x1E4D8Cu);
    ctx->pc = 0x1E4D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4D84u;
    // 0x1e4d88: 0x24840180  addiu       $a0, $a0, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E4D84u, 0x1E4D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4D8Cu;
label_1e4d8c:
    // 0x1e4d8c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1e4d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1e4d90: 0xc07a804  jal         func_1EA010
    ctx->pc = 0x1E4D90u;
    SET_GPR_U32(ctx, 31, 0x1E4D98u);
    ctx->pc = 0x1E4D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4D90u;
    // 0x1e4d94: 0x248401a0  addiu       $a0, $a0, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA010u, 0x1E4D90u, 0x1E4D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4D98u;
label_1e4d98:
    // 0x1e4d98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e4d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4d9c:
    // 0x1e4d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4D9Cu;
        // 0x1e4da0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4DA4u;
    // 0x1e4da4: 0x0  nop
    ctx->pc = 0x1e4da4u;
    // NOP
    ctx->pc = 0x1e4da8u;
}
