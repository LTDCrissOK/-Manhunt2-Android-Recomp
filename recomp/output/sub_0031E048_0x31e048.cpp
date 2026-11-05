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

// Function: sub_0031E048
// Address: 0x31e048 - 0x31e0c8
void sub_0031E048_0x31e048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E048_0x31e048");
#endif

    switch (ctx->pc) {
        case 0x31e080u: goto label_31e080;
        case 0x31e0a0u: goto label_31e0a0;
        case 0x31e0b4u: goto label_31e0b4;
        default: break;
    }

    ctx->pc = 0x31e048u;

    // 0x31e048: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31e048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31e04c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31e04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31e050: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31e050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x31e054: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31e054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e058: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31e058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31e05c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x31e05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x31e060: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x31E060u;
    {
        const bool branch_taken_0x31e060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E060u;
        // 0x31e064: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e060) {
            ctx->pc = 0x31E0A0u;
            goto label_31e0a0;
        }
    }
    ctx->pc = 0x31E068u;
    // 0x31e068: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x31e068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x31e06c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x31e06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e070: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x31e070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31e074: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x31e074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31e078: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31E078u;
    {
        const bool branch_taken_0x31e078 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x31E07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E078u;
        // 0x31e07c: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e078) {
            ctx->pc = 0x31E098u;
            goto label_31e098;
        }
    }
    ctx->pc = 0x31E080u;
label_31e080:
    // 0x31e080: 0x0  nop
    ctx->pc = 0x31e080u;
    // NOP
    // 0x31e084: 0x0  nop
    ctx->pc = 0x31e084u;
    // NOP
    // 0x31e088: 0x0  nop
    ctx->pc = 0x31e088u;
    // NOP
    // 0x31e08c: 0x0  nop
    ctx->pc = 0x31e08cu;
    // NOP
    // 0x31e090: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x31E090u;
    {
        const bool branch_taken_0x31e090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31E094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E090u;
        // 0x31e094: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e090) {
            ctx->pc = 0x31E080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e080;
        }
    }
    ctx->pc = 0x31E098u;
label_31e098:
    // 0x31e098: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x31E098u;
    SET_GPR_U32(ctx, 31, 0x31E0A0u);
    ctx->pc = 0x31E09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E098u;
    // 0x31e09c: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x31E098u, 0x31E0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E0A0u;
label_31e0a0:
    // 0x31e0a0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x31e0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x31e0a4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31E0A4u;
    {
        const bool branch_taken_0x31e0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e0a4) {
            ctx->pc = 0x31E0A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E0A4u;
            // 0x31e0a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E0B8u;
            goto label_31e0b8;
        }
    }
    ctx->pc = 0x31E0ACu;
    // 0x31e0ac: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x31E0ACu;
    SET_GPR_U32(ctx, 31, 0x31E0B4u);
    ctx->pc = 0x31E0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E0ACu;
    // 0x31e0b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x31E0ACu, 0x31E0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E0B4u;
label_31e0b4:
    // 0x31e0b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31e0b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31e0b8:
    // 0x31e0b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31e0b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31e0bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31e0bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31e0c0: 0x3e00008  jr          $ra
    ctx->pc = 0x31E0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E0C0u;
        // 0x31e0c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E0C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E0C8u;
}
