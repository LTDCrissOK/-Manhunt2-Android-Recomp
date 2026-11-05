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

// Function: sub_0010BF60
// Address: 0x10bf60 - 0x10bfb8
void sub_0010BF60_0x10bf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BF60_0x10bf60");
#endif

    switch (ctx->pc) {
        case 0x10bf74u: goto label_10bf74;
        default: break;
    }

    ctx->pc = 0x10bf60u;

    // 0x10bf60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10bf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10bf64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10bf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10bf68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x10bf68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10bf6c: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10BF6Cu;
    SET_GPR_U32(ctx, 31, 0x10BF74u);
    ctx->pc = 0x10BF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BF6Cu;
    // 0x10bf70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10BF6Cu, 0x10BF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BF74u;
label_10bf74:
    // 0x10bf74: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10bf74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf78: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x10bf78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10bf7c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10BF7Cu;
    {
        const bool branch_taken_0x10bf7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10BF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BF7Cu;
        // 0x10bf80: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bf7c) {
            ctx->pc = 0x10BFA4u;
            goto label_10bfa4;
        }
    }
    ctx->pc = 0x10BF84u;
    // 0x10bf84: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10bf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10bf88: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x10bf88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10bf8c: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x10bf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10bf90: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10BF90u;
    {
        const bool branch_taken_0x10bf90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BF90u;
        // 0x10bf94: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bf90) {
            ctx->pc = 0x10BFA4u;
            goto label_10bfa4;
        }
    }
    ctx->pc = 0x10BF98u;
    // 0x10bf98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10bf98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10bf9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10BF9Cu;
    {
        const bool branch_taken_0x10bf9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BF9Cu;
        // 0x10bfa0: 0xac8300d4  sw          $v1, 0xD4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bf9c) {
            ctx->pc = 0x10BFA8u;
            goto label_10bfa8;
        }
    }
    ctx->pc = 0x10BFA4u;
label_10bfa4:
    // 0x10bfa4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10bfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10bfa8:
    // 0x10bfa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10bfa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10bfac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x10bfacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10bfb0: 0x3e00008  jr          $ra
    ctx->pc = 0x10BFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BFB0u;
        // 0x10bfb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BFB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BFB8u;
}
