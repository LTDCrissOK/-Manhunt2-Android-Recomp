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

// Function: sub_001A8668
// Address: 0x1a8668 - 0x1a86c0
void sub_001A8668_0x1a8668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8668_0x1a8668");
#endif

    switch (ctx->pc) {
        case 0x1a8680u: goto label_1a8680;
        case 0x1a8690u: goto label_1a8690;
        case 0x1a86acu: goto label_1a86ac;
        default: break;
    }

    ctx->pc = 0x1a8668u;

    // 0x1a8668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a8668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a866c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a866cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a8670: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a8670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a8674: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a8674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8678: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1A8678u;
    SET_GPR_U32(ctx, 31, 0x1A8680u);
    ctx->pc = 0x1A867Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8678u;
    // 0x1a867c: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1A8678u, 0x1A8680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8680u;
label_1a8680:
    // 0x1a8680: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A8680u;
    {
        const bool branch_taken_0x1a8680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8680u;
        // 0x1a8684: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8680) {
            ctx->pc = 0x1A86B0u;
            goto label_1a86b0;
        }
    }
    ctx->pc = 0x1A8688u;
    // 0x1a8688: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1A8688u;
    SET_GPR_U32(ctx, 31, 0x1A8690u);
    ctx->pc = 0x1A868Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8688u;
    // 0x1a868c: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1A8688u, 0x1A8690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8690u;
label_1a8690:
    // 0x1a8690: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x1a8690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x1a8694: 0x30633001  andi        $v1, $v1, 0x3001
    ctx->pc = 0x1a8694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12289);
    // 0x1a8698: 0x38633001  xori        $v1, $v1, 0x3001
    ctx->pc = 0x1a8698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)12289);
    // 0x1a869c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A869Cu;
    {
        const bool branch_taken_0x1a869c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a869c) {
            ctx->pc = 0x1A86A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A869Cu;
            // 0x1a86a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A86B0u;
            goto label_1a86b0;
        }
    }
    ctx->pc = 0x1A86A4u;
    // 0x1a86a4: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1A86A4u;
    SET_GPR_U32(ctx, 31, 0x1A86ACu);
    ctx->pc = 0x1A86A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A86A4u;
    // 0x1a86a8: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1A86A4u, 0x1A86ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A86ACu;
label_1a86ac:
    // 0x1a86ac: 0x8c420274  lw          $v0, 0x274($v0)
    ctx->pc = 0x1a86acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
label_1a86b0:
    // 0x1a86b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a86b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a86b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a86b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a86b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A86B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A86BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A86B8u;
        // 0x1a86bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A86B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A86C0u;
}
