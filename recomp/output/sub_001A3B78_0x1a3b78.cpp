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

// Function: sub_001A3B78
// Address: 0x1a3b78 - 0x1a3c48
void sub_001A3B78_0x1a3b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3B78_0x1a3b78");
#endif

    switch (ctx->pc) {
        case 0x1a3b78u: goto label_1a3b78;
        case 0x1a3b7cu: goto label_1a3b7c;
        case 0x1a3b80u: goto label_1a3b80;
        case 0x1a3b84u: goto label_1a3b84;
        case 0x1a3b88u: goto label_1a3b88;
        case 0x1a3b8cu: goto label_1a3b8c;
        case 0x1a3b90u: goto label_1a3b90;
        case 0x1a3b94u: goto label_1a3b94;
        case 0x1a3b98u: goto label_1a3b98;
        case 0x1a3b9cu: goto label_1a3b9c;
        case 0x1a3ba0u: goto label_1a3ba0;
        case 0x1a3ba4u: goto label_1a3ba4;
        case 0x1a3ba8u: goto label_1a3ba8;
        case 0x1a3bacu: goto label_1a3bac;
        case 0x1a3bb0u: goto label_1a3bb0;
        case 0x1a3bb4u: goto label_1a3bb4;
        case 0x1a3bb8u: goto label_1a3bb8;
        case 0x1a3bbcu: goto label_1a3bbc;
        case 0x1a3bc0u: goto label_1a3bc0;
        case 0x1a3bc4u: goto label_1a3bc4;
        case 0x1a3bc8u: goto label_1a3bc8;
        case 0x1a3bccu: goto label_1a3bcc;
        case 0x1a3bd0u: goto label_1a3bd0;
        case 0x1a3bd4u: goto label_1a3bd4;
        case 0x1a3bd8u: goto label_1a3bd8;
        case 0x1a3bdcu: goto label_1a3bdc;
        case 0x1a3be0u: goto label_1a3be0;
        case 0x1a3be4u: goto label_1a3be4;
        case 0x1a3be8u: goto label_1a3be8;
        case 0x1a3becu: goto label_1a3bec;
        case 0x1a3bf0u: goto label_1a3bf0;
        case 0x1a3bf4u: goto label_1a3bf4;
        case 0x1a3bf8u: goto label_1a3bf8;
        case 0x1a3bfcu: goto label_1a3bfc;
        case 0x1a3c00u: goto label_1a3c00;
        case 0x1a3c04u: goto label_1a3c04;
        case 0x1a3c08u: goto label_1a3c08;
        case 0x1a3c0cu: goto label_1a3c0c;
        case 0x1a3c10u: goto label_1a3c10;
        case 0x1a3c14u: goto label_1a3c14;
        case 0x1a3c18u: goto label_1a3c18;
        case 0x1a3c1cu: goto label_1a3c1c;
        case 0x1a3c20u: goto label_1a3c20;
        case 0x1a3c24u: goto label_1a3c24;
        case 0x1a3c28u: goto label_1a3c28;
        case 0x1a3c2cu: goto label_1a3c2c;
        case 0x1a3c30u: goto label_1a3c30;
        case 0x1a3c34u: goto label_1a3c34;
        case 0x1a3c38u: goto label_1a3c38;
        case 0x1a3c3cu: goto label_1a3c3c;
        case 0x1a3c40u: goto label_1a3c40;
        case 0x1a3c44u: goto label_1a3c44;
        default: break;
    }

    ctx->pc = 0x1a3b78u;

label_1a3b78:
    // 0x1a3b78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a3b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a3b7c:
    // 0x1a3b7c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a3b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1a3b80:
    // 0x1a3b80: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1a3b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1a3b84:
    // 0x1a3b84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a3b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a3b88:
    // 0x1a3b88: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a3b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1a3b8c:
    // 0x1a3b8c: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x1a3b8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a3b90:
    // 0x1a3b90: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a3b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a3b94:
    // 0x1a3b94: 0x50510027  beql        $v0, $s1, . + 4 + (0x27 << 2)
label_1a3b98:
    if (ctx->pc == 0x1A3B98u) {
        ctx->pc = 0x1A3B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B94u;
        // 0x1a3b98: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3B9Cu;
        goto label_1a3b9c;
    }
    ctx->pc = 0x1A3B94u;
    {
        const bool branch_taken_0x1a3b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1a3b94) {
            ctx->pc = 0x1A3B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3B94u;
            // 0x1a3b98: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3C34u;
            goto label_1a3c34;
        }
    }
    ctx->pc = 0x1A3B9Cu;
label_1a3b9c:
    // 0x1a3b9c: 0xc0691d6  jal         func_1A4758
label_1a3ba0:
    if (ctx->pc == 0x1A3BA0u) {
        ctx->pc = 0x1A3BA4u;
        goto label_1a3ba4;
    }
    ctx->pc = 0x1A3B9Cu;
    SET_GPR_U32(ctx, 31, 0x1A3BA4u);
    ctx->pc = 0x1A4758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4758u, 0x1A3B9Cu, 0x1A3BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3BA4u;
label_1a3ba4:
    // 0x1a3ba4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a3ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a3ba8:
    // 0x1a3ba8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1a3bac:
    if (ctx->pc == 0x1A3BACu) {
        ctx->pc = 0x1A3BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3BA8u;
        // 0x1a3bac: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3BB0u;
        goto label_1a3bb0;
    }
    ctx->pc = 0x1A3BA8u;
    {
        const bool branch_taken_0x1a3ba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3BA8u;
        // 0x1a3bac: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3ba8) {
            ctx->pc = 0x1A3BC0u;
            goto label_1a3bc0;
        }
    }
    ctx->pc = 0x1A3BB0u;
label_1a3bb0:
    // 0x1a3bb0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1a3bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1a3bb4:
    // 0x1a3bb4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1a3bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1a3bb8:
    // 0x1a3bb8: 0x40f809  jalr        $v0
label_1a3bbc:
    if (ctx->pc == 0x1A3BBCu) {
        ctx->pc = 0x1A3BC0u;
        goto label_1a3bc0;
    }
    ctx->pc = 0x1A3BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A3BC0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3BB8u, 0x1A3BC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A3BC0u;
label_1a3bc0:
    // 0x1a3bc0: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x1a3bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_1a3bc4:
    // 0x1a3bc4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a3bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a3bc8:
    // 0x1a3bc8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a3bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a3bcc:
    // 0x1a3bcc: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1a3bccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1a3bd0:
    // 0x1a3bd0: 0xc06faee  jal         func_1BEBB8
label_1a3bd4:
    if (ctx->pc == 0x1A3BD4u) {
        ctx->pc = 0x1A3BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3BD0u;
        // 0x1a3bd4: 0x8c451004  lw          $a1, 0x1004($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3BD8u;
        goto label_1a3bd8;
    }
    ctx->pc = 0x1A3BD0u;
    SET_GPR_U32(ctx, 31, 0x1A3BD8u);
    ctx->pc = 0x1A3BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3BD0u;
    // 0x1a3bd4: 0x8c451004  lw          $a1, 0x1004($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEBB8u, 0x1A3BD0u, 0x1A3BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3BD8u;
label_1a3bd8:
    // 0x1a3bd8: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x1a3bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_1a3bdc:
    // 0x1a3bdc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1a3bdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a3be0:
    // 0x1a3be0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1a3be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_1a3be4:
    // 0x1a3be4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a3be4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a3be8:
    // 0x1a3be8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1a3be8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3bec:
    // 0x1a3bec: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1a3becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1a3bf0:
    // 0x1a3bf0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a3bf0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3bf4:
    // 0x1a3bf4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1a3bf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a3bf8:
    // 0x1a3bf8: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x1a3bf8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a3bfc:
    // 0x1a3bfc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1a3bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1a3c00:
    // 0x1a3c00: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x1a3c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_1a3c04:
    // 0x1a3c04: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1a3c04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1a3c08:
    // 0x1a3c08: 0x40f809  jalr        $v0
label_1a3c0c:
    if (ctx->pc == 0x1A3C0Cu) {
        ctx->pc = 0x1A3C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C08u;
        // 0x1a3c0c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3C10u;
        goto label_1a3c10;
    }
    ctx->pc = 0x1A3C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A3C10u);
        ctx->pc = 0x1A3C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C08u;
        // 0x1a3c0c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3C08u, 0x1A3C10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A3C10u;
label_1a3c10:
    // 0x1a3c10: 0xc061a16  jal         func_186858
label_1a3c14:
    if (ctx->pc == 0x1A3C14u) {
        ctx->pc = 0x1A3C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C10u;
        // 0x1a3c14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3C18u;
        goto label_1a3c18;
    }
    ctx->pc = 0x1A3C10u;
    SET_GPR_U32(ctx, 31, 0x1A3C18u);
    ctx->pc = 0x1A3C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3C10u;
    // 0x1a3c14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A3C10u, 0x1A3C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3C18u;
label_1a3c18:
    // 0x1a3c18: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1a3c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_1a3c1c:
    // 0x1a3c1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a3c1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3c20:
    // 0x1a3c20: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1a3c20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
label_1a3c24:
    // 0x1a3c24: 0x24630f90  addiu       $v1, $v1, 0xF90
    ctx->pc = 0x1a3c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3984));
label_1a3c28:
    // 0x1a3c28: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1a3c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_1a3c2c:
    // 0x1a3c2c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1a3c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_1a3c30:
    // 0x1a3c30: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a3c30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a3c34:
    // 0x1a3c34: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1a3c34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1a3c38:
    // 0x1a3c38: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a3c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a3c3c:
    // 0x1a3c3c: 0x3e00008  jr          $ra
label_1a3c40:
    if (ctx->pc == 0x1A3C40u) {
        ctx->pc = 0x1A3C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C3Cu;
        // 0x1a3c40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3C44u;
        goto label_1a3c44;
    }
    ctx->pc = 0x1A3C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C3Cu;
        // 0x1a3c40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3C44u;
label_1a3c44:
    // 0x1a3c44: 0x0  nop
    ctx->pc = 0x1a3c44u;
    // NOP
    ctx->pc = 0x1a3c48u;
}
