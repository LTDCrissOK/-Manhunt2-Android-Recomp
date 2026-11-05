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

// Function: sub_00188B98
// Address: 0x188b98 - 0x188c70
void sub_00188B98_0x188b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188B98_0x188b98");
#endif

    switch (ctx->pc) {
        case 0x188b98u: goto label_188b98;
        case 0x188b9cu: goto label_188b9c;
        case 0x188ba0u: goto label_188ba0;
        case 0x188ba4u: goto label_188ba4;
        case 0x188ba8u: goto label_188ba8;
        case 0x188bacu: goto label_188bac;
        case 0x188bb0u: goto label_188bb0;
        case 0x188bb4u: goto label_188bb4;
        case 0x188bb8u: goto label_188bb8;
        case 0x188bbcu: goto label_188bbc;
        case 0x188bc0u: goto label_188bc0;
        case 0x188bc4u: goto label_188bc4;
        case 0x188bc8u: goto label_188bc8;
        case 0x188bccu: goto label_188bcc;
        case 0x188bd0u: goto label_188bd0;
        case 0x188bd4u: goto label_188bd4;
        case 0x188bd8u: goto label_188bd8;
        case 0x188bdcu: goto label_188bdc;
        case 0x188be0u: goto label_188be0;
        case 0x188be4u: goto label_188be4;
        case 0x188be8u: goto label_188be8;
        case 0x188becu: goto label_188bec;
        case 0x188bf0u: goto label_188bf0;
        case 0x188bf4u: goto label_188bf4;
        case 0x188bf8u: goto label_188bf8;
        case 0x188bfcu: goto label_188bfc;
        case 0x188c00u: goto label_188c00;
        case 0x188c04u: goto label_188c04;
        case 0x188c08u: goto label_188c08;
        case 0x188c0cu: goto label_188c0c;
        case 0x188c10u: goto label_188c10;
        case 0x188c14u: goto label_188c14;
        case 0x188c18u: goto label_188c18;
        case 0x188c1cu: goto label_188c1c;
        case 0x188c20u: goto label_188c20;
        case 0x188c24u: goto label_188c24;
        case 0x188c28u: goto label_188c28;
        case 0x188c2cu: goto label_188c2c;
        case 0x188c30u: goto label_188c30;
        case 0x188c34u: goto label_188c34;
        case 0x188c38u: goto label_188c38;
        case 0x188c3cu: goto label_188c3c;
        case 0x188c40u: goto label_188c40;
        case 0x188c44u: goto label_188c44;
        case 0x188c48u: goto label_188c48;
        case 0x188c4cu: goto label_188c4c;
        case 0x188c50u: goto label_188c50;
        case 0x188c54u: goto label_188c54;
        case 0x188c58u: goto label_188c58;
        case 0x188c5cu: goto label_188c5c;
        case 0x188c60u: goto label_188c60;
        case 0x188c64u: goto label_188c64;
        case 0x188c68u: goto label_188c68;
        case 0x188c6cu: goto label_188c6c;
        default: break;
    }

    ctx->pc = 0x188b98u;

label_188b98:
    // 0x188b98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x188b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_188b9c:
    // 0x188b9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x188b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_188ba0:
    // 0x188ba0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x188ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_188ba4:
    // 0x188ba4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x188ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_188ba8:
    // 0x188ba8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x188ba8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_188bac:
    // 0x188bac: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x188bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_188bb0:
    // 0x188bb0: 0x5043002b  beql        $v0, $v1, . + 4 + (0x2B << 2)
label_188bb4:
    if (ctx->pc == 0x188BB4u) {
        ctx->pc = 0x188BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188BB0u;
        // 0x188bb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188BB8u;
        goto label_188bb8;
    }
    ctx->pc = 0x188BB0u;
    {
        const bool branch_taken_0x188bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x188bb0) {
            ctx->pc = 0x188BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188BB0u;
            // 0x188bb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188C60u;
            goto label_188c60;
        }
    }
    ctx->pc = 0x188BB8u;
label_188bb8:
    // 0x188bb8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x188bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_188bbc:
    // 0x188bbc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_188bc0:
    if (ctx->pc == 0x188BC0u) {
        ctx->pc = 0x188BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188BBCu;
        // 0x188bc0: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188BC4u;
        goto label_188bc4;
    }
    ctx->pc = 0x188BBCu;
    {
        const bool branch_taken_0x188bbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x188BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188BBCu;
        // 0x188bc0: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188bbc) {
            ctx->pc = 0x188BD4u;
            goto label_188bd4;
        }
    }
    ctx->pc = 0x188BC4u;
label_188bc4:
    // 0x188bc4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x188bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_188bc8:
    // 0x188bc8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x188bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_188bcc:
    // 0x188bcc: 0x40f809  jalr        $v0
label_188bd0:
    if (ctx->pc == 0x188BD0u) {
        ctx->pc = 0x188BD4u;
        goto label_188bd4;
    }
    ctx->pc = 0x188BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x188BD4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188BCCu, 0x188BD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x188BD4u;
label_188bd4:
    // 0x188bd4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x188bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_188bd8:
    // 0x188bd8: 0xc061a16  jal         func_186858
label_188bdc:
    if (ctx->pc == 0x188BDCu) {
        ctx->pc = 0x188BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188BD8u;
        // 0x188bdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188BE0u;
        goto label_188be0;
    }
    ctx->pc = 0x188BD8u;
    SET_GPR_U32(ctx, 31, 0x188BE0u);
    ctx->pc = 0x188BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188BD8u;
    // 0x188bdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x188BD8u, 0x188BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188BE0u;
label_188be0:
    // 0x188be0: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x188be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_188be4:
    // 0x188be4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x188be4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_188be8:
    // 0x188be8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x188be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_188bec:
    // 0x188bec: 0xc061a16  jal         func_186858
label_188bf0:
    if (ctx->pc == 0x188BF0u) {
        ctx->pc = 0x188BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188BECu;
        // 0x188bf0: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x188BF4u;
        goto label_188bf4;
    }
    ctx->pc = 0x188BECu;
    SET_GPR_U32(ctx, 31, 0x188BF4u);
    ctx->pc = 0x188BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188BECu;
    // 0x188bf0: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x188BECu, 0x188BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188BF4u;
label_188bf4:
    // 0x188bf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x188bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_188bf8:
    // 0x188bf8: 0xc06ee66  jal         func_1BB998
label_188bfc:
    if (ctx->pc == 0x188BFCu) {
        ctx->pc = 0x188BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188BF8u;
        // 0x188bfc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188C00u;
        goto label_188c00;
    }
    ctx->pc = 0x188BF8u;
    SET_GPR_U32(ctx, 31, 0x188C00u);
    ctx->pc = 0x188BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188BF8u;
    // 0x188bfc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB998u, 0x188BF8u, 0x188C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188C00u;
label_188c00:
    // 0x188c00: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x188c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_188c04:
    // 0x188c04: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x188c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_188c08:
    // 0x188c08: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_188c0c:
    if (ctx->pc == 0x188C0Cu) {
        ctx->pc = 0x188C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C08u;
        // 0x188c0c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188C10u;
        goto label_188c10;
    }
    ctx->pc = 0x188C08u;
    {
        const bool branch_taken_0x188c08 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x188C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C08u;
        // 0x188c0c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188c08) {
            ctx->pc = 0x188C24u;
            goto label_188c24;
        }
    }
    ctx->pc = 0x188C10u;
label_188c10:
    // 0x188c10: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x188c10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_188c14:
    // 0x188c14: 0x0  nop
    ctx->pc = 0x188c14u;
    // NOP
label_188c18:
    // 0x188c18: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x188c18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_188c1c:
    // 0x188c1c: 0x10000007  b           . + 4 + (0x7 << 2)
label_188c20:
    if (ctx->pc == 0x188C20u) {
        ctx->pc = 0x188C24u;
        goto label_188c24;
    }
    ctx->pc = 0x188C1Cu;
    {
        const bool branch_taken_0x188c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188c1c) {
            ctx->pc = 0x188C3Cu;
            goto label_188c3c;
        }
    }
    ctx->pc = 0x188C24u;
label_188c24:
    // 0x188c24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x188c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_188c28:
    // 0x188c28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x188c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_188c2c:
    // 0x188c2c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x188c2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_188c30:
    // 0x188c30: 0x0  nop
    ctx->pc = 0x188c30u;
    // NOP
label_188c34:
    // 0x188c34: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x188c34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_188c38:
    // 0x188c38: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x188c38u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_188c3c:
    // 0x188c3c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x188c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_188c40:
    // 0x188c40: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x188c40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_188c44:
    // 0x188c44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x188c44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_188c48:
    // 0x188c48: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x188c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_188c4c:
    // 0x188c4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x188c4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_188c50:
    // 0x188c50: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x188c50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_188c54:
    // 0x188c54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x188c54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_188c58:
    // 0x188c58: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x188c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
label_188c5c:
    // 0x188c5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x188c5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_188c60:
    // 0x188c60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x188c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_188c64:
    // 0x188c64: 0x3e00008  jr          $ra
label_188c68:
    if (ctx->pc == 0x188C68u) {
        ctx->pc = 0x188C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C64u;
        // 0x188c68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188C6Cu;
        goto label_188c6c;
    }
    ctx->pc = 0x188C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C64u;
        // 0x188c68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188C6Cu;
label_188c6c:
    // 0x188c6c: 0x0  nop
    ctx->pc = 0x188c6cu;
    // NOP
    ctx->pc = 0x188c70u;
}
