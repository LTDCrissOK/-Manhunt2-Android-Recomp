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

// Function: sub_0016C588
// Address: 0x16c588 - 0x16c5d8
void sub_0016C588_0x16c588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C588_0x16c588");
#endif

    switch (ctx->pc) {
        case 0x16c588u: goto label_16c588;
        case 0x16c58cu: goto label_16c58c;
        case 0x16c590u: goto label_16c590;
        case 0x16c594u: goto label_16c594;
        case 0x16c598u: goto label_16c598;
        case 0x16c59cu: goto label_16c59c;
        case 0x16c5a0u: goto label_16c5a0;
        case 0x16c5a4u: goto label_16c5a4;
        case 0x16c5a8u: goto label_16c5a8;
        case 0x16c5acu: goto label_16c5ac;
        case 0x16c5b0u: goto label_16c5b0;
        case 0x16c5b4u: goto label_16c5b4;
        case 0x16c5b8u: goto label_16c5b8;
        case 0x16c5bcu: goto label_16c5bc;
        case 0x16c5c0u: goto label_16c5c0;
        case 0x16c5c4u: goto label_16c5c4;
        case 0x16c5c8u: goto label_16c5c8;
        case 0x16c5ccu: goto label_16c5cc;
        case 0x16c5d0u: goto label_16c5d0;
        case 0x16c5d4u: goto label_16c5d4;
        default: break;
    }

    ctx->pc = 0x16c588u;

label_16c588:
    // 0x16c588: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16c588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_16c58c:
    // 0x16c58c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16c58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16c590:
    // 0x16c590: 0xc05a618  jal         func_169860
label_16c594:
    if (ctx->pc == 0x16C594u) {
        ctx->pc = 0x16C594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C590u;
        // 0x16c594: 0x8c84005c  lw          $a0, 0x5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C598u;
        goto label_16c598;
    }
    ctx->pc = 0x16C590u;
    SET_GPR_U32(ctx, 31, 0x16C598u);
    ctx->pc = 0x16C594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C590u;
    // 0x16c594: 0x8c84005c  lw          $a0, 0x5C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169860u, 0x16C590u, 0x16C598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C598u;
label_16c598:
    // 0x16c598: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16c59c:
    // 0x16c59c: 0x3e00008  jr          $ra
label_16c5a0:
    if (ctx->pc == 0x16C5A0u) {
        ctx->pc = 0x16C5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C59Cu;
        // 0x16c5a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C5A4u;
        goto label_16c5a4;
    }
    ctx->pc = 0x16C59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C59Cu;
        // 0x16c5a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C5A4u;
label_16c5a4:
    // 0x16c5a4: 0x0  nop
    ctx->pc = 0x16c5a4u;
    // NOP
label_16c5a8:
    // 0x16c5a8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x16c5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_16c5ac:
    // 0x16c5ac: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x16c5acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_16c5b0:
    // 0x16c5b0: 0x8c8300f4  lw          $v1, 0xF4($a0)
    ctx->pc = 0x16c5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
label_16c5b4:
    // 0x16c5b4: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x16c5b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_16c5b8:
    // 0x16c5b8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_16c5bc:
    if (ctx->pc == 0x16C5BCu) {
        ctx->pc = 0x16C5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C5B8u;
        // 0x16c5bc: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C5C0u;
        goto label_16c5c0;
    }
    ctx->pc = 0x16C5B8u;
    {
        const bool branch_taken_0x16c5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C5B8u;
        // 0x16c5bc: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c5b8) {
            ctx->pc = 0x16C604u;
            return;
        }
    }
    ctx->pc = 0x16C5C0u;
label_16c5c0:
    // 0x16c5c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16c5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_16c5c4:
    // 0x16c5c4: 0x2442f020  addiu       $v0, $v0, -0xFE0
    ctx->pc = 0x16c5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963232));
label_16c5c8:
    // 0x16c5c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16c5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_16c5cc:
    // 0x16c5cc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16c5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16c5d0:
    // 0x16c5d0: 0x800008  jr          $a0
label_16c5d4:
    if (ctx->pc == 0x16C5D4u) {
        ctx->pc = 0x16C5D8u;
        goto label_fallthrough_0x16c5d0;
    }
    ctx->pc = 0x16C5D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C5D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x16c5d0:
    ctx->pc = 0x16C5D8u;
}
