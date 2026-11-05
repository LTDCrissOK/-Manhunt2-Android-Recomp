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

// Function: sub_0020A2B8
// Address: 0x20a2b8 - 0x20a300
void sub_0020A2B8_0x20a2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A2B8_0x20a2b8");
#endif

    switch (ctx->pc) {
        case 0x20a2f0u: goto label_20a2f0;
        default: break;
    }

    ctx->pc = 0x20a2b8u;

    // 0x20a2b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20a2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20a2bc: 0x3c014496  lui         $at, 0x4496
    ctx->pc = 0x20a2bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17558 << 16));
    // 0x20a2c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20a2c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a2c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20a2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20a2c8: 0x2405400a  addiu       $a1, $zero, 0x400A
    ctx->pc = 0x20a2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16394));
    // 0x20a2cc: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x20a2ccu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x20a2d0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x20a2d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a2d4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x20a2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20a2d8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20a2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20a2dc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x20a2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x20a2e0: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20a2e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x20a2e4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x20a2e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x20a2e8: 0xc082700  jal         func_209C00
    ctx->pc = 0x20A2E8u;
    SET_GPR_U32(ctx, 31, 0x20A2F0u);
    ctx->pc = 0x20A2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A2E8u;
    // 0x20a2ec: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209C00u, 0x20A2E8u, 0x20A2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A2F0u;
label_20a2f0:
    // 0x20a2f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20a2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a2f4: 0x3e00008  jr          $ra
    ctx->pc = 0x20A2F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A2F4u;
        // 0x20a2f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A2F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A2FCu;
    // 0x20a2fc: 0x0  nop
    ctx->pc = 0x20a2fcu;
    // NOP
    ctx->pc = 0x20a300u;
}
