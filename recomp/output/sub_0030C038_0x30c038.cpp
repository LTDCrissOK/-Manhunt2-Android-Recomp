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

// Function: sub_0030C038
// Address: 0x30c038 - 0x30c078
void sub_0030C038_0x30c038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C038_0x30c038");
#endif

    switch (ctx->pc) {
        case 0x30c064u: goto label_30c064;
        default: break;
    }

    ctx->pc = 0x30c038u;

    // 0x30c038: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30c038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30c03c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30c03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30c040: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x30c040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x30c044: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C044u;
    {
        const bool branch_taken_0x30c044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C044u;
        // 0x30c048: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c044) {
            ctx->pc = 0x30C058u;
            goto label_30c058;
        }
    }
    ctx->pc = 0x30C04Cu;
    // 0x30c04c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x30c04cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x30c050: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30C050u;
    {
        const bool branch_taken_0x30c050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C050u;
        // 0x30c054: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c050) {
            ctx->pc = 0x30C068u;
            goto label_30c068;
        }
    }
    ctx->pc = 0x30C058u;
label_30c058:
    // 0x30c058: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x30c058u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x30c05c: 0xc0c4898  jal         func_312260
    ctx->pc = 0x30C05Cu;
    SET_GPR_U32(ctx, 31, 0x30C064u);
    ctx->pc = 0x30C060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C05Cu;
    // 0x30c060: 0x24a5c038  addiu       $a1, $a1, -0x3FC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312260u, 0x30C05Cu, 0x30C064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C064u;
label_30c064:
    // 0x30c064: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30c064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30c068:
    // 0x30c068: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30c068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c06c: 0x3e00008  jr          $ra
    ctx->pc = 0x30C06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C06Cu;
        // 0x30c070: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C06Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C074u;
    // 0x30c074: 0x0  nop
    ctx->pc = 0x30c074u;
    // NOP
    ctx->pc = 0x30c078u;
}
