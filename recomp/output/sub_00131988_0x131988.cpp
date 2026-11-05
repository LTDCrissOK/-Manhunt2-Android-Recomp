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

// Function: sub_00131988
// Address: 0x131988 - 0x1319b8
void sub_00131988_0x131988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131988_0x131988");
#endif

    switch (ctx->pc) {
        case 0x1319acu: goto label_1319ac;
        default: break;
    }

    ctx->pc = 0x131988u;

    // 0x131988: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x131988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13198c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13198cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x131990: 0x8c82021c  lw          $v0, 0x21C($a0)
    ctx->pc = 0x131990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 540)));
    // 0x131994: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x131994u;
    {
        const bool branch_taken_0x131994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x131994) {
            ctx->pc = 0x131998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131994u;
            // 0x131998: 0xac85021c  sw          $a1, 0x21C($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 540), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13199Cu;
            goto label_13199c;
        }
    }
    ctx->pc = 0x13199Cu;
label_13199c:
    // 0x13199c: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x13199cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x1319a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1319a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1319a4: 0xc04c7a0  jal         func_131E80
    ctx->pc = 0x1319A4u;
    SET_GPR_U32(ctx, 31, 0x1319ACu);
    ctx->pc = 0x1319A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1319A4u;
    // 0x1319a8: 0xafa7000c  sw          $a3, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E80u, 0x1319A4u, 0x1319ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1319ACu;
label_1319ac:
    // 0x1319ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1319acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1319b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1319B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1319B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1319B0u;
        // 0x1319b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1319B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1319B8u;
}
