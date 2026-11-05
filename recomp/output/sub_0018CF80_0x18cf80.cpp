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

// Function: sub_0018CF80
// Address: 0x18cf80 - 0x18d208
void sub_0018CF80_0x18cf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018CF80_0x18cf80");
#endif

    switch (ctx->pc) {
        case 0x18cf80u: goto label_18cf80;
        case 0x18cf84u: goto label_18cf84;
        case 0x18cf88u: goto label_18cf88;
        case 0x18cf8cu: goto label_18cf8c;
        case 0x18cf90u: goto label_18cf90;
        case 0x18cf94u: goto label_18cf94;
        case 0x18cf98u: goto label_18cf98;
        case 0x18cf9cu: goto label_18cf9c;
        case 0x18cfa0u: goto label_18cfa0;
        case 0x18cfa4u: goto label_18cfa4;
        case 0x18cfa8u: goto label_18cfa8;
        case 0x18cfacu: goto label_18cfac;
        case 0x18cfb0u: goto label_18cfb0;
        case 0x18cfb4u: goto label_18cfb4;
        case 0x18cfb8u: goto label_18cfb8;
        case 0x18cfbcu: goto label_18cfbc;
        case 0x18cfc0u: goto label_18cfc0;
        case 0x18cfc4u: goto label_18cfc4;
        case 0x18cfc8u: goto label_18cfc8;
        case 0x18cfccu: goto label_18cfcc;
        case 0x18cfd0u: goto label_18cfd0;
        case 0x18cfd4u: goto label_18cfd4;
        case 0x18cfd8u: goto label_18cfd8;
        case 0x18cfdcu: goto label_18cfdc;
        case 0x18cfe0u: goto label_18cfe0;
        case 0x18cfe4u: goto label_18cfe4;
        case 0x18cfe8u: goto label_18cfe8;
        case 0x18cfecu: goto label_18cfec;
        case 0x18cff0u: goto label_18cff0;
        case 0x18cff4u: goto label_18cff4;
        case 0x18cff8u: goto label_18cff8;
        case 0x18cffcu: goto label_18cffc;
        case 0x18d000u: goto label_18d000;
        case 0x18d004u: goto label_18d004;
        case 0x18d008u: goto label_18d008;
        case 0x18d00cu: goto label_18d00c;
        case 0x18d010u: goto label_18d010;
        case 0x18d014u: goto label_18d014;
        case 0x18d018u: goto label_18d018;
        case 0x18d01cu: goto label_18d01c;
        case 0x18d020u: goto label_18d020;
        case 0x18d024u: goto label_18d024;
        case 0x18d028u: goto label_18d028;
        case 0x18d02cu: goto label_18d02c;
        case 0x18d030u: goto label_18d030;
        case 0x18d034u: goto label_18d034;
        case 0x18d038u: goto label_18d038;
        case 0x18d03cu: goto label_18d03c;
        case 0x18d040u: goto label_18d040;
        case 0x18d044u: goto label_18d044;
        case 0x18d048u: goto label_18d048;
        case 0x18d04cu: goto label_18d04c;
        case 0x18d050u: goto label_18d050;
        case 0x18d054u: goto label_18d054;
        case 0x18d058u: goto label_18d058;
        case 0x18d05cu: goto label_18d05c;
        case 0x18d060u: goto label_18d060;
        case 0x18d064u: goto label_18d064;
        case 0x18d068u: goto label_18d068;
        case 0x18d06cu: goto label_18d06c;
        case 0x18d070u: goto label_18d070;
        case 0x18d074u: goto label_18d074;
        case 0x18d078u: goto label_18d078;
        case 0x18d07cu: goto label_18d07c;
        case 0x18d080u: goto label_18d080;
        case 0x18d084u: goto label_18d084;
        case 0x18d088u: goto label_18d088;
        case 0x18d08cu: goto label_18d08c;
        case 0x18d090u: goto label_18d090;
        case 0x18d094u: goto label_18d094;
        case 0x18d098u: goto label_18d098;
        case 0x18d09cu: goto label_18d09c;
        case 0x18d0a0u: goto label_18d0a0;
        case 0x18d0a4u: goto label_18d0a4;
        case 0x18d0a8u: goto label_18d0a8;
        case 0x18d0acu: goto label_18d0ac;
        case 0x18d0b0u: goto label_18d0b0;
        case 0x18d0b4u: goto label_18d0b4;
        case 0x18d0b8u: goto label_18d0b8;
        case 0x18d0bcu: goto label_18d0bc;
        case 0x18d0c0u: goto label_18d0c0;
        case 0x18d0c4u: goto label_18d0c4;
        case 0x18d0c8u: goto label_18d0c8;
        case 0x18d0ccu: goto label_18d0cc;
        case 0x18d0d0u: goto label_18d0d0;
        case 0x18d0d4u: goto label_18d0d4;
        case 0x18d0d8u: goto label_18d0d8;
        case 0x18d0dcu: goto label_18d0dc;
        case 0x18d0e0u: goto label_18d0e0;
        case 0x18d0e4u: goto label_18d0e4;
        case 0x18d0e8u: goto label_18d0e8;
        case 0x18d0ecu: goto label_18d0ec;
        case 0x18d0f0u: goto label_18d0f0;
        case 0x18d0f4u: goto label_18d0f4;
        case 0x18d0f8u: goto label_18d0f8;
        case 0x18d0fcu: goto label_18d0fc;
        case 0x18d100u: goto label_18d100;
        case 0x18d104u: goto label_18d104;
        case 0x18d108u: goto label_18d108;
        case 0x18d10cu: goto label_18d10c;
        case 0x18d110u: goto label_18d110;
        case 0x18d114u: goto label_18d114;
        case 0x18d118u: goto label_18d118;
        case 0x18d11cu: goto label_18d11c;
        case 0x18d120u: goto label_18d120;
        case 0x18d124u: goto label_18d124;
        case 0x18d128u: goto label_18d128;
        case 0x18d12cu: goto label_18d12c;
        case 0x18d130u: goto label_18d130;
        case 0x18d134u: goto label_18d134;
        case 0x18d138u: goto label_18d138;
        case 0x18d13cu: goto label_18d13c;
        case 0x18d140u: goto label_18d140;
        case 0x18d144u: goto label_18d144;
        case 0x18d148u: goto label_18d148;
        case 0x18d14cu: goto label_18d14c;
        case 0x18d150u: goto label_18d150;
        case 0x18d154u: goto label_18d154;
        case 0x18d158u: goto label_18d158;
        case 0x18d15cu: goto label_18d15c;
        case 0x18d160u: goto label_18d160;
        case 0x18d164u: goto label_18d164;
        case 0x18d168u: goto label_18d168;
        case 0x18d16cu: goto label_18d16c;
        case 0x18d170u: goto label_18d170;
        case 0x18d174u: goto label_18d174;
        case 0x18d178u: goto label_18d178;
        case 0x18d17cu: goto label_18d17c;
        case 0x18d180u: goto label_18d180;
        case 0x18d184u: goto label_18d184;
        case 0x18d188u: goto label_18d188;
        case 0x18d18cu: goto label_18d18c;
        case 0x18d190u: goto label_18d190;
        case 0x18d194u: goto label_18d194;
        case 0x18d198u: goto label_18d198;
        case 0x18d19cu: goto label_18d19c;
        case 0x18d1a0u: goto label_18d1a0;
        case 0x18d1a4u: goto label_18d1a4;
        case 0x18d1a8u: goto label_18d1a8;
        case 0x18d1acu: goto label_18d1ac;
        case 0x18d1b0u: goto label_18d1b0;
        case 0x18d1b4u: goto label_18d1b4;
        case 0x18d1b8u: goto label_18d1b8;
        case 0x18d1bcu: goto label_18d1bc;
        case 0x18d1c0u: goto label_18d1c0;
        case 0x18d1c4u: goto label_18d1c4;
        case 0x18d1c8u: goto label_18d1c8;
        case 0x18d1ccu: goto label_18d1cc;
        case 0x18d1d0u: goto label_18d1d0;
        case 0x18d1d4u: goto label_18d1d4;
        case 0x18d1d8u: goto label_18d1d8;
        case 0x18d1dcu: goto label_18d1dc;
        case 0x18d1e0u: goto label_18d1e0;
        case 0x18d1e4u: goto label_18d1e4;
        case 0x18d1e8u: goto label_18d1e8;
        case 0x18d1ecu: goto label_18d1ec;
        case 0x18d1f0u: goto label_18d1f0;
        case 0x18d1f4u: goto label_18d1f4;
        case 0x18d1f8u: goto label_18d1f8;
        case 0x18d1fcu: goto label_18d1fc;
        case 0x18d200u: goto label_18d200;
        case 0x18d204u: goto label_18d204;
        default: break;
    }

    ctx->pc = 0x18cf80u;

label_18cf80:
    // 0x18cf80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18cf80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18cf84:
    // 0x18cf84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18cf84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_18cf88:
    // 0x18cf88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18cf88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18cf8c:
    // 0x18cf8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18cf8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18cf90:
    // 0x18cf90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18cf90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_18cf94:
    // 0x18cf94: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x18cf94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_18cf98:
    // 0x18cf98: 0xc061a12  jal         func_186848
label_18cf9c:
    if (ctx->pc == 0x18CF9Cu) {
        ctx->pc = 0x18CF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF98u;
        // 0x18cf9c: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CFA0u;
        goto label_18cfa0;
    }
    ctx->pc = 0x18CF98u;
    SET_GPR_U32(ctx, 31, 0x18CFA0u);
    ctx->pc = 0x18CF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CF98u;
    // 0x18cf9c: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18CF98u, 0x18CFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CFA0u;
label_18cfa0:
    // 0x18cfa0: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x18cfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_18cfa4:
    // 0x18cfa4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18cfa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18cfa8:
    // 0x18cfa8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x18cfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_18cfac:
    // 0x18cfac: 0x40f809  jalr        $v0
label_18cfb0:
    if (ctx->pc == 0x18CFB0u) {
        ctx->pc = 0x18CFB4u;
        goto label_18cfb4;
    }
    ctx->pc = 0x18CFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18CFB4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CFACu, 0x18CFB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18CFB4u;
label_18cfb4:
    // 0x18cfb4: 0x14400083  bnez        $v0, . + 4 + (0x83 << 2)
label_18cfb8:
    if (ctx->pc == 0x18CFB8u) {
        ctx->pc = 0x18CFBCu;
        goto label_18cfbc;
    }
    ctx->pc = 0x18CFB4u;
    {
        const bool branch_taken_0x18cfb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cfb4) {
            ctx->pc = 0x18D1C4u;
            goto label_18d1c4;
        }
    }
    ctx->pc = 0x18CFBCu;
label_18cfbc:
    // 0x18cfbc: 0xc061a2a  jal         func_1868A8
label_18cfc0:
    if (ctx->pc == 0x18CFC0u) {
        ctx->pc = 0x18CFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CFBCu;
        // 0x18cfc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CFC4u;
        goto label_18cfc4;
    }
    ctx->pc = 0x18CFBCu;
    SET_GPR_U32(ctx, 31, 0x18CFC4u);
    ctx->pc = 0x18CFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CFBCu;
    // 0x18cfc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868A8u, 0x18CFBCu, 0x18CFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CFC4u;
label_18cfc4:
    // 0x18cfc4: 0x8c430450  lw          $v1, 0x450($v0)
    ctx->pc = 0x18cfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
label_18cfc8:
    // 0x18cfc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18cfc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18cfcc:
    // 0x18cfcc: 0x3c014130  lui         $at, 0x4130
    ctx->pc = 0x18cfccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16688 << 16));
label_18cfd0:
    // 0x18cfd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18cfd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18cfd4:
    // 0x18cfd4: 0x8c620fe8  lw          $v0, 0xFE8($v1)
    ctx->pc = 0x18cfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4072)));
label_18cfd8:
    // 0x18cfd8: 0xc45402e0  lwc1        $f20, 0x2E0($v0)
    ctx->pc = 0x18cfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18cfdc:
    // 0x18cfdc: 0xc061a12  jal         func_186848
label_18cfe0:
    if (ctx->pc == 0x18CFE0u) {
        ctx->pc = 0x18CFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CFDCu;
        // 0x18cfe0: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CFE4u;
        goto label_18cfe4;
    }
    ctx->pc = 0x18CFDCu;
    SET_GPR_U32(ctx, 31, 0x18CFE4u);
    ctx->pc = 0x18CFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CFDCu;
    // 0x18cfe0: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18CFDCu, 0x18CFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CFE4u;
label_18cfe4:
    // 0x18cfe4: 0xc44002e0  lwc1        $f0, 0x2E0($v0)
    ctx->pc = 0x18cfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18cfe8:
    // 0x18cfe8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x18cfe8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18cfec:
    // 0x18cfec: 0x0  nop
    ctx->pc = 0x18cfecu;
    // NOP
label_18cff0:
    // 0x18cff0: 0x45010074  bc1t        . + 4 + (0x74 << 2)
label_18cff4:
    if (ctx->pc == 0x18CFF4u) {
        ctx->pc = 0x18CFF8u;
        goto label_18cff8;
    }
    ctx->pc = 0x18CFF0u;
    {
        const bool branch_taken_0x18cff0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18cff0) {
            ctx->pc = 0x18D1C4u;
            goto label_18d1c4;
        }
    }
    ctx->pc = 0x18CFF8u;
label_18cff8:
    // 0x18cff8: 0xc061a2e  jal         func_1868B8
label_18cffc:
    if (ctx->pc == 0x18CFFCu) {
        ctx->pc = 0x18CFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CFF8u;
        // 0x18cffc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D000u;
        goto label_18d000;
    }
    ctx->pc = 0x18CFF8u;
    SET_GPR_U32(ctx, 31, 0x18D000u);
    ctx->pc = 0x18CFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CFF8u;
    // 0x18cffc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868B8u, 0x18CFF8u, 0x18D000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D000u;
label_18d000:
    // 0x18d000: 0x8c440064  lw          $a0, 0x64($v0)
    ctx->pc = 0x18d000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_18d004:
    // 0x18d004: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x18d004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_18d008:
    // 0x18d008: 0x1464000c  bne         $v1, $a0, . + 4 + (0xC << 2)
label_18d00c:
    if (ctx->pc == 0x18D00Cu) {
        ctx->pc = 0x18D010u;
        goto label_18d010;
    }
    ctx->pc = 0x18D008u;
    {
        const bool branch_taken_0x18d008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x18d008) {
            ctx->pc = 0x18D03Cu;
            goto label_18d03c;
        }
    }
    ctx->pc = 0x18D010u;
label_18d010:
    // 0x18d010: 0xc061a2a  jal         func_1868A8
label_18d014:
    if (ctx->pc == 0x18D014u) {
        ctx->pc = 0x18D014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D010u;
        // 0x18d014: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D018u;
        goto label_18d018;
    }
    ctx->pc = 0x18D010u;
    SET_GPR_U32(ctx, 31, 0x18D018u);
    ctx->pc = 0x18D014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D010u;
    // 0x18d014: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868A8u, 0x18D010u, 0x18D018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D018u;
label_18d018:
    // 0x18d018: 0x8c430470  lw          $v1, 0x470($v0)
    ctx->pc = 0x18d018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1136)));
label_18d01c:
    // 0x18d01c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x18d01cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_18d020:
    // 0x18d020: 0x10600068  beqz        $v1, . + 4 + (0x68 << 2)
label_18d024:
    if (ctx->pc == 0x18D024u) {
        ctx->pc = 0x18D028u;
        goto label_18d028;
    }
    ctx->pc = 0x18D020u;
    {
        const bool branch_taken_0x18d020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d020) {
            ctx->pc = 0x18D1C4u;
            goto label_18d1c4;
        }
    }
    ctx->pc = 0x18D028u;
label_18d028:
    // 0x18d028: 0xc061a2a  jal         func_1868A8
label_18d02c:
    if (ctx->pc == 0x18D02Cu) {
        ctx->pc = 0x18D02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D028u;
        // 0x18d02c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D030u;
        goto label_18d030;
    }
    ctx->pc = 0x18D028u;
    SET_GPR_U32(ctx, 31, 0x18D030u);
    ctx->pc = 0x18D02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D028u;
    // 0x18d02c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868A8u, 0x18D028u, 0x18D030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D030u;
label_18d030:
    // 0x18d030: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18d030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18d034:
    // 0x18d034: 0xc071056  jal         func_1C4158
label_18d038:
    if (ctx->pc == 0x18D038u) {
        ctx->pc = 0x18D038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D034u;
        // 0x18d038: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D03Cu;
        goto label_18d03c;
    }
    ctx->pc = 0x18D034u;
    SET_GPR_U32(ctx, 31, 0x18D03Cu);
    ctx->pc = 0x18D038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D034u;
    // 0x18d038: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4158u, 0x18D034u, 0x18D03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D03Cu;
label_18d03c:
    // 0x18d03c: 0xc061a12  jal         func_186848
label_18d040:
    if (ctx->pc == 0x18D040u) {
        ctx->pc = 0x18D040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D03Cu;
        // 0x18d040: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D044u;
        goto label_18d044;
    }
    ctx->pc = 0x18D03Cu;
    SET_GPR_U32(ctx, 31, 0x18D044u);
    ctx->pc = 0x18D040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D03Cu;
    // 0x18d040: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18D03Cu, 0x18D044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D044u;
label_18d044:
    // 0x18d044: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x18d044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_18d048:
    // 0x18d048: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18d048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18d04c:
    // 0x18d04c: 0xc62c002c  lwc1        $f12, 0x2C($s1)
    ctx->pc = 0x18d04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18d050:
    // 0x18d050: 0xc070d30  jal         func_1C34C0
label_18d054:
    if (ctx->pc == 0x18D054u) {
        ctx->pc = 0x18D054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D050u;
        // 0x18d054: 0x8e260030  lw          $a2, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D058u;
        goto label_18d058;
    }
    ctx->pc = 0x18D050u;
    SET_GPR_U32(ctx, 31, 0x18D058u);
    ctx->pc = 0x18D054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D050u;
    // 0x18d054: 0x8e260030  lw          $a2, 0x30($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C34C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C34C0u, 0x18D050u, 0x18D058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D058u;
label_18d058:
    // 0x18d058: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x18d058u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18d05c:
    // 0x18d05c: 0x12400023  beqz        $s2, . + 4 + (0x23 << 2)
label_18d060:
    if (ctx->pc == 0x18D060u) {
        ctx->pc = 0x18D064u;
        goto label_18d064;
    }
    ctx->pc = 0x18D05Cu;
    {
        const bool branch_taken_0x18d05c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d05c) {
            ctx->pc = 0x18D0ECu;
            goto label_18d0ec;
        }
    }
    ctx->pc = 0x18D064u;
label_18d064:
    // 0x18d064: 0xc095306  jal         func_254C18
label_18d068:
    if (ctx->pc == 0x18D068u) {
        ctx->pc = 0x18D068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D064u;
        // 0x18d068: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D06Cu;
        goto label_18d06c;
    }
    ctx->pc = 0x18D064u;
    SET_GPR_U32(ctx, 31, 0x18D06Cu);
    ctx->pc = 0x18D068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D064u;
    // 0x18d068: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254C18u, 0x18D064u, 0x18D06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D06Cu;
label_18d06c:
    // 0x18d06c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18d06cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18d070:
    // 0x18d070: 0xc061a2a  jal         func_1868A8
label_18d074:
    if (ctx->pc == 0x18D074u) {
        ctx->pc = 0x18D074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D070u;
        // 0x18d074: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D078u;
        goto label_18d078;
    }
    ctx->pc = 0x18D070u;
    SET_GPR_U32(ctx, 31, 0x18D078u);
    ctx->pc = 0x18D074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D070u;
    // 0x18d074: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868A8u, 0x18D070u, 0x18D078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D078u;
label_18d078:
    // 0x18d078: 0x1202001c  beq         $s0, $v0, . + 4 + (0x1C << 2)
label_18d07c:
    if (ctx->pc == 0x18D07Cu) {
        ctx->pc = 0x18D080u;
        goto label_18d080;
    }
    ctx->pc = 0x18D078u;
    {
        const bool branch_taken_0x18d078 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x18d078) {
            ctx->pc = 0x18D0ECu;
            goto label_18d0ec;
        }
    }
    ctx->pc = 0x18D080u;
label_18d080:
    // 0x18d080: 0xc095306  jal         func_254C18
label_18d084:
    if (ctx->pc == 0x18D084u) {
        ctx->pc = 0x18D084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D080u;
        // 0x18d084: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D088u;
        goto label_18d088;
    }
    ctx->pc = 0x18D080u;
    SET_GPR_U32(ctx, 31, 0x18D088u);
    ctx->pc = 0x18D084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D080u;
    // 0x18d084: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254C18u, 0x18D080u, 0x18D088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D088u;
label_18d088:
    // 0x18d088: 0x8c500488  lw          $s0, 0x488($v0)
    ctx->pc = 0x18d088u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1160)));
label_18d08c:
    // 0x18d08c: 0xc061a2a  jal         func_1868A8
label_18d090:
    if (ctx->pc == 0x18D090u) {
        ctx->pc = 0x18D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D08Cu;
        // 0x18d090: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D094u;
        goto label_18d094;
    }
    ctx->pc = 0x18D08Cu;
    SET_GPR_U32(ctx, 31, 0x18D094u);
    ctx->pc = 0x18D090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D08Cu;
    // 0x18d090: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868A8u, 0x18D08Cu, 0x18D094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D094u;
label_18d094:
    // 0x18d094: 0x8c430488  lw          $v1, 0x488($v0)
    ctx->pc = 0x18d094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1160)));
label_18d098:
    // 0x18d098: 0x203802b  sltu        $s0, $s0, $v1
    ctx->pc = 0x18d098u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_18d09c:
    // 0x18d09c: 0x16000013  bnez        $s0, . + 4 + (0x13 << 2)
label_18d0a0:
    if (ctx->pc == 0x18D0A0u) {
        ctx->pc = 0x18D0A4u;
        goto label_18d0a4;
    }
    ctx->pc = 0x18D09Cu;
    {
        const bool branch_taken_0x18d09c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d09c) {
            ctx->pc = 0x18D0ECu;
            goto label_18d0ec;
        }
    }
    ctx->pc = 0x18D0A4u;
label_18d0a4:
    // 0x18d0a4: 0xc095306  jal         func_254C18
label_18d0a8:
    if (ctx->pc == 0x18D0A8u) {
        ctx->pc = 0x18D0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D0A4u;
        // 0x18d0a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D0ACu;
        goto label_18d0ac;
    }
    ctx->pc = 0x18D0A4u;
    SET_GPR_U32(ctx, 31, 0x18D0ACu);
    ctx->pc = 0x18D0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D0A4u;
    // 0x18d0a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254C18u, 0x18D0A4u, 0x18D0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D0ACu;
label_18d0ac:
    // 0x18d0ac: 0x8c430470  lw          $v1, 0x470($v0)
    ctx->pc = 0x18d0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1136)));
label_18d0b0:
    // 0x18d0b0: 0x2c630008  sltiu       $v1, $v1, 0x8
    ctx->pc = 0x18d0b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_18d0b4:
    // 0x18d0b4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_18d0b8:
    if (ctx->pc == 0x18D0B8u) {
        ctx->pc = 0x18D0BCu;
        goto label_18d0bc;
    }
    ctx->pc = 0x18D0B4u;
    {
        const bool branch_taken_0x18d0b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d0b4) {
            ctx->pc = 0x18D0ECu;
            goto label_18d0ec;
        }
    }
    ctx->pc = 0x18D0BCu;
label_18d0bc:
    // 0x18d0bc: 0xc061a2a  jal         func_1868A8
label_18d0c0:
    if (ctx->pc == 0x18D0C0u) {
        ctx->pc = 0x18D0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D0BCu;
        // 0x18d0c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D0C4u;
        goto label_18d0c4;
    }
    ctx->pc = 0x18D0BCu;
    SET_GPR_U32(ctx, 31, 0x18D0C4u);
    ctx->pc = 0x18D0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D0BCu;
    // 0x18d0c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868A8u, 0x18D0BCu, 0x18D0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D0C4u;
label_18d0c4:
    // 0x18d0c4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x18d0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18d0c8:
    // 0x18d0c8: 0xc071154  jal         func_1C4550
label_18d0cc:
    if (ctx->pc == 0x18D0CCu) {
        ctx->pc = 0x18D0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D0C8u;
        // 0x18d0cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D0D0u;
        goto label_18d0d0;
    }
    ctx->pc = 0x18D0C8u;
    SET_GPR_U32(ctx, 31, 0x18D0D0u);
    ctx->pc = 0x18D0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D0C8u;
    // 0x18d0cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4550u, 0x18D0C8u, 0x18D0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D0D0u;
label_18d0d0:
    // 0x18d0d0: 0xc095306  jal         func_254C18
label_18d0d4:
    if (ctx->pc == 0x18D0D4u) {
        ctx->pc = 0x18D0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D0D0u;
        // 0x18d0d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D0D8u;
        goto label_18d0d8;
    }
    ctx->pc = 0x18D0D0u;
    SET_GPR_U32(ctx, 31, 0x18D0D8u);
    ctx->pc = 0x18D0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D0D0u;
    // 0x18d0d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254C18u, 0x18D0D0u, 0x18D0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D0D8u;
label_18d0d8:
    // 0x18d0d8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x18d0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18d0dc:
    // 0x18d0dc: 0xc0711da  jal         func_1C4768
label_18d0e0:
    if (ctx->pc == 0x18D0E0u) {
        ctx->pc = 0x18D0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D0DCu;
        // 0x18d0e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D0E4u;
        goto label_18d0e4;
    }
    ctx->pc = 0x18D0DCu;
    SET_GPR_U32(ctx, 31, 0x18D0E4u);
    ctx->pc = 0x18D0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D0DCu;
    // 0x18d0e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4768u, 0x18D0DCu, 0x18D0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D0E4u;
label_18d0e4:
    // 0x18d0e4: 0x10000042  b           . + 4 + (0x42 << 2)
label_18d0e8:
    if (ctx->pc == 0x18D0E8u) {
        ctx->pc = 0x18D0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D0E4u;
        // 0x18d0e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D0ECu;
        goto label_18d0ec;
    }
    ctx->pc = 0x18D0E4u;
    {
        const bool branch_taken_0x18d0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D0E4u;
        // 0x18d0e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d0e4) {
            ctx->pc = 0x18D1F0u;
            goto label_18d1f0;
        }
    }
    ctx->pc = 0x18D0ECu;
label_18d0ec:
    // 0x18d0ec: 0xc061a2e  jal         func_1868B8
label_18d0f0:
    if (ctx->pc == 0x18D0F0u) {
        ctx->pc = 0x18D0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D0ECu;
        // 0x18d0f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D0F4u;
        goto label_18d0f4;
    }
    ctx->pc = 0x18D0ECu;
    SET_GPR_U32(ctx, 31, 0x18D0F4u);
    ctx->pc = 0x18D0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D0ECu;
    // 0x18d0f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868B8u, 0x18D0ECu, 0x18D0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D0F4u;
label_18d0f4:
    // 0x18d0f4: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x18d0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_18d0f8:
    // 0x18d0f8: 0x8c440064  lw          $a0, 0x64($v0)
    ctx->pc = 0x18d0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_18d0fc:
    // 0x18d0fc: 0x8c6504c0  lw          $a1, 0x4C0($v1)
    ctx->pc = 0x18d0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1216)));
label_18d100:
    // 0x18d100: 0x8c820450  lw          $v0, 0x450($a0)
    ctx->pc = 0x18d100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1104)));
label_18d104:
    // 0x18d104: 0x10450033  beq         $v0, $a1, . + 4 + (0x33 << 2)
label_18d108:
    if (ctx->pc == 0x18D108u) {
        ctx->pc = 0x18D10Cu;
        goto label_18d10c;
    }
    ctx->pc = 0x18D104u;
    {
        const bool branch_taken_0x18d104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x18d104) {
            ctx->pc = 0x18D1D4u;
            goto label_18d1d4;
        }
    }
    ctx->pc = 0x18D10Cu;
label_18d10c:
    // 0x18d10c: 0xc061a12  jal         func_186848
label_18d110:
    if (ctx->pc == 0x18D110u) {
        ctx->pc = 0x18D110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D10Cu;
        // 0x18d110: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D114u;
        goto label_18d114;
    }
    ctx->pc = 0x18D10Cu;
    SET_GPR_U32(ctx, 31, 0x18D114u);
    ctx->pc = 0x18D110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D10Cu;
    // 0x18d110: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18D10Cu, 0x18D114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D114u;
label_18d114:
    // 0x18d114: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x18d114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_18d118:
    // 0x18d118: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18d118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18d11c:
    // 0x18d11c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18d11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_18d120:
    // 0x18d120: 0x40f809  jalr        $v0
label_18d124:
    if (ctx->pc == 0x18D124u) {
        ctx->pc = 0x18D128u;
        goto label_18d128;
    }
    ctx->pc = 0x18D120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18D128u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D120u, 0x18D128u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18D128u;
label_18d128:
    // 0x18d128: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_18d12c:
    if (ctx->pc == 0x18D12Cu) {
        ctx->pc = 0x18D130u;
        goto label_18d130;
    }
    ctx->pc = 0x18D128u;
    {
        const bool branch_taken_0x18d128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d128) {
            ctx->pc = 0x18D194u;
            goto label_18d194;
        }
    }
    ctx->pc = 0x18D130u;
label_18d130:
    // 0x18d130: 0xc061a2a  jal         func_1868A8
label_18d134:
    if (ctx->pc == 0x18D134u) {
        ctx->pc = 0x18D134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D130u;
        // 0x18d134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D138u;
        goto label_18d138;
    }
    ctx->pc = 0x18D130u;
    SET_GPR_U32(ctx, 31, 0x18D138u);
    ctx->pc = 0x18D134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D130u;
    // 0x18d134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868A8u, 0x18D130u, 0x18D138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D138u;
label_18d138:
    // 0x18d138: 0x8c430450  lw          $v1, 0x450($v0)
    ctx->pc = 0x18d138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
label_18d13c:
    // 0x18d13c: 0x8c640fe8  lw          $a0, 0xFE8($v1)
    ctx->pc = 0x18d13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4072)));
label_18d140:
    // 0x18d140: 0x8c850394  lw          $a1, 0x394($a0)
    ctx->pc = 0x18d140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 916)));
label_18d144:
    // 0x18d144: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x18d144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_18d148:
    // 0x18d148: 0x40f809  jalr        $v0
label_18d14c:
    if (ctx->pc == 0x18D14Cu) {
        ctx->pc = 0x18D150u;
        goto label_18d150;
    }
    ctx->pc = 0x18D148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18D150u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D148u, 0x18D150u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18D150u;
label_18d150:
    // 0x18d150: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_18d154:
    if (ctx->pc == 0x18D154u) {
        ctx->pc = 0x18D158u;
        goto label_18d158;
    }
    ctx->pc = 0x18D150u;
    {
        const bool branch_taken_0x18d150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d150) {
            ctx->pc = 0x18D194u;
            goto label_18d194;
        }
    }
    ctx->pc = 0x18D158u;
label_18d158:
    // 0x18d158: 0xc061a12  jal         func_186848
label_18d15c:
    if (ctx->pc == 0x18D15Cu) {
        ctx->pc = 0x18D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D158u;
        // 0x18d15c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D160u;
        goto label_18d160;
    }
    ctx->pc = 0x18D158u;
    SET_GPR_U32(ctx, 31, 0x18D160u);
    ctx->pc = 0x18D15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D158u;
    // 0x18d15c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18D158u, 0x18D160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D160u;
label_18d160:
    // 0x18d160: 0x8c430100  lw          $v1, 0x100($v0)
    ctx->pc = 0x18d160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
label_18d164:
    // 0x18d164: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_18d168:
    if (ctx->pc == 0x18D168u) {
        ctx->pc = 0x18D16Cu;
        goto label_18d16c;
    }
    ctx->pc = 0x18D164u;
    {
        const bool branch_taken_0x18d164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d164) {
            ctx->pc = 0x18D194u;
            goto label_18d194;
        }
    }
    ctx->pc = 0x18D16Cu;
label_18d16c:
    // 0x18d16c: 0xc061a1e  jal         func_186878
label_18d170:
    if (ctx->pc == 0x18D170u) {
        ctx->pc = 0x18D170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D16Cu;
        // 0x18d170: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D174u;
        goto label_18d174;
    }
    ctx->pc = 0x18D16Cu;
    SET_GPR_U32(ctx, 31, 0x18D174u);
    ctx->pc = 0x18D170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D16Cu;
    // 0x18d170: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x18D16Cu, 0x18D174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D174u;
label_18d174:
    // 0x18d174: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18d174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18d178:
    // 0x18d178: 0xc061a12  jal         func_186848
label_18d17c:
    if (ctx->pc == 0x18D17Cu) {
        ctx->pc = 0x18D17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D178u;
        // 0x18d17c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D180u;
        goto label_18d180;
    }
    ctx->pc = 0x18D178u;
    SET_GPR_U32(ctx, 31, 0x18D180u);
    ctx->pc = 0x18D17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D178u;
    // 0x18d17c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18D178u, 0x18D180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D180u;
label_18d180:
    // 0x18d180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18d184:
    // 0x18d184: 0xc06cdea  jal         func_1B37A8
label_18d188:
    if (ctx->pc == 0x18D188u) {
        ctx->pc = 0x18D188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D184u;
        // 0x18d188: 0x244500f0  addiu       $a1, $v0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D18Cu;
        goto label_18d18c;
    }
    ctx->pc = 0x18D184u;
    SET_GPR_U32(ctx, 31, 0x18D18Cu);
    ctx->pc = 0x18D188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D184u;
    // 0x18d188: 0x244500f0  addiu       $a1, $v0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B37A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B37A8u, 0x18D184u, 0x18D18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D18Cu;
label_18d18c:
    // 0x18d18c: 0x10000005  b           . + 4 + (0x5 << 2)
label_18d190:
    if (ctx->pc == 0x18D190u) {
        ctx->pc = 0x18D194u;
        goto label_18d194;
    }
    ctx->pc = 0x18D18Cu;
    {
        const bool branch_taken_0x18d18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d18c) {
            ctx->pc = 0x18D1A4u;
            goto label_18d1a4;
        }
    }
    ctx->pc = 0x18D194u;
label_18d194:
    // 0x18d194: 0xc061a1e  jal         func_186878
label_18d198:
    if (ctx->pc == 0x18D198u) {
        ctx->pc = 0x18D198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D194u;
        // 0x18d198: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D19Cu;
        goto label_18d19c;
    }
    ctx->pc = 0x18D194u;
    SET_GPR_U32(ctx, 31, 0x18D19Cu);
    ctx->pc = 0x18D198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D194u;
    // 0x18d198: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x18D194u, 0x18D19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D19Cu;
label_18d19c:
    // 0x18d19c: 0xc06cdb4  jal         func_1B36D0
label_18d1a0:
    if (ctx->pc == 0x18D1A0u) {
        ctx->pc = 0x18D1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D19Cu;
        // 0x18d1a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D1A4u;
        goto label_18d1a4;
    }
    ctx->pc = 0x18D19Cu;
    SET_GPR_U32(ctx, 31, 0x18D1A4u);
    ctx->pc = 0x18D1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D19Cu;
    // 0x18d1a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B36D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B36D0u, 0x18D19Cu, 0x18D1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D1A4u;
label_18d1a4:
    // 0x18d1a4: 0xc063482  jal         func_18D208
label_18d1a8:
    if (ctx->pc == 0x18D1A8u) {
        ctx->pc = 0x18D1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1A4u;
        // 0x18d1a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D1ACu;
        goto label_18d1ac;
    }
    ctx->pc = 0x18D1A4u;
    SET_GPR_U32(ctx, 31, 0x18D1ACu);
    ctx->pc = 0x18D1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D1A4u;
    // 0x18d1a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D208u, 0x18D1A4u, 0x18D1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D1ACu;
label_18d1ac:
    // 0x18d1ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_18d1b0:
    if (ctx->pc == 0x18D1B0u) {
        ctx->pc = 0x18D1B4u;
        goto label_18d1b4;
    }
    ctx->pc = 0x18D1ACu;
    {
        const bool branch_taken_0x18d1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d1ac) {
            ctx->pc = 0x18D1C4u;
            goto label_18d1c4;
        }
    }
    ctx->pc = 0x18D1B4u;
label_18d1b4:
    // 0x18d1b4: 0xc063494  jal         func_18D250
label_18d1b8:
    if (ctx->pc == 0x18D1B8u) {
        ctx->pc = 0x18D1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1B4u;
        // 0x18d1b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D1BCu;
        goto label_18d1bc;
    }
    ctx->pc = 0x18D1B4u;
    SET_GPR_U32(ctx, 31, 0x18D1BCu);
    ctx->pc = 0x18D1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D1B4u;
    // 0x18d1b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D250u, 0x18D1B4u, 0x18D1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D1BCu;
label_18d1bc:
    // 0x18d1bc: 0x1000000c  b           . + 4 + (0xC << 2)
label_18d1c0:
    if (ctx->pc == 0x18D1C0u) {
        ctx->pc = 0x18D1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1BCu;
        // 0x18d1c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D1C4u;
        goto label_18d1c4;
    }
    ctx->pc = 0x18D1BCu;
    {
        const bool branch_taken_0x18d1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1BCu;
        // 0x18d1c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d1bc) {
            ctx->pc = 0x18D1F0u;
            goto label_18d1f0;
        }
    }
    ctx->pc = 0x18D1C4u;
label_18d1c4:
    // 0x18d1c4: 0xc063298  jal         func_18CA60
label_18d1c8:
    if (ctx->pc == 0x18D1C8u) {
        ctx->pc = 0x18D1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1C4u;
        // 0x18d1c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D1CCu;
        goto label_18d1cc;
    }
    ctx->pc = 0x18D1C4u;
    SET_GPR_U32(ctx, 31, 0x18D1CCu);
    ctx->pc = 0x18D1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D1C4u;
    // 0x18d1c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CA60u, 0x18D1C4u, 0x18D1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D1CCu;
label_18d1cc:
    // 0x18d1cc: 0x10000008  b           . + 4 + (0x8 << 2)
label_18d1d0:
    if (ctx->pc == 0x18D1D0u) {
        ctx->pc = 0x18D1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1CCu;
        // 0x18d1d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D1D4u;
        goto label_18d1d4;
    }
    ctx->pc = 0x18D1CCu;
    {
        const bool branch_taken_0x18d1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1CCu;
        // 0x18d1d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d1cc) {
            ctx->pc = 0x18D1F0u;
            goto label_18d1f0;
        }
    }
    ctx->pc = 0x18D1D4u;
label_18d1d4:
    // 0x18d1d4: 0xc061a16  jal         func_186858
label_18d1d8:
    if (ctx->pc == 0x18D1D8u) {
        ctx->pc = 0x18D1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1D4u;
        // 0x18d1d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D1DCu;
        goto label_18d1dc;
    }
    ctx->pc = 0x18D1D4u;
    SET_GPR_U32(ctx, 31, 0x18D1DCu);
    ctx->pc = 0x18D1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D1D4u;
    // 0x18d1d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18D1D4u, 0x18D1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D1DCu;
label_18d1dc:
    // 0x18d1dc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x18d1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_18d1e0:
    // 0x18d1e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18d1e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d1e4:
    // 0x18d1e4: 0x0  nop
    ctx->pc = 0x18d1e4u;
    // NOP
label_18d1e8:
    // 0x18d1e8: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x18d1e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_18d1ec:
    // 0x18d1ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18d1ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18d1f0:
    // 0x18d1f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18d1f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18d1f4:
    // 0x18d1f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18d1f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18d1f8:
    // 0x18d1f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x18d1f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_18d1fc:
    // 0x18d1fc: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x18d1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18d200:
    // 0x18d200: 0x3e00008  jr          $ra
label_18d204:
    if (ctx->pc == 0x18D204u) {
        ctx->pc = 0x18D204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D200u;
        // 0x18d204: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D208u;
        goto label_fallthrough_0x18d200;
    }
    ctx->pc = 0x18D200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D200u;
        // 0x18d204: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18d200:
    ctx->pc = 0x18D208u;
}
