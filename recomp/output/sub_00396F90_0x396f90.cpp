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

// Function: sub_00396F90
// Address: 0x396f90 - 0x397018
void sub_00396F90_0x396f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396F90_0x396f90");
#endif

    switch (ctx->pc) {
        case 0x396fe4u: goto label_396fe4;
        case 0x396ff8u: goto label_396ff8;
        case 0x397008u: goto label_397008;
        default: break;
    }

    ctx->pc = 0x396f90u;

    // 0x396f90: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x396f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x396f94: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x396f94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x396f98: 0x8c4791f8  lw          $a3, -0x6E08($v0)
    ctx->pc = 0x396f98u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x4091F8u));
    // 0x396f9c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x396f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x396fa0: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x396fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x396fa4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x396fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x396fa8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x396fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x396fac: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x396facu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x396fb0: 0x246331f0  addiu       $v1, $v1, 0x31F0
    ctx->pc = 0x396fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12784));
    // 0x396fb4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x396fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396fb8: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x396fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x396fbc: 0x24a56a30  addiu       $a1, $a1, 0x6A30
    ctx->pc = 0x396fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27184));
    // 0x396fc0: 0x2442aa70  addiu       $v0, $v0, -0x5590
    ctx->pc = 0x396fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945392));
    // 0x396fc4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x396fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x396fc8: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x396fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x396fcc: 0x26101960  addiu       $s0, $s0, 0x1960
    ctx->pc = 0x396fccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6496));
    // 0x396fd0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x396fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x396fd4: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x396fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x396fd8: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x396fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x396fdc: 0xc0f25e8  jal         func_3C97A0
    ctx->pc = 0x396FDCu;
    SET_GPR_U32(ctx, 31, 0x396FE4u);
    ctx->pc = 0x396FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396FDCu;
    // 0x396fe0: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C97A0u, 0x396FDCu, 0x396FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396FE4u;
label_396fe4:
    // 0x396fe4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x396fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x396fe8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x396fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396fec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x396fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x396ff0: 0xc0f2a1e  jal         func_3CA878
    ctx->pc = 0x396FF0u;
    SET_GPR_U32(ctx, 31, 0x396FF8u);
    ctx->pc = 0x396FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396FF0u;
    // 0x396ff4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA878u, 0x396FF0u, 0x396FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396FF8u;
label_396ff8:
    // 0x396ff8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x396ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x396ffc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x396ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x397000: 0xc0f260c  jal         func_3C9830
    ctx->pc = 0x397000u;
    SET_GPR_U32(ctx, 31, 0x397008u);
    ctx->pc = 0x397004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397000u;
    // 0x397004: 0x8c4518dc  lw          $a1, 0x18DC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6364)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9830u, 0x397000u, 0x397008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397008u;
label_397008:
    // 0x397008: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x397008u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39700c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x39700cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x397010: 0x3e00008  jr          $ra
    ctx->pc = 0x397010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397010u;
        // 0x397014: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397018u;
}
