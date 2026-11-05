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

// Function: sub_001775C8
// Address: 0x1775c8 - 0x1775f8
void sub_001775C8_0x1775c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001775C8_0x1775c8");
#endif

    switch (ctx->pc) {
        case 0x1775dcu: goto label_1775dc;
        case 0x1775e8u: goto label_1775e8;
        default: break;
    }

    ctx->pc = 0x1775c8u;

    // 0x1775c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1775c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1775cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1775ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1775d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1775d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1775d4: 0xc05e128  jal         func_1784A0
    ctx->pc = 0x1775D4u;
    SET_GPR_U32(ctx, 31, 0x1775DCu);
    ctx->pc = 0x1775D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1775D4u;
    // 0x1775d8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1784A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1784A0u, 0x1775D4u, 0x1775DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1775DCu;
label_1775dc:
    // 0x1775dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1775dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1775e0: 0xc05e372  jal         func_178DC8
    ctx->pc = 0x1775E0u;
    SET_GPR_U32(ctx, 31, 0x1775E8u);
    ctx->pc = 0x1775E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1775E0u;
    // 0x1775e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178DC8u, 0x1775E0u, 0x1775E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1775E8u;
label_1775e8:
    // 0x1775e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1775e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1775ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1775ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1775f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1775F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1775F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1775F0u;
        // 0x1775f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1775F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1775F8u;
}
