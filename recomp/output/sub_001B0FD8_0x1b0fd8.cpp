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

// Function: sub_001B0FD8
// Address: 0x1b0fd8 - 0x1b1090
void sub_001B0FD8_0x1b0fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0FD8_0x1b0fd8");
#endif

    switch (ctx->pc) {
        case 0x1b0ff0u: goto label_1b0ff0;
        case 0x1b1000u: goto label_1b1000;
        case 0x1b1008u: goto label_1b1008;
        case 0x1b101cu: goto label_1b101c;
        default: break;
    }

    ctx->pc = 0x1b0fd8u;

    // 0x1b0fd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b0fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b0fdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b0fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b0fe0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b0fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b0fe4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b0fe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0fe8: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1B0FE8u;
    SET_GPR_U32(ctx, 31, 0x1B0FF0u);
    ctx->pc = 0x1B0FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0FE8u;
    // 0x1b0fec: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1B0FE8u, 0x1B0FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0FF0u;
label_1b0ff0:
    // 0x1b0ff0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B0FF0u;
    {
        const bool branch_taken_0x1b0ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0ff0) {
            ctx->pc = 0x1B1014u;
            goto label_1b1014;
        }
    }
    ctx->pc = 0x1B0FF8u;
    // 0x1b0ff8: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1B0FF8u;
    SET_GPR_U32(ctx, 31, 0x1B1000u);
    ctx->pc = 0x1B0FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0FF8u;
    // 0x1b0ffc: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1B0FF8u, 0x1B1000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1000u;
label_1b1000:
    // 0x1b1000: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x1B1000u;
    SET_GPR_U32(ctx, 31, 0x1B1008u);
    ctx->pc = 0x1B1004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1000u;
    // 0x1b1004: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x1B1000u, 0x1B1008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1008u;
label_1b1008:
    // 0x1b1008: 0x2403006e  addiu       $v1, $zero, 0x6E
    ctx->pc = 0x1b1008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x1b100c: 0x1043001b  beq         $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B100Cu;
    {
        const bool branch_taken_0x1b100c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B1010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B100Cu;
        // 0x1b1010: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b100c) {
            ctx->pc = 0x1B107Cu;
            goto label_1b107c;
        }
    }
    ctx->pc = 0x1B1014u;
label_1b1014:
    // 0x1b1014: 0xc08dada  jal         func_236B68
    ctx->pc = 0x1B1014u;
    SET_GPR_U32(ctx, 31, 0x1B101Cu);
    ctx->pc = 0x1B1018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1014u;
    // 0x1b1018: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B68u, 0x1B1014u, 0x1B101Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B101Cu;
label_1b101c:
    // 0x1b101c: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1B101Cu;
    {
        const bool branch_taken_0x1b101c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B101Cu;
        // 0x1b1020: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b101c) {
            ctx->pc = 0x1B107Cu;
            goto label_1b107c;
        }
    }
    ctx->pc = 0x1B1024u;
    // 0x1b1024: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x1b1024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x1b1028: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1b1028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b102c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1b102cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b1030: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B1030u;
    {
        const bool branch_taken_0x1b1030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1030u;
        // 0x1b1034: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1030) {
            ctx->pc = 0x1B1074u;
            goto label_1b1074;
        }
    }
    ctx->pc = 0x1B1038u;
    // 0x1b1038: 0x38620003  xori        $v0, $v1, 0x3
    ctx->pc = 0x1b1038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x1b103c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B103Cu;
    {
        const bool branch_taken_0x1b103c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B103Cu;
        // 0x1b1040: 0x3c040100  lui         $a0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b103c) {
            ctx->pc = 0x1B1074u;
            goto label_1b1074;
        }
    }
    ctx->pc = 0x1B1044u;
    // 0x1b1044: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1b1044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1b1048: 0x8c43036c  lw          $v1, 0x36C($v0)
    ctx->pc = 0x1b1048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x1b104c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1b104cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1b1050: 0x10640008  beq         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B1050u;
    {
        const bool branch_taken_0x1b1050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1B1054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1050u;
        // 0x1b1054: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1050) {
            ctx->pc = 0x1B1074u;
            goto label_1b1074;
        }
    }
    ctx->pc = 0x1B1058u;
    // 0x1b1058: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x1b1058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1b105c: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B105Cu;
    {
        const bool branch_taken_0x1b105c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B1060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B105Cu;
        // 0x1b1060: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b105c) {
            ctx->pc = 0x1B1074u;
            goto label_1b1074;
        }
    }
    ctx->pc = 0x1B1064u;
    // 0x1b1064: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1064u;
    {
        const bool branch_taken_0x1b1064 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B1068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1064u;
        // 0x1b1068: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1064) {
            ctx->pc = 0x1B1074u;
            goto label_1b1074;
        }
    }
    ctx->pc = 0x1B106Cu;
    // 0x1b106c: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B106Cu;
    {
        const bool branch_taken_0x1b106c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B1070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B106Cu;
        // 0x1b1070: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b106c) {
            ctx->pc = 0x1B107Cu;
            goto label_1b107c;
        }
    }
    ctx->pc = 0x1B1074u;
label_1b1074:
    // 0x1b1074: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b1074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1078: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1b1078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b107c:
    // 0x1b107c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b107cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1080: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b1080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b1084: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1084u;
        // 0x1b1088: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B108Cu;
    // 0x1b108c: 0x0  nop
    ctx->pc = 0x1b108cu;
    // NOP
    ctx->pc = 0x1b1090u;
}
