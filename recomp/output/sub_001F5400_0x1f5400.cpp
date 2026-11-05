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

// Function: sub_001F5400
// Address: 0x1f5400 - 0x1f5458
void sub_001F5400_0x1f5400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5400_0x1f5400");
#endif

    switch (ctx->pc) {
        case 0x1f5444u: goto label_1f5444;
        default: break;
    }

    ctx->pc = 0x1f5400u;

    // 0x1f5400: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f5400u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1f5404: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1f5404u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1f5408: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f5408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f540c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f540cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f5410: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1f5410u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5414: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f5414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f5418: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x1f5418u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f541c: 0xa50300f4  sh          $v1, 0xF4($t0)
    ctx->pc = 0x1f541cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 244), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f5420: 0x2442fb78  addiu       $v0, $v0, -0x488
    ctx->pc = 0x1f5420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966136));
    // 0x1f5424: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1f5424u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1f5428: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1f5428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1f542c: 0xad090104  sw          $t1, 0x104($t0)
    ctx->pc = 0x1f542cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 260), GPR_U32(ctx, 9));
    // 0x1f5430: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x1f5430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x1f5434: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x1f5434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1f5438: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f5438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f543c: 0xc046642  jal         func_119908
    ctx->pc = 0x1F543Cu;
    SET_GPR_U32(ctx, 31, 0x1F5444u);
    ctx->pc = 0x1F5440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F543Cu;
    // 0x1f5440: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x1F543Cu, 0x1F5444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5444u;
label_1f5444:
    // 0x1f5444: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f5444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5448: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f5448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f544c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F544Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F544Cu;
        // 0x1f5450: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F544Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5454u;
    // 0x1f5454: 0x0  nop
    ctx->pc = 0x1f5454u;
    // NOP
    ctx->pc = 0x1f5458u;
}
