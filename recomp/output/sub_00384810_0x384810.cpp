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

// Function: sub_00384810
// Address: 0x384810 - 0x384880
void sub_00384810_0x384810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384810_0x384810");
#endif

    switch (ctx->pc) {
        case 0x384848u: goto label_384848;
        default: break;
    }

    ctx->pc = 0x384810u;

    // 0x384810: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x384810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x384814: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x384814u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x384818: 0x8c66dfe4  lw          $a2, -0x201C($v1)
    ctx->pc = 0x384818u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3FDFE4u));
    // 0x38481c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x38481cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x384820: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x384820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x384824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x384824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x384828: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x384828u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38482c: 0x10c50011  beq         $a2, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x38482Cu;
    {
        const bool branch_taken_0x38482c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x384830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38482Cu;
        // 0x384830: 0x3442000a  ori         $v0, $v0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38482c) {
            ctx->pc = 0x384874u;
            goto label_384874;
        }
    }
    ctx->pc = 0x384834u;
    // 0x384834: 0x54e00008  bnel        $a3, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x384834u;
    {
        const bool branch_taken_0x384834 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x384834) {
            ctx->pc = 0x384838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x384834u;
            // 0x384838: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x384858u;
            goto label_384858;
        }
    }
    ctx->pc = 0x38483Cu;
    // 0x38483c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x38483cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x384840: 0xc0efe28  jal         func_3BF8A0
    ctx->pc = 0x384840u;
    SET_GPR_U32(ctx, 31, 0x384848u);
    ctx->pc = 0x384844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384840u;
    // 0x384844: 0x24848a68  addiu       $a0, $a0, -0x7598 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF8A0u, 0x384840u, 0x384848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384848u;
label_384848:
    // 0x384848: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x384848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x38484c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x38484Cu;
    {
        const bool branch_taken_0x38484c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38484Cu;
        // 0x384850: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38484c) {
            ctx->pc = 0x384874u;
            goto label_384874;
        }
    }
    ctx->pc = 0x384854u;
    // 0x384854: 0x0  nop
    ctx->pc = 0x384854u;
    // NOP
label_384858:
    // 0x384858: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x384858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38485c: 0x24a5dfe0  addiu       $a1, $a1, -0x2020
    ctx->pc = 0x38485cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959072));
    // 0x384860: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x384860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x384864: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x384864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x384868: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x384868u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x38486c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x38486cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x384870: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x384870u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_384874:
    // 0x384874: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x384874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x384878: 0x3e00008  jr          $ra
    ctx->pc = 0x384878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384878u;
        // 0x38487c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384880u;
}
