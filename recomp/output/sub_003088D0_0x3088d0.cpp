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

// Function: sub_003088D0
// Address: 0x3088d0 - 0x308908
void sub_003088D0_0x3088d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003088D0_0x3088d0");
#endif

    switch (ctx->pc) {
        case 0x3088d0u: goto label_3088d0;
        case 0x3088d4u: goto label_3088d4;
        case 0x3088d8u: goto label_3088d8;
        case 0x3088dcu: goto label_3088dc;
        case 0x3088e0u: goto label_3088e0;
        case 0x3088e4u: goto label_3088e4;
        case 0x3088e8u: goto label_3088e8;
        case 0x3088ecu: goto label_3088ec;
        case 0x3088f0u: goto label_3088f0;
        case 0x3088f4u: goto label_3088f4;
        case 0x3088f8u: goto label_3088f8;
        case 0x3088fcu: goto label_3088fc;
        case 0x308900u: goto label_308900;
        case 0x308904u: goto label_308904;
        default: break;
    }

    ctx->pc = 0x3088d0u;

label_3088d0:
    // 0x3088d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3088d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3088d4:
    // 0x3088d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3088d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3088d8:
    // 0x3088d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3088d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_3088dc:
    // 0x3088dc: 0xc087340  jal         func_21CD00
label_3088e0:
    if (ctx->pc == 0x3088E0u) {
        ctx->pc = 0x3088E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3088DCu;
        // 0x3088e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3088E4u;
        goto label_3088e4;
    }
    ctx->pc = 0x3088DCu;
    SET_GPR_U32(ctx, 31, 0x3088E4u);
    ctx->pc = 0x3088E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3088DCu;
    // 0x3088e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CD00u, 0x3088DCu, 0x3088E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3088E4u;
label_3088e4:
    // 0x3088e4: 0x8e0402e4  lw          $a0, 0x2E4($s0)
    ctx->pc = 0x3088e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
label_3088e8:
    // 0x3088e8: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x3088e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_3088ec:
    // 0x3088ec: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3088ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3088f0:
    // 0x3088f0: 0x40f809  jalr        $v0
label_3088f4:
    if (ctx->pc == 0x3088F4u) {
        ctx->pc = 0x3088F8u;
        goto label_3088f8;
    }
    ctx->pc = 0x3088F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3088F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3088F0u, 0x3088F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3088F8u;
label_3088f8:
    // 0x3088f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3088f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3088fc:
    // 0x3088fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3088fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_308900:
    // 0x308900: 0x3e00008  jr          $ra
label_308904:
    if (ctx->pc == 0x308904u) {
        ctx->pc = 0x308904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308900u;
        // 0x308904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308908u;
        goto label_fallthrough_0x308900;
    }
    ctx->pc = 0x308900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308900u;
        // 0x308904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x308900:
    ctx->pc = 0x308908u;
}
