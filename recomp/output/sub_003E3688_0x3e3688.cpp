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

// Function: sub_003E3688
// Address: 0x3e3688 - 0x3e36b8
void sub_003E3688_0x3e3688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E3688_0x3e3688");
#endif

    switch (ctx->pc) {
        case 0x3e36acu: goto label_3e36ac;
        default: break;
    }

    ctx->pc = 0x3e3688u;

    // 0x3e3688: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e3688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e368c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3e368cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3e3690: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e3690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e3694: 0x24423858  addiu       $v0, $v0, 0x3858
    ctx->pc = 0x3e3694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14424));
    // 0x3e3698: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x3e3698u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3e369c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E369Cu;
    {
        const bool branch_taken_0x3e369c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E36A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E369Cu;
        // 0x3e36a0: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e369c) {
            ctx->pc = 0x3E36ACu;
            goto label_3e36ac;
        }
    }
    ctx->pc = 0x3E36A4u;
    // 0x3e36a4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E36A4u;
    SET_GPR_U32(ctx, 31, 0x3E36ACu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E36A4u, 0x3E36ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E36ACu;
label_3e36ac:
    // 0x3e36ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e36acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e36b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E36B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E36B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E36B0u;
        // 0x3e36b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E36B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E36B8u;
}
