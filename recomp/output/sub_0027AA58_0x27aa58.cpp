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

// Function: sub_0027AA58
// Address: 0x27aa58 - 0x27aac0
void sub_0027AA58_0x27aa58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027AA58_0x27aa58");
#endif

    switch (ctx->pc) {
        case 0x27aa7cu: goto label_27aa7c;
        case 0x27aa98u: goto label_27aa98;
        case 0x27aab4u: goto label_27aab4;
        default: break;
    }

    ctx->pc = 0x27aa58u;

    // 0x27aa58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27aa58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27aa5c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x27aa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x27aa60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27aa60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27aa64: 0x2444ede0  addiu       $a0, $v0, -0x1220
    ctx->pc = 0x27aa64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962656));
    // 0x27aa68: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x27aa68u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4BEDE6u));
    // 0x27aa6c: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27AA6Cu;
    {
        const bool branch_taken_0x27aa6c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x27AA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AA6Cu;
        // 0x27aa70: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aa6c) {
            ctx->pc = 0x27AA80u;
            goto label_27aa80;
        }
    }
    ctx->pc = 0x27AA74u;
    // 0x27aa74: 0xc0d73fc  jal         func_35CFF0
    ctx->pc = 0x27AA74u;
    SET_GPR_U32(ctx, 31, 0x27AA7Cu);
    ctx->pc = 0x35CFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFF0u, 0x27AA74u, 0x27AA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AA7Cu;
label_27aa7c:
    // 0x27aa7c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x27aa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_27aa80:
    // 0x27aa80: 0x2444ede8  addiu       $a0, $v0, -0x1218
    ctx->pc = 0x27aa80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962664));
    // 0x27aa84: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x27aa84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x27aa88: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27AA88u;
    {
        const bool branch_taken_0x27aa88 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x27AA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AA88u;
        // 0x27aa8c: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aa88) {
            ctx->pc = 0x27AA9Cu;
            goto label_27aa9c;
        }
    }
    ctx->pc = 0x27AA90u;
    // 0x27aa90: 0xc0d73fc  jal         func_35CFF0
    ctx->pc = 0x27AA90u;
    SET_GPR_U32(ctx, 31, 0x27AA98u);
    ctx->pc = 0x35CFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFF0u, 0x27AA90u, 0x27AA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AA98u;
label_27aa98:
    // 0x27aa98: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x27aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_27aa9c:
    // 0x27aa9c: 0x2444edc0  addiu       $a0, $v0, -0x1240
    ctx->pc = 0x27aa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962624));
    // 0x27aaa0: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x27aaa0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x27aaa4: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27AAA4u;
    {
        const bool branch_taken_0x27aaa4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x27AAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AAA4u;
        // 0x27aaa8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aaa4) {
            ctx->pc = 0x27AAB8u;
            goto label_27aab8;
        }
    }
    ctx->pc = 0x27AAACu;
    // 0x27aaac: 0xc0d73fc  jal         func_35CFF0
    ctx->pc = 0x27AAACu;
    SET_GPR_U32(ctx, 31, 0x27AAB4u);
    ctx->pc = 0x35CFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFF0u, 0x27AAACu, 0x27AAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AAB4u;
label_27aab4:
    // 0x27aab4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27aab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27aab8:
    // 0x27aab8: 0x3e00008  jr          $ra
    ctx->pc = 0x27AAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AAB8u;
        // 0x27aabc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AAB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27AAC0u;
}
