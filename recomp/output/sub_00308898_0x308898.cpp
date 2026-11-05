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

// Function: sub_00308898
// Address: 0x308898 - 0x3088d0
void sub_00308898_0x308898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308898_0x308898");
#endif

    switch (ctx->pc) {
        case 0x308898u: goto label_308898;
        case 0x30889cu: goto label_30889c;
        case 0x3088a0u: goto label_3088a0;
        case 0x3088a4u: goto label_3088a4;
        case 0x3088a8u: goto label_3088a8;
        case 0x3088acu: goto label_3088ac;
        case 0x3088b0u: goto label_3088b0;
        case 0x3088b4u: goto label_3088b4;
        case 0x3088b8u: goto label_3088b8;
        case 0x3088bcu: goto label_3088bc;
        case 0x3088c0u: goto label_3088c0;
        case 0x3088c4u: goto label_3088c4;
        case 0x3088c8u: goto label_3088c8;
        case 0x3088ccu: goto label_3088cc;
        default: break;
    }

    ctx->pc = 0x308898u;

label_308898:
    // 0x308898: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x308898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_30889c:
    // 0x30889c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30889cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3088a0:
    // 0x3088a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3088a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_3088a4:
    // 0x3088a4: 0xc098386  jal         func_260E18
label_3088a8:
    if (ctx->pc == 0x3088A8u) {
        ctx->pc = 0x3088A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3088A4u;
        // 0x3088a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3088ACu;
        goto label_3088ac;
    }
    ctx->pc = 0x3088A4u;
    SET_GPR_U32(ctx, 31, 0x3088ACu);
    ctx->pc = 0x3088A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3088A4u;
    // 0x3088a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260E18u, 0x3088A4u, 0x3088ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3088ACu;
label_3088ac:
    // 0x3088ac: 0x8e0402e4  lw          $a0, 0x2E4($s0)
    ctx->pc = 0x3088acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
label_3088b0:
    // 0x3088b0: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x3088b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_3088b4:
    // 0x3088b4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3088b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3088b8:
    // 0x3088b8: 0x40f809  jalr        $v0
label_3088bc:
    if (ctx->pc == 0x3088BCu) {
        ctx->pc = 0x3088C0u;
        goto label_3088c0;
    }
    ctx->pc = 0x3088B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3088C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3088B8u, 0x3088C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3088C0u;
label_3088c0:
    // 0x3088c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3088c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3088c4:
    // 0x3088c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3088c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3088c8:
    // 0x3088c8: 0x3e00008  jr          $ra
label_3088cc:
    if (ctx->pc == 0x3088CCu) {
        ctx->pc = 0x3088CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3088C8u;
        // 0x3088cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3088D0u;
        goto label_fallthrough_0x3088c8;
    }
    ctx->pc = 0x3088C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3088CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3088C8u;
        // 0x3088cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3088C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3088c8:
    ctx->pc = 0x3088D0u;
}
