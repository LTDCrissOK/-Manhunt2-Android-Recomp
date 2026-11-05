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

// Function: sub_00371080
// Address: 0x371080 - 0x3710b8
void sub_00371080_0x371080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371080_0x371080");
#endif

    switch (ctx->pc) {
        case 0x3710a0u: goto label_3710a0;
        default: break;
    }

    ctx->pc = 0x371080u;

    // 0x371080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x371080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x371084: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x371084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371088: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x371088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37108c: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37108Cu;
    {
        const bool branch_taken_0x37108c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x371090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37108Cu;
        // 0x371090: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37108c) {
            ctx->pc = 0x3710A0u;
            goto label_3710a0;
        }
    }
    ctx->pc = 0x371094u;
    // 0x371094: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x371094u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x371098: 0xc0dc3c4  jal         func_370F10
    ctx->pc = 0x371098u;
    SET_GPR_U32(ctx, 31, 0x3710A0u);
    ctx->pc = 0x37109Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371098u;
    // 0x37109c: 0x2484f910  addiu       $a0, $a0, -0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370F10u, 0x371098u, 0x3710A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3710A0u;
label_3710a0:
    // 0x3710a0: 0xf  sync
    ctx->pc = 0x3710a0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3710a4: 0x42000038  ei
    ctx->pc = 0x3710a4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x3710a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3710a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3710ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3710acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3710b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3710B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3710B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3710B0u;
        // 0x3710b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3710B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3710B8u;
}
