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

// Function: sub_002B9160
// Address: 0x2b9160 - 0x2b91b0
void sub_002B9160_0x2b9160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9160_0x2b9160");
#endif

    switch (ctx->pc) {
        case 0x2b9174u: goto label_2b9174;
        case 0x2b919cu: goto label_2b919c;
        default: break;
    }

    ctx->pc = 0x2b9160u;

    // 0x2b9160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b9160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b9164: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b9164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b9168: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2b9168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2b916c: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x2B916Cu;
    SET_GPR_U32(ctx, 31, 0x2B9174u);
    ctx->pc = 0x2B9170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B916Cu;
    // 0x2b9170: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x2B916Cu, 0x2B9174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9174u;
label_2b9174:
    // 0x2b9174: 0x904300f4  lbu         $v1, 0xF4($v0)
    ctx->pc = 0x2b9174u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x2b9178: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B9178u;
    {
        const bool branch_taken_0x2b9178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B917Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9178u;
        // 0x2b917c: 0xae030024  sw          $v1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9178) {
            ctx->pc = 0x2B919Cu;
            goto label_2b919c;
        }
    }
    ctx->pc = 0x2B9180u;
    // 0x2b9180: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b9180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b9184: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2b9184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b9188: 0x8c438ec8  lw          $v1, -0x7138($v0)
    ctx->pc = 0x2b9188u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F8EC8u));
    // 0x2b918c: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B918Cu;
    {
        const bool branch_taken_0x2b918c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2B9190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B918Cu;
        // 0x2b9190: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b918c) {
            ctx->pc = 0x2B91A0u;
            goto label_2b91a0;
        }
    }
    ctx->pc = 0x2B9194u;
    // 0x2b9194: 0xc0c673c  jal         func_319CF0
    ctx->pc = 0x2B9194u;
    SET_GPR_U32(ctx, 31, 0x2B919Cu);
    ctx->pc = 0x2B9198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9194u;
    // 0x2b9198: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319CF0u, 0x2B9194u, 0x2B919Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B919Cu;
label_2b919c:
    // 0x2b919c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b919cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b91a0:
    // 0x2b91a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b91a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b91a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B91A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B91A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B91A4u;
        // 0x2b91a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B91A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B91ACu;
    // 0x2b91ac: 0x0  nop
    ctx->pc = 0x2b91acu;
    // NOP
    ctx->pc = 0x2b91b0u;
}
