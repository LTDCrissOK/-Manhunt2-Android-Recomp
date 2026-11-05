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

// Function: sub_0010E880
// Address: 0x10e880 - 0x10e8b0
void sub_0010E880_0x10e880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E880_0x10e880");
#endif

    switch (ctx->pc) {
        case 0x10e880u: goto label_10e880;
        case 0x10e884u: goto label_10e884;
        case 0x10e888u: goto label_10e888;
        case 0x10e88cu: goto label_10e88c;
        case 0x10e890u: goto label_10e890;
        case 0x10e894u: goto label_10e894;
        case 0x10e898u: goto label_10e898;
        case 0x10e89cu: goto label_10e89c;
        case 0x10e8a0u: goto label_10e8a0;
        case 0x10e8a4u: goto label_10e8a4;
        case 0x10e8a8u: goto label_10e8a8;
        case 0x10e8acu: goto label_10e8ac;
        default: break;
    }

    ctx->pc = 0x10e880u;

label_10e880:
    // 0x10e880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10e880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_10e884:
    // 0x10e884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10e888:
    // 0x10e888: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x10e888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_10e88c:
    // 0x10e88c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_10e890:
    if (ctx->pc == 0x10E890u) {
        ctx->pc = 0x10E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E88Cu;
        // 0x10e890: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E894u;
        goto label_10e894;
    }
    ctx->pc = 0x10E88Cu;
    {
        const bool branch_taken_0x10e88c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E88Cu;
        // 0x10e890: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e88c) {
            ctx->pc = 0x10E8A8u;
            goto label_10e8a8;
        }
    }
    ctx->pc = 0x10E894u;
label_10e894:
    // 0x10e894: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x10e894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10e898:
    // 0x10e898: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x10e898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_10e89c:
    // 0x10e89c: 0x40f809  jalr        $v0
label_10e8a0:
    if (ctx->pc == 0x10E8A0u) {
        ctx->pc = 0x10E8A4u;
        goto label_10e8a4;
    }
    ctx->pc = 0x10E89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10E8A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E89Cu, 0x10E8A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E8A4u;
label_10e8a4:
    // 0x10e8a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e8a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10e8a8:
    // 0x10e8a8: 0x3e00008  jr          $ra
label_10e8ac:
    if (ctx->pc == 0x10E8ACu) {
        ctx->pc = 0x10E8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E8A8u;
        // 0x10e8ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E8B0u;
        goto label_fallthrough_0x10e8a8;
    }
    ctx->pc = 0x10E8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E8A8u;
        // 0x10e8ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E8A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10e8a8:
    ctx->pc = 0x10E8B0u;
}
