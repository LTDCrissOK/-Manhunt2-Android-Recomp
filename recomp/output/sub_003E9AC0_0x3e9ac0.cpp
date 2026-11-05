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

// Function: sub_003E9AC0
// Address: 0x3e9ac0 - 0x3e9bf8
void sub_003E9AC0_0x3e9ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9AC0_0x3e9ac0");
#endif

    switch (ctx->pc) {
        case 0x3e9ac0u: goto label_3e9ac0;
        case 0x3e9ac4u: goto label_3e9ac4;
        case 0x3e9ac8u: goto label_3e9ac8;
        case 0x3e9accu: goto label_3e9acc;
        case 0x3e9ad0u: goto label_3e9ad0;
        case 0x3e9ad4u: goto label_3e9ad4;
        case 0x3e9ad8u: goto label_3e9ad8;
        case 0x3e9adcu: goto label_3e9adc;
        case 0x3e9ae0u: goto label_3e9ae0;
        case 0x3e9ae4u: goto label_3e9ae4;
        case 0x3e9ae8u: goto label_3e9ae8;
        case 0x3e9aecu: goto label_3e9aec;
        case 0x3e9af0u: goto label_3e9af0;
        case 0x3e9af4u: goto label_3e9af4;
        case 0x3e9af8u: goto label_3e9af8;
        case 0x3e9afcu: goto label_3e9afc;
        case 0x3e9b00u: goto label_3e9b00;
        case 0x3e9b04u: goto label_3e9b04;
        case 0x3e9b08u: goto label_3e9b08;
        case 0x3e9b0cu: goto label_3e9b0c;
        case 0x3e9b10u: goto label_3e9b10;
        case 0x3e9b14u: goto label_3e9b14;
        case 0x3e9b18u: goto label_3e9b18;
        case 0x3e9b1cu: goto label_3e9b1c;
        case 0x3e9b20u: goto label_3e9b20;
        case 0x3e9b24u: goto label_3e9b24;
        case 0x3e9b28u: goto label_3e9b28;
        case 0x3e9b2cu: goto label_3e9b2c;
        case 0x3e9b30u: goto label_3e9b30;
        case 0x3e9b34u: goto label_3e9b34;
        case 0x3e9b38u: goto label_3e9b38;
        case 0x3e9b3cu: goto label_3e9b3c;
        case 0x3e9b40u: goto label_3e9b40;
        case 0x3e9b44u: goto label_3e9b44;
        case 0x3e9b48u: goto label_3e9b48;
        case 0x3e9b4cu: goto label_3e9b4c;
        case 0x3e9b50u: goto label_3e9b50;
        case 0x3e9b54u: goto label_3e9b54;
        case 0x3e9b58u: goto label_3e9b58;
        case 0x3e9b5cu: goto label_3e9b5c;
        case 0x3e9b60u: goto label_3e9b60;
        case 0x3e9b64u: goto label_3e9b64;
        case 0x3e9b68u: goto label_3e9b68;
        case 0x3e9b6cu: goto label_3e9b6c;
        case 0x3e9b70u: goto label_3e9b70;
        case 0x3e9b74u: goto label_3e9b74;
        case 0x3e9b78u: goto label_3e9b78;
        case 0x3e9b7cu: goto label_3e9b7c;
        case 0x3e9b80u: goto label_3e9b80;
        case 0x3e9b84u: goto label_3e9b84;
        case 0x3e9b88u: goto label_3e9b88;
        case 0x3e9b8cu: goto label_3e9b8c;
        case 0x3e9b90u: goto label_3e9b90;
        case 0x3e9b94u: goto label_3e9b94;
        case 0x3e9b98u: goto label_3e9b98;
        case 0x3e9b9cu: goto label_3e9b9c;
        case 0x3e9ba0u: goto label_3e9ba0;
        case 0x3e9ba4u: goto label_3e9ba4;
        case 0x3e9ba8u: goto label_3e9ba8;
        case 0x3e9bacu: goto label_3e9bac;
        case 0x3e9bb0u: goto label_3e9bb0;
        case 0x3e9bb4u: goto label_3e9bb4;
        case 0x3e9bb8u: goto label_3e9bb8;
        case 0x3e9bbcu: goto label_3e9bbc;
        case 0x3e9bc0u: goto label_3e9bc0;
        case 0x3e9bc4u: goto label_3e9bc4;
        case 0x3e9bc8u: goto label_3e9bc8;
        case 0x3e9bccu: goto label_3e9bcc;
        case 0x3e9bd0u: goto label_3e9bd0;
        case 0x3e9bd4u: goto label_3e9bd4;
        case 0x3e9bd8u: goto label_3e9bd8;
        case 0x3e9bdcu: goto label_3e9bdc;
        case 0x3e9be0u: goto label_3e9be0;
        case 0x3e9be4u: goto label_3e9be4;
        case 0x3e9be8u: goto label_3e9be8;
        case 0x3e9becu: goto label_3e9bec;
        case 0x3e9bf0u: goto label_3e9bf0;
        case 0x3e9bf4u: goto label_3e9bf4;
        default: break;
    }

    ctx->pc = 0x3e9ac0u;

label_3e9ac0:
    // 0x3e9ac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e9ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3e9ac4:
    // 0x3e9ac4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e9ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3e9ac8:
    // 0x3e9ac8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e9ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3e9acc:
    // 0x3e9acc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e9accu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e9ad0:
    // 0x3e9ad0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3e9ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3e9ad4:
    // 0x3e9ad4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3e9ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3e9ad8:
    // 0x3e9ad8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e9ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e9adc:
    // 0x3e9adc: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3e9ae0:
    if (ctx->pc == 0x3E9AE0u) {
        ctx->pc = 0x3E9AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9ADCu;
        // 0x3e9ae0: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9AE4u;
        goto label_3e9ae4;
    }
    ctx->pc = 0x3E9ADCu;
    {
        const bool branch_taken_0x3e9adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9ADCu;
        // 0x3e9ae0: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9adc) {
            ctx->pc = 0x3E9B5Cu;
            goto label_3e9b5c;
        }
    }
    ctx->pc = 0x3E9AE4u;
label_3e9ae4:
    // 0x3e9ae4: 0x0  nop
    ctx->pc = 0x3e9ae4u;
    // NOP
label_3e9ae8:
    // 0x3e9ae8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e9ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e9aec:
    // 0x3e9aec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3e9aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e9af0:
    // 0x3e9af0: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3e9af4:
    if (ctx->pc == 0x3E9AF4u) {
        ctx->pc = 0x3E9AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9AF0u;
        // 0x3e9af4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9AF8u;
        goto label_3e9af8;
    }
    ctx->pc = 0x3E9AF0u;
    {
        const bool branch_taken_0x3e9af0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9af0) {
            ctx->pc = 0x3E9AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9AF0u;
            // 0x3e9af4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9B4Cu;
            goto label_3e9b4c;
        }
    }
    ctx->pc = 0x3E9AF8u;
label_3e9af8:
    // 0x3e9af8: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3e9af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3e9afc:
    // 0x3e9afc: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3e9afcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3e9b00:
    // 0x3e9b00: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3e9b00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3e9b04:
    // 0x3e9b04: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3e9b08:
    if (ctx->pc == 0x3E9B08u) {
        ctx->pc = 0x3E9B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9B04u;
        // 0x3e9b08: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9B0Cu;
        goto label_3e9b0c;
    }
    ctx->pc = 0x3E9B04u;
    {
        const bool branch_taken_0x3e9b04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3e9b04) {
            ctx->pc = 0x3E9B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9B04u;
            // 0x3e9b08: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9B38u;
            goto label_3e9b38;
        }
    }
    ctx->pc = 0x3E9B0Cu;
label_3e9b0c:
    // 0x3e9b0c: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3e9b0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3e9b10:
    // 0x3e9b10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e9b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e9b14:
    // 0x3e9b14: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3e9b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3e9b18:
    // 0x3e9b18: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3e9b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3e9b1c:
    // 0x3e9b1c: 0x40f809  jalr        $v0
label_3e9b20:
    if (ctx->pc == 0x3E9B20u) {
        ctx->pc = 0x3E9B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9B1Cu;
        // 0x3e9b20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9B24u;
        goto label_3e9b24;
    }
    ctx->pc = 0x3E9B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E9B24u);
        ctx->pc = 0x3E9B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9B1Cu;
        // 0x3e9b20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9B1Cu, 0x3E9B24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E9B24u;
label_3e9b24:
    // 0x3e9b24: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e9b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e9b28:
    // 0x3e9b28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3e9b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3e9b2c:
    // 0x3e9b2c: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3e9b30:
    if (ctx->pc == 0x3E9B30u) {
        ctx->pc = 0x3E9B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9B2Cu;
        // 0x3e9b30: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9B34u;
        goto label_3e9b34;
    }
    ctx->pc = 0x3E9B2Cu;
    {
        const bool branch_taken_0x3e9b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3E9B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9B2Cu;
        // 0x3e9b30: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9b2c) {
            ctx->pc = 0x3E9B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9b10;
        }
    }
    ctx->pc = 0x3E9B34u;
label_3e9b34:
    // 0x3e9b34: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e9b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e9b38:
    // 0x3e9b38: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e9b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e9b3c:
    // 0x3e9b3c: 0xc0f528a  jal         func_3D4A28
label_3e9b40:
    if (ctx->pc == 0x3E9B40u) {
        ctx->pc = 0x3E9B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9B3Cu;
        // 0x3e9b40: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9B44u;
        goto label_3e9b44;
    }
    ctx->pc = 0x3E9B3Cu;
    SET_GPR_U32(ctx, 31, 0x3E9B44u);
    ctx->pc = 0x3E9B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9B3Cu;
    // 0x3e9b40: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3E9B3Cu, 0x3E9B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9B44u;
label_3e9b44:
    // 0x3e9b44: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e9b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e9b48:
    // 0x3e9b48: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3e9b48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e9b4c:
    // 0x3e9b4c: 0xc0f5222  jal         func_3D4888
label_3e9b50:
    if (ctx->pc == 0x3E9B50u) {
        ctx->pc = 0x3E9B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9B4Cu;
        // 0x3e9b50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9B54u;
        goto label_3e9b54;
    }
    ctx->pc = 0x3E9B4Cu;
    SET_GPR_U32(ctx, 31, 0x3E9B54u);
    ctx->pc = 0x3E9B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9B4Cu;
    // 0x3e9b50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E9B4Cu, 0x3E9B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9B54u;
label_3e9b54:
    // 0x3e9b54: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3e9b58:
    if (ctx->pc == 0x3E9B58u) {
        ctx->pc = 0x3E9B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9B54u;
        // 0x3e9b58: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9B5Cu;
        goto label_3e9b5c;
    }
    ctx->pc = 0x3E9B54u;
    {
        const bool branch_taken_0x3e9b54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9B54u;
        // 0x3e9b58: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9b54) {
            ctx->pc = 0x3E9AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9ae8;
        }
    }
    ctx->pc = 0x3E9B5Cu;
label_3e9b5c:
    // 0x3e9b5c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e9b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e9b60:
    // 0x3e9b60: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_3e9b64:
    if (ctx->pc == 0x3E9B64u) {
        ctx->pc = 0x3E9B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9B60u;
        // 0x3e9b64: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9B68u;
        goto label_3e9b68;
    }
    ctx->pc = 0x3E9B60u;
    {
        const bool branch_taken_0x3e9b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9B60u;
        // 0x3e9b64: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9b60) {
            ctx->pc = 0x3E9BDCu;
            goto label_3e9bdc;
        }
    }
    ctx->pc = 0x3E9B68u;
label_3e9b68:
    // 0x3e9b68: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e9b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e9b6c:
    // 0x3e9b6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3e9b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e9b70:
    // 0x3e9b70: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3e9b74:
    if (ctx->pc == 0x3E9B74u) {
        ctx->pc = 0x3E9B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9B70u;
        // 0x3e9b74: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9B78u;
        goto label_3e9b78;
    }
    ctx->pc = 0x3E9B70u;
    {
        const bool branch_taken_0x3e9b70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9b70) {
            ctx->pc = 0x3E9B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9B70u;
            // 0x3e9b74: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9BCCu;
            goto label_3e9bcc;
        }
    }
    ctx->pc = 0x3E9B78u;
label_3e9b78:
    // 0x3e9b78: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3e9b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3e9b7c:
    // 0x3e9b7c: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3e9b7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3e9b80:
    // 0x3e9b80: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3e9b80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3e9b84:
    // 0x3e9b84: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3e9b88:
    if (ctx->pc == 0x3E9B88u) {
        ctx->pc = 0x3E9B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9B84u;
        // 0x3e9b88: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9B8Cu;
        goto label_3e9b8c;
    }
    ctx->pc = 0x3E9B84u;
    {
        const bool branch_taken_0x3e9b84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3e9b84) {
            ctx->pc = 0x3E9B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9B84u;
            // 0x3e9b88: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9BB8u;
            goto label_3e9bb8;
        }
    }
    ctx->pc = 0x3E9B8Cu;
label_3e9b8c:
    // 0x3e9b8c: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3e9b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3e9b90:
    // 0x3e9b90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e9b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e9b94:
    // 0x3e9b94: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3e9b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3e9b98:
    // 0x3e9b98: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3e9b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3e9b9c:
    // 0x3e9b9c: 0x40f809  jalr        $v0
label_3e9ba0:
    if (ctx->pc == 0x3E9BA0u) {
        ctx->pc = 0x3E9BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9B9Cu;
        // 0x3e9ba0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9BA4u;
        goto label_3e9ba4;
    }
    ctx->pc = 0x3E9B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E9BA4u);
        ctx->pc = 0x3E9BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9B9Cu;
        // 0x3e9ba0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9B9Cu, 0x3E9BA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E9BA4u;
label_3e9ba4:
    // 0x3e9ba4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3e9ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e9ba8:
    // 0x3e9ba8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3e9ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3e9bac:
    // 0x3e9bac: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3e9bb0:
    if (ctx->pc == 0x3E9BB0u) {
        ctx->pc = 0x3E9BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9BACu;
        // 0x3e9bb0: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9BB4u;
        goto label_3e9bb4;
    }
    ctx->pc = 0x3E9BACu;
    {
        const bool branch_taken_0x3e9bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3E9BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9BACu;
        // 0x3e9bb0: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9bac) {
            ctx->pc = 0x3E9B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9b90;
        }
    }
    ctx->pc = 0x3E9BB4u;
label_3e9bb4:
    // 0x3e9bb4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e9bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e9bb8:
    // 0x3e9bb8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e9bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e9bbc:
    // 0x3e9bbc: 0xc0f528a  jal         func_3D4A28
label_3e9bc0:
    if (ctx->pc == 0x3E9BC0u) {
        ctx->pc = 0x3E9BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9BBCu;
        // 0x3e9bc0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9BC4u;
        goto label_3e9bc4;
    }
    ctx->pc = 0x3E9BBCu;
    SET_GPR_U32(ctx, 31, 0x3E9BC4u);
    ctx->pc = 0x3E9BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9BBCu;
    // 0x3e9bc0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3E9BBCu, 0x3E9BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9BC4u;
label_3e9bc4:
    // 0x3e9bc4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e9bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e9bc8:
    // 0x3e9bc8: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3e9bc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e9bcc:
    // 0x3e9bcc: 0xc0f5222  jal         func_3D4888
label_3e9bd0:
    if (ctx->pc == 0x3E9BD0u) {
        ctx->pc = 0x3E9BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9BCCu;
        // 0x3e9bd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9BD4u;
        goto label_3e9bd4;
    }
    ctx->pc = 0x3E9BCCu;
    SET_GPR_U32(ctx, 31, 0x3E9BD4u);
    ctx->pc = 0x3E9BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9BCCu;
    // 0x3e9bd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E9BCCu, 0x3E9BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9BD4u;
label_3e9bd4:
    // 0x3e9bd4: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3e9bd8:
    if (ctx->pc == 0x3E9BD8u) {
        ctx->pc = 0x3E9BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9BD4u;
        // 0x3e9bd8: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9BDCu;
        goto label_3e9bdc;
    }
    ctx->pc = 0x3E9BD4u;
    {
        const bool branch_taken_0x3e9bd4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9BD4u;
        // 0x3e9bd8: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9bd4) {
            ctx->pc = 0x3E9B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9b68;
        }
    }
    ctx->pc = 0x3E9BDCu;
label_3e9bdc:
    // 0x3e9bdc: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x3e9bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_3e9be0:
    // 0x3e9be0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e9be0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e9be4:
    // 0x3e9be4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e9be4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3e9be8:
    // 0x3e9be8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3e9be8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3e9bec:
    // 0x3e9bec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3e9becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3e9bf0:
    // 0x3e9bf0: 0x3e00008  jr          $ra
label_3e9bf4:
    if (ctx->pc == 0x3E9BF4u) {
        ctx->pc = 0x3E9BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9BF0u;
        // 0x3e9bf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9BF8u;
        goto label_fallthrough_0x3e9bf0;
    }
    ctx->pc = 0x3E9BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E9BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9BF0u;
        // 0x3e9bf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e9bf0:
    ctx->pc = 0x3E9BF8u;
}
