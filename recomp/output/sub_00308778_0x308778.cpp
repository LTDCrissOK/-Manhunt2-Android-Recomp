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

// Function: sub_00308778
// Address: 0x308778 - 0x3087b0
void sub_00308778_0x308778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308778_0x308778");
#endif

    switch (ctx->pc) {
        case 0x308778u: goto label_308778;
        case 0x30877cu: goto label_30877c;
        case 0x308780u: goto label_308780;
        case 0x308784u: goto label_308784;
        case 0x308788u: goto label_308788;
        case 0x30878cu: goto label_30878c;
        case 0x308790u: goto label_308790;
        case 0x308794u: goto label_308794;
        case 0x308798u: goto label_308798;
        case 0x30879cu: goto label_30879c;
        case 0x3087a0u: goto label_3087a0;
        case 0x3087a4u: goto label_3087a4;
        case 0x3087a8u: goto label_3087a8;
        case 0x3087acu: goto label_3087ac;
        default: break;
    }

    ctx->pc = 0x308778u;

label_308778:
    // 0x308778: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x308778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_30877c:
    // 0x30877c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30877cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_308780:
    // 0x308780: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x308780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_308784:
    // 0x308784: 0xc0990e6  jal         func_264398
label_308788:
    if (ctx->pc == 0x308788u) {
        ctx->pc = 0x308788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308784u;
        // 0x308788: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30878Cu;
        goto label_30878c;
    }
    ctx->pc = 0x308784u;
    SET_GPR_U32(ctx, 31, 0x30878Cu);
    ctx->pc = 0x308788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308784u;
    // 0x308788: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264398u, 0x308784u, 0x30878Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30878Cu;
label_30878c:
    // 0x30878c: 0x8e0402e4  lw          $a0, 0x2E4($s0)
    ctx->pc = 0x30878cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
label_308790:
    // 0x308790: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x308790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_308794:
    // 0x308794: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x308794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_308798:
    // 0x308798: 0x40f809  jalr        $v0
label_30879c:
    if (ctx->pc == 0x30879Cu) {
        ctx->pc = 0x3087A0u;
        goto label_3087a0;
    }
    ctx->pc = 0x308798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3087A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308798u, 0x3087A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3087A0u;
label_3087a0:
    // 0x3087a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3087a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3087a4:
    // 0x3087a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3087a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3087a8:
    // 0x3087a8: 0x3e00008  jr          $ra
label_3087ac:
    if (ctx->pc == 0x3087ACu) {
        ctx->pc = 0x3087ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3087A8u;
        // 0x3087ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3087B0u;
        goto label_fallthrough_0x3087a8;
    }
    ctx->pc = 0x3087A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3087ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3087A8u;
        // 0x3087ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3087A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3087a8:
    ctx->pc = 0x3087B0u;
}
