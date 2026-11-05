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

// Function: sub_00397018
// Address: 0x397018 - 0x3970a0
void sub_00397018_0x397018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397018_0x397018");
#endif

    switch (ctx->pc) {
        case 0x39706cu: goto label_39706c;
        case 0x397080u: goto label_397080;
        case 0x397090u: goto label_397090;
        default: break;
    }

    ctx->pc = 0x397018u;

    // 0x397018: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x397018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x39701c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x39701cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x397020: 0x8c4791f8  lw          $a3, -0x6E08($v0)
    ctx->pc = 0x397020u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x4091F8u));
    // 0x397024: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x397024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x397028: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x397028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x39702c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x39702cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x397030: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x397030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x397034: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x397034u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x397038: 0x246341f0  addiu       $v1, $v1, 0x41F0
    ctx->pc = 0x397038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16880));
    // 0x39703c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x39703cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397040: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x397040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x397044: 0x24a56b38  addiu       $a1, $a1, 0x6B38
    ctx->pc = 0x397044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27448));
    // 0x397048: 0x2442aa70  addiu       $v0, $v0, -0x5590
    ctx->pc = 0x397048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945392));
    // 0x39704c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x39704cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x397050: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x397050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x397054: 0x26101964  addiu       $s0, $s0, 0x1964
    ctx->pc = 0x397054u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6500));
    // 0x397058: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x397058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x39705c: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x39705cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x397060: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x397060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x397064: 0xc0f25e8  jal         func_3C97A0
    ctx->pc = 0x397064u;
    SET_GPR_U32(ctx, 31, 0x39706Cu);
    ctx->pc = 0x397068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397064u;
    // 0x397068: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C97A0u, 0x397064u, 0x39706Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39706Cu;
label_39706c:
    // 0x39706c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x39706cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x397070: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x397070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397074: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x397074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x397078: 0xc0f2a1e  jal         func_3CA878
    ctx->pc = 0x397078u;
    SET_GPR_U32(ctx, 31, 0x397080u);
    ctx->pc = 0x39707Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397078u;
    // 0x39707c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA878u, 0x397078u, 0x397080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397080u;
label_397080:
    // 0x397080: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x397080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x397084: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x397084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x397088: 0xc0f260c  jal         func_3C9830
    ctx->pc = 0x397088u;
    SET_GPR_U32(ctx, 31, 0x397090u);
    ctx->pc = 0x39708Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397088u;
    // 0x39708c: 0x8c4518e0  lw          $a1, 0x18E0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6368)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9830u, 0x397088u, 0x397090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397090u;
label_397090:
    // 0x397090: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x397090u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x397094: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x397094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x397098: 0x3e00008  jr          $ra
    ctx->pc = 0x397098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397098u;
        // 0x39709c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3970A0u;
}
