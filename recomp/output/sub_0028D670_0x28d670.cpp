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

// Function: sub_0028D670
// Address: 0x28d670 - 0x28d9f8
void sub_0028D670_0x28d670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D670_0x28d670");
#endif

    switch (ctx->pc) {
        case 0x28d750u: goto label_28d750;
        case 0x28d80cu: goto label_28d80c;
        case 0x28d8a4u: goto label_28d8a4;
        case 0x28d8d8u: goto label_28d8d8;
        case 0x28d918u: goto label_28d918;
        case 0x28d920u: goto label_28d920;
        case 0x28d980u: goto label_28d980;
        case 0x28d988u: goto label_28d988;
        default: break;
    }

    ctx->pc = 0x28d670u;

    // 0x28d670: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28d670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28d674: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x28d674u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x28d678: 0x8c43bd5c  lw          $v1, -0x42A4($v0)
    ctx->pc = 0x28d678u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD5Cu));
    // 0x28d67c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x28d67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x28d680: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x28d680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x28d684: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x28d684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x28d688: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x28d688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x28d68c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x28d68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x28d690: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x28d690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x28d694: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x28d694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x28d698: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x28d698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x28d69c: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x28d69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x28d6a0: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x28d6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x28d6a4: 0xe7ba00b0  swc1        $f26, 0xB0($sp)
    ctx->pc = 0x28d6a4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x28d6a8: 0xe7b900a8  swc1        $f25, 0xA8($sp)
    ctx->pc = 0x28d6a8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x28d6ac: 0xe7b800a0  swc1        $f24, 0xA0($sp)
    ctx->pc = 0x28d6acu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x28d6b0: 0xe7b70098  swc1        $f23, 0x98($sp)
    ctx->pc = 0x28d6b0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x28d6b4: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x28d6b4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x28d6b8: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x28d6b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x28d6bc: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D6BCu;
    {
        const bool branch_taken_0x28d6bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D6BCu;
        // 0x28d6c0: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d6bc) {
            ctx->pc = 0x28D6D4u;
            goto label_28d6d4;
        }
    }
    ctx->pc = 0x28D6C4u;
    // 0x28d6c4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28d6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28d6c8: 0x9043b821  lbu         $v1, -0x47DF($v0)
    ctx->pc = 0x28d6c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FB821u));
    // 0x28d6cc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D6CCu;
    {
        const bool branch_taken_0x28d6cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D6CCu;
        // 0x28d6d0: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d6cc) {
            ctx->pc = 0x28D6E0u;
            goto label_28d6e0;
        }
    }
    ctx->pc = 0x28D6D4u;
label_28d6d4:
    // 0x28d6d4: 0x4480c800  mtc1        $zero, $f25
    ctx->pc = 0x28d6d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x28d6d8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x28D6D8u;
    {
        const bool branch_taken_0x28d6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D6D8u;
        // 0x28d6dc: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d6d8) {
            ctx->pc = 0x28D730u;
            goto label_28d730;
        }
    }
    ctx->pc = 0x28D6E0u;
label_28d6e0:
    // 0x28d6e0: 0x8c422b40  lw          $v0, 0x2B40($v0)
    ctx->pc = 0x28d6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11072)));
    // 0x28d6e4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28D6E4u;
    {
        const bool branch_taken_0x28d6e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28D6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D6E4u;
        // 0x28d6e8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d6e4) {
            ctx->pc = 0x28D700u;
            goto label_28d700;
        }
    }
    ctx->pc = 0x28D6ECu;
    // 0x28d6ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28d6ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28d6f0: 0x0  nop
    ctx->pc = 0x28d6f0u;
    // NOP
    // 0x28d6f4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28d6f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28d6f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28D6F8u;
    {
        const bool branch_taken_0x28d6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d6f8) {
            ctx->pc = 0x28D718u;
            goto label_28d718;
        }
    }
    ctx->pc = 0x28D700u;
label_28d700:
    // 0x28d700: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28d700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28d704: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28d704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28d708: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28d708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28d70c: 0x0  nop
    ctx->pc = 0x28d70cu;
    // NOP
    // 0x28d710: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28d710u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28d714: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x28d714u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_28d718:
    // 0x28d718: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x28d718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
    // 0x28d71c: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x28d71cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x28d720: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28d720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d724: 0x0  nop
    ctx->pc = 0x28d724u;
    // NOP
    // 0x28d728: 0x46000e42  mul.s       $f25, $f1, $f0
    ctx->pc = 0x28d728u;
    ctx->f[25] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28d72c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x28d72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_28d730:
    // 0x28d730: 0x3c0141c0  lui         $at, 0x41C0
    ctx->pc = 0x28d730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16832 << 16));
    // 0x28d734: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x28d734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x28d738: 0x24420f28  addiu       $v0, $v0, 0xF28
    ctx->pc = 0x28d738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3880));
    // 0x28d73c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x28d73cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x28d740: 0x241e0005  addiu       $fp, $zero, 0x5
    ctx->pc = 0x28d740u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x28d744: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x28d744u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d748: 0x24510140  addiu       $s1, $v0, 0x140
    ctx->pc = 0x28d748u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x28d74c: 0x24540044  addiu       $s4, $v0, 0x44
    ctx->pc = 0x28d74cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
label_28d750:
    // 0x28d750: 0x8e22fec0  lw          $v0, -0x140($s1)
    ctx->pc = 0x28d750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294966976)));
    // 0x28d754: 0x1040008c  beqz        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x28D754u;
    {
        const bool branch_taken_0x28d754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D754u;
        // 0x28d758: 0x3c04004c  lui         $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d754) {
            ctx->pc = 0x28D988u;
            goto label_28d988;
        }
    }
    ctx->pc = 0x28D75Cu;
    // 0x28d75c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x28d75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d760: 0x24840f28  addiu       $a0, $a0, 0xF28
    ctx->pc = 0x28d760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3880));
    // 0x28d764: 0x951821  addu        $v1, $a0, $s5
    ctx->pc = 0x28d764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x28d768: 0x24820100  addiu       $v0, $a0, 0x100
    ctx->pc = 0x28d768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x28d76c: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x28d76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d770: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x28d770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x28d774: 0x46190002  mul.s       $f0, $f0, $f25
    ctx->pc = 0x28d774u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
    // 0x28d778: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x28d778u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28d77c: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x28d77cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x28d780: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x28d780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d784: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x28d784u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28d788: 0x0  nop
    ctx->pc = 0x28d788u;
    // NOP
    // 0x28d78c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x28D78Cu;
    {
        const bool branch_taken_0x28d78c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28d78c) {
            ctx->pc = 0x28D790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D78Cu;
            // 0x28d790: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D794u;
            goto label_28d794;
        }
    }
    ctx->pc = 0x28D794u;
label_28d794:
    // 0x28d794: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x28d794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d798: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x28d798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d79c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x28d79cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28d7a0: 0x0  nop
    ctx->pc = 0x28d7a0u;
    // NOP
    // 0x28d7a4: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x28D7A4u;
    {
        const bool branch_taken_0x28d7a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28d7a4) {
            ctx->pc = 0x28D7A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D7A4u;
            // 0x28d7a8: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D7E0u;
            goto label_28d7e0;
        }
    }
    ctx->pc = 0x28D7ACu;
    // 0x28d7ac: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x28d7acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x28d7b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28d7b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d7b4: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x28d7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x28d7b8: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x28d7b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x28d7bc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28d7bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x28d7c0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x28d7c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x28d7c4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x28d7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28d7c8: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D7C8u;
    {
        const bool branch_taken_0x28d7c8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x28D7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D7C8u;
        // 0x28d7cc: 0xae230080  sw          $v1, 0x80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d7c8) {
            ctx->pc = 0x28D7DCu;
            goto label_28d7dc;
        }
    }
    ctx->pc = 0x28D7D0u;
    // 0x28d7d0: 0xae200080  sw          $zero, 0x80($s1)
    ctx->pc = 0x28d7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
    // 0x28d7d4: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x28D7D4u;
    {
        const bool branch_taken_0x28d7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D7D4u;
        // 0x28d7d8: 0xae20fec0  sw          $zero, -0x140($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294966976), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d7d4) {
            ctx->pc = 0x28D988u;
            goto label_28d988;
        }
    }
    ctx->pc = 0x28D7DCu;
label_28d7dc:
    // 0x28d7dc: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x28d7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_28d7e0:
    // 0x28d7e0: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x28d7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x28d7e4: 0x24630f28  addiu       $v1, $v1, 0xF28
    ctx->pc = 0x28d7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3880));
    // 0x28d7e8: 0x3c12004c  lui         $s2, 0x4C
    ctx->pc = 0x28d7e8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)76 << 16));
    // 0x28d7ec: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x28d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x28d7f0: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x28d7f0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x28d7f4: 0xc44d00c0  lwc1        $f13, 0xC0($v0)
    ctx->pc = 0x28d7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28d7f8: 0x2656fd20  addiu       $s6, $s2, -0x2E0
    ctx->pc = 0x28d7f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966560));
    // 0x28d7fc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x28d7fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x28d800: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x28d800u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x28d804: 0xc0a2efc  jal         func_28BBF0
    ctx->pc = 0x28D804u;
    SET_GPR_U32(ctx, 31, 0x28D80Cu);
    ctx->pc = 0x28D808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D804u;
    // 0x28d808: 0x3c13004c  lui         $s3, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)76 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BBF0u, 0x28D804u, 0x28D80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D80Cu;
label_28d80c:
    // 0x28d80c: 0x2677fd18  addiu       $s7, $s3, -0x2E8
    ctx->pc = 0x28d80cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966552));
    // 0x28d810: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x28d810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x28d814: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x28d814u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x28d818: 0x2484ac50  addiu       $a0, $a0, -0x53B0
    ctx->pc = 0x28d818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945872));
    // 0x28d81c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x28d81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28d820: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x28d820u;
    { uint32_t bits = FAST_READ32(0x6BAC6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d824: 0x4618a582  mul.s       $f22, $f20, $f24
    ctx->pc = 0x28d824u;
    ctx->f[22] = FPU_MUL_S(ctx->f[20], ctx->f[24]);
    // 0x28d828: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x28d828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x28d82c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x28d82cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28d830: 0x4600a5c2  mul.s       $f23, $f20, $f0
    ctx->pc = 0x28d830u;
    ctx->f[23] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x28d834: 0xc644fd20  lwc1        $f4, -0x2E0($s2)
    ctx->pc = 0x28d834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294966560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28d838: 0x24840f28  addiu       $a0, $a0, 0xF28
    ctx->pc = 0x28d838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3880));
    // 0x28d83c: 0xc6c10004  lwc1        $f1, 0x4($s6)
    ctx->pc = 0x28d83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d840: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x28d840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x28d844: 0x46182102  mul.s       $f4, $f4, $f24
    ctx->pc = 0x28d844u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[24]);
    // 0x28d848: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x28d848u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28d84c: 0x4618bd42  mul.s       $f21, $f23, $f24
    ctx->pc = 0x28d84cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[23], ctx->f[24]);
    // 0x28d850: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x28d850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28d854: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x28d854u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x28d858: 0xc663fd18  lwc1        $f3, -0x2E8($s3)
    ctx->pc = 0x28d858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294966552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28d85c: 0xc6e50004  lwc1        $f5, 0x4($s7)
    ctx->pc = 0x28d85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28d860: 0x46152100  add.s       $f4, $f4, $f21
    ctx->pc = 0x28d860u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[21]);
    // 0x28d864: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x28d864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d868: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x28d868u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x28d86c: 0x46160840  add.s       $f1, $f1, $f22
    ctx->pc = 0x28d86cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
    // 0x28d870: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x28d870u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x28d874: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x28d874u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x28d878: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x28d878u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28d87c: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x28d87cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28d880: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x28d880u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x28d884: 0x45010040  bc1t        . + 4 + (0x40 << 2)
    ctx->pc = 0x28D884u;
    {
        const bool branch_taken_0x28d884 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28D888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D884u;
        // 0x28d888: 0xe7a50004  swc1        $f5, 0x4($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d884) {
            ctx->pc = 0x28D988u;
            goto label_28d988;
        }
    }
    ctx->pc = 0x28D88Cu;
    // 0x28d88c: 0x46050834  c.lt.s      $f1, $f5
    ctx->pc = 0x28d88cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28d890: 0x0  nop
    ctx->pc = 0x28d890u;
    // NOP
    // 0x28d894: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
    ctx->pc = 0x28D894u;
    {
        const bool branch_taken_0x28d894 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28D898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D894u;
        // 0x28d898: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d894) {
            ctx->pc = 0x28D98Cu;
            goto label_28d98c;
        }
    }
    ctx->pc = 0x28D89Cu;
    // 0x28d89c: 0xc0db22c  jal         func_36C8B0
    ctx->pc = 0x28D89Cu;
    SET_GPR_U32(ctx, 31, 0x28D8A4u);
    ctx->pc = 0x36C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C8B0u, 0x28D89Cu, 0x28D8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D8A4u;
label_28d8a4:
    // 0x28d8a4: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x28d8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28d8a8: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x28d8a8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    // 0x28d8ac: 0xc68d0000  lwc1        $f13, 0x0($s4)
    ctx->pc = 0x28d8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28d8b0: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x28d8b0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x28d8b4: 0x46156301  sub.s       $f12, $f12, $f21
    ctx->pc = 0x28d8b4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[21]);
    // 0x28d8b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28d8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d8bc: 0x46166b41  sub.s       $f13, $f13, $f22
    ctx->pc = 0x28d8bcu;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[22]);
    // 0x28d8c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28d8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d8c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28d8c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d8c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28d8c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d8cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28d8ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d8d0: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x28D8D0u;
    SET_GPR_U32(ctx, 31, 0x28D8D8u);
    ctx->pc = 0x28D8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D8D0u;
    // 0x28d8d4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x28D8D0u, 0x28D8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D8D8u;
label_28d8d8:
    // 0x28d8d8: 0xc64efd20  lwc1        $f14, -0x2E0($s2)
    ctx->pc = 0x28d8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294966560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x28d8dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28d8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d8e0: 0xc6cf0004  lwc1        $f15, 0x4($s6)
    ctx->pc = 0x28d8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x28d8e4: 0x4600d406  mov.s       $f16, $f26
    ctx->pc = 0x28d8e4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[26]);
    // 0x28d8e8: 0x46187382  mul.s       $f14, $f14, $f24
    ctx->pc = 0x28d8e8u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[24]);
    // 0x28d8ec: 0xc66cfd18  lwc1        $f12, -0x2E8($s3)
    ctx->pc = 0x28d8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294966552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28d8f0: 0x46187bc2  mul.s       $f15, $f15, $f24
    ctx->pc = 0x28d8f0u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[24]);
    // 0x28d8f4: 0xc6ed0004  lwc1        $f13, 0x4($s7)
    ctx->pc = 0x28d8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28d8f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28d8f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d8fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28d8fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d900: 0x460e6300  add.s       $f12, $f12, $f14
    ctx->pc = 0x28d900u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[14]);
    // 0x28d904: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28d904u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28d908: 0x460f6b40  add.s       $f13, $f13, $f15
    ctx->pc = 0x28d908u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[15]);
    // 0x28d90c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28d90cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d910: 0xc0da9a6  jal         func_36A698
    ctx->pc = 0x28D910u;
    SET_GPR_U32(ctx, 31, 0x28D918u);
    ctx->pc = 0x28D914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D910u;
    // 0x28d914: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A698u, 0x28D910u, 0x28D918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D918u;
label_28d918:
    // 0x28d918: 0xc0db234  jal         func_36C8D0
    ctx->pc = 0x28D918u;
    SET_GPR_U32(ctx, 31, 0x28D920u);
    ctx->pc = 0x36C8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C8D0u, 0x28D918u, 0x28D920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D920u;
label_28d920:
    // 0x28d920: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x28d920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x28d924: 0x53c00001  beql        $fp, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x28D924u;
    {
        const bool branch_taken_0x28d924 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d924) {
            ctx->pc = 0x28D928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D924u;
            // 0x28d928: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D92Cu;
            goto label_28d92c;
        }
    }
    ctx->pc = 0x28D92Cu;
label_28d92c:
    // 0x28d92c: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x28d92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28d930: 0x9e001a  div         $zero, $a0, $fp
    ctx->pc = 0x28d930u;
    { int32_t divisor = GPR_S32(ctx, 30);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x28d934: 0xc68d0000  lwc1        $f13, 0x0($s4)
    ctx->pc = 0x28d934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28d938: 0x417c2  srl         $v0, $a0, 31
    ctx->pc = 0x28d938u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x28d93c: 0x46156301  sub.s       $f12, $f12, $f21
    ctx->pc = 0x28d93cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[21]);
    // 0x28d940: 0x46166b41  sub.s       $f13, $f13, $f22
    ctx->pc = 0x28d940u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[22]);
    // 0x28d944: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x28d944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28d948: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x28d948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x28d94c: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x28d94cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x28d950: 0x2442f250  addiu       $v0, $v0, -0xDB0
    ctx->pc = 0x28d950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963792));
    // 0x28d954: 0x46156300  add.s       $f12, $f12, $f21
    ctx->pc = 0x28d954u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[21]);
    // 0x28d958: 0x46166b40  add.s       $f13, $f13, $f22
    ctx->pc = 0x28d958u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[22]);
    // 0x28d95c: 0x8c4801a4  lw          $t0, 0x1A4($v0)
    ctx->pc = 0x28d95cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x4BF3F4u));
    // 0x28d960: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x28d960u;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
    // 0x28d964: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x28d964u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x28d968: 0x4600d406  mov.s       $f16, $f26
    ctx->pc = 0x28d968u;
    ctx->f[16] = FPU_MOV_S(ctx->f[26]);
    // 0x28d96c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28d96cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28d970: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x28d970u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d974: 0x2812  mflo        $a1
    ctx->pc = 0x28d974u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x28d978: 0xc0da9a6  jal         func_36A698
    ctx->pc = 0x28D978u;
    SET_GPR_U32(ctx, 31, 0x28D980u);
    ctx->pc = 0x28D97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D978u;
    // 0x28d97c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A698u, 0x28D978u, 0x28D980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D980u;
label_28d980:
    // 0x28d980: 0xc0db190  jal         func_36C640
    ctx->pc = 0x28D980u;
    SET_GPR_U32(ctx, 31, 0x28D988u);
    ctx->pc = 0x36C640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C640u, 0x28D980u, 0x28D988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D988u;
label_28d988:
    // 0x28d988: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x28d988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_28d98c:
    // 0x28d98c: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x28d98cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x28d990: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x28d990u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x28d994: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x28d994u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x28d998: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28d998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28d99c: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x28d99cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x28d9a0: 0x1440ff6b  bnez        $v0, . + 4 + (-0x95 << 2)
    ctx->pc = 0x28D9A0u;
    {
        const bool branch_taken_0x28d9a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D9A0u;
        // 0x28d9a4: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d9a0) {
            ctx->pc = 0x28D750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28d750;
        }
    }
    ctx->pc = 0x28D9A8u;
    // 0x28d9a8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x28d9a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28d9ac: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x28d9acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x28d9b0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x28d9b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28d9b4: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x28d9b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x28d9b8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x28d9b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28d9bc: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x28d9bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x28d9c0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x28d9c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28d9c4: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x28d9c4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x28d9c8: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x28d9c8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28d9cc: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x28d9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x28d9d0: 0xc7ba00b0  lwc1        $f26, 0xB0($sp)
    ctx->pc = 0x28d9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x28d9d4: 0xc7b900a8  lwc1        $f25, 0xA8($sp)
    ctx->pc = 0x28d9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x28d9d8: 0xc7b800a0  lwc1        $f24, 0xA0($sp)
    ctx->pc = 0x28d9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x28d9dc: 0xc7b70098  lwc1        $f23, 0x98($sp)
    ctx->pc = 0x28d9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x28d9e0: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x28d9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x28d9e4: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x28d9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x28d9e8: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x28d9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28d9ec: 0x3e00008  jr          $ra
    ctx->pc = 0x28D9ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D9ECu;
        // 0x28d9f0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D9ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D9F4u;
    // 0x28d9f4: 0x0  nop
    ctx->pc = 0x28d9f4u;
    // NOP
    ctx->pc = 0x28d9f8u;
}
