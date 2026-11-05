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

// Function: sub_003BDEB0
// Address: 0x3bdeb0 - 0x3bdef8
void sub_003BDEB0_0x3bdeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BDEB0_0x3bdeb0");
#endif

    switch (ctx->pc) {
        case 0x3bdec8u: goto label_3bdec8;
        case 0x3bded4u: goto label_3bded4;
        default: break;
    }

    ctx->pc = 0x3bdeb0u;

    // 0x3bdeb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3bdeb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3bdeb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3bdeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3bdeb8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3bdeb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3bdebc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3bdebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3bdec0: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x3BDEC0u;
    SET_GPR_U32(ctx, 31, 0x3BDEC8u);
    ctx->pc = 0x3BDEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDEC0u;
    // 0x3bdec4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x3BDEC0u, 0x3BDEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDEC8u;
label_3bdec8:
    // 0x3bdec8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3bdec8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdecc: 0xc0ef6cc  jal         func_3BDB30
    ctx->pc = 0x3BDECCu;
    SET_GPR_U32(ctx, 31, 0x3BDED4u);
    ctx->pc = 0x3BDED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDECCu;
    // 0x3bded0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BDB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BDB30u, 0x3BDECCu, 0x3BDED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDED4u;
label_3bded4:
    // 0x3bded4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BDED4u;
    {
        const bool branch_taken_0x3bded4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDED4u;
        // 0x3bded8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bded4) {
            ctx->pc = 0x3BDEE8u;
            goto label_3bdee8;
        }
    }
    ctx->pc = 0x3BDEDCu;
    // 0x3bdedc: 0xf  sync
    ctx->pc = 0x3bdedcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3bdee0: 0x42000038  ei
    ctx->pc = 0x3bdee0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x3bdee4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3bdee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3bdee8:
    // 0x3bdee8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3bdee8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bdeec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3bdeecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bdef0: 0x3e00008  jr          $ra
    ctx->pc = 0x3BDEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BDEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDEF0u;
        // 0x3bdef4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BDEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BDEF8u;
}
