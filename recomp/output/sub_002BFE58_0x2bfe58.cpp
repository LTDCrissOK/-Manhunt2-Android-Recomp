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

// Function: sub_002BFE58
// Address: 0x2bfe58 - 0x2bfed8
void sub_002BFE58_0x2bfe58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BFE58_0x2bfe58");
#endif

    switch (ctx->pc) {
        case 0x2bfe7cu: goto label_2bfe7c;
        default: break;
    }

    ctx->pc = 0x2bfe58u;

    // 0x2bfe58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bfe58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bfe5c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2bfe5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2bfe60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2bfe60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2bfe64: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2bfe64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfe68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bfe68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bfe6c: 0x263000a0  addiu       $s0, $s1, 0xA0
    ctx->pc = 0x2bfe6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x2bfe70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bfe70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bfe74: 0xc0b0098  jal         func_2C0260
    ctx->pc = 0x2BFE74u;
    SET_GPR_U32(ctx, 31, 0x2BFE7Cu);
    ctx->pc = 0x2BFE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFE74u;
    // 0x2bfe78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0260u, 0x2BFE74u, 0x2BFE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFE7Cu;
label_2bfe7c:
    // 0x2bfe7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bfe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bfe80: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x2bfe80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
    // 0x2bfe84: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2bfe84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bfe88: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x2bfe88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bfe8c: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x2bfe8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bfe90: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2bfe90u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2bfe94: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2bfe94u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2bfe98: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2bfe98u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2bfe9c: 0x46010044  c1          0x10044
    ctx->pc = 0x2bfe9cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x2bfea0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2bfea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2bfea4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2bfea4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2bfea8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bfea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bfeac: 0x0  nop
    ctx->pc = 0x2bfeacu;
    // NOP
    // 0x2bfeb0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bfeb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bfeb4: 0x0  nop
    ctx->pc = 0x2bfeb4u;
    // NOP
    // 0x2bfeb8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2BFEB8u;
    {
        const bool branch_taken_0x2bfeb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bfeb8) {
            ctx->pc = 0x2BFEBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFEB8u;
            // 0x2bfebc: 0xae2200b8  sw          $v0, 0xB8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFEC0u;
            goto label_2bfec0;
        }
    }
    ctx->pc = 0x2BFEC0u;
label_2bfec0:
    // 0x2bfec0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bfec0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bfec4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2bfec4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bfec8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bfec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bfecc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFECCu;
        // 0x2bfed0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFED4u;
    // 0x2bfed4: 0x0  nop
    ctx->pc = 0x2bfed4u;
    // NOP
    ctx->pc = 0x2bfed8u;
}
