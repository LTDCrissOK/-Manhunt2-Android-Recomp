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

// Function: sub_00177090
// Address: 0x177090 - 0x177140
void sub_00177090_0x177090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177090_0x177090");
#endif

    switch (ctx->pc) {
        case 0x1770a0u: goto label_1770a0;
        default: break;
    }

    ctx->pc = 0x177090u;

    // 0x177090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x177090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x177094: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x177094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x177098: 0xc04fa2c  jal         func_13E8B0
    ctx->pc = 0x177098u;
    SET_GPR_U32(ctx, 31, 0x1770A0u);
    ctx->pc = 0x13E8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E8B0u, 0x177098u, 0x1770A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1770A0u;
label_1770a0:
    // 0x1770a0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1770a0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x1770a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1770a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1770a8: 0x0  nop
    ctx->pc = 0x1770a8u;
    // NOP
    // 0x1770ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1770acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1770b0: 0x0  nop
    ctx->pc = 0x1770b0u;
    // NOP
    // 0x1770b4: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x1770B4u;
    {
        const bool branch_taken_0x1770b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1770B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1770B4u;
        // 0x1770b8: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1770b4) {
            ctx->pc = 0x177130u;
            goto label_177130;
        }
    }
    ctx->pc = 0x1770BCu;
    // 0x1770bc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1770bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1770c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1770c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1770c4: 0x0  nop
    ctx->pc = 0x1770c4u;
    // NOP
    // 0x1770c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1770c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1770cc: 0x0  nop
    ctx->pc = 0x1770ccu;
    // NOP
    // 0x1770d0: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x1770D0u;
    {
        const bool branch_taken_0x1770d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1770D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1770D0u;
        // 0x1770d4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1770d0) {
            ctx->pc = 0x177130u;
            goto label_177130;
        }
    }
    ctx->pc = 0x1770D8u;
    // 0x1770d8: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1770d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1770dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1770dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1770e0: 0x0  nop
    ctx->pc = 0x1770e0u;
    // NOP
    // 0x1770e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1770e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1770e8: 0x0  nop
    ctx->pc = 0x1770e8u;
    // NOP
    // 0x1770ec: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x1770ECu;
    {
        const bool branch_taken_0x1770ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1770F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1770ECu;
        // 0x1770f0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1770ec) {
            ctx->pc = 0x177130u;
            goto label_177130;
        }
    }
    ctx->pc = 0x1770F4u;
    // 0x1770f4: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1770f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x1770f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1770f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1770fc: 0x0  nop
    ctx->pc = 0x1770fcu;
    // NOP
    // 0x177100: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x177100u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x177104: 0x0  nop
    ctx->pc = 0x177104u;
    // NOP
    // 0x177108: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x177108u;
    {
        const bool branch_taken_0x177108 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177108u;
        // 0x17710c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177108) {
            ctx->pc = 0x177130u;
            goto label_177130;
        }
    }
    ctx->pc = 0x177110u;
    // 0x177110: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x177110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x177114: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x177114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177118: 0x0  nop
    ctx->pc = 0x177118u;
    // NOP
    // 0x17711c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17711cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x177120: 0x0  nop
    ctx->pc = 0x177120u;
    // NOP
    // 0x177124: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x177124u;
    {
        const bool branch_taken_0x177124 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x177128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177124u;
        // 0x177128: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177124) {
            ctx->pc = 0x177130u;
            goto label_177130;
        }
    }
    ctx->pc = 0x17712Cu;
    // 0x17712c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17712cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177130:
    // 0x177130: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177134: 0x3e00008  jr          $ra
    ctx->pc = 0x177134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177134u;
        // 0x177138: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17713Cu;
    // 0x17713c: 0x0  nop
    ctx->pc = 0x17713cu;
    // NOP
    ctx->pc = 0x177140u;
}
