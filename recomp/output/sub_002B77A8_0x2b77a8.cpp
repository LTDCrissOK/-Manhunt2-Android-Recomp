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

// Function: sub_002B77A8
// Address: 0x2b77a8 - 0x2b7810
void sub_002B77A8_0x2b77a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B77A8_0x2b77a8");
#endif

    switch (ctx->pc) {
        case 0x2b77bcu: goto label_2b77bc;
        case 0x2b77c4u: goto label_2b77c4;
        case 0x2b77dcu: goto label_2b77dc;
        case 0x2b77e4u: goto label_2b77e4;
        case 0x2b77ecu: goto label_2b77ec;
        case 0x2b77f4u: goto label_2b77f4;
        default: break;
    }

    ctx->pc = 0x2b77a8u;

    // 0x2b77a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b77a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b77ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b77acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b77b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2b77b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2b77b4: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B77B4u;
    SET_GPR_U32(ctx, 31, 0x2B77BCu);
    ctx->pc = 0x2B77B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B77B4u;
    // 0x2b77b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B77B4u, 0x2B77BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B77BCu;
label_2b77bc:
    // 0x2b77bc: 0xc0ace0e  jal         func_2B3838
    ctx->pc = 0x2B77BCu;
    SET_GPR_U32(ctx, 31, 0x2B77C4u);
    ctx->pc = 0x2B77C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B77BCu;
    // 0x2b77c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3838u, 0x2B77BCu, 0x2B77C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B77C4u;
label_2b77c4:
    // 0x2b77c4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2b77c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2b77c8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2b77c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2b77cc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B77CCu;
    {
        const bool branch_taken_0x2b77cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B77D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B77CCu;
        // 0x2b77d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b77cc) {
            ctx->pc = 0x2B77FCu;
            goto label_2b77fc;
        }
    }
    ctx->pc = 0x2B77D4u;
    // 0x2b77d4: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B77D4u;
    SET_GPR_U32(ctx, 31, 0x2B77DCu);
    ctx->pc = 0x2B77D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B77D4u;
    // 0x2b77d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B77D4u, 0x2B77DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B77DCu;
label_2b77dc:
    // 0x2b77dc: 0xc0ad336  jal         func_2B4CD8
    ctx->pc = 0x2B77DCu;
    SET_GPR_U32(ctx, 31, 0x2B77E4u);
    ctx->pc = 0x2B77E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B77DCu;
    // 0x2b77e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4CD8u, 0x2B77DCu, 0x2B77E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B77E4u;
label_2b77e4:
    // 0x2b77e4: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B77E4u;
    SET_GPR_U32(ctx, 31, 0x2B77ECu);
    ctx->pc = 0x2B77E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B77E4u;
    // 0x2b77e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B77E4u, 0x2B77ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B77ECu;
label_2b77ec:
    // 0x2b77ec: 0xc0ad3fa  jal         func_2B4FE8
    ctx->pc = 0x2B77ECu;
    SET_GPR_U32(ctx, 31, 0x2B77F4u);
    ctx->pc = 0x2B77F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B77ECu;
    // 0x2b77f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4FE8u, 0x2B77ECu, 0x2B77F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B77F4u;
label_2b77f4:
    // 0x2b77f4: 0xae025908  sw          $v0, 0x5908($s0)
    ctx->pc = 0x2b77f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22792), GPR_U32(ctx, 2));
    // 0x2b77f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b77f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b77fc:
    // 0x2b77fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b77fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7800: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b7800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b7804: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7804u;
        // 0x2b7808: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B780Cu;
    // 0x2b780c: 0x0  nop
    ctx->pc = 0x2b780cu;
    // NOP
    ctx->pc = 0x2b7810u;
}
