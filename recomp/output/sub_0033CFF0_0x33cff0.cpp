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

// Function: sub_0033CFF0
// Address: 0x33cff0 - 0x33d0c0
void sub_0033CFF0_0x33cff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033CFF0_0x33cff0");
#endif

    switch (ctx->pc) {
        case 0x33d030u: goto label_33d030;
        case 0x33d054u: goto label_33d054;
        case 0x33d070u: goto label_33d070;
        case 0x33d08cu: goto label_33d08c;
        default: break;
    }

    ctx->pc = 0x33cff0u;

    // 0x33cff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33cff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33cff4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x33cff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x33cff8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33cff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x33cffc: 0x8c62c34c  lw          $v0, -0x3CB4($v1)
    ctx->pc = 0x33cffcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FC34Cu));
    // 0x33d000: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x33d000u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d004: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33d004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33d008: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33d008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33d00c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x33D00Cu;
    {
        const bool branch_taken_0x33d00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D00Cu;
        // 0x33d010: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d00c) {
            ctx->pc = 0x33D0A8u;
            goto label_33d0a8;
        }
    }
    ctx->pc = 0x33D014u;
    // 0x33d014: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x33d014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x33d018: 0x8c43bd5c  lw          $v1, -0x42A4($v0)
    ctx->pc = 0x33d018u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD5Cu));
    // 0x33d01c: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x33D01Cu;
    {
        const bool branch_taken_0x33d01c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33D020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D01Cu;
        // 0x33d020: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d01c) {
            ctx->pc = 0x33D0ACu;
            goto label_33d0ac;
        }
    }
    ctx->pc = 0x33D024u;
    // 0x33d024: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x33d024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d028: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x33d028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d02c: 0x0  nop
    ctx->pc = 0x33d02cu;
    // NOP
label_33d030:
    // 0x33d030: 0x8e42c34c  lw          $v0, -0x3CB4($s2)
    ctx->pc = 0x33d030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951756)));
    // 0x33d034: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x33d034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x33d038: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x33d038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x33d03c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x33D03Cu;
    {
        const bool branch_taken_0x33d03c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D03Cu;
        // 0x33d040: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d03c) {
            ctx->pc = 0x33D098u;
            goto label_33d098;
        }
    }
    ctx->pc = 0x33D044u;
    // 0x33d044: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x33d044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x33d048: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33d048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33d04c: 0xc0cf3d4  jal         func_33CF50
    ctx->pc = 0x33D04Cu;
    SET_GPR_U32(ctx, 31, 0x33D054u);
    ctx->pc = 0x33D050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D04Cu;
    // 0x33d050: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CF50u, 0x33D04Cu, 0x33D054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D054u;
label_33d054:
    // 0x33d054: 0x8e42c34c  lw          $v0, -0x3CB4($s2)
    ctx->pc = 0x33d054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951756)));
    // 0x33d058: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x33d058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x33d05c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x33d05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x33d060: 0x5c60000e  bgtzl       $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x33D060u;
    {
        const bool branch_taken_0x33d060 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x33d060) {
            ctx->pc = 0x33D064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D060u;
            // 0x33d064: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D09Cu;
            goto label_33d09c;
        }
    }
    ctx->pc = 0x33D068u;
    // 0x33d068: 0xc0cf5ec  jal         func_33D7B0
    ctx->pc = 0x33D068u;
    SET_GPR_U32(ctx, 31, 0x33D070u);
    ctx->pc = 0x33D06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D068u;
    // 0x33d06c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D7B0u, 0x33D068u, 0x33D070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D070u;
label_33d070:
    // 0x33d070: 0x8e42c34c  lw          $v0, -0x3CB4($s2)
    ctx->pc = 0x33d070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951756)));
    // 0x33d074: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x33d074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x33d078: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x33d078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x33d07c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x33D07Cu;
    {
        const bool branch_taken_0x33d07c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d07c) {
            ctx->pc = 0x33D080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D07Cu;
            // 0x33d080: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D09Cu;
            goto label_33d09c;
        }
    }
    ctx->pc = 0x33D084u;
    // 0x33d084: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x33D084u;
    SET_GPR_U32(ctx, 31, 0x33D08Cu);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x33D084u, 0x33D08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D08Cu;
label_33d08c:
    // 0x33d08c: 0x8e42c34c  lw          $v0, -0x3CB4($s2)
    ctx->pc = 0x33d08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951756)));
    // 0x33d090: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x33d090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x33d094: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x33d094u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_33d098:
    // 0x33d098: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x33d098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_33d09c:
    // 0x33d09c: 0x2a220082  slti        $v0, $s1, 0x82
    ctx->pc = 0x33d09cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)130) ? 1 : 0);
    // 0x33d0a0: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x33D0A0u;
    {
        const bool branch_taken_0x33d0a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33D0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D0A0u;
        // 0x33d0a4: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d0a0) {
            ctx->pc = 0x33D030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33d030;
        }
    }
    ctx->pc = 0x33D0A8u;
label_33d0a8:
    // 0x33d0a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33d0a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33d0ac:
    // 0x33d0ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33d0acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33d0b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33d0b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33d0b4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33d0b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33d0b8: 0x3e00008  jr          $ra
    ctx->pc = 0x33D0B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D0B8u;
        // 0x33d0bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D0B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D0C0u;
}
