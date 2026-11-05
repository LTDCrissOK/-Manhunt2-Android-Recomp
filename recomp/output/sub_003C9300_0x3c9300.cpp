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

// Function: sub_003C9300
// Address: 0x3c9300 - 0x3c9360
void sub_003C9300_0x3c9300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9300_0x3c9300");
#endif

    switch (ctx->pc) {
        case 0x3c9328u: goto label_3c9328;
        default: break;
    }

    ctx->pc = 0x3c9300u;

    // 0x3c9300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c9300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3c9304: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3c9304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3c9308: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c9308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c930c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c930cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c9310: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3c9310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c9314: 0x3c110066  lui         $s1, 0x66
    ctx->pc = 0x3c9314u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)102 << 16));
    // 0x3c9318: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c9318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c931c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3c931cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c9320: 0xc0f2848  jal         func_3CA120
    ctx->pc = 0x3C9320u;
    SET_GPR_U32(ctx, 31, 0x3C9328u);
    ctx->pc = 0x3C9324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9320u;
    // 0x3c9324: 0xae201130  sw          $zero, 0x1130($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4400), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA120u, 0x3C9320u, 0x3C9328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9328u;
label_3c9328:
    // 0x3c9328: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3c9328u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c932c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3c932cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c9330: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C9330u;
    {
        const bool branch_taken_0x3c9330 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c9330) {
            ctx->pc = 0x3C9334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C9330u;
            // 0x3c9334: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C9348u;
            goto label_3c9348;
        }
    }
    ctx->pc = 0x3C9338u;
    // 0x3c9338: 0x8e221130  lw          $v0, 0x1130($s1)
    ctx->pc = 0x3c9338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4400)));
    // 0x3c933c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3C933Cu;
    {
        const bool branch_taken_0x3c933c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c933c) {
            ctx->pc = 0x3C9340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C933Cu;
            // 0x3c9340: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C9344u;
            goto label_3c9344;
        }
    }
    ctx->pc = 0x3C9344u;
label_3c9344:
    // 0x3c9344: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3c9344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c9348:
    // 0x3c9348: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3c9348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c934c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c934cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c9350: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c9350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c9354: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C9358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9354u;
        // 0x3c9358: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C935Cu;
    // 0x3c935c: 0x0  nop
    ctx->pc = 0x3c935cu;
    // NOP
    ctx->pc = 0x3c9360u;
}
