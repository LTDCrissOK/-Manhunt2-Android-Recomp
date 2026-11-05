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

// Function: sub_0031EEB8
// Address: 0x31eeb8 - 0x31efb8
void sub_0031EEB8_0x31eeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031EEB8_0x31eeb8");
#endif

    switch (ctx->pc) {
        case 0x31ef08u: goto label_31ef08;
        case 0x31ef48u: goto label_31ef48;
        case 0x31ef50u: goto label_31ef50;
        case 0x31ef64u: goto label_31ef64;
        case 0x31ef74u: goto label_31ef74;
        default: break;
    }

    ctx->pc = 0x31eeb8u;

    // 0x31eeb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31eeb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31eebc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31eebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31eec0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x31eec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x31eec4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31eec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31eec8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x31eec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x31eecc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x31eeccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31eed0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31eed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x31eed4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x31eed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x31eed8: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x31eed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x31eedc: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x31eedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x31eee0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31EEE0u;
    {
        const bool branch_taken_0x31eee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EEE0u;
        // 0x31eee4: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eee0) {
            ctx->pc = 0x31EEF4u;
            goto label_31eef4;
        }
    }
    ctx->pc = 0x31EEE8u;
    // 0x31eee8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x31eee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x31eeec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31EEECu;
    {
        const bool branch_taken_0x31eeec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EEECu;
        // 0x31eef0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eeec) {
            ctx->pc = 0x31EF0Cu;
            goto label_31ef0c;
        }
    }
    ctx->pc = 0x31EEF4u;
label_31eef4:
    // 0x31eef4: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x31eef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x31eef8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31EEF8u;
    {
        const bool branch_taken_0x31eef8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EEF8u;
        // 0x31eefc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eef8) {
            ctx->pc = 0x31EF0Cu;
            goto label_31ef0c;
        }
    }
    ctx->pc = 0x31EF00u;
    // 0x31ef00: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x31EF00u;
    SET_GPR_U32(ctx, 31, 0x31EF08u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x31EF00u, 0x31EF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EF08u;
label_31ef08:
    // 0x31ef08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31ef08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_31ef0c:
    // 0x31ef0c: 0x1242001b  beq         $s2, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x31EF0Cu;
    {
        const bool branch_taken_0x31ef0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x31EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EF0Cu;
        // 0x31ef10: 0x2a420003  slti        $v0, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ef0c) {
            ctx->pc = 0x31EF7Cu;
            goto label_31ef7c;
        }
    }
    ctx->pc = 0x31EF14u;
    // 0x31ef14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31EF14u;
    {
        const bool branch_taken_0x31ef14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EF14u;
        // 0x31ef18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ef14) {
            ctx->pc = 0x31EF2Cu;
            goto label_31ef2c;
        }
    }
    ctx->pc = 0x31EF1Cu;
    // 0x31ef1c: 0x12420008  beq         $s2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31EF1Cu;
    {
        const bool branch_taken_0x31ef1c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x31ef1c) {
            ctx->pc = 0x31EF40u;
            goto label_31ef40;
        }
    }
    ctx->pc = 0x31EF24u;
    // 0x31ef24: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x31EF24u;
    {
        const bool branch_taken_0x31ef24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EF24u;
        // 0x31ef28: 0x8e030038  lw          $v1, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ef24) {
            ctx->pc = 0x31EF84u;
            goto label_31ef84;
        }
    }
    ctx->pc = 0x31EF2Cu;
label_31ef2c:
    // 0x31ef2c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x31ef2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31ef30: 0x52420013  beql        $s2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x31EF30u;
    {
        const bool branch_taken_0x31ef30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x31ef30) {
            ctx->pc = 0x31EF34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31EF30u;
            // 0x31ef34: 0xae130060  sw          $s3, 0x60($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31EF80u;
            goto label_31ef80;
        }
    }
    ctx->pc = 0x31EF38u;
    // 0x31ef38: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x31EF38u;
    {
        const bool branch_taken_0x31ef38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EF38u;
        // 0x31ef3c: 0x8e030038  lw          $v1, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ef38) {
            ctx->pc = 0x31EF84u;
            goto label_31ef84;
        }
    }
    ctx->pc = 0x31EF40u;
label_31ef40:
    // 0x31ef40: 0xc0c7c0e  jal         func_31F038
    ctx->pc = 0x31EF40u;
    SET_GPR_U32(ctx, 31, 0x31EF48u);
    ctx->pc = 0x31EF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EF40u;
    // 0x31ef44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F038u, 0x31EF40u, 0x31EF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EF48u;
label_31ef48:
    // 0x31ef48: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x31EF48u;
    SET_GPR_U32(ctx, 31, 0x31EF50u);
    ctx->pc = 0x31EF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EF48u;
    // 0x31ef4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x31EF48u, 0x31EF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EF50u;
label_31ef50:
    // 0x31ef50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31ef50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ef54: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x31EF54u;
    {
        const bool branch_taken_0x31ef54 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EF54u;
        // 0x31ef58: 0xae110060  sw          $s1, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ef54) {
            ctx->pc = 0x31EF80u;
            goto label_31ef80;
        }
    }
    ctx->pc = 0x31EF5Cu;
    // 0x31ef5c: 0xc0c7c0e  jal         func_31F038
    ctx->pc = 0x31EF5Cu;
    SET_GPR_U32(ctx, 31, 0x31EF64u);
    ctx->pc = 0x31EF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EF5Cu;
    // 0x31ef60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F038u, 0x31EF5Cu, 0x31EF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EF64u;
label_31ef64:
    // 0x31ef64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31ef64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ef68: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x31ef68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ef6c: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x31EF6Cu;
    SET_GPR_U32(ctx, 31, 0x31EF74u);
    ctx->pc = 0x31EF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EF6Cu;
    // 0x31ef70: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x31EF6Cu, 0x31EF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EF74u;
label_31ef74:
    // 0x31ef74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31EF74u;
    {
        const bool branch_taken_0x31ef74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EF74u;
        // 0x31ef78: 0x8e030038  lw          $v1, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ef74) {
            ctx->pc = 0x31EF84u;
            goto label_31ef84;
        }
    }
    ctx->pc = 0x31EF7Cu;
label_31ef7c:
    // 0x31ef7c: 0xae130060  sw          $s3, 0x60($s0)
    ctx->pc = 0x31ef7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 19));
label_31ef80:
    // 0x31ef80: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x31ef80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_31ef84:
    // 0x31ef84: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x31ef84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x31ef88: 0x3442fff8  ori         $v0, $v0, 0xFFF8
    ctx->pc = 0x31ef88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65528);
    // 0x31ef8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31ef8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31ef90: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x31ef90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31ef94: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x31ef94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31ef98: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x31ef98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x31ef9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31ef9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31efa0: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x31efa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x31efa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31efa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31efa8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x31efa8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31efac: 0x3e00008  jr          $ra
    ctx->pc = 0x31EFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EFACu;
        // 0x31efb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EFACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EFB4u;
    // 0x31efb4: 0x0  nop
    ctx->pc = 0x31efb4u;
    // NOP
    ctx->pc = 0x31efb8u;
}
