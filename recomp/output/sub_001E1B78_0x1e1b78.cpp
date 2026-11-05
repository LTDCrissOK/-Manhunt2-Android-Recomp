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

// Function: sub_001E1B78
// Address: 0x1e1b78 - 0x1e2280
void sub_001E1B78_0x1e1b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1B78_0x1e1b78");
#endif

    switch (ctx->pc) {
        case 0x1e1bb0u: goto label_1e1bb0;
        case 0x1e1bc0u: goto label_1e1bc0;
        case 0x1e2214u: goto label_1e2214;
        default: break;
    }

    ctx->pc = 0x1e1b78u;

    // 0x1e1b78: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e1b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e1b7c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1e1b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1e1b80: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1e1b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1e1b84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e1b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1b88: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1e1b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1e1b8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e1b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1b90: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1e1b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1e1b94: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e1b94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1b98: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1e1b98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1e1b9c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1e1b9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1ba0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1e1ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1e1ba4: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1e1ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1e1ba8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E1BA8u;
    SET_GPR_U32(ctx, 31, 0x1E1BB0u);
    ctx->pc = 0x1E1BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1BA8u;
    // 0x1e1bac: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E1BA8u, 0x1E1BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1BB0u;
label_1e1bb0:
    // 0x1e1bb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e1bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e1bb4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1e1bb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1e1bb8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E1BB8u;
    SET_GPR_U32(ctx, 31, 0x1E1BC0u);
    ctx->pc = 0x1E1BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1BB8u;
    // 0x1e1bbc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E1BB8u, 0x1E1BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1BC0u;
label_1e1bc0:
    // 0x1e1bc0: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1e1bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1bc4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1e1bc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1bc8: 0x0  nop
    ctx->pc = 0x1e1bc8u;
    // NOP
    // 0x1e1bcc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1E1BCCu;
    {
        const bool branch_taken_0x1e1bcc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e1bcc) {
            ctx->pc = 0x1E1BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1BCCu;
            // 0x1e1bd0: 0xe6940000  swc1        $f20, 0x0($s4) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1BD4u;
            goto label_1e1bd4;
        }
    }
    ctx->pc = 0x1E1BD4u;
label_1e1bd4:
    // 0x1e1bd4: 0xc6460010  lwc1        $f6, 0x10($s2)
    ctx->pc = 0x1e1bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1e1bd8: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x1e1bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1e1bdc: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x1e1bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1be0: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x1e1be0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e1be4: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x1e1be4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1e1be8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1e1be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1e1bec: 0x46013141  sub.s       $f5, $f6, $f1
    ctx->pc = 0x1e1becu;
    ctx->f[5] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
    // 0x1e1bf0: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1e1bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1bf4: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x1e1bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1e1bf8: 0x46053834  c.lt.s      $f7, $f5
    ctx->pc = 0x1e1bf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1bfc: 0x0  nop
    ctx->pc = 0x1e1bfcu;
    // NOP
    // 0x1e1c00: 0x45000039  bc1f        . + 4 + (0x39 << 2)
    ctx->pc = 0x1E1C00u;
    {
        const bool branch_taken_0x1e1c00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E1C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C00u;
        // 0x1e1c04: 0x46003001  sub.s       $f0, $f6, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1c00) {
            ctx->pc = 0x1E1CE8u;
            goto label_1e1ce8;
        }
    }
    ctx->pc = 0x1E1C08u;
    // 0x1e1c08: 0x46070034  c.lt.s      $f0, $f7
    ctx->pc = 0x1e1c08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1c0c: 0x0  nop
    ctx->pc = 0x1e1c0cu;
    // NOP
    // 0x1e1c10: 0x45020038  bc1fl       . + 4 + (0x38 << 2)
    ctx->pc = 0x1E1C10u;
    {
        const bool branch_taken_0x1e1c10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e1c10) {
            ctx->pc = 0x1E1C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1C10u;
            // 0x1e1c14: 0xc6460020  lwc1        $f6, 0x20($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1CF4u;
            goto label_1e1cf4;
        }
    }
    ctx->pc = 0x1E1C18u;
    // 0x1e1c18: 0x46002881  sub.s       $f2, $f5, $f0
    ctx->pc = 0x1e1c18u;
    ctx->f[2] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x1e1c1c: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x1e1c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e1c20: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1e1c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1c24: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x1e1c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e1c28: 0x0  nop
    ctx->pc = 0x1e1c28u;
    // NOP
    // 0x1e1c2c: 0x0  nop
    ctx->pc = 0x1e1c2cu;
    // NOP
    // 0x1e1c30: 0x46022943  div.s       $f5, $f5, $f2
    ctx->pc = 0x1e1c30u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[5], ctx->f[2]); }
    // 0x1e1c34: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1e1c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1c38: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1e1c38u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x1e1c3c: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x1e1c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e1c40: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1e1c40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1e1c44: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1e1c44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1e1c48: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1e1c48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1e1c4c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1e1c4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x1e1c50: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1e1c50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1c54: 0x0  nop
    ctx->pc = 0x1e1c54u;
    // NOP
    // 0x1e1c58: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x1E1C58u;
    {
        const bool branch_taken_0x1e1c58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E1C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C58u;
        // 0x1e1c5c: 0x460300c0  add.s       $f3, $f0, $f3 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1c58) {
            ctx->pc = 0x1E1CE8u;
            goto label_1e1ce8;
        }
    }
    ctx->pc = 0x1E1C60u;
    // 0x1e1c60: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1e1c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1c64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e1c64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1c68: 0x0  nop
    ctx->pc = 0x1e1c68u;
    // NOP
    // 0x1e1c6c: 0x4502001f  bc1fl       . + 4 + (0x1F << 2)
    ctx->pc = 0x1E1C6Cu;
    {
        const bool branch_taken_0x1e1c6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e1c6c) {
            ctx->pc = 0x1E1C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1C6Cu;
            // 0x1e1c70: 0xc6460020  lwc1        $f6, 0x20($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1CECu;
            goto label_1e1cec;
        }
    }
    ctx->pc = 0x1E1C74u;
    // 0x1e1c74: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x1e1c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1c78: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1e1c78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1c7c: 0x0  nop
    ctx->pc = 0x1e1c7cu;
    // NOP
    // 0x1e1c80: 0x4502001a  bc1fl       . + 4 + (0x1A << 2)
    ctx->pc = 0x1E1C80u;
    {
        const bool branch_taken_0x1e1c80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e1c80) {
            ctx->pc = 0x1E1C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1C80u;
            // 0x1e1c84: 0xc6460020  lwc1        $f6, 0x20($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1CECu;
            goto label_1e1cec;
        }
    }
    ctx->pc = 0x1E1C88u;
    // 0x1e1c88: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1e1c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1c8c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1e1c8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1c90: 0x0  nop
    ctx->pc = 0x1e1c90u;
    // NOP
    // 0x1e1c94: 0x45020015  bc1fl       . + 4 + (0x15 << 2)
    ctx->pc = 0x1E1C94u;
    {
        const bool branch_taken_0x1e1c94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e1c94) {
            ctx->pc = 0x1E1C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1C94u;
            // 0x1e1c98: 0xc6460020  lwc1        $f6, 0x20($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1CECu;
            goto label_1e1cec;
        }
    }
    ctx->pc = 0x1E1C9Cu;
    // 0x1e1c9c: 0x46142834  c.lt.s      $f5, $f20
    ctx->pc = 0x1e1c9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1ca0: 0x0  nop
    ctx->pc = 0x1e1ca0u;
    // NOP
    // 0x1e1ca4: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1E1CA4u;
    {
        const bool branch_taken_0x1e1ca4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E1CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1CA4u;
        // 0x1e1ca8: 0x27a20020  addiu       $v0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1ca4) {
            ctx->pc = 0x1E1CE8u;
            goto label_1e1ce8;
        }
    }
    ctx->pc = 0x1E1CACu;
    // 0x1e1cac: 0xe7a60020  swc1        $f6, 0x20($sp)
    ctx->pc = 0x1e1cacu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1e1cb0: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1e1cb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1e1cb4: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x1e1cb4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1e1cb8: 0xe7a7002c  swc1        $f7, 0x2C($sp)
    ctx->pc = 0x1e1cb8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1e1cbc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e1cbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e1cc0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e1cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e1cc4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1e1cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1e1cc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e1cc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1ccc: 0xe7a7002c  swc1        $f7, 0x2C($sp)
    ctx->pc = 0x1e1cccu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1e1cd0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1e1cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1e1cd4: 0xe7a70024  swc1        $f7, 0x24($sp)
    ctx->pc = 0x1e1cd4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1e1cd8: 0xe7a70028  swc1        $f7, 0x28($sp)
    ctx->pc = 0x1e1cd8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1e1cdc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e1cdcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e1ce0: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1e1ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e1ce4: 0x46002d06  mov.s       $f20, $f5
    ctx->pc = 0x1e1ce4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[5]);
label_1e1ce8:
    // 0x1e1ce8: 0xc6460020  lwc1        $f6, 0x20($s2)
    ctx->pc = 0x1e1ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1e1cec:
    // 0x1e1cec: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x1e1cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1cf0: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x1e1cf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1e1cf4:
    // 0x1e1cf4: 0x46060941  sub.s       $f5, $f1, $f6
    ctx->pc = 0x1e1cf4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x1e1cf8: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1e1cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1cfc: 0x46053834  c.lt.s      $f7, $f5
    ctx->pc = 0x1e1cfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1d00: 0x0  nop
    ctx->pc = 0x1e1d00u;
    // NOP
    // 0x1e1d04: 0x45000035  bc1f        . + 4 + (0x35 << 2)
    ctx->pc = 0x1E1D04u;
    {
        const bool branch_taken_0x1e1d04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E1D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1D04u;
        // 0x1e1d08: 0x46060001  sub.s       $f0, $f0, $f6 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1d04) {
            ctx->pc = 0x1E1DDCu;
            goto label_1e1ddc;
        }
    }
    ctx->pc = 0x1E1D0Cu;
    // 0x1e1d0c: 0x46070034  c.lt.s      $f0, $f7
    ctx->pc = 0x1e1d0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1d10: 0x0  nop
    ctx->pc = 0x1e1d10u;
    // NOP
    // 0x1e1d14: 0x45020032  bc1fl       . + 4 + (0x32 << 2)
    ctx->pc = 0x1E1D14u;
    {
        const bool branch_taken_0x1e1d14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e1d14) {
            ctx->pc = 0x1E1D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1D14u;
            // 0x1e1d18: 0xc4c60004  lwc1        $f6, 0x4($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1DE0u;
            goto label_1e1de0;
        }
    }
    ctx->pc = 0x1E1D1Cu;
    // 0x1e1d1c: 0x46002881  sub.s       $f2, $f5, $f0
    ctx->pc = 0x1e1d1cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x1e1d20: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x1e1d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e1d24: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1e1d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1d28: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x1e1d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e1d2c: 0x0  nop
    ctx->pc = 0x1e1d2cu;
    // NOP
    // 0x1e1d30: 0x0  nop
    ctx->pc = 0x1e1d30u;
    // NOP
    // 0x1e1d34: 0x46022943  div.s       $f5, $f5, $f2
    ctx->pc = 0x1e1d34u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[5], ctx->f[2]); }
    // 0x1e1d38: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1e1d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1d3c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1e1d3cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x1e1d40: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x1e1d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e1d44: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1e1d44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1e1d48: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1e1d48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1e1d4c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1e1d4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1e1d50: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1e1d50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x1e1d54: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1e1d54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1d58: 0x0  nop
    ctx->pc = 0x1e1d58u;
    // NOP
    // 0x1e1d5c: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x1E1D5Cu;
    {
        const bool branch_taken_0x1e1d5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E1D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1D5Cu;
        // 0x1e1d60: 0x460300c0  add.s       $f3, $f0, $f3 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1d5c) {
            ctx->pc = 0x1E1DDCu;
            goto label_1e1ddc;
        }
    }
    ctx->pc = 0x1E1D64u;
    // 0x1e1d64: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1e1d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1d68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e1d68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1d6c: 0x0  nop
    ctx->pc = 0x1e1d6cu;
    // NOP
    // 0x1e1d70: 0x4502001b  bc1fl       . + 4 + (0x1B << 2)
    ctx->pc = 0x1E1D70u;
    {
        const bool branch_taken_0x1e1d70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e1d70) {
            ctx->pc = 0x1E1D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1D70u;
            // 0x1e1d74: 0xc4c60004  lwc1        $f6, 0x4($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1DE0u;
            goto label_1e1de0;
        }
    }
    ctx->pc = 0x1E1D78u;
    // 0x1e1d78: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x1e1d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1d7c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1e1d7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1d80: 0x0  nop
    ctx->pc = 0x1e1d80u;
    // NOP
    // 0x1e1d84: 0x45020016  bc1fl       . + 4 + (0x16 << 2)
    ctx->pc = 0x1E1D84u;
    {
        const bool branch_taken_0x1e1d84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e1d84) {
            ctx->pc = 0x1E1D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1D84u;
            // 0x1e1d88: 0xc4c60004  lwc1        $f6, 0x4($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1DE0u;
            goto label_1e1de0;
        }
    }
    ctx->pc = 0x1E1D8Cu;
    // 0x1e1d8c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1e1d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1d90: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1e1d90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1d94: 0x0  nop
    ctx->pc = 0x1e1d94u;
    // NOP
    // 0x1e1d98: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
    ctx->pc = 0x1E1D98u;
    {
        const bool branch_taken_0x1e1d98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e1d98) {
            ctx->pc = 0x1E1D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1D98u;
            // 0x1e1d9c: 0xc4c60004  lwc1        $f6, 0x4($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1DE0u;
            goto label_1e1de0;
        }
    }
    ctx->pc = 0x1E1DA0u;
    // 0x1e1da0: 0x46142834  c.lt.s      $f5, $f20
    ctx->pc = 0x1e1da0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1da4: 0x0  nop
    ctx->pc = 0x1e1da4u;
    // NOP
    // 0x1e1da8: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1E1DA8u;
    {
        const bool branch_taken_0x1e1da8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E1DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1DA8u;
        // 0x1e1dac: 0x27a30020  addiu       $v1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1da8) {
            ctx->pc = 0x1E1DDCu;
            goto label_1e1ddc;
        }
    }
    ctx->pc = 0x1E1DB0u;
    // 0x1e1db0: 0xe7a60020  swc1        $f6, 0x20($sp)
    ctx->pc = 0x1e1db0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1e1db4: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1e1db4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1e1db8: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x1e1db8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1e1dbc: 0xe7a7002c  swc1        $f7, 0x2C($sp)
    ctx->pc = 0x1e1dbcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1e1dc0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e1dc0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e1dc4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e1dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e1dc8: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1e1dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1e1dcc: 0x24425b30  addiu       $v0, $v0, 0x5B30
    ctx->pc = 0x1e1dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23344));
    // 0x1e1dd0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e1dd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x575B30u));
    // 0x1e1dd4: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1e1dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e1dd8: 0x46002d06  mov.s       $f20, $f5
    ctx->pc = 0x1e1dd8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[5]);
label_1e1ddc:
    // 0x1e1ddc: 0xc4c60004  lwc1        $f6, 0x4($a2)
    ctx->pc = 0x1e1ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1e1de0:
    // 0x1e1de0: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1e1de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1de4: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x1e1de4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1e1de8: 0x46013141  sub.s       $f5, $f6, $f1
    ctx->pc = 0x1e1de8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
    // 0x1e1dec: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1e1decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1df0: 0x46053834  c.lt.s      $f7, $f5
    ctx->pc = 0x1e1df0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1df4: 0x0  nop
    ctx->pc = 0x1e1df4u;
    // NOP
    // 0x1e1df8: 0x45000039  bc1f        . + 4 + (0x39 << 2)
    ctx->pc = 0x1E1DF8u;
    {
        const bool branch_taken_0x1e1df8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E1DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1DF8u;
        // 0x1e1dfc: 0x46003001  sub.s       $f0, $f6, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1df8) {
            ctx->pc = 0x1E1EE0u;
            goto label_1e1ee0;
        }
    }
    ctx->pc = 0x1E1E00u;
    // 0x1e1e00: 0x46070034  c.lt.s      $f0, $f7
    ctx->pc = 0x1e1e00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1e04: 0x0  nop
    ctx->pc = 0x1e1e04u;
    // NOP
    // 0x1e1e08: 0x45020038  bc1fl       . + 4 + (0x38 << 2)
    ctx->pc = 0x1E1E08u;
    {
        const bool branch_taken_0x1e1e08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e1e08) {
            ctx->pc = 0x1E1E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1E08u;
            // 0x1e1e0c: 0xc4a60004  lwc1        $f6, 0x4($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1EECu;
            goto label_1e1eec;
        }
    }
    ctx->pc = 0x1E1E10u;
    // 0x1e1e10: 0x46002881  sub.s       $f2, $f5, $f0
    ctx->pc = 0x1e1e10u;
    ctx->f[2] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x1e1e14: 0xc6040010  lwc1        $f4, 0x10($s0)
    ctx->pc = 0x1e1e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e1e18: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1e1e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1e1c: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x1e1e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e1e20: 0x0  nop
    ctx->pc = 0x1e1e20u;
    // NOP
    // 0x1e1e24: 0x0  nop
    ctx->pc = 0x1e1e24u;
    // NOP
    // 0x1e1e28: 0x46022943  div.s       $f5, $f5, $f2
    ctx->pc = 0x1e1e28u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[5], ctx->f[2]); }
    // 0x1e1e2c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1e1e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1e30: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1e1e30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x1e1e34: 0xc6420010  lwc1        $f2, 0x10($s2)
    ctx->pc = 0x1e1e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e1e38: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1e1e38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1e1e3c: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1e1e3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1e1e40: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1e1e40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1e1e44: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1e1e44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x1e1e48: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1e1e48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1e4c: 0x0  nop
    ctx->pc = 0x1e1e4cu;
    // NOP
    // 0x1e1e50: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x1E1E50u;
    {
        const bool branch_taken_0x1e1e50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E1E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E50u;
        // 0x1e1e54: 0x460300c0  add.s       $f3, $f0, $f3 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1e50) {
            ctx->pc = 0x1E1EE0u;
            goto label_1e1ee0;
        }
    }
    ctx->pc = 0x1E1E58u;
    // 0x1e1e58: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x1e1e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1e5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e1e5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1e60: 0x0  nop
    ctx->pc = 0x1e1e60u;
    // NOP
    // 0x1e1e64: 0x4502001f  bc1fl       . + 4 + (0x1F << 2)
    ctx->pc = 0x1E1E64u;
    {
        const bool branch_taken_0x1e1e64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e1e64) {
            ctx->pc = 0x1E1E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1E64u;
            // 0x1e1e68: 0xc4a60004  lwc1        $f6, 0x4($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1EE4u;
            goto label_1e1ee4;
        }
    }
    ctx->pc = 0x1E1E6Cu;
    // 0x1e1e6c: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x1e1e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1e70: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1e1e70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1e74: 0x0  nop
    ctx->pc = 0x1e1e74u;
    // NOP
    // 0x1e1e78: 0x4502001a  bc1fl       . + 4 + (0x1A << 2)
    ctx->pc = 0x1E1E78u;
    {
        const bool branch_taken_0x1e1e78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e1e78) {
            ctx->pc = 0x1E1E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1E78u;
            // 0x1e1e7c: 0xc4a60004  lwc1        $f6, 0x4($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1EE4u;
            goto label_1e1ee4;
        }
    }
    ctx->pc = 0x1E1E80u;
    // 0x1e1e80: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1e1e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1e84: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1e1e84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1e88: 0x0  nop
    ctx->pc = 0x1e1e88u;
    // NOP
    // 0x1e1e8c: 0x45020015  bc1fl       . + 4 + (0x15 << 2)
    ctx->pc = 0x1E1E8Cu;
    {
        const bool branch_taken_0x1e1e8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e1e8c) {
            ctx->pc = 0x1E1E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1E8Cu;
            // 0x1e1e90: 0xc4a60004  lwc1        $f6, 0x4($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1EE4u;
            goto label_1e1ee4;
        }
    }
    ctx->pc = 0x1E1E94u;
    // 0x1e1e94: 0x46142834  c.lt.s      $f5, $f20
    ctx->pc = 0x1e1e94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1e98: 0x0  nop
    ctx->pc = 0x1e1e98u;
    // NOP
    // 0x1e1e9c: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1E1E9Cu;
    {
        const bool branch_taken_0x1e1e9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E1EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E9Cu;
        // 0x1e1ea0: 0x27a20020  addiu       $v0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1e9c) {
            ctx->pc = 0x1E1EE0u;
            goto label_1e1ee0;
        }
    }
    ctx->pc = 0x1E1EA4u;
    // 0x1e1ea4: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1e1ea4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1e1ea8: 0xe7a60024  swc1        $f6, 0x24($sp)
    ctx->pc = 0x1e1ea8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1e1eac: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x1e1eacu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1e1eb0: 0xe7a7002c  swc1        $f7, 0x2C($sp)
    ctx->pc = 0x1e1eb0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1e1eb4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e1eb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e1eb8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e1eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e1ebc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1e1ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1e1ec0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e1ec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1ec4: 0xe7a70020  swc1        $f7, 0x20($sp)
    ctx->pc = 0x1e1ec4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1e1ec8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1e1ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1e1ecc: 0xe7a7002c  swc1        $f7, 0x2C($sp)
    ctx->pc = 0x1e1eccu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1e1ed0: 0xe7a70028  swc1        $f7, 0x28($sp)
    ctx->pc = 0x1e1ed0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1e1ed4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e1ed4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e1ed8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1e1ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e1edc: 0x46002d06  mov.s       $f20, $f5
    ctx->pc = 0x1e1edcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[5]);
label_1e1ee0:
    // 0x1e1ee0: 0xc4a60004  lwc1        $f6, 0x4($a1)
    ctx->pc = 0x1e1ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1e1ee4:
    // 0x1e1ee4: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1e1ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1ee8: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x1e1ee8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1e1eec:
    // 0x1e1eec: 0x46060941  sub.s       $f5, $f1, $f6
    ctx->pc = 0x1e1eecu;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x1e1ef0: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1e1ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1ef4: 0x46053834  c.lt.s      $f7, $f5
    ctx->pc = 0x1e1ef4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1ef8: 0x0  nop
    ctx->pc = 0x1e1ef8u;
    // NOP
    // 0x1e1efc: 0x45000035  bc1f        . + 4 + (0x35 << 2)
    ctx->pc = 0x1E1EFCu;
    {
        const bool branch_taken_0x1e1efc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E1F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1EFCu;
        // 0x1e1f00: 0x46060001  sub.s       $f0, $f0, $f6 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1efc) {
            ctx->pc = 0x1E1FD4u;
            goto label_1e1fd4;
        }
    }
    ctx->pc = 0x1E1F04u;
    // 0x1e1f04: 0x46070034  c.lt.s      $f0, $f7
    ctx->pc = 0x1e1f04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1f08: 0x0  nop
    ctx->pc = 0x1e1f08u;
    // NOP
    // 0x1e1f0c: 0x45020032  bc1fl       . + 4 + (0x32 << 2)
    ctx->pc = 0x1E1F0Cu;
    {
        const bool branch_taken_0x1e1f0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e1f0c) {
            ctx->pc = 0x1E1F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1F0Cu;
            // 0x1e1f10: 0xc4c60008  lwc1        $f6, 0x8($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1FD8u;
            goto label_1e1fd8;
        }
    }
    ctx->pc = 0x1E1F14u;
    // 0x1e1f14: 0x46002881  sub.s       $f2, $f5, $f0
    ctx->pc = 0x1e1f14u;
    ctx->f[2] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x1e1f18: 0xc6040010  lwc1        $f4, 0x10($s0)
    ctx->pc = 0x1e1f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e1f1c: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1e1f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1f20: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x1e1f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e1f24: 0x0  nop
    ctx->pc = 0x1e1f24u;
    // NOP
    // 0x1e1f28: 0x0  nop
    ctx->pc = 0x1e1f28u;
    // NOP
    // 0x1e1f2c: 0x46022943  div.s       $f5, $f5, $f2
    ctx->pc = 0x1e1f2cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[5], ctx->f[2]); }
    // 0x1e1f30: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1e1f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1f34: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1e1f34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x1e1f38: 0xc6420010  lwc1        $f2, 0x10($s2)
    ctx->pc = 0x1e1f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e1f3c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1e1f3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1e1f40: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1e1f40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1e1f44: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1e1f44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1e1f48: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1e1f48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x1e1f4c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1e1f4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1f50: 0x0  nop
    ctx->pc = 0x1e1f50u;
    // NOP
    // 0x1e1f54: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x1E1F54u;
    {
        const bool branch_taken_0x1e1f54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E1F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F54u;
        // 0x1e1f58: 0x460300c0  add.s       $f3, $f0, $f3 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1f54) {
            ctx->pc = 0x1E1FD4u;
            goto label_1e1fd4;
        }
    }
    ctx->pc = 0x1E1F5Cu;
    // 0x1e1f5c: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x1e1f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1f60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e1f60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1f64: 0x0  nop
    ctx->pc = 0x1e1f64u;
    // NOP
    // 0x1e1f68: 0x4502001b  bc1fl       . + 4 + (0x1B << 2)
    ctx->pc = 0x1E1F68u;
    {
        const bool branch_taken_0x1e1f68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e1f68) {
            ctx->pc = 0x1E1F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1F68u;
            // 0x1e1f6c: 0xc4c60008  lwc1        $f6, 0x8($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1FD8u;
            goto label_1e1fd8;
        }
    }
    ctx->pc = 0x1E1F70u;
    // 0x1e1f70: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x1e1f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1f74: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1e1f74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1f78: 0x0  nop
    ctx->pc = 0x1e1f78u;
    // NOP
    // 0x1e1f7c: 0x45020016  bc1fl       . + 4 + (0x16 << 2)
    ctx->pc = 0x1E1F7Cu;
    {
        const bool branch_taken_0x1e1f7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e1f7c) {
            ctx->pc = 0x1E1F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1F7Cu;
            // 0x1e1f80: 0xc4c60008  lwc1        $f6, 0x8($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1FD8u;
            goto label_1e1fd8;
        }
    }
    ctx->pc = 0x1E1F84u;
    // 0x1e1f84: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1e1f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1f88: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1e1f88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1f8c: 0x0  nop
    ctx->pc = 0x1e1f8cu;
    // NOP
    // 0x1e1f90: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
    ctx->pc = 0x1E1F90u;
    {
        const bool branch_taken_0x1e1f90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e1f90) {
            ctx->pc = 0x1E1F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1F90u;
            // 0x1e1f94: 0xc4c60008  lwc1        $f6, 0x8($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1FD8u;
            goto label_1e1fd8;
        }
    }
    ctx->pc = 0x1E1F98u;
    // 0x1e1f98: 0x46142834  c.lt.s      $f5, $f20
    ctx->pc = 0x1e1f98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1f9c: 0x0  nop
    ctx->pc = 0x1e1f9cu;
    // NOP
    // 0x1e1fa0: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1E1FA0u;
    {
        const bool branch_taken_0x1e1fa0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E1FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1FA0u;
        // 0x1e1fa4: 0x27a30020  addiu       $v1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1fa0) {
            ctx->pc = 0x1E1FD4u;
            goto label_1e1fd4;
        }
    }
    ctx->pc = 0x1E1FA8u;
    // 0x1e1fa8: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1e1fa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1e1fac: 0xe7a60024  swc1        $f6, 0x24($sp)
    ctx->pc = 0x1e1facu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1e1fb0: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x1e1fb0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1e1fb4: 0xe7a7002c  swc1        $f7, 0x2C($sp)
    ctx->pc = 0x1e1fb4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1e1fb8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e1fb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e1fbc: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e1fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e1fc0: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1e1fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1e1fc4: 0x24425b40  addiu       $v0, $v0, 0x5B40
    ctx->pc = 0x1e1fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
    // 0x1e1fc8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e1fc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x575B40u));
    // 0x1e1fcc: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1e1fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e1fd0: 0x46002d06  mov.s       $f20, $f5
    ctx->pc = 0x1e1fd0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[5]);
label_1e1fd4:
    // 0x1e1fd4: 0xc4c60008  lwc1        $f6, 0x8($a2)
    ctx->pc = 0x1e1fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1e1fd8:
    // 0x1e1fd8: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1e1fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1fdc: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x1e1fdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1e1fe0: 0x46013141  sub.s       $f5, $f6, $f1
    ctx->pc = 0x1e1fe0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
    // 0x1e1fe4: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1e1fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1fe8: 0x46053834  c.lt.s      $f7, $f5
    ctx->pc = 0x1e1fe8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1fec: 0x0  nop
    ctx->pc = 0x1e1fecu;
    // NOP
    // 0x1e1ff0: 0x45000039  bc1f        . + 4 + (0x39 << 2)
    ctx->pc = 0x1E1FF0u;
    {
        const bool branch_taken_0x1e1ff0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E1FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1FF0u;
        // 0x1e1ff4: 0x46003001  sub.s       $f0, $f6, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1ff0) {
            ctx->pc = 0x1E20D8u;
            goto label_1e20d8;
        }
    }
    ctx->pc = 0x1E1FF8u;
    // 0x1e1ff8: 0x46070034  c.lt.s      $f0, $f7
    ctx->pc = 0x1e1ff8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1ffc: 0x0  nop
    ctx->pc = 0x1e1ffcu;
    // NOP
    // 0x1e2000: 0x45020038  bc1fl       . + 4 + (0x38 << 2)
    ctx->pc = 0x1E2000u;
    {
        const bool branch_taken_0x1e2000 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e2000) {
            ctx->pc = 0x1E2004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2000u;
            // 0x1e2004: 0xc4a60008  lwc1        $f6, 0x8($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E20E4u;
            goto label_1e20e4;
        }
    }
    ctx->pc = 0x1E2008u;
    // 0x1e2008: 0x46002881  sub.s       $f2, $f5, $f0
    ctx->pc = 0x1e2008u;
    ctx->f[2] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x1e200c: 0xc6040010  lwc1        $f4, 0x10($s0)
    ctx->pc = 0x1e200cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e2010: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1e2010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2014: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x1e2014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e2018: 0x0  nop
    ctx->pc = 0x1e2018u;
    // NOP
    // 0x1e201c: 0x0  nop
    ctx->pc = 0x1e201cu;
    // NOP
    // 0x1e2020: 0x46022943  div.s       $f5, $f5, $f2
    ctx->pc = 0x1e2020u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[5], ctx->f[2]); }
    // 0x1e2024: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1e2024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2028: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1e2028u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x1e202c: 0xc6420010  lwc1        $f2, 0x10($s2)
    ctx->pc = 0x1e202cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e2030: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1e2030u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1e2034: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1e2034u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1e2038: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1e2038u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1e203c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1e203cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x1e2040: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1e2040u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2044: 0x0  nop
    ctx->pc = 0x1e2044u;
    // NOP
    // 0x1e2048: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x1E2048u;
    {
        const bool branch_taken_0x1e2048 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E204Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2048u;
        // 0x1e204c: 0x460300c0  add.s       $f3, $f0, $f3 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2048) {
            ctx->pc = 0x1E20D8u;
            goto label_1e20d8;
        }
    }
    ctx->pc = 0x1E2050u;
    // 0x1e2050: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x1e2050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2054: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e2054u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2058: 0x0  nop
    ctx->pc = 0x1e2058u;
    // NOP
    // 0x1e205c: 0x4502001f  bc1fl       . + 4 + (0x1F << 2)
    ctx->pc = 0x1E205Cu;
    {
        const bool branch_taken_0x1e205c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e205c) {
            ctx->pc = 0x1E2060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E205Cu;
            // 0x1e2060: 0xc4a60008  lwc1        $f6, 0x8($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E20DCu;
            goto label_1e20dc;
        }
    }
    ctx->pc = 0x1E2064u;
    // 0x1e2064: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x1e2064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2068: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1e2068u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e206c: 0x0  nop
    ctx->pc = 0x1e206cu;
    // NOP
    // 0x1e2070: 0x4502001a  bc1fl       . + 4 + (0x1A << 2)
    ctx->pc = 0x1E2070u;
    {
        const bool branch_taken_0x1e2070 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e2070) {
            ctx->pc = 0x1E2074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2070u;
            // 0x1e2074: 0xc4a60008  lwc1        $f6, 0x8($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E20DCu;
            goto label_1e20dc;
        }
    }
    ctx->pc = 0x1E2078u;
    // 0x1e2078: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1e2078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e207c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1e207cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2080: 0x0  nop
    ctx->pc = 0x1e2080u;
    // NOP
    // 0x1e2084: 0x45020015  bc1fl       . + 4 + (0x15 << 2)
    ctx->pc = 0x1E2084u;
    {
        const bool branch_taken_0x1e2084 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e2084) {
            ctx->pc = 0x1E2088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2084u;
            // 0x1e2088: 0xc4a60008  lwc1        $f6, 0x8($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E20DCu;
            goto label_1e20dc;
        }
    }
    ctx->pc = 0x1E208Cu;
    // 0x1e208c: 0x46142834  c.lt.s      $f5, $f20
    ctx->pc = 0x1e208cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2090: 0x0  nop
    ctx->pc = 0x1e2090u;
    // NOP
    // 0x1e2094: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1E2094u;
    {
        const bool branch_taken_0x1e2094 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E2098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2094u;
        // 0x1e2098: 0x27a20020  addiu       $v0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2094) {
            ctx->pc = 0x1E20D8u;
            goto label_1e20d8;
        }
    }
    ctx->pc = 0x1E209Cu;
    // 0x1e209c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1e209cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1e20a0: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x1e20a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1e20a4: 0xe7a60028  swc1        $f6, 0x28($sp)
    ctx->pc = 0x1e20a4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1e20a8: 0xe7a7002c  swc1        $f7, 0x2C($sp)
    ctx->pc = 0x1e20a8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1e20ac: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e20acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e20b0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e20b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e20b4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1e20b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1e20b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e20b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e20bc: 0xe7a70020  swc1        $f7, 0x20($sp)
    ctx->pc = 0x1e20bcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1e20c0: 0xe7a70024  swc1        $f7, 0x24($sp)
    ctx->pc = 0x1e20c0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1e20c4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1e20c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1e20c8: 0xe7a7002c  swc1        $f7, 0x2C($sp)
    ctx->pc = 0x1e20c8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1e20cc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e20ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e20d0: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1e20d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e20d4: 0x46002d06  mov.s       $f20, $f5
    ctx->pc = 0x1e20d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[5]);
label_1e20d8:
    // 0x1e20d8: 0xc4a60008  lwc1        $f6, 0x8($a1)
    ctx->pc = 0x1e20d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1e20dc:
    // 0x1e20dc: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1e20dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e20e0: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x1e20e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1e20e4:
    // 0x1e20e4: 0x46060941  sub.s       $f5, $f1, $f6
    ctx->pc = 0x1e20e4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x1e20e8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1e20e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e20ec: 0x46053834  c.lt.s      $f7, $f5
    ctx->pc = 0x1e20ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e20f0: 0x0  nop
    ctx->pc = 0x1e20f0u;
    // NOP
    // 0x1e20f4: 0x45000035  bc1f        . + 4 + (0x35 << 2)
    ctx->pc = 0x1E20F4u;
    {
        const bool branch_taken_0x1e20f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E20F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20F4u;
        // 0x1e20f8: 0x46060001  sub.s       $f0, $f0, $f6 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e20f4) {
            ctx->pc = 0x1E21CCu;
            goto label_1e21cc;
        }
    }
    ctx->pc = 0x1E20FCu;
    // 0x1e20fc: 0x46070034  c.lt.s      $f0, $f7
    ctx->pc = 0x1e20fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2100: 0x0  nop
    ctx->pc = 0x1e2100u;
    // NOP
    // 0x1e2104: 0x45020032  bc1fl       . + 4 + (0x32 << 2)
    ctx->pc = 0x1E2104u;
    {
        const bool branch_taken_0x1e2104 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e2104) {
            ctx->pc = 0x1E2108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2104u;
            // 0x1e2108: 0xc6800000  lwc1        $f0, 0x0($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E21D0u;
            goto label_1e21d0;
        }
    }
    ctx->pc = 0x1E210Cu;
    // 0x1e210c: 0x46002881  sub.s       $f2, $f5, $f0
    ctx->pc = 0x1e210cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x1e2110: 0xc6040010  lwc1        $f4, 0x10($s0)
    ctx->pc = 0x1e2110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e2114: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1e2114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2118: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x1e2118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e211c: 0x0  nop
    ctx->pc = 0x1e211cu;
    // NOP
    // 0x1e2120: 0x0  nop
    ctx->pc = 0x1e2120u;
    // NOP
    // 0x1e2124: 0x46022943  div.s       $f5, $f5, $f2
    ctx->pc = 0x1e2124u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[5], ctx->f[2]); }
    // 0x1e2128: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1e2128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e212c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x1e212cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x1e2130: 0xc6420010  lwc1        $f2, 0x10($s2)
    ctx->pc = 0x1e2130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e2134: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1e2134u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1e2138: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1e2138u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1e213c: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1e213cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1e2140: 0x46040100  add.s       $f4, $f0, $f4
    ctx->pc = 0x1e2140u;
    ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x1e2144: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x1e2144u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2148: 0x0  nop
    ctx->pc = 0x1e2148u;
    // NOP
    // 0x1e214c: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x1E214Cu;
    {
        const bool branch_taken_0x1e214c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E2150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E214Cu;
        // 0x1e2150: 0x46030840  add.s       $f1, $f1, $f3 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e214c) {
            ctx->pc = 0x1E21CCu;
            goto label_1e21cc;
        }
    }
    ctx->pc = 0x1E2154u;
    // 0x1e2154: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x1e2154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2158: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x1e2158u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e215c: 0x0  nop
    ctx->pc = 0x1e215cu;
    // NOP
    // 0x1e2160: 0x4502001b  bc1fl       . + 4 + (0x1B << 2)
    ctx->pc = 0x1E2160u;
    {
        const bool branch_taken_0x1e2160 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e2160) {
            ctx->pc = 0x1E2164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2160u;
            // 0x1e2164: 0xc6800000  lwc1        $f0, 0x0($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E21D0u;
            goto label_1e21d0;
        }
    }
    ctx->pc = 0x1E2168u;
    // 0x1e2168: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x1e2168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e216c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e216cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2170: 0x0  nop
    ctx->pc = 0x1e2170u;
    // NOP
    // 0x1e2174: 0x45020016  bc1fl       . + 4 + (0x16 << 2)
    ctx->pc = 0x1E2174u;
    {
        const bool branch_taken_0x1e2174 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e2174) {
            ctx->pc = 0x1E2178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2174u;
            // 0x1e2178: 0xc6800000  lwc1        $f0, 0x0($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E21D0u;
            goto label_1e21d0;
        }
    }
    ctx->pc = 0x1E217Cu;
    // 0x1e217c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1e217cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2180: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e2180u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2184: 0x0  nop
    ctx->pc = 0x1e2184u;
    // NOP
    // 0x1e2188: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
    ctx->pc = 0x1E2188u;
    {
        const bool branch_taken_0x1e2188 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e2188) {
            ctx->pc = 0x1E218Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2188u;
            // 0x1e218c: 0xc6800000  lwc1        $f0, 0x0($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E21D0u;
            goto label_1e21d0;
        }
    }
    ctx->pc = 0x1E2190u;
    // 0x1e2190: 0x46142834  c.lt.s      $f5, $f20
    ctx->pc = 0x1e2190u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2194: 0x0  nop
    ctx->pc = 0x1e2194u;
    // NOP
    // 0x1e2198: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1E2198u;
    {
        const bool branch_taken_0x1e2198 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2198u;
        // 0x1e219c: 0x27a30020  addiu       $v1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2198) {
            ctx->pc = 0x1E21CCu;
            goto label_1e21cc;
        }
    }
    ctx->pc = 0x1E21A0u;
    // 0x1e21a0: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x1e21a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1e21a4: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1e21a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1e21a8: 0xe7a60028  swc1        $f6, 0x28($sp)
    ctx->pc = 0x1e21a8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1e21ac: 0xe7a7002c  swc1        $f7, 0x2C($sp)
    ctx->pc = 0x1e21acu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1e21b0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e21b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e21b4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e21b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e21b8: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1e21b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1e21bc: 0x24425b50  addiu       $v0, $v0, 0x5B50
    ctx->pc = 0x1e21bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23376));
    // 0x1e21c0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e21c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x575B50u));
    // 0x1e21c4: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1e21c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e21c8: 0x46002d06  mov.s       $f20, $f5
    ctx->pc = 0x1e21c8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[5]);
label_1e21cc:
    // 0x1e21cc: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1e21ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e21d0:
    // 0x1e21d0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1e21d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e21d4: 0x0  nop
    ctx->pc = 0x1e21d4u;
    // NOP
    // 0x1e21d8: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x1E21D8u;
    {
        const bool branch_taken_0x1e21d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E21DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E21D8u;
        // 0x1e21dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e21d8) {
            ctx->pc = 0x1E224Cu;
            goto label_1e224c;
        }
    }
    ctx->pc = 0x1E21E0u;
    // 0x1e21e0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e21e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e21e4: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1e21e4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e21e8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1e21e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e21ec: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e21ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e21f0: 0xfa610010  sqc2        $vf1, 0x10($s3)
    ctx->pc = 0x1e21f0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e21f4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1e21f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e21f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1e21f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e21fc: 0xae700024  sw          $s0, 0x24($s3)
    ctx->pc = 0x1e21fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 16));
    // 0x1e2200: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1e2200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e2204: 0xae72002c  sw          $s2, 0x2C($s3)
    ctx->pc = 0x1e2204u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 18));
    // 0x1e2208: 0xae620028  sw          $v0, 0x28($s3)
    ctx->pc = 0x1e2208u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
    // 0x1e220c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E220Cu;
    SET_GPR_U32(ctx, 31, 0x1E2214u);
    ctx->pc = 0x1E2210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E220Cu;
    // 0x1e2210: 0xae630030  sw          $v1, 0x30($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E220Cu, 0x1E2214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2214u;
label_1e2214:
    // 0x1e2214: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e2214u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2218: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x1e2218u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e221c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e221cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2220: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1e2220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e2224: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1e2224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e2228: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1e2228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e222c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1e222cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e2230: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x1e2230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e2234: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1e2234u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1e2238: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1e2238u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1e223c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1e223cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1e2240: 0xe6600020  swc1        $f0, 0x20($s3)
    ctx->pc = 0x1e2240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
    // 0x1e2244: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e2244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2248: 0xe6940000  swc1        $f20, 0x0($s4)
    ctx->pc = 0x1e2248u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_1e224c:
    // 0x1e224c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1e224cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e2250: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1e2250u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e2254: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1e2254u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e2258: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1e2258u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e225c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1e225cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e2260: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1e2260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e2264: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1e2264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e2268: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2268u;
        // 0x1e226c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2270u;
    // 0x1e2270: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1e2270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e2274: 0x0  nop
    ctx->pc = 0x1e2274u;
    // NOP
    // 0x1e2278: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x1e2278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e227c: 0x0  nop
    ctx->pc = 0x1e227cu;
    // NOP
    ctx->pc = 0x1e2280u;
}
