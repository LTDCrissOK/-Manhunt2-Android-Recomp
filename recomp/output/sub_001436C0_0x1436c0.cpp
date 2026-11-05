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

// Function: sub_001436C0
// Address: 0x1436c0 - 0x143708
void sub_001436C0_0x1436c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001436C0_0x1436c0");
#endif

    switch (ctx->pc) {
        case 0x1436dcu: goto label_1436dc;
        case 0x1436e4u: goto label_1436e4;
        case 0x1436f4u: goto label_1436f4;
        default: break;
    }

    ctx->pc = 0x1436c0u;

    // 0x1436c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1436c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1436c4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1436c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1436c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1436c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1436cc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1436ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1436d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1436d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1436d4: 0xc04e86c  jal         func_13A1B0
    ctx->pc = 0x1436D4u;
    SET_GPR_U32(ctx, 31, 0x1436DCu);
    ctx->pc = 0x1436D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1436D4u;
    // 0x1436d8: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A1B0u, 0x1436D4u, 0x1436DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1436DCu;
label_1436dc:
    // 0x1436dc: 0xc04edba  jal         func_13B6E8
    ctx->pc = 0x1436DCu;
    SET_GPR_U32(ctx, 31, 0x1436E4u);
    ctx->pc = 0x1436E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1436DCu;
    // 0x1436e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B6E8u, 0x1436DCu, 0x1436E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1436E4u;
label_1436e4:
    // 0x1436e4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1436E4u;
    {
        const bool branch_taken_0x1436e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1436e4) {
            ctx->pc = 0x1436E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1436E4u;
            // 0x1436e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1436F8u;
            goto label_1436f8;
        }
    }
    ctx->pc = 0x1436ECu;
    // 0x1436ec: 0xc04ec30  jal         func_13B0C0
    ctx->pc = 0x1436ECu;
    SET_GPR_U32(ctx, 31, 0x1436F4u);
    ctx->pc = 0x1436F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1436ECu;
    // 0x1436f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B0C0u, 0x1436ECu, 0x1436F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1436F4u;
label_1436f4:
    // 0x1436f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1436f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1436f8:
    // 0x1436f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1436f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1436fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1436FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1436FCu;
        // 0x143700: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1436FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143704u;
    // 0x143704: 0x0  nop
    ctx->pc = 0x143704u;
    // NOP
    ctx->pc = 0x143708u;
}
