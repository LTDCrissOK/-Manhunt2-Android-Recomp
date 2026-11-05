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

// Function: sub_00363108
// Address: 0x363108 - 0x363160
void sub_00363108_0x363108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363108_0x363108");
#endif

    switch (ctx->pc) {
        case 0x36313cu: goto label_36313c;
        default: break;
    }

    ctx->pc = 0x363108u;

    // 0x363108: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x363108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36310c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36310cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x363110: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x363110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x363114: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x363114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363118: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x363118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x36311c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x36311Cu;
    {
        const bool branch_taken_0x36311c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x363120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36311Cu;
        // 0x363120: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36311c) {
            ctx->pc = 0x363144u;
            goto label_363144;
        }
    }
    ctx->pc = 0x363124u;
    // 0x363124: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x363124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x363128: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x363128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x36312c: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x36312cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x363130: 0x2484dc30  addiu       $a0, $a0, -0x23D0
    ctx->pc = 0x363130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958128));
    // 0x363134: 0xc0fbcea  jal         func_3EF3A8
    ctx->pc = 0x363134u;
    SET_GPR_U32(ctx, 31, 0x36313Cu);
    ctx->pc = 0x363138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363134u;
    // 0x363138: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EF3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF3A8u, 0x363134u, 0x36313Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36313Cu;
label_36313c:
    // 0x36313c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x36313cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x363140: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x363140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_363144:
    // 0x363144: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x363144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x363148: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x363148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x36314c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36314cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363150: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x363150u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363154: 0x3e00008  jr          $ra
    ctx->pc = 0x363154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363154u;
        // 0x363158: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36315Cu;
    // 0x36315c: 0x0  nop
    ctx->pc = 0x36315cu;
    // NOP
    ctx->pc = 0x363160u;
}
