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

// Function: sub_003BDE68
// Address: 0x3bde68 - 0x3bdeb0
void sub_003BDE68_0x3bde68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BDE68_0x3bde68");
#endif

    switch (ctx->pc) {
        case 0x3bde80u: goto label_3bde80;
        case 0x3bde8cu: goto label_3bde8c;
        default: break;
    }

    ctx->pc = 0x3bde68u;

    // 0x3bde68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3bde68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3bde6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3bde6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3bde70: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3bde70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3bde74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3bde74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3bde78: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x3BDE78u;
    SET_GPR_U32(ctx, 31, 0x3BDE80u);
    ctx->pc = 0x3BDE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDE78u;
    // 0x3bde7c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x3BDE78u, 0x3BDE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDE80u;
label_3bde80:
    // 0x3bde80: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3bde80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bde84: 0xc0ef62c  jal         func_3BD8B0
    ctx->pc = 0x3BDE84u;
    SET_GPR_U32(ctx, 31, 0x3BDE8Cu);
    ctx->pc = 0x3BDE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDE84u;
    // 0x3bde88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD8B0u, 0x3BDE84u, 0x3BDE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDE8Cu;
label_3bde8c:
    // 0x3bde8c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BDE8Cu;
    {
        const bool branch_taken_0x3bde8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDE8Cu;
        // 0x3bde90: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bde8c) {
            ctx->pc = 0x3BDEA0u;
            goto label_3bdea0;
        }
    }
    ctx->pc = 0x3BDE94u;
    // 0x3bde94: 0xf  sync
    ctx->pc = 0x3bde94u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3bde98: 0x42000038  ei
    ctx->pc = 0x3bde98u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x3bde9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3bde9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3bdea0:
    // 0x3bdea0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3bdea0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bdea4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3bdea4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bdea8: 0x3e00008  jr          $ra
    ctx->pc = 0x3BDEA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BDEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDEA8u;
        // 0x3bdeac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BDEA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BDEB0u;
}
