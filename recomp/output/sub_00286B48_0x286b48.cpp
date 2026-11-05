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

// Function: sub_00286B48
// Address: 0x286b48 - 0x286c48
void sub_00286B48_0x286b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286B48_0x286b48");
#endif

    switch (ctx->pc) {
        case 0x286b48u: goto label_286b48;
        case 0x286b4cu: goto label_286b4c;
        case 0x286b50u: goto label_286b50;
        case 0x286b54u: goto label_286b54;
        case 0x286b58u: goto label_286b58;
        case 0x286b5cu: goto label_286b5c;
        case 0x286b60u: goto label_286b60;
        case 0x286b64u: goto label_286b64;
        case 0x286b68u: goto label_286b68;
        case 0x286b6cu: goto label_286b6c;
        case 0x286b70u: goto label_286b70;
        case 0x286b74u: goto label_286b74;
        case 0x286b78u: goto label_286b78;
        case 0x286b7cu: goto label_286b7c;
        case 0x286b80u: goto label_286b80;
        case 0x286b84u: goto label_286b84;
        case 0x286b88u: goto label_286b88;
        case 0x286b8cu: goto label_286b8c;
        case 0x286b90u: goto label_286b90;
        case 0x286b94u: goto label_286b94;
        case 0x286b98u: goto label_286b98;
        case 0x286b9cu: goto label_286b9c;
        case 0x286ba0u: goto label_286ba0;
        case 0x286ba4u: goto label_286ba4;
        case 0x286ba8u: goto label_286ba8;
        case 0x286bacu: goto label_286bac;
        case 0x286bb0u: goto label_286bb0;
        case 0x286bb4u: goto label_286bb4;
        case 0x286bb8u: goto label_286bb8;
        case 0x286bbcu: goto label_286bbc;
        case 0x286bc0u: goto label_286bc0;
        case 0x286bc4u: goto label_286bc4;
        case 0x286bc8u: goto label_286bc8;
        case 0x286bccu: goto label_286bcc;
        case 0x286bd0u: goto label_286bd0;
        case 0x286bd4u: goto label_286bd4;
        case 0x286bd8u: goto label_286bd8;
        case 0x286bdcu: goto label_286bdc;
        case 0x286be0u: goto label_286be0;
        case 0x286be4u: goto label_286be4;
        case 0x286be8u: goto label_286be8;
        case 0x286becu: goto label_286bec;
        case 0x286bf0u: goto label_286bf0;
        case 0x286bf4u: goto label_286bf4;
        case 0x286bf8u: goto label_286bf8;
        case 0x286bfcu: goto label_286bfc;
        case 0x286c00u: goto label_286c00;
        case 0x286c04u: goto label_286c04;
        case 0x286c08u: goto label_286c08;
        case 0x286c0cu: goto label_286c0c;
        case 0x286c10u: goto label_286c10;
        case 0x286c14u: goto label_286c14;
        case 0x286c18u: goto label_286c18;
        case 0x286c1cu: goto label_286c1c;
        case 0x286c20u: goto label_286c20;
        case 0x286c24u: goto label_286c24;
        case 0x286c28u: goto label_286c28;
        case 0x286c2cu: goto label_286c2c;
        case 0x286c30u: goto label_286c30;
        case 0x286c34u: goto label_286c34;
        case 0x286c38u: goto label_286c38;
        case 0x286c3cu: goto label_286c3c;
        case 0x286c40u: goto label_286c40;
        case 0x286c44u: goto label_286c44;
        default: break;
    }

    ctx->pc = 0x286b48u;

label_286b48:
    // 0x286b48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x286b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_286b4c:
    // 0x286b4c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x286b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_286b50:
    // 0x286b50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x286b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_286b54:
    // 0x286b54: 0x2443c660  addiu       $v1, $v0, -0x39A0
    ctx->pc = 0x286b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952544));
label_286b58:
    // 0x286b58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x286b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_286b5c:
    // 0x286b5c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x286b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_286b60:
    // 0x286b60: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x286b60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_286b64:
    // 0x286b64: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x286b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_286b68:
    // 0x286b68: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x286b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_286b6c:
    // 0x286b6c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x286b6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_286b70:
    // 0x286b70: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x286b70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_286b74:
    // 0x286b74: 0x3c01bfa6  lui         $at, 0xBFA6
    ctx->pc = 0x286b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49062 << 16));
label_286b78:
    // 0x286b78: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x286b78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_286b7c:
    // 0x286b7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x286b7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_286b80:
    // 0x286b80: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_286b84:
    if (ctx->pc == 0x286B84u) {
        ctx->pc = 0x286B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B80u;
        // 0x286b84: 0x46000807  neg.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x286B88u;
        goto label_286b88;
    }
    ctx->pc = 0x286B80u;
    {
        const bool branch_taken_0x286b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286b80) {
            ctx->pc = 0x286B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286B80u;
            // 0x286b84: 0x46000807  neg.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x286B88u;
            goto label_286b88;
        }
    }
    ctx->pc = 0x286B88u;
label_286b88:
    // 0x286b88: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x286b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_286b8c:
    // 0x286b8c: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x286b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_286b90:
    // 0x286b90: 0xc4620028  lwc1        $f2, 0x28($v1)
    ctx->pc = 0x286b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_286b94:
    // 0x286b94: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x286b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_286b98:
    // 0x286b98: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x286b98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_286b9c:
    // 0x286b9c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x286b9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_286ba0:
    // 0x286ba0: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x286ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_286ba4:
    // 0x286ba4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x286ba4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_286ba8:
    // 0x286ba8: 0x0  nop
    ctx->pc = 0x286ba8u;
    // NOP
label_286bac:
    // 0x286bac: 0x45000022  bc1f        . + 4 + (0x22 << 2)
label_286bb0:
    if (ctx->pc == 0x286BB0u) {
        ctx->pc = 0x286BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286BACu;
        // 0x286bb0: 0xe4610020  swc1        $f1, 0x20($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x286BB4u;
        goto label_286bb4;
    }
    ctx->pc = 0x286BACu;
    {
        const bool branch_taken_0x286bac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x286BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286BACu;
        // 0x286bb0: 0xe4610020  swc1        $f1, 0x20($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x286bac) {
            ctx->pc = 0x286C38u;
            goto label_286c38;
        }
    }
    ctx->pc = 0x286BB4u;
label_286bb4:
    // 0x286bb4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x286bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_286bb8:
    // 0x286bb8: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x286bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
label_286bbc:
    // 0x286bbc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x286bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_286bc0:
    // 0x286bc0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_286bc4:
    if (ctx->pc == 0x286BC4u) {
        ctx->pc = 0x286BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286BC0u;
        // 0x286bc4: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286BC8u;
        goto label_286bc8;
    }
    ctx->pc = 0x286BC0u;
    {
        const bool branch_taken_0x286bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286BC0u;
        // 0x286bc4: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286bc0) {
            ctx->pc = 0x286BD8u;
            goto label_286bd8;
        }
    }
    ctx->pc = 0x286BC8u;
label_286bc8:
    // 0x286bc8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x286bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_286bcc:
    // 0x286bcc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x286bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_286bd0:
    // 0x286bd0: 0x10000019  b           . + 4 + (0x19 << 2)
label_286bd4:
    if (ctx->pc == 0x286BD4u) {
        ctx->pc = 0x286BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286BD0u;
        // 0x286bd4: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286BD8u;
        goto label_286bd8;
    }
    ctx->pc = 0x286BD0u;
    {
        const bool branch_taken_0x286bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286BD0u;
        // 0x286bd4: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286bd0) {
            ctx->pc = 0x286C38u;
            goto label_286c38;
        }
    }
    ctx->pc = 0x286BD8u;
label_286bd8:
    // 0x286bd8: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x286bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_286bdc:
    // 0x286bdc: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x286bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_286be0:
    // 0x286be0: 0xc07f694  jal         func_1FDA50
label_286be4:
    if (ctx->pc == 0x286BE4u) {
        ctx->pc = 0x286BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286BE0u;
        // 0x286be4: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286BE8u;
        goto label_286be8;
    }
    ctx->pc = 0x286BE0u;
    SET_GPR_U32(ctx, 31, 0x286BE8u);
    ctx->pc = 0x286BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286BE0u;
    // 0x286be4: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDA50u, 0x286BE0u, 0x286BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286BE8u;
label_286be8:
    // 0x286be8: 0x8e02cba8  lw          $v0, -0x3458($s0)
    ctx->pc = 0x286be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953896)));
label_286bec:
    // 0x286bec: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x286becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_286bf0:
    // 0x286bf0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x286bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_286bf4:
    // 0x286bf4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x286bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_286bf8:
    // 0x286bf8: 0x40f809  jalr        $v0
label_286bfc:
    if (ctx->pc == 0x286BFCu) {
        ctx->pc = 0x286C00u;
        goto label_286c00;
    }
    ctx->pc = 0x286BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x286C00u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286BF8u, 0x286C00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x286C00u;
label_286c00:
    // 0x286c00: 0xc082b70  jal         func_20ADC0
label_286c04:
    if (ctx->pc == 0x286C04u) {
        ctx->pc = 0x286C08u;
        goto label_286c08;
    }
    ctx->pc = 0x286C00u;
    SET_GPR_U32(ctx, 31, 0x286C08u);
    ctx->pc = 0x20ADC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ADC0u, 0x286C00u, 0x286C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286C08u;
label_286c08:
    // 0x286c08: 0xc082b70  jal         func_20ADC0
label_286c0c:
    if (ctx->pc == 0x286C0Cu) {
        ctx->pc = 0x286C10u;
        goto label_286c10;
    }
    ctx->pc = 0x286C08u;
    SET_GPR_U32(ctx, 31, 0x286C10u);
    ctx->pc = 0x20ADC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ADC0u, 0x286C08u, 0x286C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286C10u;
label_286c10:
    // 0x286c10: 0x8e02cba8  lw          $v0, -0x3458($s0)
    ctx->pc = 0x286c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953896)));
label_286c14:
    // 0x286c14: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x286c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_286c18:
    // 0x286c18: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x286c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_286c1c:
    // 0x286c1c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x286c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_286c20:
    // 0x286c20: 0x40f809  jalr        $v0
label_286c24:
    if (ctx->pc == 0x286C24u) {
        ctx->pc = 0x286C28u;
        goto label_286c28;
    }
    ctx->pc = 0x286C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x286C28u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286C20u, 0x286C28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x286C28u;
label_286c28:
    // 0x286c28: 0xc0a1b4e  jal         func_286D38
label_286c2c:
    if (ctx->pc == 0x286C2Cu) {
        ctx->pc = 0x286C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C28u;
        // 0x286c2c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286C30u;
        goto label_286c30;
    }
    ctx->pc = 0x286C28u;
    SET_GPR_U32(ctx, 31, 0x286C30u);
    ctx->pc = 0x286C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286C28u;
    // 0x286c2c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286D38u, 0x286C28u, 0x286C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286C30u;
label_286c30:
    // 0x286c30: 0xc0a1b12  jal         func_286C48
label_286c34:
    if (ctx->pc == 0x286C34u) {
        ctx->pc = 0x286C38u;
        goto label_286c38;
    }
    ctx->pc = 0x286C30u;
    SET_GPR_U32(ctx, 31, 0x286C38u);
    ctx->pc = 0x286C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286C48u, 0x286C30u, 0x286C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286C38u;
label_286c38:
    // 0x286c38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286c38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_286c3c:
    // 0x286c3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x286c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_286c40:
    // 0x286c40: 0x3e00008  jr          $ra
label_286c44:
    if (ctx->pc == 0x286C44u) {
        ctx->pc = 0x286C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C40u;
        // 0x286c44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286C48u;
        goto label_fallthrough_0x286c40;
    }
    ctx->pc = 0x286C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C40u;
        // 0x286c44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x286c40:
    ctx->pc = 0x286C48u;
}
