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

// Function: sub_00141D90
// Address: 0x141d90 - 0x141dd8
void sub_00141D90_0x141d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141D90_0x141d90");
#endif

    switch (ctx->pc) {
        case 0x141da8u: goto label_141da8;
        case 0x141dc8u: goto label_141dc8;
        default: break;
    }

    ctx->pc = 0x141d90u;

    // 0x141d90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x141d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x141d94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x141d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x141d98: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x141d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x141d9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x141d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141da0: 0xc04e866  jal         func_13A198
    ctx->pc = 0x141DA0u;
    SET_GPR_U32(ctx, 31, 0x141DA8u);
    ctx->pc = 0x141DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141DA0u;
    // 0x141da4: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A198u, 0x141DA0u, 0x141DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141DA8u;
label_141da8:
    // 0x141da8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x141da8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141dac: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x141dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x141db0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x141DB0u;
    {
        const bool branch_taken_0x141db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x141DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141DB0u;
        // 0x141db4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141db0) {
            ctx->pc = 0x141DC8u;
            goto label_141dc8;
        }
    }
    ctx->pc = 0x141DB8u;
    // 0x141db8: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x141DB8u;
    {
        const bool branch_taken_0x141db8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x141db8) {
            ctx->pc = 0x141DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141DB8u;
            // 0x141dbc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141DCCu;
            goto label_141dcc;
        }
    }
    ctx->pc = 0x141DC0u;
    // 0x141dc0: 0xc050906  jal         func_142418
    ctx->pc = 0x141DC0u;
    SET_GPR_U32(ctx, 31, 0x141DC8u);
    ctx->pc = 0x141DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141DC0u;
    // 0x141dc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142418u, 0x141DC0u, 0x141DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141DC8u;
label_141dc8:
    // 0x141dc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x141dc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_141dcc:
    // 0x141dcc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x141dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x141dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x141DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141DD0u;
        // 0x141dd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141DD8u;
}
