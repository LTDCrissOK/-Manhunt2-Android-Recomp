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

// Function: sub_00252E98
// Address: 0x252e98 - 0x253060
void sub_00252E98_0x252e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252E98_0x252e98");
#endif

    switch (ctx->pc) {
        case 0x252f44u: goto label_252f44;
        case 0x252fa8u: goto label_252fa8;
        case 0x252fb0u: goto label_252fb0;
        default: break;
    }

    ctx->pc = 0x252e98u;

    // 0x252e98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x252e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x252e9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x252e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x252ea0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x252ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x252ea4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x252ea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252ea8: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x252ea8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x252eac: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x252eacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x252eb0: 0x8e020ff4  lw          $v0, 0xFF4($s0)
    ctx->pc = 0x252eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4084)));
    // 0x252eb4: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x252eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x252eb8: 0x10600061  beqz        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x252EB8u;
    {
        const bool branch_taken_0x252eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x252EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252EB8u;
        // 0x252ebc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252eb8) {
            ctx->pc = 0x253040u;
            goto label_253040;
        }
    }
    ctx->pc = 0x252EC0u;
    // 0x252ec0: 0x8e040ff0  lw          $a0, 0xFF0($s0)
    ctx->pc = 0x252ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
    // 0x252ec4: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x252ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x252ec8: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x252ec8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x252ecc: 0x5060005c  beql        $v1, $zero, . + 4 + (0x5C << 2)
    ctx->pc = 0x252ECCu;
    {
        const bool branch_taken_0x252ecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x252ecc) {
            ctx->pc = 0x252ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252ECCu;
            // 0x252ed0: 0xae00039c  sw          $zero, 0x39C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 924), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253040u;
            goto label_253040;
        }
    }
    ctx->pc = 0x252ED4u;
    // 0x252ed4: 0x8e020338  lw          $v0, 0x338($s0)
    ctx->pc = 0x252ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x252ed8: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x252ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x252edc: 0x54600058  bnel        $v1, $zero, . + 4 + (0x58 << 2)
    ctx->pc = 0x252EDCu;
    {
        const bool branch_taken_0x252edc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x252edc) {
            ctx->pc = 0x252EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252EDCu;
            // 0x252ee0: 0xae00039c  sw          $zero, 0x39C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 924), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253040u;
            goto label_253040;
        }
    }
    ctx->pc = 0x252EE4u;
    // 0x252ee4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x252ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x252ee8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x252ee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x252eec: 0xc48000a4  lwc1        $f0, 0xA4($a0)
    ctx->pc = 0x252eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252ef0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x252ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x252ef4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x252ef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x252ef8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x252ef8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252efc: 0x0  nop
    ctx->pc = 0x252efcu;
    // NOP
    // 0x252f00: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x252F00u;
    {
        const bool branch_taken_0x252f00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x252f00) {
            ctx->pc = 0x252F10u;
            goto label_252f10;
        }
    }
    ctx->pc = 0x252F08u;
    // 0x252f08: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x252F08u;
    {
        const bool branch_taken_0x252f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F08u;
        // 0x252f0c: 0xe48100a4  swc1        $f1, 0xA4($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x252f08) {
            ctx->pc = 0x252F20u;
            goto label_252f20;
        }
    }
    ctx->pc = 0x252F10u;
label_252f10:
    // 0x252f10: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x252f10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252f14: 0x0  nop
    ctx->pc = 0x252f14u;
    // NOP
    // 0x252f18: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x252F18u;
    {
        const bool branch_taken_0x252f18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x252f18) {
            ctx->pc = 0x252F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252F18u;
            // 0x252f1c: 0xe48200a4  swc1        $f2, 0xA4($a0) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x252F20u;
            goto label_252f20;
        }
    }
    ctx->pc = 0x252F20u;
label_252f20:
    // 0x252f20: 0x8e020ff0  lw          $v0, 0xFF0($s0)
    ctx->pc = 0x252f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
    // 0x252f24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x252f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x252f28: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x252f28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x252f2c: 0xc44c00a4  lwc1        $f12, 0xA4($v0)
    ctx->pc = 0x252f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x252f30: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x252f30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x252f34: 0x46006b41  sub.s       $f13, $f13, $f0
    ctx->pc = 0x252f34u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x252f38: 0x460d0344  c1          0xD0344
    ctx->pc = 0x252f38u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x252f3c: 0xc0e404c  jal         func_390130
    ctx->pc = 0x252F3Cu;
    SET_GPR_U32(ctx, 31, 0x252F44u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x252F3Cu, 0x252F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252F44u;
label_252f44:
    // 0x252f44: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x252f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x252f48: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x252f48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x252f4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x252f4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x252f50: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x252f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x252f54: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x252f54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x252f58: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x252f58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x252f5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x252f5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x252f60: 0x46000547  neg.s       $f21, $f0
    ctx->pc = 0x252f60u;
    ctx->f[21] = FPU_NEG_S(ctx->f[0]);
    // 0x252f64: 0x4602a834  c.lt.s      $f21, $f2
    ctx->pc = 0x252f64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252f68: 0x0  nop
    ctx->pc = 0x252f68u;
    // NOP
    // 0x252f6c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x252F6Cu;
    {
        const bool branch_taken_0x252f6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x252F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F6Cu;
        // 0x252f70: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252f6c) {
            ctx->pc = 0x252F9Cu;
            goto label_252f9c;
        }
    }
    ctx->pc = 0x252F74u;
    // 0x252f74: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x252f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
    // 0x252f78: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x252f78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x252f7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x252f7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252f80: 0x0  nop
    ctx->pc = 0x252f80u;
    // NOP
    // 0x252f84: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x252f84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252f88: 0x0  nop
    ctx->pc = 0x252f88u;
    // NOP
    // 0x252f8c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x252F8Cu;
    {
        const bool branch_taken_0x252f8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x252f8c) {
            ctx->pc = 0x252F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252F8Cu;
            // 0x252f90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252FA0u;
            goto label_252fa0;
        }
    }
    ctx->pc = 0x252F94u;
    // 0x252f94: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x252f94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x252f98: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x252f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_252f9c:
    // 0x252f9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x252f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_252fa0:
    // 0x252fa0: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x252FA0u;
    SET_GPR_U32(ctx, 31, 0x252FA8u);
    ctx->pc = 0x252FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252FA0u;
    // 0x252fa4: 0xc45496d4  lwc1        $f20, -0x692C($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x252FA0u, 0x252FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252FA8u;
label_252fa8:
    // 0x252fa8: 0xc097f76  jal         func_25FDD8
    ctx->pc = 0x252FA8u;
    SET_GPR_U32(ctx, 31, 0x252FB0u);
    ctx->pc = 0x252FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252FA8u;
    // 0x252fac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FDD8u, 0x252FA8u, 0x252FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252FB0u;
label_252fb0:
    // 0x252fb0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x252FB0u;
    {
        const bool branch_taken_0x252fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252FB0u;
        // 0x252fb4: 0xc6010398  lwc1        $f1, 0x398($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x252fb0) {
            ctx->pc = 0x252FCCu;
            goto label_252fcc;
        }
    }
    ctx->pc = 0x252FB8u;
    // 0x252fb8: 0x8e021004  lw          $v0, 0x1004($s0)
    ctx->pc = 0x252fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4100)));
    // 0x252fbc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x252FBCu;
    {
        const bool branch_taken_0x252fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x252fbc) {
            ctx->pc = 0x252FCCu;
            goto label_252fcc;
        }
    }
    ctx->pc = 0x252FC4u;
    // 0x252fc4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x252fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x252fc8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x252fc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_252fcc:
    // 0x252fcc: 0x4601a832  c.eq.s      $f21, $f1
    ctx->pc = 0x252fccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252fd0: 0x0  nop
    ctx->pc = 0x252fd0u;
    // NOP
    // 0x252fd4: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x252FD4u;
    {
        const bool branch_taken_0x252fd4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x252FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252FD4u;
        // 0x252fd8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252fd4) {
            ctx->pc = 0x25300Cu;
            goto label_25300c;
        }
    }
    ctx->pc = 0x252FDCu;
    // 0x252fdc: 0x4614a800  add.s       $f0, $f21, $f20
    ctx->pc = 0x252fdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x252fe0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x252fe0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252fe4: 0x0  nop
    ctx->pc = 0x252fe4u;
    // NOP
    // 0x252fe8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x252FE8u;
    {
        const bool branch_taken_0x252fe8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x252fe8) {
            ctx->pc = 0x252FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252FE8u;
            // 0x252fec: 0x4614a801  sub.s       $f0, $f21, $f20 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x252FF8u;
            goto label_252ff8;
        }
    }
    ctx->pc = 0x252FF0u;
    // 0x252ff0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x252FF0u;
    {
        const bool branch_taken_0x252ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252FF0u;
        // 0x252ff4: 0x46140841  sub.s       $f1, $f1, $f20 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x252ff0) {
            ctx->pc = 0x25300Cu;
            goto label_25300c;
        }
    }
    ctx->pc = 0x252FF8u;
label_252ff8:
    // 0x252ff8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x252ff8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252ffc: 0x0  nop
    ctx->pc = 0x252ffcu;
    // NOP
    // 0x253000: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x253000u;
    {
        const bool branch_taken_0x253000 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x253000) {
            ctx->pc = 0x253004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253000u;
            // 0x253004: 0x46140840  add.s       $f1, $f1, $f20 (Delay Slot)
            ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x253008u;
            goto label_253008;
        }
    }
    ctx->pc = 0x253008u;
label_253008:
    // 0x253008: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x253008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_25300c:
    // 0x25300c: 0xc44096b4  lwc1        $f0, -0x694C($v0)
    ctx->pc = 0x25300cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253010: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x253010u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253014: 0x0  nop
    ctx->pc = 0x253014u;
    // NOP
    // 0x253018: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x253018u;
    {
        const bool branch_taken_0x253018 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x253018) {
            ctx->pc = 0x25301Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253018u;
            // 0x25301c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25303Cu;
            goto label_25303c;
        }
    }
    ctx->pc = 0x253020u;
    // 0x253020: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x253020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x253024: 0xc44096b8  lwc1        $f0, -0x6948($v0)
    ctx->pc = 0x253024u;
    { uint32_t bits = FAST_READ32(0x3F96B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253028: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x253028u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25302c: 0x0  nop
    ctx->pc = 0x25302cu;
    // NOP
    // 0x253030: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x253030u;
    {
        const bool branch_taken_0x253030 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x253030) {
            ctx->pc = 0x253034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253030u;
            // 0x253034: 0xe601039c  swc1        $f1, 0x39C($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 924), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x253040u;
            goto label_253040;
        }
    }
    ctx->pc = 0x253038u;
    // 0x253038: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x253038u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_25303c:
    // 0x25303c: 0xe601039c  swc1        $f1, 0x39C($s0)
    ctx->pc = 0x25303cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 924), bits); }
label_253040:
    // 0x253040: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x253040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253044: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x253044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x253048: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x253048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25304c: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x25304cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x253050: 0x3e00008  jr          $ra
    ctx->pc = 0x253050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253050u;
        // 0x253054: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253058u;
    // 0x253058: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x253058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25305c: 0x0  nop
    ctx->pc = 0x25305cu;
    // NOP
    ctx->pc = 0x253060u;
}
