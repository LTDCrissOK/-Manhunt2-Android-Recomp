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

// Function: sub_001A5EC8
// Address: 0x1a5ec8 - 0x1a6068
void sub_001A5EC8_0x1a5ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5EC8_0x1a5ec8");
#endif

    switch (ctx->pc) {
        case 0x1a5f88u: goto label_1a5f88;
        case 0x1a5ff4u: goto label_1a5ff4;
        case 0x1a6004u: goto label_1a6004;
        case 0x1a6014u: goto label_1a6014;
        case 0x1a6024u: goto label_1a6024;
        case 0x1a6034u: goto label_1a6034;
        case 0x1a6044u: goto label_1a6044;
        default: break;
    }

    ctx->pc = 0x1a5ec8u;

    // 0x1a5ec8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a5ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a5ecc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1a5eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1a5ed0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a5ed4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a5ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a5ed8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a5ed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5edc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a5edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a5ee0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a5ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a5ee4: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1a5ee4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1a5ee8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a5ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a5eec: 0x8c52bd50  lw          $s2, -0x42B0($v0)
    ctx->pc = 0x1a5eecu;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x1a5ef0: 0x8e110148  lw          $s1, 0x148($s0)
    ctx->pc = 0x1a5ef0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1a5ef4: 0x1632004d  bne         $s1, $s2, . + 4 + (0x4D << 2)
    ctx->pc = 0x1A5EF4u;
    {
        const bool branch_taken_0x1a5ef4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x1A5EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5EF4u;
        // 0x1a5ef8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5ef4) {
            ctx->pc = 0x1A602Cu;
            goto label_1a602c;
        }
    }
    ctx->pc = 0x1A5EFCu;
    // 0x1a5efc: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1a5efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1a5f00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a5f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a5f04: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5F04u;
    {
        const bool branch_taken_0x1a5f04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A5F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F04u;
        // 0x1a5f08: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f04) {
            ctx->pc = 0x1A5F14u;
            goto label_1a5f14;
        }
    }
    ctx->pc = 0x1A5F0Cu;
    // 0x1a5f0c: 0x14620047  bne         $v1, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x1A5F0Cu;
    {
        const bool branch_taken_0x1a5f0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a5f0c) {
            ctx->pc = 0x1A602Cu;
            goto label_1a602c;
        }
    }
    ctx->pc = 0x1A5F14u;
label_1a5f14:
    // 0x1a5f14: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1a5f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a5f18: 0x1662003c  bne         $s3, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1A5F18u;
    {
        const bool branch_taken_0x1a5f18 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a5f18) {
            ctx->pc = 0x1A600Cu;
            goto label_1a600c;
        }
    }
    ctx->pc = 0x1A5F20u;
    // 0x1a5f20: 0xc62110c4  lwc1        $f1, 0x10C4($s1)
    ctx->pc = 0x1a5f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5f24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a5f24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5f28: 0x0  nop
    ctx->pc = 0x1a5f28u;
    // NOP
    // 0x1a5f2c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1a5f2cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a5f30: 0x0  nop
    ctx->pc = 0x1a5f30u;
    // NOP
    // 0x1a5f34: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1A5F34u;
    {
        const bool branch_taken_0x1a5f34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A5F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F34u;
        // 0x1a5f38: 0x3c110048  lui         $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f34) {
            ctx->pc = 0x1A5F90u;
            goto label_1a5f90;
        }
    }
    ctx->pc = 0x1A5F3Cu;
    // 0x1a5f3c: 0x8e222b00  lw          $v0, 0x2B00($s1)
    ctx->pc = 0x1a5f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11008)));
    // 0x1a5f40: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A5F40u;
    {
        const bool branch_taken_0x1a5f40 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A5F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F40u;
        // 0x1a5f44: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f40) {
            ctx->pc = 0x1A5F5Cu;
            goto label_1a5f5c;
        }
    }
    ctx->pc = 0x1A5F48u;
    // 0x1a5f48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a5f48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5f4c: 0x0  nop
    ctx->pc = 0x1a5f4cu;
    // NOP
    // 0x1a5f50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a5f50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a5f54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A5F54u;
    {
        const bool branch_taken_0x1a5f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5f54) {
            ctx->pc = 0x1A5F74u;
            goto label_1a5f74;
        }
    }
    ctx->pc = 0x1A5F5Cu;
label_1a5f5c:
    // 0x1a5f5c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a5f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a5f60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a5f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a5f64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a5f64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5f68: 0x0  nop
    ctx->pc = 0x1a5f68u;
    // NOP
    // 0x1a5f6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a5f6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a5f70: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1a5f70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1a5f74:
    // 0x1a5f74: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a5f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1a5f78: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a5f78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1a5f7c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a5f7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a5f80: 0xc069746  jal         func_1A5D18
    ctx->pc = 0x1A5F80u;
    SET_GPR_U32(ctx, 31, 0x1A5F88u);
    ctx->pc = 0x1A5F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5F80u;
    // 0x1a5f84: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D18u, 0x1A5F80u, 0x1A5F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5F88u;
label_1a5f88:
    // 0x1a5f88: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1a5f88u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1a5f8c: 0xe65410c4  swc1        $f20, 0x10C4($s2)
    ctx->pc = 0x1a5f8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4292), bits); }
label_1a5f90:
    // 0x1a5f90: 0x8e222b00  lw          $v0, 0x2B00($s1)
    ctx->pc = 0x1a5f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11008)));
    // 0x1a5f94: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A5F94u;
    {
        const bool branch_taken_0x1a5f94 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A5F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F94u;
        // 0x1a5f98: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f94) {
            ctx->pc = 0x1A5FB0u;
            goto label_1a5fb0;
        }
    }
    ctx->pc = 0x1A5F9Cu;
    // 0x1a5f9c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a5f9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a5fa0: 0x0  nop
    ctx->pc = 0x1a5fa0u;
    // NOP
    // 0x1a5fa4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a5fa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a5fa8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A5FA8u;
    {
        const bool branch_taken_0x1a5fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5fa8) {
            ctx->pc = 0x1A5FC8u;
            goto label_1a5fc8;
        }
    }
    ctx->pc = 0x1A5FB0u;
label_1a5fb0:
    // 0x1a5fb0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a5fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a5fb4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a5fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a5fb8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a5fb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a5fbc: 0x0  nop
    ctx->pc = 0x1a5fbcu;
    // NOP
    // 0x1a5fc0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a5fc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a5fc4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a5fc4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a5fc8:
    // 0x1a5fc8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a5fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1a5fcc: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a5fccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1a5fd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a5fd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5fd4: 0xc64110c4  lwc1        $f1, 0x10C4($s2)
    ctx->pc = 0x1a5fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5fd8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a5fd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1a5fdc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a5fdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a5fe0: 0x0  nop
    ctx->pc = 0x1a5fe0u;
    // NOP
    // 0x1a5fe4: 0x45020018  bc1fl       . + 4 + (0x18 << 2)
    ctx->pc = 0x1A5FE4u;
    {
        const bool branch_taken_0x1a5fe4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a5fe4) {
            ctx->pc = 0x1A5FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5FE4u;
            // 0x1a5fe8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6048u;
            goto label_1a6048;
        }
    }
    ctx->pc = 0x1A5FECu;
    // 0x1a5fec: 0xc06a1c4  jal         func_1A8710
    ctx->pc = 0x1A5FECu;
    SET_GPR_U32(ctx, 31, 0x1A5FF4u);
    ctx->pc = 0x1A5FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5FECu;
    // 0x1a5ff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8710u, 0x1A5FECu, 0x1A5FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5FF4u;
label_1a5ff4:
    // 0x1a5ff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a5ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5ff8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1a5ff8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5ffc: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A5FFCu;
    SET_GPR_U32(ctx, 31, 0x1A6004u);
    ctx->pc = 0x1A6000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5FFCu;
    // 0x1a6000: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A5FFCu, 0x1A6004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6004u;
label_1a6004:
    // 0x1a6004: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A6004u;
    {
        const bool branch_taken_0x1a6004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6004u;
        // 0x1a6008: 0xae4010c4  sw          $zero, 0x10C4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6004) {
            ctx->pc = 0x1A6044u;
            goto label_1a6044;
        }
    }
    ctx->pc = 0x1A600Cu;
label_1a600c:
    // 0x1a600c: 0xc06a1c4  jal         func_1A8710
    ctx->pc = 0x1A600Cu;
    SET_GPR_U32(ctx, 31, 0x1A6014u);
    ctx->pc = 0x1A6010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A600Cu;
    // 0x1a6010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8710u, 0x1A600Cu, 0x1A6014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6014u;
label_1a6014:
    // 0x1a6014: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6018: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1a6018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a601c: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A601Cu;
    SET_GPR_U32(ctx, 31, 0x1A6024u);
    ctx->pc = 0x1A6020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A601Cu;
    // 0x1a6020: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A601Cu, 0x1A6024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6024u;
label_1a6024:
    // 0x1a6024: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A6024u;
    {
        const bool branch_taken_0x1a6024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6024u;
        // 0x1a6028: 0xae2010c4  sw          $zero, 0x10C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6024) {
            ctx->pc = 0x1A6044u;
            goto label_1a6044;
        }
    }
    ctx->pc = 0x1A602Cu;
label_1a602c:
    // 0x1a602c: 0xc06a1c4  jal         func_1A8710
    ctx->pc = 0x1A602Cu;
    SET_GPR_U32(ctx, 31, 0x1A6034u);
    ctx->pc = 0x1A6030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A602Cu;
    // 0x1a6030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8710u, 0x1A602Cu, 0x1A6034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6034u;
label_1a6034:
    // 0x1a6034: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6038: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1a6038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a603c: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A603Cu;
    SET_GPR_U32(ctx, 31, 0x1A6044u);
    ctx->pc = 0x1A6040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A603Cu;
    // 0x1a6040: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A603Cu, 0x1A6044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6044u;
label_1a6044:
    // 0x1a6044: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6044u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6048:
    // 0x1a6048: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a6048u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a604c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a604cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6050: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a6050u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a6054: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a6054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6058: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1a6058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a605c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A605Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A605Cu;
        // 0x1a6060: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A605Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6064u;
    // 0x1a6064: 0x0  nop
    ctx->pc = 0x1a6064u;
    // NOP
    ctx->pc = 0x1a6068u;
}
