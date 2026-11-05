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

// Function: sub_002A70B8
// Address: 0x2a70b8 - 0x2a7108
void sub_002A70B8_0x2a70b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A70B8_0x2a70b8");
#endif

    switch (ctx->pc) {
        case 0x2a70ccu: goto label_2a70cc;
        case 0x2a70e0u: goto label_2a70e0;
        case 0x2a70f4u: goto label_2a70f4;
        default: break;
    }

    ctx->pc = 0x2a70b8u;

    // 0x2a70b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a70b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a70bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a70bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a70c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2a70c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2a70c4: 0xc0a80f0  jal         func_2A03C0
    ctx->pc = 0x2A70C4u;
    SET_GPR_U32(ctx, 31, 0x2A70CCu);
    ctx->pc = 0x2A70C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A70C4u;
    // 0x2a70c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A03C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A03C0u, 0x2A70C4u, 0x2A70CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A70CCu;
label_2a70cc:
    // 0x2a70cc: 0x8e040298  lw          $a0, 0x298($s0)
    ctx->pc = 0x2a70ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 664)));
    // 0x2a70d0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A70D0u;
    {
        const bool branch_taken_0x2a70d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a70d0) {
            ctx->pc = 0x2A70D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A70D0u;
            // 0x2a70d4: 0x8e0402a4  lw          $a0, 0x2A4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 676)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A70E4u;
            goto label_2a70e4;
        }
    }
    ctx->pc = 0x2A70D8u;
    // 0x2a70d8: 0xc0a9154  jal         func_2A4550
    ctx->pc = 0x2A70D8u;
    SET_GPR_U32(ctx, 31, 0x2A70E0u);
    ctx->pc = 0x2A4550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4550u, 0x2A70D8u, 0x2A70E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A70E0u;
label_2a70e0:
    // 0x2a70e0: 0x8e0402a4  lw          $a0, 0x2A4($s0)
    ctx->pc = 0x2a70e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 676)));
label_2a70e4:
    // 0x2a70e4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A70E4u;
    {
        const bool branch_taken_0x2a70e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A70E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A70E4u;
        // 0x2a70e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a70e4) {
            ctx->pc = 0x2A70F8u;
            goto label_2a70f8;
        }
    }
    ctx->pc = 0x2A70ECu;
    // 0x2a70ec: 0xc0a9e18  jal         func_2A7860
    ctx->pc = 0x2A70ECu;
    SET_GPR_U32(ctx, 31, 0x2A70F4u);
    ctx->pc = 0x2A7860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7860u, 0x2A70ECu, 0x2A70F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A70F4u;
label_2a70f4:
    // 0x2a70f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a70f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a70f8:
    // 0x2a70f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2a70f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a70fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A70FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A70FCu;
        // 0x2a7100: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A70FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7104u;
    // 0x2a7104: 0x0  nop
    ctx->pc = 0x2a7104u;
    // NOP
    ctx->pc = 0x2a7108u;
}
