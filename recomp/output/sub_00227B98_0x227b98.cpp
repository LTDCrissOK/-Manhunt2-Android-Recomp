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

// Function: sub_00227B98
// Address: 0x227b98 - 0x227be0
void sub_00227B98_0x227b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227B98_0x227b98");
#endif

    switch (ctx->pc) {
        case 0x227bacu: goto label_227bac;
        case 0x227bb8u: goto label_227bb8;
        case 0x227bc8u: goto label_227bc8;
        default: break;
    }

    ctx->pc = 0x227b98u;

    // 0x227b98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x227b9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x227b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x227ba0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x227ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x227ba4: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x227BA4u;
    SET_GPR_U32(ctx, 31, 0x227BACu);
    ctx->pc = 0x227BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227BA4u;
    // 0x227ba8: 0x240503e9  addiu       $a1, $zero, 0x3E9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x227BA4u, 0x227BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227BACu;
label_227bac:
    // 0x227bac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x227bacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227bb0: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x227BB0u;
    SET_GPR_U32(ctx, 31, 0x227BB8u);
    ctx->pc = 0x227BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227BB0u;
    // 0x227bb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x227BB0u, 0x227BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227BB8u;
label_227bb8:
    // 0x227bb8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x227BB8u;
    {
        const bool branch_taken_0x227bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227BB8u;
        // 0x227bbc: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227bb8) {
            ctx->pc = 0x227BCCu;
            goto label_227bcc;
        }
    }
    ctx->pc = 0x227BC0u;
    // 0x227bc0: 0xc0c4900  jal         func_312400
    ctx->pc = 0x227BC0u;
    SET_GPR_U32(ctx, 31, 0x227BC8u);
    ctx->pc = 0x227BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227BC0u;
    // 0x227bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x227BC0u, 0x227BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227BC8u;
label_227bc8:
    // 0x227bc8: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x227bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_227bcc:
    // 0x227bcc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x227bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x227bd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x227bd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x227BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227BD4u;
        // 0x227bd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227BDCu;
    // 0x227bdc: 0x0  nop
    ctx->pc = 0x227bdcu;
    // NOP
    ctx->pc = 0x227be0u;
}
