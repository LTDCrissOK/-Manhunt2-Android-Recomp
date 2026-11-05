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

// Function: sub_002A79A8
// Address: 0x2a79a8 - 0x2a7b08
void sub_002A79A8_0x2a79a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A79A8_0x2a79a8");
#endif

    switch (ctx->pc) {
        case 0x2a7a04u: goto label_2a7a04;
        case 0x2a7a1cu: goto label_2a7a1c;
        case 0x2a7a2cu: goto label_2a7a2c;
        case 0x2a7a7cu: goto label_2a7a7c;
        case 0x2a7a90u: goto label_2a7a90;
        case 0x2a7ab4u: goto label_2a7ab4;
        case 0x2a7adcu: goto label_2a7adc;
        default: break;
    }

    ctx->pc = 0x2a79a8u;

    // 0x2a79a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a79a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a79ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a79acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a79b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2a79b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2a79b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a79b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a79b8: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x2a79b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2a79bc: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2a79bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2a79c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a79c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a79c4: 0x5040004b  beql        $v0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x2A79C4u;
    {
        const bool branch_taken_0x2a79c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a79c4) {
            ctx->pc = 0x2A79C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A79C4u;
            // 0x2a79c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7AF4u;
            goto label_2a7af4;
        }
    }
    ctx->pc = 0x2A79CCu;
    // 0x2a79cc: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x2a79ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a79d0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2a79d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2a79d4: 0x0  nop
    ctx->pc = 0x2a79d4u;
    // NOP
    // 0x2a79d8: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2a79d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a79dc: 0x0  nop
    ctx->pc = 0x2a79dcu;
    // NOP
    // 0x2a79e0: 0x45000040  bc1f        . + 4 + (0x40 << 2)
    ctx->pc = 0x2A79E0u;
    {
        const bool branch_taken_0x2a79e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A79E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A79E0u;
        // 0x2a79e4: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a79e0) {
            ctx->pc = 0x2A7AE4u;
            goto label_2a7ae4;
        }
    }
    ctx->pc = 0x2A79E8u;
    // 0x2a79e8: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x2a79e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a79ec: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x2a79ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a79f0: 0x0  nop
    ctx->pc = 0x2a79f0u;
    // NOP
    // 0x2a79f4: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x2A79F4u;
    {
        const bool branch_taken_0x2a79f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a79f4) {
            ctx->pc = 0x2A7A24u;
            goto label_2a7a24;
        }
    }
    ctx->pc = 0x2A79FCu;
    // 0x2a79fc: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x2A79FCu;
    SET_GPR_U32(ctx, 31, 0x2A7A04u);
    ctx->pc = 0x2A7A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A79FCu;
    // 0x2a7a00: 0xc6140020  lwc1        $f20, 0x20($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x2A79FCu, 0x2A7A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7A04u;
label_2a7a04:
    // 0x2a7a04: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2a7a04u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2a7a08: 0xe6150028  swc1        $f21, 0x28($s0)
    ctx->pc = 0x2a7a08u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x2a7a0c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2a7a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a7a10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a7a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7a14: 0xc0aa0d2  jal         func_2A8348
    ctx->pc = 0x2A7A14u;
    SET_GPR_U32(ctx, 31, 0x2A7A1Cu);
    ctx->pc = 0x2A7A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7A14u;
    // 0x2a7a18: 0xe6140024  swc1        $f20, 0x24($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8348u, 0x2A7A14u, 0x2A7A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7A1Cu;
label_2a7a1c:
    // 0x2a7a1c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2A7A1Cu;
    {
        const bool branch_taken_0x2a7a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7A1Cu;
        // 0x2a7a20: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7a1c) {
            ctx->pc = 0x2A7AE0u;
            goto label_2a7ae0;
        }
    }
    ctx->pc = 0x2A7A24u;
label_2a7a24:
    // 0x2a7a24: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x2A7A24u;
    SET_GPR_U32(ctx, 31, 0x2A7A2Cu);
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x2A7A24u, 0x2A7A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7A2Cu;
label_2a7a2c:
    // 0x2a7a2c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2a7a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2a7a30: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a7a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a7a34: 0xc601002c  lwc1        $f1, 0x2C($s0)
    ctx->pc = 0x2a7a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7a38: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2a7a38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a7a3c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2a7a3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7a40: 0x0  nop
    ctx->pc = 0x2a7a40u;
    // NOP
    // 0x2a7a44: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7A44u;
    {
        const bool branch_taken_0x2a7a44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A7A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7A44u;
        // 0x2a7a48: 0x4600a8c6  mov.s       $f3, $f21 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7a44) {
            ctx->pc = 0x2A7A54u;
            goto label_2a7a54;
        }
    }
    ctx->pc = 0x2A7A4Cu;
    // 0x2a7a4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a7a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a7a50: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2a7a50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2a7a54:
    // 0x2a7a54: 0x0  nop
    ctx->pc = 0x2a7a54u;
    // NOP
    // 0x2a7a58: 0x46151832  c.eq.s      $f3, $f21
    ctx->pc = 0x2a7a58u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7a5c: 0x0  nop
    ctx->pc = 0x2a7a5cu;
    // NOP
    // 0x2a7a60: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7A60u;
    {
        const bool branch_taken_0x2a7a60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A7A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7A60u;
        // 0x2a7a64: 0xe6030028  swc1        $f3, 0x28($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7a60) {
            ctx->pc = 0x2A7A70u;
            goto label_2a7a70;
        }
    }
    ctx->pc = 0x2A7A68u;
    // 0x2a7a68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A7A68u;
    {
        const bool branch_taken_0x2a7a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7A68u;
        // 0x2a7a6c: 0xc614001c  lwc1        $f20, 0x1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7a68) {
            ctx->pc = 0x2A7A74u;
            goto label_2a7a74;
        }
    }
    ctx->pc = 0x2A7A70u;
label_2a7a70:
    // 0x2a7a70: 0xc6140020  lwc1        $f20, 0x20($s0)
    ctx->pc = 0x2a7a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2a7a74:
    // 0x2a7a74: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x2A7A74u;
    SET_GPR_U32(ctx, 31, 0x2A7A7Cu);
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x2A7A74u, 0x2A7A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7A7Cu;
label_2a7a7c:
    // 0x2a7a7c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2a7a7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2a7a80: 0xc6150010  lwc1        $f21, 0x10($s0)
    ctx->pc = 0x2a7a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a7a84: 0xc6140014  lwc1        $f20, 0x14($s0)
    ctx->pc = 0x2a7a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a7a88: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x2A7A88u;
    SET_GPR_U32(ctx, 31, 0x2A7A90u);
    ctx->pc = 0x2A7A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7A88u;
    // 0x2a7a8c: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x2A7A88u, 0x2A7A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7A90u;
label_2a7a90:
    // 0x2a7a90: 0x4615a501  sub.s       $f20, $f20, $f21
    ctx->pc = 0x2a7a90u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x2a7a94: 0xc60d0018  lwc1        $f13, 0x18($s0)
    ctx->pc = 0x2a7a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a7a98: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2a7a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a7a9c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2a7a9cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2a7aa0: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x2a7aa0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x2a7aa4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2a7aa4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2a7aa8: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2a7aa8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2a7aac: 0xc0aa0b6  jal         func_2A82D8
    ctx->pc = 0x2A7AACu;
    SET_GPR_U32(ctx, 31, 0x2A7AB4u);
    ctx->pc = 0x2A7AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7AACu;
    // 0x2a7ab0: 0x460d6340  add.s       $f13, $f12, $f13 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A82D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A82D8u, 0x2A7AACu, 0x2A7AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7AB4u;
label_2a7ab4:
    // 0x2a7ab4: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x2a7ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7ab8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a7ab8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7abc: 0x0  nop
    ctx->pc = 0x2a7abcu;
    // NOP
    // 0x2a7ac0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2a7ac0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7ac4: 0x0  nop
    ctx->pc = 0x2a7ac4u;
    // NOP
    // 0x2a7ac8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A7AC8u;
    {
        const bool branch_taken_0x2a7ac8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A7ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7AC8u;
        // 0x2a7acc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7ac8) {
            ctx->pc = 0x2A7AD4u;
            goto label_2a7ad4;
        }
    }
    ctx->pc = 0x2A7AD0u;
    // 0x2a7ad0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a7ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a7ad4:
    // 0x2a7ad4: 0xc0aa0d2  jal         func_2A8348
    ctx->pc = 0x2A7AD4u;
    SET_GPR_U32(ctx, 31, 0x2A7ADCu);
    ctx->pc = 0x2A7AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7AD4u;
    // 0x2a7ad8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8348u, 0x2A7AD4u, 0x2A7ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7ADCu;
label_2a7adc:
    // 0x2a7adc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2a7adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_2a7ae0:
    // 0x2a7ae0: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x2a7ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7ae4:
    // 0x2a7ae4: 0xc4412b30  lwc1        $f1, 0x2B30($v0)
    ctx->pc = 0x2a7ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7ae8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a7ae8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a7aec: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x2a7aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x2a7af0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a7af0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a7af4:
    // 0x2a7af4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2a7af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a7af8: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x2a7af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a7afc: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2a7afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a7b00: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7B00u;
        // 0x2a7b04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7B08u;
}
