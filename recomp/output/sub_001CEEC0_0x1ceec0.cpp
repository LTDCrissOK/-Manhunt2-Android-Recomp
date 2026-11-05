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

// Function: sub_001CEEC0
// Address: 0x1ceec0 - 0x1cf1a0
void sub_001CEEC0_0x1ceec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CEEC0_0x1ceec0");
#endif

    switch (ctx->pc) {
        case 0x1cef28u: goto label_1cef28;
        case 0x1cef44u: goto label_1cef44;
        case 0x1cef54u: goto label_1cef54;
        case 0x1cefd0u: goto label_1cefd0;
        case 0x1cefd8u: goto label_1cefd8;
        case 0x1cf070u: goto label_1cf070;
        case 0x1cf07cu: goto label_1cf07c;
        case 0x1cf084u: goto label_1cf084;
        case 0x1cf094u: goto label_1cf094;
        case 0x1cf16cu: goto label_1cf16c;
        default: break;
    }

    ctx->pc = 0x1ceec0u;

    // 0x1ceec0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1ceec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1ceec4: 0xffb200c0  sd          $s2, 0xC0($sp)
    ctx->pc = 0x1ceec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
    // 0x1ceec8: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x1ceec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x1ceecc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1ceeccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceed0: 0xffb100b8  sd          $s1, 0xB8($sp)
    ctx->pc = 0x1ceed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 17));
    // 0x1ceed4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ceed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceed8: 0xffb300c8  sd          $s3, 0xC8($sp)
    ctx->pc = 0x1ceed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 19));
    // 0x1ceedc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1ceedcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceee0: 0xffb500d8  sd          $s5, 0xD8($sp)
    ctx->pc = 0x1ceee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 21));
    // 0x1ceee4: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x1ceee4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceee8: 0xffb600e0  sd          $s6, 0xE0($sp)
    ctx->pc = 0x1ceee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
    // 0x1ceeec: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1ceeecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceef0: 0xffb700e8  sd          $s7, 0xE8($sp)
    ctx->pc = 0x1ceef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 23));
    // 0x1ceef4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1ceef4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceef8: 0xffbe00f0  sd          $fp, 0xF0($sp)
    ctx->pc = 0x1ceef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 30));
    // 0x1ceefc: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1ceefcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cef00: 0xffb400d0  sd          $s4, 0xD0($sp)
    ctx->pc = 0x1cef00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 20));
    // 0x1cef04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cef04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cef08: 0xffbf00f8  sd          $ra, 0xF8($sp)
    ctx->pc = 0x1cef08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 31));
    // 0x1cef0c: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x1cef0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1cef10: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1cef10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1cef14: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1cef14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1cef18: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x1cef18u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x1cef1c: 0x8ee20050  lw          $v0, 0x50($s7)
    ctx->pc = 0x1cef1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 80)));
    // 0x1cef20: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1CEF20u;
    SET_GPR_U32(ctx, 31, 0x1CEF28u);
    ctx->pc = 0x1CEF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEF20u;
    // 0x1cef24: 0x8c540050  lw          $s4, 0x50($v0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1CEF20u, 0x1CEF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEF28u;
label_1cef28:
    // 0x1cef28: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x1cef28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x1cef2c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1cef2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1cef30: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x1cef30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x1cef34: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CEF34u;
    {
        const bool branch_taken_0x1cef34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEF34u;
        // 0x1cef38: 0x269e0030  addiu       $fp, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cef34) {
            ctx->pc = 0x1CEF54u;
            goto label_1cef54;
        }
    }
    ctx->pc = 0x1CEF3Cu;
    // 0x1cef3c: 0xc089ee6  jal         func_227B98
    ctx->pc = 0x1CEF3Cu;
    SET_GPR_U32(ctx, 31, 0x1CEF44u);
    ctx->pc = 0x1CEF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEF3Cu;
    // 0x1cef40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227B98u, 0x1CEF3Cu, 0x1CEF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEF44u;
label_1cef44:
    // 0x1cef44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cef44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cef48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cef48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cef4c: 0xc089ef8  jal         func_227BE0
    ctx->pc = 0x1CEF4Cu;
    SET_GPR_U32(ctx, 31, 0x1CEF54u);
    ctx->pc = 0x1CEF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEF4Cu;
    // 0x1cef50: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227BE0u, 0x1CEF4Cu, 0x1CEF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEF54u;
label_1cef54:
    // 0x1cef54: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1cef54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cef58: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1cef58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1cef5c: 0x0  nop
    ctx->pc = 0x1cef5cu;
    // NOP
    // 0x1cef60: 0x46140832  c.eq.s      $f1, $f20
    ctx->pc = 0x1cef60u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cef64: 0x0  nop
    ctx->pc = 0x1cef64u;
    // NOP
    // 0x1cef68: 0x45030081  bc1tl       . + 4 + (0x81 << 2)
    ctx->pc = 0x1CEF68u;
    {
        const bool branch_taken_0x1cef68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cef68) {
            ctx->pc = 0x1CEF6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CEF68u;
            // 0x1cef6c: 0xdfb000b0  ld          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF170u;
            goto label_1cf170;
        }
    }
    ctx->pc = 0x1CEF70u;
    // 0x1cef70: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1cef70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cef74: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1cef74u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cef78: 0x0  nop
    ctx->pc = 0x1cef78u;
    // NOP
    // 0x1cef7c: 0x4503007c  bc1tl       . + 4 + (0x7C << 2)
    ctx->pc = 0x1CEF7Cu;
    {
        const bool branch_taken_0x1cef7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cef7c) {
            ctx->pc = 0x1CEF80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CEF7Cu;
            // 0x1cef80: 0xdfb000b0  ld          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF170u;
            goto label_1cf170;
        }
    }
    ctx->pc = 0x1CEF84u;
    // 0x1cef84: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1cef84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cef88: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1cef88u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cef8c: 0x0  nop
    ctx->pc = 0x1cef8cu;
    // NOP
    // 0x1cef90: 0x45030077  bc1tl       . + 4 + (0x77 << 2)
    ctx->pc = 0x1CEF90u;
    {
        const bool branch_taken_0x1cef90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cef90) {
            ctx->pc = 0x1CEF94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CEF90u;
            // 0x1cef94: 0xdfb000b0  ld          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF170u;
            goto label_1cf170;
        }
    }
    ctx->pc = 0x1CEF98u;
    // 0x1cef98: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1cef98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1cef9c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1cef9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1cefa0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1cefa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1cefa4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1cefa4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1cefa8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cefa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cefac: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1cefacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cefb0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1cefb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1cefb4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1cefb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1cefb8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1cefb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cefbc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1cefbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1cefc0: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x1cefc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cefc4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1cefc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1cefc8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1CEFC8u;
    SET_GPR_U32(ctx, 31, 0x1CEFD0u);
    ctx->pc = 0x1CEFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEFC8u;
    // 0x1cefcc: 0xe7a2001c  swc1        $f2, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1CEFC8u, 0x1CEFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEFD0u;
label_1cefd0:
    // 0x1cefd0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1CEFD0u;
    SET_GPR_U32(ctx, 31, 0x1CEFD8u);
    ctx->pc = 0x1CEFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEFD0u;
    // 0x1cefd4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1CEFD0u, 0x1CEFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEFD8u;
label_1cefd8:
    // 0x1cefd8: 0x7a820030  lq          $v0, 0x30($s4)
    ctx->pc = 0x1cefd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1cefdc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1cefdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1cefe0: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x1cefe0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cefe4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1cefe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cefe8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1cefe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1cefec: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1cefecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ceff0: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x1ceff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x1ceff4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1ceff4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ceff8: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1ceff8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ceffc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1ceffcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cf000: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1cf000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cf004: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x1cf004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cf008: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x1cf008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cf00c: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x1cf00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1cf010: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1cf010u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1cf014: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1cf014u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1cf018: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1cf018u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1cf01c: 0x0  nop
    ctx->pc = 0x1cf01cu;
    // NOP
    // 0x1cf020: 0x0  nop
    ctx->pc = 0x1cf020u;
    // NOP
    // 0x1cf024: 0x46000044  c1          0x44
    ctx->pc = 0x1cf024u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1cf028: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1cf028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1cf02c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x1cf02cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cf030: 0x0  nop
    ctx->pc = 0x1cf030u;
    // NOP
    // 0x1cf034: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1CF034u;
    {
        const bool branch_taken_0x1cf034 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CF038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF034u;
        // 0x1cf038: 0xe7a10070  swc1        $f1, 0x70($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf034) {
            ctx->pc = 0x1CF060u;
            goto label_1cf060;
        }
    }
    ctx->pc = 0x1CF03Cu;
    // 0x1cf03c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cf03cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cf040: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cf040u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf044: 0x0  nop
    ctx->pc = 0x1cf044u;
    // NOP
    // 0x1cf048: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1cf048u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1cf04c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1cf04cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1cf050: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1cf050u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1cf054: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1cf054u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1cf058: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1cf058u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cf05c: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1cf05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_1cf060:
    // 0x1cf060: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x1cf060u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1cf064: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1cf064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf068: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x1CF068u;
    SET_GPR_U32(ctx, 31, 0x1CF070u);
    ctx->pc = 0x1CF06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF068u;
    // 0x1cf06c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x1CF068u, 0x1CF070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF070u;
label_1cf070:
    // 0x1cf070: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cf070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf074: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x1CF074u;
    SET_GPR_U32(ctx, 31, 0x1CF07Cu);
    ctx->pc = 0x1CF078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF074u;
    // 0x1cf078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x1CF074u, 0x1CF07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF07Cu;
label_1cf07c:
    // 0x1cf07c: 0xc07783e  jal         func_1DE0F8
    ctx->pc = 0x1CF07Cu;
    SET_GPR_U32(ctx, 31, 0x1CF084u);
    ctx->pc = 0x1CF080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF07Cu;
    // 0x1cf080: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE0F8u, 0x1CF07Cu, 0x1CF084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF084u;
label_1cf084:
    // 0x1cf084: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CF084u;
    {
        const bool branch_taken_0x1cf084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF084u;
        // 0x1cf088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf084) {
            ctx->pc = 0x1CF09Cu;
            goto label_1cf09c;
        }
    }
    ctx->pc = 0x1CF08Cu;
    // 0x1cf08c: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x1CF08Cu;
    SET_GPR_U32(ctx, 31, 0x1CF094u);
    ctx->pc = 0x1CF090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF08Cu;
    // 0x1cf090: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x1CF08Cu, 0x1CF094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF094u;
label_1cf094:
    // 0x1cf094: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1CF094u;
    {
        const bool branch_taken_0x1cf094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF094u;
        // 0x1cf098: 0xdfb000b0  ld          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf094) {
            ctx->pc = 0x1CF170u;
            goto label_1cf170;
        }
    }
    ctx->pc = 0x1CF09Cu;
label_1cf09c:
    // 0x1cf09c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1cf09cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1cf0a0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1cf0a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1cf0a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cf0a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf0a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cf0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf0ac: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1cf0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1cf0b0: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1cf0b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1cf0b4: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x1cf0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x1cf0b8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1cf0b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf0bc: 0xdbc20000  lqc2        $vf2, 0x0($fp)
    ctx->pc = 0x1cf0bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1cf0c0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1cf0c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cf0c4: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x1cf0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cf0c8: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1cf0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf0cc: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x1cf0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1cf0d0: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x1cf0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf0d4: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x1cf0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cf0d8: 0xc7a400ac  lwc1        $f4, 0xAC($sp)
    ctx->pc = 0x1cf0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1cf0dc: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1cf0dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1cf0e0: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x1cf0e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1cf0e4: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x1cf0e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1cf0e8: 0xe7a4009c  swc1        $f4, 0x9C($sp)
    ctx->pc = 0x1cf0e8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1cf0ec: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1cf0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cf0f0: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1cf0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cf0f4: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1cf0f4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1cf0f8: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1cf0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cf0fc: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1cf0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cf100: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1cf100u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1cf104: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1cf104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cf108: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1cf108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cf10c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1cf10cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1cf110: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1cf110u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cf114: 0x0  nop
    ctx->pc = 0x1cf114u;
    // NOP
    // 0x1cf118: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x1CF118u;
    {
        const bool branch_taken_0x1cf118 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cf118) {
            ctx->pc = 0x1CF11Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF118u;
            // 0x1cf11c: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF164u;
            goto label_1cf164;
        }
    }
    ctx->pc = 0x1CF120u;
    // 0x1cf120: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1cf120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cf124: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1cf124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cf128: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x1cf128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1cf12c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1cf12cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1cf130: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1cf130u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1cf134: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1cf134u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1cf138: 0x46010044  c1          0x10044
    ctx->pc = 0x1cf138u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1cf13c: 0xc6e00078  lwc1        $f0, 0x78($s7)
    ctx->pc = 0x1cf13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf140: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cf140u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cf144: 0x0  nop
    ctx->pc = 0x1cf144u;
    // NOP
    // 0x1cf148: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1CF148u;
    {
        const bool branch_taken_0x1cf148 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cf148) {
            ctx->pc = 0x1CF164u;
            goto label_1cf164;
        }
    }
    ctx->pc = 0x1CF150u;
    // 0x1cf150: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cf150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cf154: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cf154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf158: 0x0  nop
    ctx->pc = 0x1cf158u;
    // NOP
    // 0x1cf15c: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1cf15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1cf160: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1cf160u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1cf164:
    // 0x1cf164: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x1CF164u;
    SET_GPR_U32(ctx, 31, 0x1CF16Cu);
    ctx->pc = 0x1CF168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF164u;
    // 0x1cf168: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x1CF164u, 0x1CF16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF16Cu;
label_1cf16c:
    // 0x1cf16c: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x1cf16cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1cf170:
    // 0x1cf170: 0xdfb100b8  ld          $s1, 0xB8($sp)
    ctx->pc = 0x1cf170u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1cf174: 0xdfb200c0  ld          $s2, 0xC0($sp)
    ctx->pc = 0x1cf174u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1cf178: 0xdfb300c8  ld          $s3, 0xC8($sp)
    ctx->pc = 0x1cf178u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1cf17c: 0xdfb400d0  ld          $s4, 0xD0($sp)
    ctx->pc = 0x1cf17cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1cf180: 0xdfb500d8  ld          $s5, 0xD8($sp)
    ctx->pc = 0x1cf180u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1cf184: 0xdfb600e0  ld          $s6, 0xE0($sp)
    ctx->pc = 0x1cf184u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1cf188: 0xdfb700e8  ld          $s7, 0xE8($sp)
    ctx->pc = 0x1cf188u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1cf18c: 0xdfbe00f0  ld          $fp, 0xF0($sp)
    ctx->pc = 0x1cf18cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1cf190: 0xdfbf00f8  ld          $ra, 0xF8($sp)
    ctx->pc = 0x1cf190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1cf194: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x1cf194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cf198: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF198u;
        // 0x1cf19c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF1A0u;
}
