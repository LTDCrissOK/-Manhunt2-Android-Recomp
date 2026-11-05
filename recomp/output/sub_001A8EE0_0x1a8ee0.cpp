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

// Function: sub_001A8EE0
// Address: 0x1a8ee0 - 0x1a9230
void sub_001A8EE0_0x1a8ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8EE0_0x1a8ee0");
#endif

    switch (ctx->pc) {
        case 0x1a8f58u: goto label_1a8f58;
        case 0x1a9030u: goto label_1a9030;
        case 0x1a90a4u: goto label_1a90a4;
        case 0x1a9134u: goto label_1a9134;
        case 0x1a91d4u: goto label_1a91d4;
        default: break;
    }

    ctx->pc = 0x1a8ee0u;

    // 0x1a8ee0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a8ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a8ee4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a8ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a8ee8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a8ee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a8eec: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a8eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1a8ef0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1a8ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1a8ef4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a8ef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8ef8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1a8ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1a8efc: 0x26110174  addiu       $s1, $s0, 0x174
    ctx->pc = 0x1a8efcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 372));
    // 0x1a8f00: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1a8f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1a8f04: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a8f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1a8f08: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1a8f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1a8f0c: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x1a8f0cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1a8f10: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1a8f10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1a8f14: 0xc6010174  lwc1        $f1, 0x174($s0)
    ctx->pc = 0x1a8f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a8f18: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1a8f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8f1c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1a8f1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1a8f20: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1a8f20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1a8f24: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a8f24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a8f28: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x1a8f28u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a8f2c: 0x0  nop
    ctx->pc = 0x1a8f2cu;
    // NOP
    // 0x1a8f30: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x1A8F30u;
    {
        const bool branch_taken_0x1a8f30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A8F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F30u;
        // 0x1a8f34: 0x2602016c  addiu       $v0, $s0, 0x16C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 364));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8f30) {
            ctx->pc = 0x1A8F7Cu;
            goto label_1a8f7c;
        }
    }
    ctx->pc = 0x1A8F38u;
    // 0x1a8f38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a8f38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a8f3c: 0x0  nop
    ctx->pc = 0x1a8f3cu;
    // NOP
    // 0x1a8f40: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1a8f40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a8f44: 0x0  nop
    ctx->pc = 0x1a8f44u;
    // NOP
    // 0x1a8f48: 0x4503000d  bc1tl       . + 4 + (0xD << 2)
    ctx->pc = 0x1A8F48u;
    {
        const bool branch_taken_0x1a8f48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a8f48) {
            ctx->pc = 0x1A8F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8F48u;
            // 0x1a8f4c: 0xc603016c  lwc1        $f3, 0x16C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8F80u;
            goto label_1a8f80;
        }
    }
    ctx->pc = 0x1A8F50u;
    // 0x1a8f50: 0xc0f735c  jal         func_3DCD70
    ctx->pc = 0x1A8F50u;
    SET_GPR_U32(ctx, 31, 0x1A8F58u);
    ctx->pc = 0x1A8F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8F50u;
    // 0x1a8f54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCD70u, 0x1A8F50u, 0x1A8F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8F58u;
label_1a8f58:
    // 0x1a8f58: 0xc6010174  lwc1        $f1, 0x174($s0)
    ctx->pc = 0x1a8f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a8f5c: 0x0  nop
    ctx->pc = 0x1a8f5cu;
    // NOP
    // 0x1a8f60: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1a8f60u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1a8f64: 0xe6010174  swc1        $f1, 0x174($s0)
    ctx->pc = 0x1a8f64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 372), bits); }
    // 0x1a8f68: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x1a8f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a8f6c: 0x0  nop
    ctx->pc = 0x1a8f6cu;
    // NOP
    // 0x1a8f70: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x1a8f70u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1a8f74: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x1a8f74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1a8f78: 0x2602016c  addiu       $v0, $s0, 0x16C
    ctx->pc = 0x1a8f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 364));
label_1a8f7c:
    // 0x1a8f7c: 0xc603016c  lwc1        $f3, 0x16C($s0)
    ctx->pc = 0x1a8f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a8f80:
    // 0x1a8f80: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x1a8f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a8f84: 0x46031802  mul.s       $f0, $f3, $f3
    ctx->pc = 0x1a8f84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x1a8f88: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1a8f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1a8f8c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a8f8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1a8f90: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a8f90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a8f94: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x1a8f94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x1a8f98: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a8f98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a8f9c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1a8f9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a8fa0: 0x0  nop
    ctx->pc = 0x1a8fa0u;
    // NOP
    // 0x1a8fa4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1A8FA4u;
    {
        const bool branch_taken_0x1a8fa4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A8FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8FA4u;
        // 0x1a8fa8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8fa4) {
            ctx->pc = 0x1A8FBCu;
            goto label_1a8fbc;
        }
    }
    ctx->pc = 0x1A8FACu;
    // 0x1a8fac: 0xc6000174  lwc1        $f0, 0x174($s0)
    ctx->pc = 0x1a8facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8fb0: 0xc6010178  lwc1        $f1, 0x178($s0)
    ctx->pc = 0x1a8fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a8fb4: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x1A8FB4u;
    {
        const bool branch_taken_0x1a8fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8FB4u;
        // 0x1a8fb8: 0xe600016c  swc1        $f0, 0x16C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8fb4) {
            ctx->pc = 0x1A9200u;
            goto label_1a9200;
        }
    }
    ctx->pc = 0x1A8FBCu;
label_1a8fbc:
    // 0x1a8fbc: 0x26020174  addiu       $v0, $s0, 0x174
    ctx->pc = 0x1a8fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 372));
    // 0x1a8fc0: 0xc6000174  lwc1        $f0, 0x174($s0)
    ctx->pc = 0x1a8fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8fc4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1a8fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a8fc8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1a8fc8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8fcc: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1a8fccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1a8fd0: 0x8e040148  lw          $a0, 0x148($s0)
    ctx->pc = 0x1a8fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1a8fd4: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1a8fd4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x1a8fd8: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x1a8fd8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1a8fdc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1a8fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a8fe0: 0x460108c2  mul.s       $f3, $f1, $f1
    ctx->pc = 0x1a8fe0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1a8fe4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1a8fe4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1a8fe8: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x1a8fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x1a8fec: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1a8fecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1a8ff0: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x1a8ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x1a8ff4: 0x0  nop
    ctx->pc = 0x1a8ff4u;
    // NOP
    // 0x1a8ff8: 0x0  nop
    ctx->pc = 0x1a8ff8u;
    // NOP
    // 0x1a8ffc: 0x46020544  c1          0x20544
    ctx->pc = 0x1a8ffcu;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x1a9000: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1A9000u;
    {
        const bool branch_taken_0x1a9000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9000u;
        // 0x1a9004: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9000) {
            ctx->pc = 0x1A9100u;
            goto label_1a9100;
        }
    }
    ctx->pc = 0x1A9008u;
    // 0x1a9008: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1a9008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1a900c: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x1a900cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x1a9010: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1a9010u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a9014: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A9014u;
    {
        const bool branch_taken_0x1a9014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9014u;
        // 0x1a9018: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9014) {
            ctx->pc = 0x1A9050u;
            goto label_1a9050;
        }
    }
    ctx->pc = 0x1A901Cu;
    // 0x1a901c: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1a901cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1a9020: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A9020u;
    {
        const bool branch_taken_0x1a9020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a9020) {
            ctx->pc = 0x1A9024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9020u;
            // 0x1a9024: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9054u;
            goto label_1a9054;
        }
    }
    ctx->pc = 0x1A9028u;
    // 0x1a9028: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x1A9028u;
    SET_GPR_U32(ctx, 31, 0x1A9030u);
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x1A9028u, 0x1A9030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9030u;
label_1a9030:
    // 0x1a9030: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A9030u;
    {
        const bool branch_taken_0x1a9030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9030) {
            ctx->pc = 0x1A9034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9030u;
            // 0x1a9034: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9054u;
            goto label_1a9054;
        }
    }
    ctx->pc = 0x1A9038u;
    // 0x1a9038: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1a9038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1a903c: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x1a903cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1a9040: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A9040u;
    {
        const bool branch_taken_0x1a9040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A9044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9040u;
        // 0x1a9044: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9040) {
            ctx->pc = 0x1A9050u;
            goto label_1a9050;
        }
    }
    ctx->pc = 0x1A9048u;
    // 0x1a9048: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A9048u;
    {
        const bool branch_taken_0x1a9048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a9048) {
            ctx->pc = 0x1A9054u;
            goto label_1a9054;
        }
    }
    ctx->pc = 0x1A9050u;
label_1a9050:
    // 0x1a9050: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1a9050u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9054:
    // 0x1a9054: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A9054u;
    {
        const bool branch_taken_0x1a9054 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9054) {
            ctx->pc = 0x1A9074u;
            goto label_1a9074;
        }
    }
    ctx->pc = 0x1A905Cu;
    // 0x1a905c: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x1a905cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1a9060: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a9060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a9064: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a9064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a9068: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a9068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a906c: 0x3863003d  xori        $v1, $v1, 0x3D
    ctx->pc = 0x1a906cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)61);
    // 0x1a9070: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x1a9070u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1a9074:
    // 0x1a9074: 0x1660001e  bnez        $s3, . + 4 + (0x1E << 2)
    ctx->pc = 0x1A9074u;
    {
        const bool branch_taken_0x1a9074 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9074u;
        // 0x1a9078: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9074) {
            ctx->pc = 0x1A90F0u;
            goto label_1a90f0;
        }
    }
    ctx->pc = 0x1A907Cu;
    // 0x1a907c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1a907cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1a9080: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x1a9080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x1a9084: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1a9084u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a9088: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A9088u;
    {
        const bool branch_taken_0x1a9088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9088u;
        // 0x1a908c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9088) {
            ctx->pc = 0x1A90C4u;
            goto label_1a90c4;
        }
    }
    ctx->pc = 0x1A9090u;
    // 0x1a9090: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1a9090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1a9094: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A9094u;
    {
        const bool branch_taken_0x1a9094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a9094) {
            ctx->pc = 0x1A9098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9094u;
            // 0x1a9098: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A90C8u;
            goto label_1a90c8;
        }
    }
    ctx->pc = 0x1A909Cu;
    // 0x1a909c: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x1A909Cu;
    SET_GPR_U32(ctx, 31, 0x1A90A4u);
    ctx->pc = 0x1A90A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A909Cu;
    // 0x1a90a0: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x1A909Cu, 0x1A90A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A90A4u;
label_1a90a4:
    // 0x1a90a4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A90A4u;
    {
        const bool branch_taken_0x1a90a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a90a4) {
            ctx->pc = 0x1A90A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A90A4u;
            // 0x1a90a8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A90C8u;
            goto label_1a90c8;
        }
    }
    ctx->pc = 0x1A90ACu;
    // 0x1a90ac: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1a90acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1a90b0: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x1a90b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1a90b4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A90B4u;
    {
        const bool branch_taken_0x1a90b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A90B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90B4u;
        // 0x1a90b8: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a90b4) {
            ctx->pc = 0x1A90C4u;
            goto label_1a90c4;
        }
    }
    ctx->pc = 0x1A90BCu;
    // 0x1a90bc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A90BCu;
    {
        const bool branch_taken_0x1a90bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a90bc) {
            ctx->pc = 0x1A90C8u;
            goto label_1a90c8;
        }
    }
    ctx->pc = 0x1A90C4u;
label_1a90c4:
    // 0x1a90c4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1a90c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a90c8:
    // 0x1a90c8: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A90C8u;
    {
        const bool branch_taken_0x1a90c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a90c8) {
            ctx->pc = 0x1A90E8u;
            goto label_1a90e8;
        }
    }
    ctx->pc = 0x1A90D0u;
    // 0x1a90d0: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x1a90d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1a90d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a90d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a90d8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a90d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a90dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a90dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a90e0: 0x38630041  xori        $v1, $v1, 0x41
    ctx->pc = 0x1a90e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)65);
    // 0x1a90e4: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x1a90e4u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1a90e8:
    // 0x1a90e8: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A90E8u;
    {
        const bool branch_taken_0x1a90e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a90e8) {
            ctx->pc = 0x1A9100u;
            goto label_1a9100;
        }
    }
    ctx->pc = 0x1A90F0u;
label_1a90f0:
    // 0x1a90f0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1a90f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1a90f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a90f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a90f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A90F8u;
    {
        const bool branch_taken_0x1a90f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A90FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90F8u;
        // 0x1a90fc: 0x4600ad02  mul.s       $f20, $f21, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a90f8) {
            ctx->pc = 0x1A9110u;
            goto label_1a9110;
        }
    }
    ctx->pc = 0x1A9100u;
label_1a9100:
    // 0x1a9100: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1a9100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1a9104: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a9104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9108: 0x0  nop
    ctx->pc = 0x1a9108u;
    // NOP
    // 0x1a910c: 0x4600ad02  mul.s       $f20, $f21, $f0
    ctx->pc = 0x1a910cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1a9110:
    // 0x1a9110: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1a9110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1a9114: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x1a9114u;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9118: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1a9118u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1a911c: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x1a911cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a9120: 0x0  nop
    ctx->pc = 0x1a9120u;
    // NOP
    // 0x1a9124: 0x45020034  bc1fl       . + 4 + (0x34 << 2)
    ctx->pc = 0x1A9124u;
    {
        const bool branch_taken_0x1a9124 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a9124) {
            ctx->pc = 0x1A9128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9124u;
            // 0x1a9128: 0xc6000174  lwc1        $f0, 0x174($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A91F8u;
            goto label_1a91f8;
        }
    }
    ctx->pc = 0x1A912Cu;
    // 0x1a912c: 0xc0f735c  jal         func_3DCD70
    ctx->pc = 0x1A912Cu;
    SET_GPR_U32(ctx, 31, 0x1A9134u);
    ctx->pc = 0x1A9130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A912Cu;
    // 0x1a9130: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCD70u, 0x1A912Cu, 0x1A9134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9134u;
label_1a9134:
    // 0x1a9134: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1a9134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a9138: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1a9138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a913c: 0x0  nop
    ctx->pc = 0x1a913cu;
    // NOP
    // 0x1a9140: 0x0  nop
    ctx->pc = 0x1a9140u;
    // NOP
    // 0x1a9144: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x1a9144u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1a9148: 0xc603016c  lwc1        $f3, 0x16C($s0)
    ctx->pc = 0x1a9148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a914c: 0x0  nop
    ctx->pc = 0x1a914cu;
    // NOP
    // 0x1a9150: 0x0  nop
    ctx->pc = 0x1a9150u;
    // NOP
    // 0x1a9154: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1a9154u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1a9158: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a9158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1a915c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a915cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1a9160: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1a9160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1a9164: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x1a9164u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x1a9168: 0x46140942  mul.s       $f5, $f1, $f20
    ctx->pc = 0x1a9168u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1a916c: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x1a916cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1a9170: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1a9170u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a9174: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x1a9174u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1a9178: 0xe603016c  swc1        $f3, 0x16C($s0)
    ctx->pc = 0x1a9178u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
    // 0x1a917c: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1a917cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9180: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x1a9180u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x1a9184: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x1a9184u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1a9188: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1a9188u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1a918c: 0xc600016c  lwc1        $f0, 0x16C($s0)
    ctx->pc = 0x1a918cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9190: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1a9190u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1a9194: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a9194u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a9198: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x1a9198u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a919c: 0x0  nop
    ctx->pc = 0x1a919cu;
    // NOP
    // 0x1a91a0: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1A91A0u;
    {
        const bool branch_taken_0x1a91a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a91a0) {
            ctx->pc = 0x1A91CCu;
            goto label_1a91cc;
        }
    }
    ctx->pc = 0x1A91A8u;
    // 0x1a91a8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1a91a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1a91ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a91acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a91b0: 0x0  nop
    ctx->pc = 0x1a91b0u;
    // NOP
    // 0x1a91b4: 0x46001043  div.s       $f1, $f2, $f0
    ctx->pc = 0x1a91b4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1a91b8: 0x46002803  div.s       $f0, $f5, $f0
    ctx->pc = 0x1a91b8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[5], ctx->f[0]); }
    // 0x1a91bc: 0xe601016c  swc1        $f1, 0x16C($s0)
    ctx->pc = 0x1a91bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
    // 0x1a91c0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1a91c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1a91c4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1a91c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a91c8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1a91c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1a91cc:
    // 0x1a91cc: 0xc0f735c  jal         func_3DCD70
    ctx->pc = 0x1A91CCu;
    SET_GPR_U32(ctx, 31, 0x1A91D4u);
    ctx->pc = 0x1A91D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A91CCu;
    // 0x1a91d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCD70u, 0x1A91CCu, 0x1A91D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A91D4u;
label_1a91d4:
    // 0x1a91d4: 0xc601016c  lwc1        $f1, 0x16C($s0)
    ctx->pc = 0x1a91d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a91d8: 0x0  nop
    ctx->pc = 0x1a91d8u;
    // NOP
    // 0x1a91dc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1a91dcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1a91e0: 0xe601016c  swc1        $f1, 0x16C($s0)
    ctx->pc = 0x1a91e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
    // 0x1a91e4: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x1a91e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a91e8: 0x0  nop
    ctx->pc = 0x1a91e8u;
    // NOP
    // 0x1a91ec: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x1a91ecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1a91f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A91F0u;
    {
        const bool branch_taken_0x1a91f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A91F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A91F0u;
        // 0x1a91f4: 0xe6220004  swc1        $f2, 0x4($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a91f0) {
            ctx->pc = 0x1A9204u;
            goto label_1a9204;
        }
    }
    ctx->pc = 0x1A91F8u;
label_1a91f8:
    // 0x1a91f8: 0xe600016c  swc1        $f0, 0x16C($s0)
    ctx->pc = 0x1a91f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
    // 0x1a91fc: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x1a91fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a9200:
    // 0x1a9200: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x1a9200u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1a9204:
    // 0x1a9204: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a9204u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a9208: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1a9208u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a920c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1a920cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a9210: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1a9210u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9214: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a9214u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a9218: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1a9218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a921c: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x1a921cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a9220: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1a9220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a9224: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9224u;
        // 0x1a9228: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A922Cu;
    // 0x1a922c: 0x0  nop
    ctx->pc = 0x1a922cu;
    // NOP
    ctx->pc = 0x1a9230u;
}
