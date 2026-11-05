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

// Function: sub_002C4B50
// Address: 0x2c4b50 - 0x2c4c30
void sub_002C4B50_0x2c4b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4B50_0x2c4b50");
#endif

    switch (ctx->pc) {
        case 0x2c4bc8u: goto label_2c4bc8;
        case 0x2c4c00u: goto label_2c4c00;
        default: break;
    }

    ctx->pc = 0x2c4b50u;

    // 0x2c4b50: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2c4b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2c4b54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c4b54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c4b58: 0x46007346  mov.s       $f13, $f14
    ctx->pc = 0x2c4b58u;
    ctx->f[13] = FPU_MOV_S(ctx->f[14]);
    // 0x2c4b5c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c4b5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c4b60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c4b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c4b64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c4b64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4b68: 0x46016834  c.lt.s      $f13, $f1
    ctx->pc = 0x2c4b68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4b6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c4b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c4b70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2c4b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2c4b74: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4B74u;
    {
        const bool branch_taken_0x2c4b74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C4B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4B74u;
        // 0x2c4b78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4b74) {
            ctx->pc = 0x2C4B84u;
            goto label_2c4b84;
        }
    }
    ctx->pc = 0x2C4B7Cu;
    // 0x2c4b7c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C4B7Cu;
    {
        const bool branch_taken_0x2c4b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4B7Cu;
        // 0x2c4b80: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4b7c) {
            ctx->pc = 0x2C4B94u;
            goto label_2c4b94;
        }
    }
    ctx->pc = 0x2C4B84u;
label_2c4b84:
    // 0x2c4b84: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x2c4b84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4b88: 0x0  nop
    ctx->pc = 0x2c4b88u;
    // NOP
    // 0x2c4b8c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2C4B8Cu;
    {
        const bool branch_taken_0x2c4b8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4b8c) {
            ctx->pc = 0x2C4B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4B8Cu;
            // 0x2c4b90: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4B94u;
            goto label_2c4b94;
        }
    }
    ctx->pc = 0x2C4B94u;
label_2c4b94:
    // 0x2c4b94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c4b94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4b98: 0x0  nop
    ctx->pc = 0x2c4b98u;
    // NOP
    // 0x2c4b9c: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x2c4b9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4ba0: 0x0  nop
    ctx->pc = 0x2c4ba0u;
    // NOP
    // 0x2c4ba4: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2C4BA4u;
    {
        const bool branch_taken_0x2c4ba4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C4BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4BA4u;
        // 0x2c4ba8: 0x460d6802  mul.s       $f0, $f13, $f13 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4ba4) {
            ctx->pc = 0x2C4BE4u;
            goto label_2c4be4;
        }
    }
    ctx->pc = 0x2C4BACu;
    // 0x2c4bac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c4bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c4bb0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c4bb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c4bb4: 0x0  nop
    ctx->pc = 0x2c4bb4u;
    // NOP
    // 0x2c4bb8: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2c4bb8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2c4bbc: 0x460c0304  c1          0xC0304
    ctx->pc = 0x2c4bbcu;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x2c4bc0: 0xc0e404c  jal         func_390130
    ctx->pc = 0x2C4BC0u;
    SET_GPR_U32(ctx, 31, 0x2C4BC8u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x2C4BC0u, 0x2C4BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4BC8u;
label_2c4bc8:
    // 0x2c4bc8: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2c4bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x2c4bcc: 0x34212ee1  ori         $at, $at, 0x2EE1
    ctx->pc = 0x2c4bccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12001);
    // 0x2c4bd0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c4bd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c4bd4: 0x0  nop
    ctx->pc = 0x2c4bd4u;
    // NOP
    // 0x2c4bd8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c4bd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c4bdc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2C4BDCu;
    {
        const bool branch_taken_0x2c4bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4BDCu;
        // 0x2c4be0: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4bdc) {
            ctx->pc = 0x2C4C20u;
            goto label_2c4c20;
        }
    }
    ctx->pc = 0x2C4BE4u;
label_2c4be4:
    // 0x2c4be4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c4be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c4be8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c4be8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c4bec: 0x0  nop
    ctx->pc = 0x2c4becu;
    // NOP
    // 0x2c4bf0: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2c4bf0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2c4bf4: 0x460c0304  c1          0xC0304
    ctx->pc = 0x2c4bf4u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x2c4bf8: 0xc0e404c  jal         func_390130
    ctx->pc = 0x2C4BF8u;
    SET_GPR_U32(ctx, 31, 0x2C4C00u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x2C4BF8u, 0x2C4C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4C00u;
label_2c4c00:
    // 0x2c4c00: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2c4c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x2c4c04: 0x34212ee1  ori         $at, $at, 0x2EE1
    ctx->pc = 0x2c4c04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12001);
    // 0x2c4c08: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c4c08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c4c0c: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2c4c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2c4c10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c4c10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c4c14: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2c4c14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2c4c18: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2c4c18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c4c1c: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x2c4c1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_2c4c20:
    // 0x2c4c20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c4c20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4c24: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2c4c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c4c28: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4C28u;
        // 0x2c4c2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4C30u;
}
