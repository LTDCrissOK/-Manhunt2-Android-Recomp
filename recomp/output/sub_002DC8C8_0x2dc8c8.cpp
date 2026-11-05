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

// Function: sub_002DC8C8
// Address: 0x2dc8c8 - 0x2dc938
void sub_002DC8C8_0x2dc8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC8C8_0x2dc8c8");
#endif

    switch (ctx->pc) {
        case 0x2dc8dcu: goto label_2dc8dc;
        default: break;
    }

    ctx->pc = 0x2dc8c8u;

    // 0x2dc8c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dc8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dc8cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dc8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dc8d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2dc8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2dc8d4: 0xc0fb7fe  jal         func_3EDFF8
    ctx->pc = 0x2DC8D4u;
    SET_GPR_U32(ctx, 31, 0x2DC8DCu);
    ctx->pc = 0x2DC8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC8D4u;
    // 0x2dc8d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDFF8u, 0x2DC8D4u, 0x2DC8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC8DCu;
label_2dc8dc:
    // 0x2dc8dc: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x2dc8dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x2dc8e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2dc8e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dc8e4: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x2dc8e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2dc8e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2dc8e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2dc8ec: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2dc8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dc8f0: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x2dc8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2dc8f4: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x2dc8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2dc8f8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2dc8f8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2dc8fc: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2dc8fcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2dc900: 0x4604215c  madd.s      $f5, $f4, $f4
    ctx->pc = 0x2dc900u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2dc904: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2dc904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2dc908: 0xc461b66c  lwc1        $f1, -0x4994($v1)
    ctx->pc = 0x2dc908u;
    { uint32_t bits = FAST_READ32(0x3FB66Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dc90c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2dc90cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dc910: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2dc910u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dc914: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x2dc914u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dc918: 0x0  nop
    ctx->pc = 0x2dc918u;
    // NOP
    // 0x2dc91c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2DC91Cu;
    {
        const bool branch_taken_0x2dc91c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DC920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC91Cu;
        // 0x2dc920: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc91c) {
            ctx->pc = 0x2DC928u;
            goto label_2dc928;
        }
    }
    ctx->pc = 0x2DC924u;
    // 0x2dc924: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2dc924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dc928:
    // 0x2dc928: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dc928u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc92c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2dc92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dc930: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC930u;
        // 0x2dc934: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC938u;
}
