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

// Function: sub_00398068
// Address: 0x398068 - 0x3980c8
void sub_00398068_0x398068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398068_0x398068");
#endif

    switch (ctx->pc) {
        case 0x398090u: goto label_398090;
        case 0x398098u: goto label_398098;
        case 0x3980a8u: goto label_3980a8;
        default: break;
    }

    ctx->pc = 0x398068u;

    // 0x398068: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x398068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39806c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39806cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x398070: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x398070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398074: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x398074u;
    {
        const bool branch_taken_0x398074 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x398078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398074u;
        // 0x398078: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398074) {
            ctx->pc = 0x3980B8u;
            goto label_3980b8;
        }
    }
    ctx->pc = 0x39807Cu;
    // 0x39807c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x39807cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x398080: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x398080u;
    {
        const bool branch_taken_0x398080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x398084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398080u;
        // 0x398084: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398080) {
            ctx->pc = 0x398090u;
            goto label_398090;
        }
    }
    ctx->pc = 0x398088u;
    // 0x398088: 0xc0eb700  jal         func_3ADC00
    ctx->pc = 0x398088u;
    SET_GPR_U32(ctx, 31, 0x398090u);
    ctx->pc = 0x39808Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398088u;
    // 0x39808c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ADC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADC00u, 0x398088u, 0x398090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398090u;
label_398090:
    // 0x398090: 0xc0ebe50  jal         func_3AF940
    ctx->pc = 0x398090u;
    SET_GPR_U32(ctx, 31, 0x398098u);
    ctx->pc = 0x3AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF940u, 0x398090u, 0x398098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398098u;
label_398098:
    // 0x398098: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x398098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39809c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39809cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3980a0: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3980A0u;
    SET_GPR_U32(ctx, 31, 0x3980A8u);
    ctx->pc = 0x3980A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3980A0u;
    // 0x3980a4: 0x240600ac  addiu       $a2, $zero, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3980A0u, 0x3980A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3980A8u;
label_3980a8:
    // 0x3980a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3980a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3980ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3980acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3980b0: 0x80ebe56  j           func_3AF958
    ctx->pc = 0x3980B0u;
    ctx->pc = 0x3980B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3980B0u;
    // 0x3980b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF958u;
    sub_003AF958_0x3af958(rdram, ctx, runtime); return;
    ctx->pc = 0x3980B8u;
label_3980b8:
    // 0x3980b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3980b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3980bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3980bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3980c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3980C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3980C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3980C0u;
        // 0x3980c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3980C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3980C8u;
}
