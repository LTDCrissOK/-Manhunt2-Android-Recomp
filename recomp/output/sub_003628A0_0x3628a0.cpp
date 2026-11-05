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

// Function: sub_003628A0
// Address: 0x3628a0 - 0x3628e8
void sub_003628A0_0x3628a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003628A0_0x3628a0");
#endif

    switch (ctx->pc) {
        case 0x3628a0u: goto label_3628a0;
        case 0x3628a4u: goto label_3628a4;
        case 0x3628a8u: goto label_3628a8;
        case 0x3628acu: goto label_3628ac;
        case 0x3628b0u: goto label_3628b0;
        case 0x3628b4u: goto label_3628b4;
        case 0x3628b8u: goto label_3628b8;
        case 0x3628bcu: goto label_3628bc;
        case 0x3628c0u: goto label_3628c0;
        case 0x3628c4u: goto label_3628c4;
        case 0x3628c8u: goto label_3628c8;
        case 0x3628ccu: goto label_3628cc;
        case 0x3628d0u: goto label_3628d0;
        case 0x3628d4u: goto label_3628d4;
        case 0x3628d8u: goto label_3628d8;
        case 0x3628dcu: goto label_3628dc;
        case 0x3628e0u: goto label_3628e0;
        case 0x3628e4u: goto label_3628e4;
        default: break;
    }

    ctx->pc = 0x3628a0u;

label_3628a0:
    // 0x3628a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3628a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3628a4:
    // 0x3628a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3628a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3628a8:
    // 0x3628a8: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x3628a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_3628ac:
    // 0x3628ac: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_3628b0:
    if (ctx->pc == 0x3628B0u) {
        ctx->pc = 0x3628B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3628ACu;
        // 0x3628b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3628B4u;
        goto label_3628b4;
    }
    ctx->pc = 0x3628ACu;
    {
        const bool branch_taken_0x3628ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3628B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3628ACu;
        // 0x3628b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3628ac) {
            ctx->pc = 0x3628E0u;
            goto label_3628e0;
        }
    }
    ctx->pc = 0x3628B4u;
label_3628b4:
    // 0x3628b4: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x3628b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_3628b8:
    // 0x3628b8: 0x30427001  andi        $v0, $v0, 0x7001
    ctx->pc = 0x3628b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)28673);
label_3628bc:
    // 0x3628bc: 0x38427001  xori        $v0, $v0, 0x7001
    ctx->pc = 0x3628bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)28673);
label_3628c0:
    // 0x3628c0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3628c4:
    if (ctx->pc == 0x3628C4u) {
        ctx->pc = 0x3628C8u;
        goto label_3628c8;
    }
    ctx->pc = 0x3628C0u;
    {
        const bool branch_taken_0x3628c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3628c0) {
            ctx->pc = 0x3628E0u;
            goto label_3628e0;
        }
    }
    ctx->pc = 0x3628C8u;
label_3628c8:
    // 0x3628c8: 0x8c6402e4  lw          $a0, 0x2E4($v1)
    ctx->pc = 0x3628c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 740)));
label_3628cc:
    // 0x3628cc: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x3628ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_3628d0:
    // 0x3628d0: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x3628d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_3628d4:
    // 0x3628d4: 0x40f809  jalr        $v0
label_3628d8:
    if (ctx->pc == 0x3628D8u) {
        ctx->pc = 0x3628DCu;
        goto label_3628dc;
    }
    ctx->pc = 0x3628D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3628DCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3628D4u, 0x3628DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3628DCu;
label_3628dc:
    // 0x3628dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3628dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3628e0:
    // 0x3628e0: 0x3e00008  jr          $ra
label_3628e4:
    if (ctx->pc == 0x3628E4u) {
        ctx->pc = 0x3628E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3628E0u;
        // 0x3628e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3628E8u;
        goto label_fallthrough_0x3628e0;
    }
    ctx->pc = 0x3628E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3628E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3628E0u;
        // 0x3628e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3628E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3628e0:
    ctx->pc = 0x3628E8u;
}
