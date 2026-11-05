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

// Function: sub_003BB5F8
// Address: 0x3bb5f8 - 0x3bb640
void sub_003BB5F8_0x3bb5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BB5F8_0x3bb5f8");
#endif

    switch (ctx->pc) {
        case 0x3bb608u: goto label_3bb608;
        case 0x3bb620u: goto label_3bb620;
        default: break;
    }

    ctx->pc = 0x3bb5f8u;

    // 0x3bb5f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3bb5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3bb5fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3bb5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3bb600: 0xc0eed54  jal         func_3BB550
    ctx->pc = 0x3BB600u;
    SET_GPR_U32(ctx, 31, 0x3BB608u);
    ctx->pc = 0x3BB550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB550u, 0x3BB600u, 0x3BB608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB608u;
label_3bb608:
    // 0x3bb608: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BB608u;
    {
        const bool branch_taken_0x3bb608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB608u;
        // 0x3bb60c: 0x3c030043  lui         $v1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb608) {
            ctx->pc = 0x3BB618u;
            goto label_3bb618;
        }
    }
    ctx->pc = 0x3BB610u;
    // 0x3bb610: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3BB610u;
    {
        const bool branch_taken_0x3bb610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB610u;
        // 0x3bb614: 0x9062c902  lbu         $v0, -0x36FE($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294953218)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb610) {
            ctx->pc = 0x3BB62Cu;
            goto label_3bb62c;
        }
    }
    ctx->pc = 0x3BB618u;
label_3bb618:
    // 0x3bb618: 0xc0f2694  jal         func_3C9A50
    ctx->pc = 0x3BB618u;
    SET_GPR_U32(ctx, 31, 0x3BB620u);
    ctx->pc = 0x3BB61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB618u;
    // 0x3bb61c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9A50u, 0x3BB618u, 0x3BB620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB620u;
label_3bb620:
    // 0x3bb620: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3bb620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bb624: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x3bb624u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3bb628: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3bb628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_3bb62c:
    // 0x3bb62c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3bb62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bb630: 0x3e00008  jr          $ra
    ctx->pc = 0x3BB630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BB634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB630u;
        // 0x3bb634: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BB638u;
    // 0x3bb638: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3bb638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3bb63c: 0x0  nop
    ctx->pc = 0x3bb63cu;
    // NOP
    ctx->pc = 0x3bb640u;
}
