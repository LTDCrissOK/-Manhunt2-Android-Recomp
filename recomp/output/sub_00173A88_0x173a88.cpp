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

// Function: sub_00173A88
// Address: 0x173a88 - 0x173b70
void sub_00173A88_0x173a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173A88_0x173a88");
#endif

    switch (ctx->pc) {
        case 0x173a88u: goto label_173a88;
        case 0x173a8cu: goto label_173a8c;
        case 0x173a90u: goto label_173a90;
        case 0x173a94u: goto label_173a94;
        case 0x173a98u: goto label_173a98;
        case 0x173a9cu: goto label_173a9c;
        case 0x173aa0u: goto label_173aa0;
        case 0x173aa4u: goto label_173aa4;
        case 0x173aa8u: goto label_173aa8;
        case 0x173aacu: goto label_173aac;
        case 0x173ab0u: goto label_173ab0;
        case 0x173ab4u: goto label_173ab4;
        case 0x173ab8u: goto label_173ab8;
        case 0x173abcu: goto label_173abc;
        case 0x173ac0u: goto label_173ac0;
        case 0x173ac4u: goto label_173ac4;
        case 0x173ac8u: goto label_173ac8;
        case 0x173accu: goto label_173acc;
        case 0x173ad0u: goto label_173ad0;
        case 0x173ad4u: goto label_173ad4;
        case 0x173ad8u: goto label_173ad8;
        case 0x173adcu: goto label_173adc;
        case 0x173ae0u: goto label_173ae0;
        case 0x173ae4u: goto label_173ae4;
        case 0x173ae8u: goto label_173ae8;
        case 0x173aecu: goto label_173aec;
        case 0x173af0u: goto label_173af0;
        case 0x173af4u: goto label_173af4;
        case 0x173af8u: goto label_173af8;
        case 0x173afcu: goto label_173afc;
        case 0x173b00u: goto label_173b00;
        case 0x173b04u: goto label_173b04;
        case 0x173b08u: goto label_173b08;
        case 0x173b0cu: goto label_173b0c;
        case 0x173b10u: goto label_173b10;
        case 0x173b14u: goto label_173b14;
        case 0x173b18u: goto label_173b18;
        case 0x173b1cu: goto label_173b1c;
        case 0x173b20u: goto label_173b20;
        case 0x173b24u: goto label_173b24;
        case 0x173b28u: goto label_173b28;
        case 0x173b2cu: goto label_173b2c;
        case 0x173b30u: goto label_173b30;
        case 0x173b34u: goto label_173b34;
        case 0x173b38u: goto label_173b38;
        case 0x173b3cu: goto label_173b3c;
        case 0x173b40u: goto label_173b40;
        case 0x173b44u: goto label_173b44;
        case 0x173b48u: goto label_173b48;
        case 0x173b4cu: goto label_173b4c;
        case 0x173b50u: goto label_173b50;
        case 0x173b54u: goto label_173b54;
        case 0x173b58u: goto label_173b58;
        case 0x173b5cu: goto label_173b5c;
        case 0x173b60u: goto label_173b60;
        case 0x173b64u: goto label_173b64;
        case 0x173b68u: goto label_173b68;
        case 0x173b6cu: goto label_173b6c;
        default: break;
    }

    ctx->pc = 0x173a88u;

label_173a88:
    // 0x173a88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x173a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_173a8c:
    // 0x173a8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x173a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_173a90:
    // 0x173a90: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x173a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_173a94:
    // 0x173a94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x173a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_173a98:
    // 0x173a98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x173a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_173a9c:
    // 0x173a9c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x173a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_173aa0:
    // 0x173aa0: 0x8ca30104  lw          $v1, 0x104($a1)
    ctx->pc = 0x173aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
label_173aa4:
    // 0x173aa4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x173aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_173aa8:
    // 0x173aa8: 0x24530070  addiu       $s3, $v0, 0x70
    ctx->pc = 0x173aa8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_173aac:
    // 0x173aac: 0x12600029  beqz        $s3, . + 4 + (0x29 << 2)
label_173ab0:
    if (ctx->pc == 0x173AB0u) {
        ctx->pc = 0x173AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173AACu;
        // 0x173ab0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173AB4u;
        goto label_173ab4;
    }
    ctx->pc = 0x173AACu;
    {
        const bool branch_taken_0x173aac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x173AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173AACu;
        // 0x173ab0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173aac) {
            ctx->pc = 0x173B54u;
            goto label_173b54;
        }
    }
    ctx->pc = 0x173AB4u;
label_173ab4:
    // 0x173ab4: 0xc040d5c  jal         func_103570
label_173ab8:
    if (ctx->pc == 0x173AB8u) {
        ctx->pc = 0x173AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173AB4u;
        // 0x173ab8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173ABCu;
        goto label_173abc;
    }
    ctx->pc = 0x173AB4u;
    SET_GPR_U32(ctx, 31, 0x173ABCu);
    ctx->pc = 0x173AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173AB4u;
    // 0x173ab8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103570u, 0x173AB4u, 0x173ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173ABCu;
label_173abc:
    // 0x173abc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x173abcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173ac0:
    // 0x173ac0: 0x12400025  beqz        $s2, . + 4 + (0x25 << 2)
label_173ac4:
    if (ctx->pc == 0x173AC4u) {
        ctx->pc = 0x173AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173AC0u;
        // 0x173ac4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173AC8u;
        goto label_173ac8;
    }
    ctx->pc = 0x173AC0u;
    {
        const bool branch_taken_0x173ac0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x173AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173AC0u;
        // 0x173ac4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173ac0) {
            ctx->pc = 0x173B58u;
            goto label_173b58;
        }
    }
    ctx->pc = 0x173AC8u;
label_173ac8:
    // 0x173ac8: 0xae32027c  sw          $s2, 0x27C($s1)
    ctx->pc = 0x173ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 636), GPR_U32(ctx, 18));
label_173acc:
    // 0x173acc: 0xc04f9a4  jal         func_13E690
label_173ad0:
    if (ctx->pc == 0x173AD0u) {
        ctx->pc = 0x173AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173ACCu;
        // 0x173ad0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173AD4u;
        goto label_173ad4;
    }
    ctx->pc = 0x173ACCu;
    SET_GPR_U32(ctx, 31, 0x173AD4u);
    ctx->pc = 0x173AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173ACCu;
    // 0x173ad0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E690u, 0x173ACCu, 0x173AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173AD4u;
label_173ad4:
    // 0x173ad4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x173ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_173ad8:
    // 0x173ad8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x173ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_173adc:
    // 0x173adc: 0xae2300b4  sw          $v1, 0xB4($s1)
    ctx->pc = 0x173adcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
label_173ae0:
    // 0x173ae0: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x173ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_173ae4:
    // 0x173ae4: 0xc04f8fc  jal         func_13E3F0
label_173ae8:
    if (ctx->pc == 0x173AE8u) {
        ctx->pc = 0x173AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173AE4u;
        // 0x173ae8: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173AECu;
        goto label_173aec;
    }
    ctx->pc = 0x173AE4u;
    SET_GPR_U32(ctx, 31, 0x173AECu);
    ctx->pc = 0x173AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173AE4u;
    // 0x173ae8: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E3F0u, 0x173AE4u, 0x173AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173AECu;
label_173aec:
    // 0x173aec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x173aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173af0:
    // 0x173af0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x173af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_173af4:
    // 0x173af4: 0xc045fea  jal         func_117FA8
label_173af8:
    if (ctx->pc == 0x173AF8u) {
        ctx->pc = 0x173AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173AF4u;
        // 0x173af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173AFCu;
        goto label_173afc;
    }
    ctx->pc = 0x173AF4u;
    SET_GPR_U32(ctx, 31, 0x173AFCu);
    ctx->pc = 0x173AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173AF4u;
    // 0x173af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x173AF4u, 0x173AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173AFCu;
label_173afc:
    // 0x173afc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x173afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_173b00:
    // 0x173b00: 0xc046058  jal         func_118160
label_173b04:
    if (ctx->pc == 0x173B04u) {
        ctx->pc = 0x173B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173B00u;
        // 0x173b04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173B08u;
        goto label_173b08;
    }
    ctx->pc = 0x173B00u;
    SET_GPR_U32(ctx, 31, 0x173B08u);
    ctx->pc = 0x173B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173B00u;
    // 0x173b04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x173B00u, 0x173B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173B08u;
label_173b08:
    // 0x173b08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x173b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173b0c:
    // 0x173b0c: 0xc046104  jal         func_118410
label_173b10:
    if (ctx->pc == 0x173B10u) {
        ctx->pc = 0x173B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173B0Cu;
        // 0x173b10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173B14u;
        goto label_173b14;
    }
    ctx->pc = 0x173B0Cu;
    SET_GPR_U32(ctx, 31, 0x173B14u);
    ctx->pc = 0x173B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173B0Cu;
    // 0x173b10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x173B0Cu, 0x173B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173B14u;
label_173b14:
    // 0x173b14: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x173b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_173b18:
    // 0x173b18: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x173b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_173b1c:
    // 0x173b1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x173b1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_173b20:
    // 0x173b20: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x173b20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_173b24:
    // 0x173b24: 0xc046290  jal         func_118A40
label_173b28:
    if (ctx->pc == 0x173B28u) {
        ctx->pc = 0x173B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173B24u;
        // 0x173b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173B2Cu;
        goto label_173b2c;
    }
    ctx->pc = 0x173B24u;
    SET_GPR_U32(ctx, 31, 0x173B2Cu);
    ctx->pc = 0x173B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173B24u;
    // 0x173b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x173B24u, 0x173B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173B2Cu;
label_173b2c:
    // 0x173b2c: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x173b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_173b30:
    // 0x173b30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x173b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_173b34:
    // 0x173b34: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x173b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_173b38:
    // 0x173b38: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x173b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_173b3c:
    // 0x173b3c: 0x40f809  jalr        $v0
label_173b40:
    if (ctx->pc == 0x173B40u) {
        ctx->pc = 0x173B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173B3Cu;
        // 0x173b40: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173B44u;
        goto label_173b44;
    }
    ctx->pc = 0x173B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x173B44u);
        ctx->pc = 0x173B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173B3Cu;
        // 0x173b40: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173B3Cu, 0x173B44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x173B44u;
label_173b44:
    // 0x173b44: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x173b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_173b48:
    // 0x173b48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x173b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_173b4c:
    // 0x173b4c: 0xac620338  sw          $v0, 0x338($v1)
    ctx->pc = 0x173b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 824), GPR_U32(ctx, 2));
label_173b50:
    // 0x173b50: 0xae200250  sw          $zero, 0x250($s1)
    ctx->pc = 0x173b50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 0));
label_173b54:
    // 0x173b54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x173b54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_173b58:
    // 0x173b58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x173b58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_173b5c:
    // 0x173b5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x173b5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_173b60:
    // 0x173b60: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x173b60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_173b64:
    // 0x173b64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x173b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_173b68:
    // 0x173b68: 0x3e00008  jr          $ra
label_173b6c:
    if (ctx->pc == 0x173B6Cu) {
        ctx->pc = 0x173B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173B68u;
        // 0x173b6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173B70u;
        goto label_fallthrough_0x173b68;
    }
    ctx->pc = 0x173B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173B68u;
        // 0x173b6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x173b68:
    ctx->pc = 0x173B70u;
}
