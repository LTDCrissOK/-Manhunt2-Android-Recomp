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

// Function: sub_002091B8
// Address: 0x2091b8 - 0x209208
void sub_002091B8_0x2091b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002091B8_0x2091b8");
#endif

    switch (ctx->pc) {
        case 0x2091ecu: goto label_2091ec;
        default: break;
    }

    ctx->pc = 0x2091b8u;

    // 0x2091b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2091b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2091bc: 0x460c6801  sub.s       $f0, $f13, $f12
    ctx->pc = 0x2091bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
    // 0x2091c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2091c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2091c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2091c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2091c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2091c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2091cc: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2091ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2091d0: 0xe60e0010  swc1        $f14, 0x10($s0)
    ctx->pc = 0x2091d0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2091d4: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x2091d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2091d8: 0xe60f0014  swc1        $f15, 0x14($s0)
    ctx->pc = 0x2091d8u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2091dc: 0xe60c001c  swc1        $f12, 0x1C($s0)
    ctx->pc = 0x2091dcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x2091e0: 0xe60c0004  swc1        $f12, 0x4($s0)
    ctx->pc = 0x2091e0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2091e4: 0xc076100  jal         func_1D8400
    ctx->pc = 0x2091E4u;
    SET_GPR_U32(ctx, 31, 0x2091ECu);
    ctx->pc = 0x2091E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2091E4u;
    // 0x2091e8: 0xe60d0008  swc1        $f13, 0x8($s0) (Delay Slot)
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x2091E4u, 0x2091ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2091ECu;
label_2091ec:
    // 0x2091ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2091ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2091f0: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x2091f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x2091f4: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2091f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2091f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2091f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2091fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2091fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x209200: 0x3e00008  jr          $ra
    ctx->pc = 0x209200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209200u;
        // 0x209204: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209208u;
}
