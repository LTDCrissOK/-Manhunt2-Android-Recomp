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

// Function: sub_001114B0
// Address: 0x1114b0 - 0x111528
void sub_001114B0_0x1114b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001114B0_0x1114b0");
#endif

    switch (ctx->pc) {
        case 0x1114c8u: goto label_1114c8;
        case 0x1114dcu: goto label_1114dc;
        case 0x1114ecu: goto label_1114ec;
        case 0x1114fcu: goto label_1114fc;
        case 0x111510u: goto label_111510;
        default: break;
    }

    ctx->pc = 0x1114b0u;

    // 0x1114b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1114b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1114b4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1114b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1114b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1114b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1114bc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1114bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1114c0: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x1114C0u;
    SET_GPR_U32(ctx, 31, 0x1114C8u);
    ctx->pc = 0x1114C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1114C0u;
    // 0x1114c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x1114C0u, 0x1114C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1114C8u;
label_1114c8:
    // 0x1114c8: 0x8e05029c  lw          $a1, 0x29C($s0)
    ctx->pc = 0x1114c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 668)));
    // 0x1114cc: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1114CCu;
    {
        const bool branch_taken_0x1114cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1114cc) {
            ctx->pc = 0x1114F4u;
            goto label_1114f4;
        }
    }
    ctx->pc = 0x1114D4u;
    // 0x1114d4: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x1114D4u;
    SET_GPR_U32(ctx, 31, 0x1114DCu);
    ctx->pc = 0x1114D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1114D4u;
    // 0x1114d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x1114D4u, 0x1114DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1114DCu;
label_1114dc:
    // 0x1114dc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1114DCu;
    {
        const bool branch_taken_0x1114dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1114E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1114DCu;
        // 0x1114e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1114dc) {
            ctx->pc = 0x1114F4u;
            goto label_1114f4;
        }
    }
    ctx->pc = 0x1114E4u;
    // 0x1114e4: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x1114E4u;
    SET_GPR_U32(ctx, 31, 0x1114ECu);
    ctx->pc = 0x1114E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1114E4u;
    // 0x1114e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x1114E4u, 0x1114ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1114ECu;
label_1114ec:
    // 0x1114ec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1114ECu;
    {
        const bool branch_taken_0x1114ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1114F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1114ECu;
        // 0x1114f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1114ec) {
            ctx->pc = 0x111514u;
            goto label_111514;
        }
    }
    ctx->pc = 0x1114F4u;
label_1114f4:
    // 0x1114f4: 0xc0aafc4  jal         func_2ABF10
    ctx->pc = 0x1114F4u;
    SET_GPR_U32(ctx, 31, 0x1114FCu);
    ctx->pc = 0x1114F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1114F4u;
    // 0x1114f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF10u, 0x1114F4u, 0x1114FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1114FCu;
label_1114fc:
    // 0x1114fc: 0x244201f4  addiu       $v0, $v0, 0x1F4
    ctx->pc = 0x1114fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
    // 0x111500: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x111500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111504: 0xae02029c  sw          $v0, 0x29C($s0)
    ctx->pc = 0x111504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 2));
    // 0x111508: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x111508u;
    SET_GPR_U32(ctx, 31, 0x111510u);
    ctx->pc = 0x11150Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111508u;
    // 0x11150c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x111508u, 0x111510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111510u;
label_111510:
    // 0x111510: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x111510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_111514:
    // 0x111514: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x111514u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111518: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x111518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11151c: 0x3e00008  jr          $ra
    ctx->pc = 0x11151Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11151Cu;
        // 0x111520: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11151Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111524u;
    // 0x111524: 0x0  nop
    ctx->pc = 0x111524u;
    // NOP
    ctx->pc = 0x111528u;
}
