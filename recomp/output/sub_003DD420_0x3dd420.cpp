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

// Function: sub_003DD420
// Address: 0x3dd420 - 0x3dd488
void sub_003DD420_0x3dd420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD420_0x3dd420");
#endif

    ctx->pc = 0x3dd420u;

    // 0x3dd420: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x3dd420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3dd424: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3dd424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3dd428: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x3dd428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3dd42c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x3dd42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3dd430: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x3dd430u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x3dd434: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x3dd434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3dd438: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x3dd438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3dd43c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x3dd43cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x3dd440: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x3dd440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3dd444: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x3dd444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3dd448: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x3dd448u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x3dd44c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DD44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD44Cu;
        // 0x3dd450: 0xe480002c  swc1        $f0, 0x2C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD44Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DD454u;
    // 0x3dd454: 0x0  nop
    ctx->pc = 0x3dd454u;
    // NOP
    // 0x3dd458: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x3dd458u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x3dd45c: 0x0  nop
    ctx->pc = 0x3dd45cu;
    // NOP
    // 0x3dd460: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3dd460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3dd464: 0x0  nop
    ctx->pc = 0x3dd464u;
    // NOP
    // 0x3dd468: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x3dd468u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x3dd46c: 0x0  nop
    ctx->pc = 0x3dd46cu;
    // NOP
    // 0x3dd470: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3dd470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3dd474: 0x0  nop
    ctx->pc = 0x3dd474u;
    // NOP
    // 0x3dd478: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3dd478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3dd47c: 0x0  nop
    ctx->pc = 0x3dd47cu;
    // NOP
    // 0x3dd480: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3dd480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3dd484: 0x0  nop
    ctx->pc = 0x3dd484u;
    // NOP
    ctx->pc = 0x3dd488u;
}
