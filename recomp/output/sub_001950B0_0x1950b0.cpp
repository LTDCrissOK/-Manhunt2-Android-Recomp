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

// Function: sub_001950B0
// Address: 0x1950b0 - 0x195138
void sub_001950B0_0x1950b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001950B0_0x1950b0");
#endif

    switch (ctx->pc) {
        case 0x1950d4u: goto label_1950d4;
        case 0x1950e4u: goto label_1950e4;
        default: break;
    }

    ctx->pc = 0x1950b0u;

    // 0x1950b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1950b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1950b4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1950b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1950b8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1950b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1950bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1950bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1950c0: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x1950c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1950c4: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1950C4u;
    {
        const bool branch_taken_0x1950c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1950c4) {
            ctx->pc = 0x1950C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1950C4u;
            // 0x1950c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19511Cu;
            goto label_19511c;
        }
    }
    ctx->pc = 0x1950CCu;
    // 0x1950cc: 0xc061a12  jal         func_186848
    ctx->pc = 0x1950CCu;
    SET_GPR_U32(ctx, 31, 0x1950D4u);
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1950CCu, 0x1950D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1950D4u;
label_1950d4:
    // 0x1950d4: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1950d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1950d8: 0x244601e0  addiu       $a2, $v0, 0x1E0
    ctx->pc = 0x1950d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x1950dc: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x1950DCu;
    SET_GPR_U32(ctx, 31, 0x1950E4u);
    ctx->pc = 0x1950E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1950DCu;
    // 0x1950e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x1950DCu, 0x1950E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1950E4u;
label_1950e4:
    // 0x1950e4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1950e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1950e8: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1950e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1950ec: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1950ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1950f0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1950f0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1950f4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1950f4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1950f8: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1950f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1950fc: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x1950fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x195100: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x195100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195104: 0x0  nop
    ctx->pc = 0x195104u;
    // NOP
    // 0x195108: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x195108u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19510c: 0x0  nop
    ctx->pc = 0x19510cu;
    // NOP
    // 0x195110: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x195110u;
    {
        const bool branch_taken_0x195110 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x195114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195110u;
        // 0x195114: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195110) {
            ctx->pc = 0x19511Cu;
            goto label_19511c;
        }
    }
    ctx->pc = 0x195118u;
    // 0x195118: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x195118u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19511c:
    // 0x19511c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x19511cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195120: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x195120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x195124: 0x3e00008  jr          $ra
    ctx->pc = 0x195124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195124u;
        // 0x195128: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19512Cu;
    // 0x19512c: 0x0  nop
    ctx->pc = 0x19512cu;
    // NOP
    // 0x195130: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x195130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195134: 0x0  nop
    ctx->pc = 0x195134u;
    // NOP
    ctx->pc = 0x195138u;
}
