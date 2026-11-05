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

// Function: sub_00334018
// Address: 0x334018 - 0x334068
void sub_00334018_0x334018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334018_0x334018");
#endif

    switch (ctx->pc) {
        case 0x334030u: goto label_334030;
        case 0x334054u: goto label_334054;
        default: break;
    }

    ctx->pc = 0x334018u;

    // 0x334018: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x334018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x33401c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33401cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x334020: 0x8c44ef38  lw          $a0, -0x10C8($v0)
    ctx->pc = 0x334020u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4BEF38u));
    // 0x334024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x334024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x334028: 0xc0cd114  jal         func_334450
    ctx->pc = 0x334028u;
    SET_GPR_U32(ctx, 31, 0x334030u);
    ctx->pc = 0x334450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334450u, 0x334028u, 0x334030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334030u;
label_334030:
    // 0x334030: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x334030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334034: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x334034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x334038: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x334038u;
    {
        const bool branch_taken_0x334038 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x33403Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334038u;
        // 0x33403c: 0xac45bedc  sw          $a1, -0x4124($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950620), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334038) {
            ctx->pc = 0x334048u;
            goto label_334048;
        }
    }
    ctx->pc = 0x334040u;
    // 0x334040: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x334040u;
    {
        const bool branch_taken_0x334040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334040u;
        // 0x334044: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334040) {
            ctx->pc = 0x334058u;
            goto label_334058;
        }
    }
    ctx->pc = 0x334048u;
label_334048:
    // 0x334048: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x334048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
    // 0x33404c: 0xc0fba22  jal         func_3EE888
    ctx->pc = 0x33404Cu;
    SET_GPR_U32(ctx, 31, 0x334054u);
    ctx->pc = 0x334050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33404Cu;
    // 0x334050: 0x24846e70  addiu       $a0, $a0, 0x6E70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EE888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EE888u, 0x33404Cu, 0x334054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334054u;
label_334054:
    // 0x334054: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x334054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_334058:
    // 0x334058: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x334058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33405c: 0x3e00008  jr          $ra
    ctx->pc = 0x33405Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33405Cu;
        // 0x334060: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33405Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334064u;
    // 0x334064: 0x0  nop
    ctx->pc = 0x334064u;
    // NOP
    ctx->pc = 0x334068u;
}
