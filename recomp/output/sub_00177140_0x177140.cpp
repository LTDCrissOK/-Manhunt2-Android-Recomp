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

// Function: sub_00177140
// Address: 0x177140 - 0x1771f0
void sub_00177140_0x177140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177140_0x177140");
#endif

    switch (ctx->pc) {
        case 0x177150u: goto label_177150;
        default: break;
    }

    ctx->pc = 0x177140u;

    // 0x177140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x177140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x177144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x177144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x177148: 0xc04fa2c  jal         func_13E8B0
    ctx->pc = 0x177148u;
    SET_GPR_U32(ctx, 31, 0x177150u);
    ctx->pc = 0x13E8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E8B0u, 0x177148u, 0x177150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177150u;
label_177150:
    // 0x177150: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x177150u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x177154: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x177154u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177158: 0x0  nop
    ctx->pc = 0x177158u;
    // NOP
    // 0x17715c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17715cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x177160: 0x0  nop
    ctx->pc = 0x177160u;
    // NOP
    // 0x177164: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x177164u;
    {
        const bool branch_taken_0x177164 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x177168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177164u;
        // 0x177168: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177164) {
            ctx->pc = 0x1771E0u;
            goto label_1771e0;
        }
    }
    ctx->pc = 0x17716Cu;
    // 0x17716c: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x17716cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x177170: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x177170u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177174: 0x0  nop
    ctx->pc = 0x177174u;
    // NOP
    // 0x177178: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x177178u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17717c: 0x0  nop
    ctx->pc = 0x17717cu;
    // NOP
    // 0x177180: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x177180u;
    {
        const bool branch_taken_0x177180 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x177184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177180u;
        // 0x177184: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177180) {
            ctx->pc = 0x1771E0u;
            goto label_1771e0;
        }
    }
    ctx->pc = 0x177188u;
    // 0x177188: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x177188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x17718c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17718cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177190: 0x0  nop
    ctx->pc = 0x177190u;
    // NOP
    // 0x177194: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x177194u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x177198: 0x0  nop
    ctx->pc = 0x177198u;
    // NOP
    // 0x17719c: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x17719Cu;
    {
        const bool branch_taken_0x17719c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1771A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17719Cu;
        // 0x1771a0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17719c) {
            ctx->pc = 0x1771E0u;
            goto label_1771e0;
        }
    }
    ctx->pc = 0x1771A4u;
    // 0x1771a4: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x1771a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x1771a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1771a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1771ac: 0x0  nop
    ctx->pc = 0x1771acu;
    // NOP
    // 0x1771b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1771b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1771b4: 0x0  nop
    ctx->pc = 0x1771b4u;
    // NOP
    // 0x1771b8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1771B8u;
    {
        const bool branch_taken_0x1771b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1771BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1771B8u;
        // 0x1771bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1771b8) {
            ctx->pc = 0x1771E0u;
            goto label_1771e0;
        }
    }
    ctx->pc = 0x1771C0u;
    // 0x1771c0: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x1771c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x1771c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1771c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1771c8: 0x0  nop
    ctx->pc = 0x1771c8u;
    // NOP
    // 0x1771cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1771ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1771d0: 0x0  nop
    ctx->pc = 0x1771d0u;
    // NOP
    // 0x1771d4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1771D4u;
    {
        const bool branch_taken_0x1771d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1771D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1771D4u;
        // 0x1771d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1771d4) {
            ctx->pc = 0x1771E0u;
            goto label_1771e0;
        }
    }
    ctx->pc = 0x1771DCu;
    // 0x1771dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1771dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1771e0:
    // 0x1771e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1771e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1771e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1771E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1771E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1771E4u;
        // 0x1771e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1771E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1771ECu;
    // 0x1771ec: 0x0  nop
    ctx->pc = 0x1771ecu;
    // NOP
    ctx->pc = 0x1771f0u;
}
