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

// Function: sub_003EBA40
// Address: 0x3eba40 - 0x3ebb78
void sub_003EBA40_0x3eba40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EBA40_0x3eba40");
#endif

    switch (ctx->pc) {
        case 0x3eba40u: goto label_3eba40;
        case 0x3eba44u: goto label_3eba44;
        case 0x3eba48u: goto label_3eba48;
        case 0x3eba4cu: goto label_3eba4c;
        case 0x3eba50u: goto label_3eba50;
        case 0x3eba54u: goto label_3eba54;
        case 0x3eba58u: goto label_3eba58;
        case 0x3eba5cu: goto label_3eba5c;
        case 0x3eba60u: goto label_3eba60;
        case 0x3eba64u: goto label_3eba64;
        case 0x3eba68u: goto label_3eba68;
        case 0x3eba6cu: goto label_3eba6c;
        case 0x3eba70u: goto label_3eba70;
        case 0x3eba74u: goto label_3eba74;
        case 0x3eba78u: goto label_3eba78;
        case 0x3eba7cu: goto label_3eba7c;
        case 0x3eba80u: goto label_3eba80;
        case 0x3eba84u: goto label_3eba84;
        case 0x3eba88u: goto label_3eba88;
        case 0x3eba8cu: goto label_3eba8c;
        case 0x3eba90u: goto label_3eba90;
        case 0x3eba94u: goto label_3eba94;
        case 0x3eba98u: goto label_3eba98;
        case 0x3eba9cu: goto label_3eba9c;
        case 0x3ebaa0u: goto label_3ebaa0;
        case 0x3ebaa4u: goto label_3ebaa4;
        case 0x3ebaa8u: goto label_3ebaa8;
        case 0x3ebaacu: goto label_3ebaac;
        case 0x3ebab0u: goto label_3ebab0;
        case 0x3ebab4u: goto label_3ebab4;
        case 0x3ebab8u: goto label_3ebab8;
        case 0x3ebabcu: goto label_3ebabc;
        case 0x3ebac0u: goto label_3ebac0;
        case 0x3ebac4u: goto label_3ebac4;
        case 0x3ebac8u: goto label_3ebac8;
        case 0x3ebaccu: goto label_3ebacc;
        case 0x3ebad0u: goto label_3ebad0;
        case 0x3ebad4u: goto label_3ebad4;
        case 0x3ebad8u: goto label_3ebad8;
        case 0x3ebadcu: goto label_3ebadc;
        case 0x3ebae0u: goto label_3ebae0;
        case 0x3ebae4u: goto label_3ebae4;
        case 0x3ebae8u: goto label_3ebae8;
        case 0x3ebaecu: goto label_3ebaec;
        case 0x3ebaf0u: goto label_3ebaf0;
        case 0x3ebaf4u: goto label_3ebaf4;
        case 0x3ebaf8u: goto label_3ebaf8;
        case 0x3ebafcu: goto label_3ebafc;
        case 0x3ebb00u: goto label_3ebb00;
        case 0x3ebb04u: goto label_3ebb04;
        case 0x3ebb08u: goto label_3ebb08;
        case 0x3ebb0cu: goto label_3ebb0c;
        case 0x3ebb10u: goto label_3ebb10;
        case 0x3ebb14u: goto label_3ebb14;
        case 0x3ebb18u: goto label_3ebb18;
        case 0x3ebb1cu: goto label_3ebb1c;
        case 0x3ebb20u: goto label_3ebb20;
        case 0x3ebb24u: goto label_3ebb24;
        case 0x3ebb28u: goto label_3ebb28;
        case 0x3ebb2cu: goto label_3ebb2c;
        case 0x3ebb30u: goto label_3ebb30;
        case 0x3ebb34u: goto label_3ebb34;
        case 0x3ebb38u: goto label_3ebb38;
        case 0x3ebb3cu: goto label_3ebb3c;
        case 0x3ebb40u: goto label_3ebb40;
        case 0x3ebb44u: goto label_3ebb44;
        case 0x3ebb48u: goto label_3ebb48;
        case 0x3ebb4cu: goto label_3ebb4c;
        case 0x3ebb50u: goto label_3ebb50;
        case 0x3ebb54u: goto label_3ebb54;
        case 0x3ebb58u: goto label_3ebb58;
        case 0x3ebb5cu: goto label_3ebb5c;
        case 0x3ebb60u: goto label_3ebb60;
        case 0x3ebb64u: goto label_3ebb64;
        case 0x3ebb68u: goto label_3ebb68;
        case 0x3ebb6cu: goto label_3ebb6c;
        case 0x3ebb70u: goto label_3ebb70;
        case 0x3ebb74u: goto label_3ebb74;
        default: break;
    }

    ctx->pc = 0x3eba40u;

label_3eba40:
    // 0x3eba40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3eba40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3eba44:
    // 0x3eba44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3eba44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3eba48:
    // 0x3eba48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3eba48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3eba4c:
    // 0x3eba4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3eba4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3eba50:
    // 0x3eba50: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3eba50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3eba54:
    // 0x3eba54: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3eba54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3eba58:
    // 0x3eba58: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eba58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eba5c:
    // 0x3eba5c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3eba60:
    if (ctx->pc == 0x3EBA60u) {
        ctx->pc = 0x3EBA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBA5Cu;
        // 0x3eba60: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBA64u;
        goto label_3eba64;
    }
    ctx->pc = 0x3EBA5Cu;
    {
        const bool branch_taken_0x3eba5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBA5Cu;
        // 0x3eba60: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eba5c) {
            ctx->pc = 0x3EBADCu;
            goto label_3ebadc;
        }
    }
    ctx->pc = 0x3EBA64u;
label_3eba64:
    // 0x3eba64: 0x0  nop
    ctx->pc = 0x3eba64u;
    // NOP
label_3eba68:
    // 0x3eba68: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eba68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eba6c:
    // 0x3eba6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3eba6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eba70:
    // 0x3eba70: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3eba74:
    if (ctx->pc == 0x3EBA74u) {
        ctx->pc = 0x3EBA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBA70u;
        // 0x3eba74: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBA78u;
        goto label_3eba78;
    }
    ctx->pc = 0x3EBA70u;
    {
        const bool branch_taken_0x3eba70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eba70) {
            ctx->pc = 0x3EBA74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EBA70u;
            // 0x3eba74: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EBACCu;
            goto label_3ebacc;
        }
    }
    ctx->pc = 0x3EBA78u;
label_3eba78:
    // 0x3eba78: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3eba78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3eba7c:
    // 0x3eba7c: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3eba7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3eba80:
    // 0x3eba80: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3eba80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3eba84:
    // 0x3eba84: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3eba88:
    if (ctx->pc == 0x3EBA88u) {
        ctx->pc = 0x3EBA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBA84u;
        // 0x3eba88: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBA8Cu;
        goto label_3eba8c;
    }
    ctx->pc = 0x3EBA84u;
    {
        const bool branch_taken_0x3eba84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3eba84) {
            ctx->pc = 0x3EBA88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EBA84u;
            // 0x3eba88: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EBAB8u;
            goto label_3ebab8;
        }
    }
    ctx->pc = 0x3EBA8Cu;
label_3eba8c:
    // 0x3eba8c: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3eba8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3eba90:
    // 0x3eba90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3eba90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eba94:
    // 0x3eba94: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3eba94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3eba98:
    // 0x3eba98: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3eba98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3eba9c:
    // 0x3eba9c: 0x40f809  jalr        $v0
label_3ebaa0:
    if (ctx->pc == 0x3EBAA0u) {
        ctx->pc = 0x3EBAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBA9Cu;
        // 0x3ebaa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBAA4u;
        goto label_3ebaa4;
    }
    ctx->pc = 0x3EBA9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EBAA4u);
        ctx->pc = 0x3EBAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBA9Cu;
        // 0x3ebaa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EBA9Cu, 0x3EBAA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EBAA4u;
label_3ebaa4:
    // 0x3ebaa4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ebaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ebaa8:
    // 0x3ebaa8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3ebaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3ebaac:
    // 0x3ebaac: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3ebab0:
    if (ctx->pc == 0x3EBAB0u) {
        ctx->pc = 0x3EBAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBAACu;
        // 0x3ebab0: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBAB4u;
        goto label_3ebab4;
    }
    ctx->pc = 0x3EBAACu;
    {
        const bool branch_taken_0x3ebaac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EBAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBAACu;
        // 0x3ebab0: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebaac) {
            ctx->pc = 0x3EBA90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eba90;
        }
    }
    ctx->pc = 0x3EBAB4u;
label_3ebab4:
    // 0x3ebab4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ebab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ebab8:
    // 0x3ebab8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3ebab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ebabc:
    // 0x3ebabc: 0xc0f528a  jal         func_3D4A28
label_3ebac0:
    if (ctx->pc == 0x3EBAC0u) {
        ctx->pc = 0x3EBAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBABCu;
        // 0x3ebac0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBAC4u;
        goto label_3ebac4;
    }
    ctx->pc = 0x3EBABCu;
    SET_GPR_U32(ctx, 31, 0x3EBAC4u);
    ctx->pc = 0x3EBAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EBABCu;
    // 0x3ebac0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EBABCu, 0x3EBAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBAC4u;
label_3ebac4:
    // 0x3ebac4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ebac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ebac8:
    // 0x3ebac8: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3ebac8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3ebacc:
    // 0x3ebacc: 0xc0f5222  jal         func_3D4888
label_3ebad0:
    if (ctx->pc == 0x3EBAD0u) {
        ctx->pc = 0x3EBAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBACCu;
        // 0x3ebad0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBAD4u;
        goto label_3ebad4;
    }
    ctx->pc = 0x3EBACCu;
    SET_GPR_U32(ctx, 31, 0x3EBAD4u);
    ctx->pc = 0x3EBAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EBACCu;
    // 0x3ebad0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EBACCu, 0x3EBAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBAD4u;
label_3ebad4:
    // 0x3ebad4: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3ebad8:
    if (ctx->pc == 0x3EBAD8u) {
        ctx->pc = 0x3EBAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBAD4u;
        // 0x3ebad8: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBADCu;
        goto label_3ebadc;
    }
    ctx->pc = 0x3EBAD4u;
    {
        const bool branch_taken_0x3ebad4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EBAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBAD4u;
        // 0x3ebad8: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebad4) {
            ctx->pc = 0x3EBA68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eba68;
        }
    }
    ctx->pc = 0x3EBADCu;
label_3ebadc:
    // 0x3ebadc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ebadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ebae0:
    // 0x3ebae0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_3ebae4:
    if (ctx->pc == 0x3EBAE4u) {
        ctx->pc = 0x3EBAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBAE0u;
        // 0x3ebae4: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBAE8u;
        goto label_3ebae8;
    }
    ctx->pc = 0x3EBAE0u;
    {
        const bool branch_taken_0x3ebae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBAE0u;
        // 0x3ebae4: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebae0) {
            ctx->pc = 0x3EBB5Cu;
            goto label_3ebb5c;
        }
    }
    ctx->pc = 0x3EBAE8u;
label_3ebae8:
    // 0x3ebae8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ebae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ebaec:
    // 0x3ebaec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ebaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ebaf0:
    // 0x3ebaf0: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3ebaf4:
    if (ctx->pc == 0x3EBAF4u) {
        ctx->pc = 0x3EBAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBAF0u;
        // 0x3ebaf4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBAF8u;
        goto label_3ebaf8;
    }
    ctx->pc = 0x3EBAF0u;
    {
        const bool branch_taken_0x3ebaf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ebaf0) {
            ctx->pc = 0x3EBAF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EBAF0u;
            // 0x3ebaf4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EBB4Cu;
            goto label_3ebb4c;
        }
    }
    ctx->pc = 0x3EBAF8u;
label_3ebaf8:
    // 0x3ebaf8: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3ebaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3ebafc:
    // 0x3ebafc: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3ebafcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3ebb00:
    // 0x3ebb00: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3ebb00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3ebb04:
    // 0x3ebb04: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3ebb08:
    if (ctx->pc == 0x3EBB08u) {
        ctx->pc = 0x3EBB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBB04u;
        // 0x3ebb08: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBB0Cu;
        goto label_3ebb0c;
    }
    ctx->pc = 0x3EBB04u;
    {
        const bool branch_taken_0x3ebb04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3ebb04) {
            ctx->pc = 0x3EBB08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EBB04u;
            // 0x3ebb08: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EBB38u;
            goto label_3ebb38;
        }
    }
    ctx->pc = 0x3EBB0Cu;
label_3ebb0c:
    // 0x3ebb0c: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3ebb0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3ebb10:
    // 0x3ebb10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ebb10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ebb14:
    // 0x3ebb14: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3ebb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3ebb18:
    // 0x3ebb18: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3ebb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3ebb1c:
    // 0x3ebb1c: 0x40f809  jalr        $v0
label_3ebb20:
    if (ctx->pc == 0x3EBB20u) {
        ctx->pc = 0x3EBB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBB1Cu;
        // 0x3ebb20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBB24u;
        goto label_3ebb24;
    }
    ctx->pc = 0x3EBB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EBB24u);
        ctx->pc = 0x3EBB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBB1Cu;
        // 0x3ebb20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EBB1Cu, 0x3EBB24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EBB24u;
label_3ebb24:
    // 0x3ebb24: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3ebb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ebb28:
    // 0x3ebb28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3ebb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3ebb2c:
    // 0x3ebb2c: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3ebb30:
    if (ctx->pc == 0x3EBB30u) {
        ctx->pc = 0x3EBB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBB2Cu;
        // 0x3ebb30: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBB34u;
        goto label_3ebb34;
    }
    ctx->pc = 0x3EBB2Cu;
    {
        const bool branch_taken_0x3ebb2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EBB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBB2Cu;
        // 0x3ebb30: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebb2c) {
            ctx->pc = 0x3EBB10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ebb10;
        }
    }
    ctx->pc = 0x3EBB34u;
label_3ebb34:
    // 0x3ebb34: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ebb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ebb38:
    // 0x3ebb38: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3ebb38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ebb3c:
    // 0x3ebb3c: 0xc0f528a  jal         func_3D4A28
label_3ebb40:
    if (ctx->pc == 0x3EBB40u) {
        ctx->pc = 0x3EBB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBB3Cu;
        // 0x3ebb40: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBB44u;
        goto label_3ebb44;
    }
    ctx->pc = 0x3EBB3Cu;
    SET_GPR_U32(ctx, 31, 0x3EBB44u);
    ctx->pc = 0x3EBB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EBB3Cu;
    // 0x3ebb40: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EBB3Cu, 0x3EBB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBB44u;
label_3ebb44:
    // 0x3ebb44: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ebb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ebb48:
    // 0x3ebb48: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3ebb48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3ebb4c:
    // 0x3ebb4c: 0xc0f5222  jal         func_3D4888
label_3ebb50:
    if (ctx->pc == 0x3EBB50u) {
        ctx->pc = 0x3EBB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBB4Cu;
        // 0x3ebb50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBB54u;
        goto label_3ebb54;
    }
    ctx->pc = 0x3EBB4Cu;
    SET_GPR_U32(ctx, 31, 0x3EBB54u);
    ctx->pc = 0x3EBB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EBB4Cu;
    // 0x3ebb50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EBB4Cu, 0x3EBB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBB54u;
label_3ebb54:
    // 0x3ebb54: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3ebb58:
    if (ctx->pc == 0x3EBB58u) {
        ctx->pc = 0x3EBB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBB54u;
        // 0x3ebb58: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBB5Cu;
        goto label_3ebb5c;
    }
    ctx->pc = 0x3EBB54u;
    {
        const bool branch_taken_0x3ebb54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EBB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBB54u;
        // 0x3ebb58: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebb54) {
            ctx->pc = 0x3EBAE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ebae8;
        }
    }
    ctx->pc = 0x3EBB5Cu;
label_3ebb5c:
    // 0x3ebb5c: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x3ebb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_3ebb60:
    // 0x3ebb60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ebb60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ebb64:
    // 0x3ebb64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ebb64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3ebb68:
    // 0x3ebb68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3ebb68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3ebb6c:
    // 0x3ebb6c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3ebb6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3ebb70:
    // 0x3ebb70: 0x3e00008  jr          $ra
label_3ebb74:
    if (ctx->pc == 0x3EBB74u) {
        ctx->pc = 0x3EBB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBB70u;
        // 0x3ebb74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBB78u;
        goto label_fallthrough_0x3ebb70;
    }
    ctx->pc = 0x3EBB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EBB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBB70u;
        // 0x3ebb74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EBB70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ebb70:
    ctx->pc = 0x3EBB78u;
}
