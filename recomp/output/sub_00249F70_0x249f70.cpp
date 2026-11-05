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

// Function: sub_00249F70
// Address: 0x249f70 - 0x249fc8
void sub_00249F70_0x249f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249F70_0x249f70");
#endif

    ctx->pc = 0x249f70u;

    // 0x249f70: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x249f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x249f74: 0x24445870  addiu       $a0, $v0, 0x5870
    ctx->pc = 0x249f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
    // 0x249f78: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x249f78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x595874u));
    // 0x249f7c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x249F7Cu;
    {
        const bool branch_taken_0x249f7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x249F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F7Cu;
        // 0x249f80: 0x24030032  addiu       $v1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249f7c) {
            ctx->pc = 0x249F94u;
            goto label_249f94;
        }
    }
    ctx->pc = 0x249F84u;
    // 0x249f84: 0x908202f1  lbu         $v0, 0x2F1($a0)
    ctx->pc = 0x249f84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 753)));
    // 0x249f88: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x249F88u;
    {
        const bool branch_taken_0x249f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x249f88) {
            ctx->pc = 0x249F8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249F88u;
            // 0x249f8c: 0xac800018  sw          $zero, 0x18($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249F94u;
            goto label_249f94;
        }
    }
    ctx->pc = 0x249F90u;
    // 0x249f90: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x249f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_249f94:
    // 0x249f94: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x249f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x249f98: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x249f98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x249f9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x249f9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249fa0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x249fa0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x249fa4: 0x0  nop
    ctx->pc = 0x249fa4u;
    // NOP
    // 0x249fa8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x249fa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x249fac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x249facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x249fb0: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x249fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x249fb4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x249fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x249fb8: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x249fb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x249fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x249FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249FBCu;
        // 0x249fc0: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249FC4u;
    // 0x249fc4: 0x0  nop
    ctx->pc = 0x249fc4u;
    // NOP
    ctx->pc = 0x249fc8u;
}
