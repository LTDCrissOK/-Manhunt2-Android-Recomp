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

// Function: sub_0027AAC0
// Address: 0x27aac0 - 0x27aaf0
void sub_0027AAC0_0x27aac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027AAC0_0x27aac0");
#endif

    switch (ctx->pc) {
        case 0x27aadcu: goto label_27aadc;
        default: break;
    }

    ctx->pc = 0x27aac0u;

    // 0x27aac0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27aac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27aac4: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x27aac4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x27aac8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27aac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27aacc: 0x24a5ede0  addiu       $a1, $a1, -0x1220
    ctx->pc = 0x27aaccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962656));
    // 0x27aad0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x27aad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x27aad4: 0xc0d7394  jal         func_35CE50
    ctx->pc = 0x27AAD4u;
    SET_GPR_U32(ctx, 31, 0x27AADCu);
    ctx->pc = 0x27AAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AAD4u;
    // 0x27aad8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x27AAD4u, 0x27AADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AADCu;
label_27aadc:
    // 0x27aadc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27aadcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aae0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x27aae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27aae4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27aae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27aae8: 0x3e00008  jr          $ra
    ctx->pc = 0x27AAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AAE8u;
        // 0x27aaec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27AAF0u;
}
