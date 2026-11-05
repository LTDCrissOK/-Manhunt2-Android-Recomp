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

// Function: sub_00334ED0
// Address: 0x334ed0 - 0x334f18
void sub_00334ED0_0x334ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334ED0_0x334ed0");
#endif

    switch (ctx->pc) {
        case 0x334ef0u: goto label_334ef0;
        default: break;
    }

    ctx->pc = 0x334ed0u;

    // 0x334ed0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x334ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x334ed4: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x334ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x334ed8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x334ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x334edc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x334edcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334ee0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x334ee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334ee4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x334ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x334ee8: 0xc0cd38e  jal         func_334E38
    ctx->pc = 0x334EE8u;
    SET_GPR_U32(ctx, 31, 0x334EF0u);
    ctx->pc = 0x334EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334EE8u;
    // 0x334eec: 0x24455ba8  addiu       $a1, $v0, 0x5BA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 23464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334E38u, 0x334EE8u, 0x334EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334EF0u;
label_334ef0:
    // 0x334ef0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x334ef0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334ef4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x334ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x334ef8: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x334EF8u;
    {
        const bool branch_taken_0x334ef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x334EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334EF8u;
        // 0x334efc: 0x2031821  addu        $v1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334ef8) {
            ctx->pc = 0x334F04u;
            goto label_334f04;
        }
    }
    ctx->pc = 0x334F00u;
    // 0x334f00: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x334f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_334f04:
    // 0x334f04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x334f04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x334f08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x334f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x334f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x334F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F0Cu;
        // 0x334f10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334F14u;
    // 0x334f14: 0x0  nop
    ctx->pc = 0x334f14u;
    // NOP
    ctx->pc = 0x334f18u;
}
