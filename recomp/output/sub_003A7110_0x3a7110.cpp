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

// Function: sub_003A7110
// Address: 0x3a7110 - 0x3a7178
void sub_003A7110_0x3a7110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7110_0x3a7110");
#endif

    switch (ctx->pc) {
        case 0x3a7154u: goto label_3a7154;
        default: break;
    }

    ctx->pc = 0x3a7110u;

    // 0x3a7110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a7110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a7114: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a7114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a7118: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a7118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a711c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A711Cu;
    {
        const bool branch_taken_0x3a711c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A7120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A711Cu;
        // 0x3a7120: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a711c) {
            ctx->pc = 0x3A7140u;
            goto label_3a7140;
        }
    }
    ctx->pc = 0x3A7124u;
    // 0x3a7124: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a7124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a7128: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a7128u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a712c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3a712cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a7130: 0x2484e118  addiu       $a0, $a0, -0x1EE8
    ctx->pc = 0x3a7130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959384));
    // 0x3a7134: 0x80e9d40  j           func_3A7500
    ctx->pc = 0x3A7134u;
    ctx->pc = 0x3A7138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7134u;
    // 0x3a7138: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7500u;
    sub_003A7500_0x3a7500(rdram, ctx, runtime); return;
    ctx->pc = 0x3A713Cu;
    // 0x3a713c: 0x0  nop
    ctx->pc = 0x3a713cu;
    // NOP
label_3a7140:
    // 0x3a7140: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x3a7140u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3a7144: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A7144u;
    {
        const bool branch_taken_0x3a7144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7144) {
            ctx->pc = 0x3A7148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A7144u;
            // 0x3a7148: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A7158u;
            goto label_3a7158;
        }
    }
    ctx->pc = 0x3A714Cu;
    // 0x3a714c: 0xc0e9c5e  jal         func_3A7178
    ctx->pc = 0x3A714Cu;
    SET_GPR_U32(ctx, 31, 0x3A7154u);
    ctx->pc = 0x3A7178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7178u, 0x3A714Cu, 0x3A7154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7154u;
label_3a7154:
    // 0x3a7154: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x3a7154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_3a7158:
    // 0x3a7158: 0x58400002  blezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A7158u;
    {
        const bool branch_taken_0x3a7158 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3a7158) {
            ctx->pc = 0x3A715Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A7158u;
            // 0x3a715c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A7164u;
            goto label_3a7164;
        }
    }
    ctx->pc = 0x3A7160u;
    // 0x3a7160: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a7160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a7164:
    // 0x3a7164: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x3a7164u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a7168: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a7168u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a716c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3a716cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a7170: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7170u;
        // 0x3a7174: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A7178u;
}
