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

// Function: sub_001746A0
// Address: 0x1746a0 - 0x174730
void sub_001746A0_0x1746a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001746A0_0x1746a0");
#endif

    switch (ctx->pc) {
        case 0x1746b0u: goto label_1746b0;
        default: break;
    }

    ctx->pc = 0x1746a0u;

    // 0x1746a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1746a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1746a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1746a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1746a8: 0xc05d1cc  jal         func_174730
    ctx->pc = 0x1746A8u;
    SET_GPR_U32(ctx, 31, 0x1746B0u);
    ctx->pc = 0x174730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174730u, 0x1746A8u, 0x1746B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1746B0u;
label_1746b0:
    // 0x1746b0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1746b0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x1746b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1746b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1746b8: 0x0  nop
    ctx->pc = 0x1746b8u;
    // NOP
    // 0x1746bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1746bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1746c0: 0x0  nop
    ctx->pc = 0x1746c0u;
    // NOP
    // 0x1746c4: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x1746C4u;
    {
        const bool branch_taken_0x1746c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1746C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1746C4u;
        // 0x1746c8: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1746c4) {
            ctx->pc = 0x174724u;
            goto label_174724;
        }
    }
    ctx->pc = 0x1746CCu;
    // 0x1746cc: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1746ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1746d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1746d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1746d4: 0x0  nop
    ctx->pc = 0x1746d4u;
    // NOP
    // 0x1746d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1746d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1746dc: 0x0  nop
    ctx->pc = 0x1746dcu;
    // NOP
    // 0x1746e0: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x1746E0u;
    {
        const bool branch_taken_0x1746e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1746E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1746E0u;
        // 0x1746e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1746e0) {
            ctx->pc = 0x174724u;
            goto label_174724;
        }
    }
    ctx->pc = 0x1746E8u;
    // 0x1746e8: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1746e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x1746ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1746ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1746f0: 0x0  nop
    ctx->pc = 0x1746f0u;
    // NOP
    // 0x1746f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1746f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1746f8: 0x0  nop
    ctx->pc = 0x1746f8u;
    // NOP
    // 0x1746fc: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1746FCu;
    {
        const bool branch_taken_0x1746fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x174700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1746FCu;
        // 0x174700: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1746fc) {
            ctx->pc = 0x174724u;
            goto label_174724;
        }
    }
    ctx->pc = 0x174704u;
    // 0x174704: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x174704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x174708: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x174708u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17470c: 0x0  nop
    ctx->pc = 0x17470cu;
    // NOP
    // 0x174710: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x174710u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x174714: 0x0  nop
    ctx->pc = 0x174714u;
    // NOP
    // 0x174718: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x174718u;
    {
        const bool branch_taken_0x174718 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174718u;
        // 0x17471c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174718) {
            ctx->pc = 0x174724u;
            goto label_174724;
        }
    }
    ctx->pc = 0x174720u;
    // 0x174720: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x174720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174724:
    // 0x174724: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174728: 0x3e00008  jr          $ra
    ctx->pc = 0x174728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17472Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174728u;
        // 0x17472c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174730u;
}
