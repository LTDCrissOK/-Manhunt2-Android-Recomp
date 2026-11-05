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

// Function: sub_0019EE60
// Address: 0x19ee60 - 0x19ef08
void sub_0019EE60_0x19ee60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019EE60_0x19ee60");
#endif

    switch (ctx->pc) {
        case 0x19ee60u: goto label_19ee60;
        case 0x19ee64u: goto label_19ee64;
        case 0x19ee68u: goto label_19ee68;
        case 0x19ee6cu: goto label_19ee6c;
        case 0x19ee70u: goto label_19ee70;
        case 0x19ee74u: goto label_19ee74;
        case 0x19ee78u: goto label_19ee78;
        case 0x19ee7cu: goto label_19ee7c;
        case 0x19ee80u: goto label_19ee80;
        case 0x19ee84u: goto label_19ee84;
        case 0x19ee88u: goto label_19ee88;
        case 0x19ee8cu: goto label_19ee8c;
        case 0x19ee90u: goto label_19ee90;
        case 0x19ee94u: goto label_19ee94;
        case 0x19ee98u: goto label_19ee98;
        case 0x19ee9cu: goto label_19ee9c;
        case 0x19eea0u: goto label_19eea0;
        case 0x19eea4u: goto label_19eea4;
        case 0x19eea8u: goto label_19eea8;
        case 0x19eeacu: goto label_19eeac;
        case 0x19eeb0u: goto label_19eeb0;
        case 0x19eeb4u: goto label_19eeb4;
        case 0x19eeb8u: goto label_19eeb8;
        case 0x19eebcu: goto label_19eebc;
        case 0x19eec0u: goto label_19eec0;
        case 0x19eec4u: goto label_19eec4;
        case 0x19eec8u: goto label_19eec8;
        case 0x19eeccu: goto label_19eecc;
        case 0x19eed0u: goto label_19eed0;
        case 0x19eed4u: goto label_19eed4;
        case 0x19eed8u: goto label_19eed8;
        case 0x19eedcu: goto label_19eedc;
        case 0x19eee0u: goto label_19eee0;
        case 0x19eee4u: goto label_19eee4;
        case 0x19eee8u: goto label_19eee8;
        case 0x19eeecu: goto label_19eeec;
        case 0x19eef0u: goto label_19eef0;
        case 0x19eef4u: goto label_19eef4;
        case 0x19eef8u: goto label_19eef8;
        case 0x19eefcu: goto label_19eefc;
        case 0x19ef00u: goto label_19ef00;
        case 0x19ef04u: goto label_19ef04;
        default: break;
    }

    ctx->pc = 0x19ee60u;

label_19ee60:
    // 0x19ee60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19ee60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_19ee64:
    // 0x19ee64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19ee64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19ee68:
    // 0x19ee68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19ee68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19ee6c:
    // 0x19ee6c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19ee6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_19ee70:
    // 0x19ee70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19ee70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19ee74:
    // 0x19ee74: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x19ee74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_19ee78:
    // 0x19ee78: 0x5043001f  beql        $v0, $v1, . + 4 + (0x1F << 2)
label_19ee7c:
    if (ctx->pc == 0x19EE7Cu) {
        ctx->pc = 0x19EE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE78u;
        // 0x19ee7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EE80u;
        goto label_19ee80;
    }
    ctx->pc = 0x19EE78u;
    {
        const bool branch_taken_0x19ee78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19ee78) {
            ctx->pc = 0x19EE7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EE78u;
            // 0x19ee7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EEF8u;
            goto label_19eef8;
        }
    }
    ctx->pc = 0x19EE80u;
label_19ee80:
    // 0x19ee80: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x19ee80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_19ee84:
    // 0x19ee84: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_19ee88:
    if (ctx->pc == 0x19EE88u) {
        ctx->pc = 0x19EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE84u;
        // 0x19ee88: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EE8Cu;
        goto label_19ee8c;
    }
    ctx->pc = 0x19EE84u;
    {
        const bool branch_taken_0x19ee84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE84u;
        // 0x19ee88: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ee84) {
            ctx->pc = 0x19EE9Cu;
            goto label_19ee9c;
        }
    }
    ctx->pc = 0x19EE8Cu;
label_19ee8c:
    // 0x19ee8c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x19ee8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19ee90:
    // 0x19ee90: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x19ee90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_19ee94:
    // 0x19ee94: 0x40f809  jalr        $v0
label_19ee98:
    if (ctx->pc == 0x19EE98u) {
        ctx->pc = 0x19EE9Cu;
        goto label_19ee9c;
    }
    ctx->pc = 0x19EE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19EE9Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EE94u, 0x19EE9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19EE9Cu;
label_19ee9c:
    // 0x19ee9c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x19ee9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_19eea0:
    // 0x19eea0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19eea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19eea4:
    // 0x19eea4: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x19eea4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19eea8:
    // 0x19eea8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x19eea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_19eeac:
    // 0x19eeac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19eeacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19eeb0:
    // 0x19eeb0: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x19eeb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
label_19eeb4:
    // 0x19eeb4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19eeb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19eeb8:
    // 0x19eeb8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x19eeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_19eebc:
    // 0x19eebc: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x19eebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_19eec0:
    // 0x19eec0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x19eec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19eec4:
    // 0x19eec4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19eec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_19eec8:
    // 0x19eec8: 0x40f809  jalr        $v0
label_19eecc:
    if (ctx->pc == 0x19EECCu) {
        ctx->pc = 0x19EECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EEC8u;
        // 0x19eecc: 0x8ce51004  lw          $a1, 0x1004($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EED0u;
        goto label_19eed0;
    }
    ctx->pc = 0x19EEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19EED0u);
        ctx->pc = 0x19EECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EEC8u;
        // 0x19eecc: 0x8ce51004  lw          $a1, 0x1004($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EEC8u, 0x19EED0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19EED0u;
label_19eed0:
    // 0x19eed0: 0xc061a16  jal         func_186858
label_19eed4:
    if (ctx->pc == 0x19EED4u) {
        ctx->pc = 0x19EED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EED0u;
        // 0x19eed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EED8u;
        goto label_19eed8;
    }
    ctx->pc = 0x19EED0u;
    SET_GPR_U32(ctx, 31, 0x19EED8u);
    ctx->pc = 0x19EED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EED0u;
    // 0x19eed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19EED0u, 0x19EED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EED8u;
label_19eed8:
    // 0x19eed8: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x19eed8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_19eedc:
    // 0x19eedc: 0xc061a16  jal         func_186858
label_19eee0:
    if (ctx->pc == 0x19EEE0u) {
        ctx->pc = 0x19EEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EEDCu;
        // 0x19eee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EEE4u;
        goto label_19eee4;
    }
    ctx->pc = 0x19EEDCu;
    SET_GPR_U32(ctx, 31, 0x19EEE4u);
    ctx->pc = 0x19EEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EEDCu;
    // 0x19eee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19EEDCu, 0x19EEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EEE4u;
label_19eee4:
    // 0x19eee4: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x19eee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_19eee8:
    // 0x19eee8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19eee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19eeec:
    // 0x19eeec: 0x0  nop
    ctx->pc = 0x19eeecu;
    // NOP
label_19eef0:
    // 0x19eef0: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x19eef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_19eef4:
    // 0x19eef4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19eef4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19eef8:
    // 0x19eef8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19eef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19eefc:
    // 0x19eefc: 0x3e00008  jr          $ra
label_19ef00:
    if (ctx->pc == 0x19EF00u) {
        ctx->pc = 0x19EF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EEFCu;
        // 0x19ef00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EF04u;
        goto label_19ef04;
    }
    ctx->pc = 0x19EEFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EEFCu;
        // 0x19ef00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EEFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EF04u;
label_19ef04:
    // 0x19ef04: 0x0  nop
    ctx->pc = 0x19ef04u;
    // NOP
    ctx->pc = 0x19ef08u;
}
