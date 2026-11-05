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

// Function: sub_001A8098
// Address: 0x1a8098 - 0x1a8118
void sub_001A8098_0x1a8098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8098_0x1a8098");
#endif

    switch (ctx->pc) {
        case 0x1a80bcu: goto label_1a80bc;
        case 0x1a80e0u: goto label_1a80e0;
        case 0x1a80f4u: goto label_1a80f4;
        default: break;
    }

    ctx->pc = 0x1a8098u;

    // 0x1a8098: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a8098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a809c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a809cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a80a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a80a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a80a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a80a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a80a8: 0x8c840148  lw          $a0, 0x148($a0)
    ctx->pc = 0x1a80a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x1a80ac: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A80ACu;
    {
        const bool branch_taken_0x1a80ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A80B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A80ACu;
        // 0x1a80b0: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a80ac) {
            ctx->pc = 0x1A80FCu;
            goto label_1a80fc;
        }
    }
    ctx->pc = 0x1A80B4u;
    // 0x1a80b4: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1A80B4u;
    SET_GPR_U32(ctx, 31, 0x1A80BCu);
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1A80B4u, 0x1A80BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A80BCu;
label_1a80bc:
    // 0x1a80bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a80bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a80c0: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A80C0u;
    {
        const bool branch_taken_0x1a80c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A80C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A80C0u;
        // 0x1a80c4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a80c0) {
            ctx->pc = 0x1A8100u;
            goto label_1a8100;
        }
    }
    ctx->pc = 0x1A80C8u;
    // 0x1a80c8: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1a80c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1a80cc: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x1a80ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x1a80d0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A80D0u;
    {
        const bool branch_taken_0x1a80d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A80D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A80D0u;
        // 0x1a80d4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a80d0) {
            ctx->pc = 0x1A8100u;
            goto label_1a8100;
        }
    }
    ctx->pc = 0x1A80D8u;
    // 0x1a80d8: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x1A80D8u;
    SET_GPR_U32(ctx, 31, 0x1A80E0u);
    ctx->pc = 0x1A80DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A80D8u;
    // 0x1a80dc: 0x8e040274  lw          $a0, 0x274($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x1A80D8u, 0x1A80E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A80E0u;
label_1a80e0:
    // 0x1a80e0: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x1a80e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x1a80e4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A80E4u;
    {
        const bool branch_taken_0x1a80e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A80E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A80E4u;
        // 0x1a80e8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a80e4) {
            ctx->pc = 0x1A8100u;
            goto label_1a8100;
        }
    }
    ctx->pc = 0x1A80ECu;
    // 0x1a80ec: 0xc0987d2  jal         func_261F48
    ctx->pc = 0x1A80ECu;
    SET_GPR_U32(ctx, 31, 0x1A80F4u);
    ctx->pc = 0x1A80F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A80ECu;
    // 0x1a80f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261F48u, 0x1A80ECu, 0x1A80F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A80F4u;
label_1a80f4:
    // 0x1a80f4: 0x3843000e  xori        $v1, $v0, 0xE
    ctx->pc = 0x1a80f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x1a80f8: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x1a80f8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_1a80fc:
    // 0x1a80fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a80fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a8100:
    // 0x1a8100: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8104: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a8104u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a8108: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a8108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a810c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A810Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A810Cu;
        // 0x1a8110: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A810Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8114u;
    // 0x1a8114: 0x0  nop
    ctx->pc = 0x1a8114u;
    // NOP
    ctx->pc = 0x1a8118u;
}
