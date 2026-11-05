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

// Function: sub_001573B0
// Address: 0x1573b0 - 0x157438
void sub_001573B0_0x1573b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001573B0_0x1573b0");
#endif

    switch (ctx->pc) {
        case 0x1573e0u: goto label_1573e0;
        case 0x1573f8u: goto label_1573f8;
        case 0x15740cu: goto label_15740c;
        default: break;
    }

    ctx->pc = 0x1573b0u;

    // 0x1573b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1573b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1573b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1573b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1573b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1573b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1573bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1573bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1573c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1573c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1573c4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1573c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1573c8: 0x922202a8  lbu         $v0, 0x2A8($s1)
    ctx->pc = 0x1573c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 680)));
    // 0x1573cc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1573CCu;
    {
        const bool branch_taken_0x1573cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1573D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1573CCu;
        // 0x1573d0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1573cc) {
            ctx->pc = 0x157420u;
            goto label_157420;
        }
    }
    ctx->pc = 0x1573D4u;
    // 0x1573d4: 0x26320228  addiu       $s2, $s1, 0x228
    ctx->pc = 0x1573d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 552));
    // 0x1573d8: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1573d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1573dc: 0x0  nop
    ctx->pc = 0x1573dcu;
    // NOP
label_1573e0:
    // 0x1573e0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1573e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1573e4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1573e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1573e8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1573E8u;
    {
        const bool branch_taken_0x1573e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1573ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1573E8u;
        // 0x1573ec: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1573e8) {
            ctx->pc = 0x157410u;
            goto label_157410;
        }
    }
    ctx->pc = 0x1573F0u;
    // 0x1573f0: 0xc04d7c0  jal         func_135F00
    ctx->pc = 0x1573F0u;
    SET_GPR_U32(ctx, 31, 0x1573F8u);
    ctx->pc = 0x135F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F00u, 0x1573F0u, 0x1573F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1573F8u;
label_1573f8:
    // 0x1573f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1573F8u;
    {
        const bool branch_taken_0x1573f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1573FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1573F8u;
        // 0x1573fc: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1573f8) {
            ctx->pc = 0x157410u;
            goto label_157410;
        }
    }
    ctx->pc = 0x157400u;
    // 0x157400: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x157400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157404: 0xc04f372  jal         func_13CDC8
    ctx->pc = 0x157404u;
    SET_GPR_U32(ctx, 31, 0x15740Cu);
    ctx->pc = 0x157408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157404u;
    // 0x157408: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CDC8u, 0x157404u, 0x15740Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15740Cu;
label_15740c:
    // 0x15740c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x15740cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_157410:
    // 0x157410: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x157410u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x157414: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x157414u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x157418: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x157418u;
    {
        const bool branch_taken_0x157418 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157418u;
        // 0x15741c: 0x1010c0  sll         $v0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157418) {
            ctx->pc = 0x1573E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1573e0;
        }
    }
    ctx->pc = 0x157420u;
label_157420:
    // 0x157420: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x157420u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157424: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x157424u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x157428: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x157428u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15742c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x15742cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x157430: 0x3e00008  jr          $ra
    ctx->pc = 0x157430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157430u;
        // 0x157434: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157438u;
}
