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

// Function: sub_002C4E28
// Address: 0x2c4e28 - 0x2c4f48
void sub_002C4E28_0x2c4e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4E28_0x2c4e28");
#endif

    switch (ctx->pc) {
        case 0x2c4edcu: goto label_2c4edc;
        case 0x2c4ef8u: goto label_2c4ef8;
        default: break;
    }

    ctx->pc = 0x2c4e28u;

    // 0x2c4e28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c4e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c4e2c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2c4e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2c4e30: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c4e30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c4e34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c4e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c4e38: 0xe7b60020  swc1        $f22, 0x20($sp)
    ctx->pc = 0x2c4e38u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c4e3c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2c4e3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c4e40: 0xc48c0000  lwc1        $f12, 0x0($a0)
    ctx->pc = 0x2c4e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c4e44: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x2c4e44u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c4e48: 0xc4950008  lwc1        $f21, 0x8($a0)
    ctx->pc = 0x2c4e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c4e4c: 0x46026034  c.lt.s      $f12, $f2
    ctx->pc = 0x2c4e4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4e50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c4e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c4e54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c4e54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4e58: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4E58u;
    {
        const bool branch_taken_0x2c4e58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C4E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E58u;
        // 0x2c4e5c: 0x4600a846  mov.s       $f1, $f21 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4e58) {
            ctx->pc = 0x2C4E68u;
            goto label_2c4e68;
        }
    }
    ctx->pc = 0x2C4E60u;
    // 0x2c4e60: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C4E60u;
    {
        const bool branch_taken_0x2c4e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E60u;
        // 0x2c4e64: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4e60) {
            ctx->pc = 0x2C4E78u;
            goto label_2c4e78;
        }
    }
    ctx->pc = 0x2C4E68u;
label_2c4e68:
    // 0x2c4e68: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2c4e68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4e6c: 0x0  nop
    ctx->pc = 0x2c4e6cu;
    // NOP
    // 0x2c4e70: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2C4E70u;
    {
        const bool branch_taken_0x2c4e70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4e70) {
            ctx->pc = 0x2C4E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4E70u;
            // 0x2c4e74: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4E78u;
            goto label_2c4e78;
        }
    }
    ctx->pc = 0x2C4E78u;
label_2c4e78:
    // 0x2c4e78: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2c4e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2c4e7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c4e7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4e80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c4e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c4e84: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c4e84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c4e88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c4e88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4e8c: 0x0  nop
    ctx->pc = 0x2c4e8cu;
    // NOP
    // 0x2c4e90: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4E90u;
    {
        const bool branch_taken_0x2c4e90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4e90) {
            ctx->pc = 0x2C4EA0u;
            goto label_2c4ea0;
        }
    }
    ctx->pc = 0x2C4E98u;
    // 0x2c4e98: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C4E98u;
    {
        const bool branch_taken_0x2c4e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E98u;
        // 0x2c4e9c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4e98) {
            ctx->pc = 0x2C4EB0u;
            goto label_2c4eb0;
        }
    }
    ctx->pc = 0x2C4EA0u;
label_2c4ea0:
    // 0x2c4ea0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2c4ea0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4ea4: 0x0  nop
    ctx->pc = 0x2c4ea4u;
    // NOP
    // 0x2c4ea8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2C4EA8u;
    {
        const bool branch_taken_0x2c4ea8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4ea8) {
            ctx->pc = 0x2C4EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4EA8u;
            // 0x2c4eac: 0x46001546  mov.s       $f21, $f2 (Delay Slot)
            ctx->f[21] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4EB0u;
            goto label_2c4eb0;
        }
    }
    ctx->pc = 0x2C4EB0u;
label_2c4eb0:
    // 0x2c4eb0: 0x460c6342  mul.s       $f13, $f12, $f12
    ctx->pc = 0x2c4eb0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2c4eb4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c4eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c4eb8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2c4eb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2c4ebc: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2c4ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x2c4ec0: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x2c4ec0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x2c4ec4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2c4ec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2c4ec8: 0x460da341  sub.s       $f13, $f20, $f13
    ctx->pc = 0x2c4ec8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[13]);
    // 0x2c4ecc: 0x0  nop
    ctx->pc = 0x2c4eccu;
    // NOP
    // 0x2c4ed0: 0x460d0344  c1          0xD0344
    ctx->pc = 0x2c4ed0u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x2c4ed4: 0xc0e404c  jal         func_390130
    ctx->pc = 0x2C4ED4u;
    SET_GPR_U32(ctx, 31, 0x2C4EDCu);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x2C4ED4u, 0x2C4EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4EDCu;
label_2c4edc:
    // 0x2c4edc: 0x4615a842  mul.s       $f1, $f21, $f21
    ctx->pc = 0x2c4edcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x2c4ee0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2c4ee0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2c4ee4: 0x4601a501  sub.s       $f20, $f20, $f1
    ctx->pc = 0x2c4ee4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x2c4ee8: 0x0  nop
    ctx->pc = 0x2c4ee8u;
    // NOP
    // 0x2c4eec: 0x46140304  c1          0x140304
    ctx->pc = 0x2c4eecu;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x2c4ef0: 0xc0e404c  jal         func_390130
    ctx->pc = 0x2C4EF0u;
    SET_GPR_U32(ctx, 31, 0x2C4EF8u);
    ctx->pc = 0x2C4EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4EF0u;
    // 0x2c4ef4: 0x46160542  mul.s       $f21, $f0, $f22 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x2C4EF0u, 0x2C4EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4EF8u;
label_2c4ef8:
    // 0x2c4ef8: 0x46160042  mul.s       $f1, $f0, $f22
    ctx->pc = 0x2c4ef8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x2c4efc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c4efcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4f00: 0x0  nop
    ctx->pc = 0x2c4f00u;
    // NOP
    // 0x2c4f04: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2c4f04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4f08: 0x0  nop
    ctx->pc = 0x2c4f08u;
    // NOP
    // 0x2c4f0c: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2C4F0Cu;
    {
        const bool branch_taken_0x2c4f0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4f0c) {
            ctx->pc = 0x2C4F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4F0Cu;
            // 0x2c4f10: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4F24u;
            goto label_2c4f24;
        }
    }
    ctx->pc = 0x2C4F14u;
    // 0x2c4f14: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2c4f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2c4f18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c4f18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4f1c: 0x0  nop
    ctx->pc = 0x2c4f1cu;
    // NOP
    // 0x2c4f20: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c4f20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2c4f24:
    // 0x2c4f24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c4f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4f28: 0xc7b60020  lwc1        $f22, 0x20($sp)
    ctx->pc = 0x2c4f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2c4f2c: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x2c4f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c4f30: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2c4f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c4f34: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4F34u;
        // 0x2c4f38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4F3Cu;
    // 0x2c4f3c: 0x0  nop
    ctx->pc = 0x2c4f3cu;
    // NOP
    // 0x2c4f40: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c4f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c4f44: 0x0  nop
    ctx->pc = 0x2c4f44u;
    // NOP
    ctx->pc = 0x2c4f48u;
}
