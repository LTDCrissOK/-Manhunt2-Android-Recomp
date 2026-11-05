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

// Function: sub_003087B0
// Address: 0x3087b0 - 0x3087e8
void sub_003087B0_0x3087b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003087B0_0x3087b0");
#endif

    switch (ctx->pc) {
        case 0x3087b0u: goto label_3087b0;
        case 0x3087b4u: goto label_3087b4;
        case 0x3087b8u: goto label_3087b8;
        case 0x3087bcu: goto label_3087bc;
        case 0x3087c0u: goto label_3087c0;
        case 0x3087c4u: goto label_3087c4;
        case 0x3087c8u: goto label_3087c8;
        case 0x3087ccu: goto label_3087cc;
        case 0x3087d0u: goto label_3087d0;
        case 0x3087d4u: goto label_3087d4;
        case 0x3087d8u: goto label_3087d8;
        case 0x3087dcu: goto label_3087dc;
        case 0x3087e0u: goto label_3087e0;
        case 0x3087e4u: goto label_3087e4;
        default: break;
    }

    ctx->pc = 0x3087b0u;

label_3087b0:
    // 0x3087b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3087b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3087b4:
    // 0x3087b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3087b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3087b8:
    // 0x3087b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3087b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_3087bc:
    // 0x3087bc: 0xc099134  jal         func_2644D0
label_3087c0:
    if (ctx->pc == 0x3087C0u) {
        ctx->pc = 0x3087C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3087BCu;
        // 0x3087c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3087C4u;
        goto label_3087c4;
    }
    ctx->pc = 0x3087BCu;
    SET_GPR_U32(ctx, 31, 0x3087C4u);
    ctx->pc = 0x3087C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3087BCu;
    // 0x3087c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2644D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2644D0u, 0x3087BCu, 0x3087C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3087C4u;
label_3087c4:
    // 0x3087c4: 0x8e0402e4  lw          $a0, 0x2E4($s0)
    ctx->pc = 0x3087c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
label_3087c8:
    // 0x3087c8: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x3087c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_3087cc:
    // 0x3087cc: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x3087ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3087d0:
    // 0x3087d0: 0x40f809  jalr        $v0
label_3087d4:
    if (ctx->pc == 0x3087D4u) {
        ctx->pc = 0x3087D8u;
        goto label_3087d8;
    }
    ctx->pc = 0x3087D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3087D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3087D0u, 0x3087D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3087D8u;
label_3087d8:
    // 0x3087d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3087d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3087dc:
    // 0x3087dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3087dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3087e0:
    // 0x3087e0: 0x3e00008  jr          $ra
label_3087e4:
    if (ctx->pc == 0x3087E4u) {
        ctx->pc = 0x3087E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3087E0u;
        // 0x3087e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3087E8u;
        goto label_fallthrough_0x3087e0;
    }
    ctx->pc = 0x3087E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3087E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3087E0u;
        // 0x3087e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3087E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3087e0:
    ctx->pc = 0x3087E8u;
}
