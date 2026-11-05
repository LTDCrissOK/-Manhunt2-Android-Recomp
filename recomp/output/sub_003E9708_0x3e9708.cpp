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

// Function: sub_003E9708
// Address: 0x3e9708 - 0x3e9828
void sub_003E9708_0x3e9708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9708_0x3e9708");
#endif

    switch (ctx->pc) {
        case 0x3e9728u: goto label_3e9728;
        case 0x3e9750u: goto label_3e9750;
        case 0x3e975cu: goto label_3e975c;
        case 0x3e977cu: goto label_3e977c;
        case 0x3e978cu: goto label_3e978c;
        case 0x3e97a0u: goto label_3e97a0;
        case 0x3e97c8u: goto label_3e97c8;
        case 0x3e97d4u: goto label_3e97d4;
        case 0x3e97f4u: goto label_3e97f4;
        case 0x3e9804u: goto label_3e9804;
        default: break;
    }

    ctx->pc = 0x3e9708u;

    // 0x3e9708: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e9708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e970c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e970cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e9710: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e9710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e9714: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e9714u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9718: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e9718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e971c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e971cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e9720: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x3E9720u;
    {
        const bool branch_taken_0x3e9720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9720) {
            ctx->pc = 0x3E9724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9720u;
            // 0x3e9724: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9798u;
            goto label_3e9798;
        }
    }
    ctx->pc = 0x3E9728u;
label_3e9728:
    // 0x3e9728: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e9728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e972c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3e972cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e9730: 0x50600014  beql        $v1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E9730u;
    {
        const bool branch_taken_0x3e9730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9730) {
            ctx->pc = 0x3E9734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9730u;
            // 0x3e9734: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9784u;
            goto label_3e9784;
        }
    }
    ctx->pc = 0x3E9738u;
    // 0x3e9738: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3e9738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x3e973c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3e973cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3e9740: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x3e9740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3e9744: 0x5070000a  beql        $v1, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x3E9744u;
    {
        const bool branch_taken_0x3e9744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3e9744) {
            ctx->pc = 0x3E9748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9744u;
            // 0x3e9748: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9770u;
            goto label_3e9770;
        }
    }
    ctx->pc = 0x3E974Cu;
    // 0x3e974c: 0x2610ffe0  addiu       $s0, $s0, -0x20
    ctx->pc = 0x3e974cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
label_3e9750:
    // 0x3e9750: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e9750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9754: 0xc0b0db4  jal         func_2C36D0
    ctx->pc = 0x3E9754u;
    SET_GPR_U32(ctx, 31, 0x3E975Cu);
    ctx->pc = 0x3E9758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9754u;
    // 0x3e9758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C36D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C36D0u, 0x3E9754u, 0x3E975Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E975Cu;
label_3e975c:
    // 0x3e975c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e975cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e9760: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3e9760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e9764: 0x1470fffa  bne         $v1, $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3E9764u;
    {
        const bool branch_taken_0x3e9764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x3E9768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9764u;
        // 0x3e9768: 0x2610ffe0  addiu       $s0, $s0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9764) {
            ctx->pc = 0x3E9750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9750;
        }
    }
    ctx->pc = 0x3E976Cu;
    // 0x3e976c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e976cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e9770:
    // 0x3e9770: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e9770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e9774: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x3E9774u;
    SET_GPR_U32(ctx, 31, 0x3E977Cu);
    ctx->pc = 0x3E9778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9774u;
    // 0x3e9778: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3E9774u, 0x3E977Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E977Cu;
label_3e977c:
    // 0x3e977c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e977cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e9780: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3e9780u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e9784:
    // 0x3e9784: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E9784u;
    SET_GPR_U32(ctx, 31, 0x3E978Cu);
    ctx->pc = 0x3E9788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9784u;
    // 0x3e9788: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E9784u, 0x3E978Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E978Cu;
label_3e978c:
    // 0x3e978c: 0x1600ffe6  bnez        $s0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3E978Cu;
    {
        const bool branch_taken_0x3e978c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E978Cu;
        // 0x3e9790: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e978c) {
            ctx->pc = 0x3E9728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9728;
        }
    }
    ctx->pc = 0x3E9794u;
    // 0x3e9794: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e9794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e9798:
    // 0x3e9798: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x3E9798u;
    {
        const bool branch_taken_0x3e9798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9798) {
            ctx->pc = 0x3E979Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9798u;
            // 0x3e979c: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9810u;
            goto label_3e9810;
        }
    }
    ctx->pc = 0x3E97A0u;
label_3e97a0:
    // 0x3e97a0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e97a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e97a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3e97a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e97a8: 0x50600014  beql        $v1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E97A8u;
    {
        const bool branch_taken_0x3e97a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e97a8) {
            ctx->pc = 0x3E97ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E97A8u;
            // 0x3e97ac: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E97FCu;
            goto label_3e97fc;
        }
    }
    ctx->pc = 0x3E97B0u;
    // 0x3e97b0: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3e97b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x3e97b4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3e97b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3e97b8: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x3e97b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3e97bc: 0x5070000a  beql        $v1, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x3E97BCu;
    {
        const bool branch_taken_0x3e97bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3e97bc) {
            ctx->pc = 0x3E97C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E97BCu;
            // 0x3e97c0: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E97E8u;
            goto label_3e97e8;
        }
    }
    ctx->pc = 0x3E97C4u;
    // 0x3e97c4: 0x2610ffe0  addiu       $s0, $s0, -0x20
    ctx->pc = 0x3e97c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
label_3e97c8:
    // 0x3e97c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e97c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e97cc: 0xc0b0db4  jal         func_2C36D0
    ctx->pc = 0x3E97CCu;
    SET_GPR_U32(ctx, 31, 0x3E97D4u);
    ctx->pc = 0x3E97D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E97CCu;
    // 0x3e97d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C36D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C36D0u, 0x3E97CCu, 0x3E97D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E97D4u;
label_3e97d4:
    // 0x3e97d4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e97d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e97d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3e97d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e97dc: 0x1470fffa  bne         $v1, $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3E97DCu;
    {
        const bool branch_taken_0x3e97dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x3E97E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E97DCu;
        // 0x3e97e0: 0x2610ffe0  addiu       $s0, $s0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e97dc) {
            ctx->pc = 0x3E97C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e97c8;
        }
    }
    ctx->pc = 0x3E97E4u;
    // 0x3e97e4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e97e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e97e8:
    // 0x3e97e8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e97e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e97ec: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x3E97ECu;
    SET_GPR_U32(ctx, 31, 0x3E97F4u);
    ctx->pc = 0x3E97F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E97ECu;
    // 0x3e97f0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3E97ECu, 0x3E97F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E97F4u;
label_3e97f4:
    // 0x3e97f4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e97f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e97f8: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3e97f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e97fc:
    // 0x3e97fc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E97FCu;
    SET_GPR_U32(ctx, 31, 0x3E9804u);
    ctx->pc = 0x3E9800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E97FCu;
    // 0x3e9800: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E97FCu, 0x3E9804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9804u;
label_3e9804:
    // 0x3e9804: 0x1600ffe6  bnez        $s0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3E9804u;
    {
        const bool branch_taken_0x3e9804 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9804u;
        // 0x3e9808: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9804) {
            ctx->pc = 0x3E97A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e97a0;
        }
    }
    ctx->pc = 0x3E980Cu;
    // 0x3e980c: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x3e980cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_3e9810:
    // 0x3e9810: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e9810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e9814: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e9814u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e9818: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e9818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e981c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E981Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E9820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E981Cu;
        // 0x3e9820: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E981Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E9824u;
    // 0x3e9824: 0x0  nop
    ctx->pc = 0x3e9824u;
    // NOP
    ctx->pc = 0x3e9828u;
}
