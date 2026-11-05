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

// Function: sub_003AB618
// Address: 0x3ab618 - 0x3ab668
void sub_003AB618_0x3ab618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AB618_0x3ab618");
#endif

    switch (ctx->pc) {
        case 0x3ab648u: goto label_3ab648;
        default: break;
    }

    ctx->pc = 0x3ab618u;

    // 0x3ab618: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ab618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ab61c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3ab61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3ab620: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ab620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ab624: 0x245019a8  addiu       $s0, $v0, 0x19A8
    ctx->pc = 0x3ab624u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 6568));
    // 0x3ab628: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3ab628u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4219A8u));
    // 0x3ab62c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3AB62Cu;
    {
        const bool branch_taken_0x3ab62c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB62Cu;
        // 0x3ab630: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab62c) {
            ctx->pc = 0x3AB64Cu;
            goto label_3ab64c;
        }
    }
    ctx->pc = 0x3AB634u;
    // 0x3ab634: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x3ab634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x3ab638: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ab638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab63c: 0x248419b0  addiu       $a0, $a0, 0x19B0
    ctx->pc = 0x3ab63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6576));
    // 0x3ab640: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3AB640u;
    SET_GPR_U32(ctx, 31, 0x3AB648u);
    ctx->pc = 0x3AB644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB640u;
    // 0x3ab644: 0x24060c00  addiu       $a2, $zero, 0xC00 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3AB640u, 0x3AB648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB648u;
label_3ab648:
    // 0x3ab648: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3ab648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ab64c:
    // 0x3ab64c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ab64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3ab650: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3ab650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ab654: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3ab654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3ab658: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ab658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ab65c: 0x3e00008  jr          $ra
    ctx->pc = 0x3AB65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AB660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB65Cu;
        // 0x3ab660: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AB664u;
    // 0x3ab664: 0x0  nop
    ctx->pc = 0x3ab664u;
    // NOP
    ctx->pc = 0x3ab668u;
}
