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

// Function: sub_001C0768
// Address: 0x1c0768 - 0x1c07c8
void sub_001C0768_0x1c0768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0768_0x1c0768");
#endif

    switch (ctx->pc) {
        case 0x1c0768u: goto label_1c0768;
        case 0x1c076cu: goto label_1c076c;
        case 0x1c0770u: goto label_1c0770;
        case 0x1c0774u: goto label_1c0774;
        case 0x1c0778u: goto label_1c0778;
        case 0x1c077cu: goto label_1c077c;
        case 0x1c0780u: goto label_1c0780;
        case 0x1c0784u: goto label_1c0784;
        case 0x1c0788u: goto label_1c0788;
        case 0x1c078cu: goto label_1c078c;
        case 0x1c0790u: goto label_1c0790;
        case 0x1c0794u: goto label_1c0794;
        case 0x1c0798u: goto label_1c0798;
        case 0x1c079cu: goto label_1c079c;
        case 0x1c07a0u: goto label_1c07a0;
        case 0x1c07a4u: goto label_1c07a4;
        case 0x1c07a8u: goto label_1c07a8;
        case 0x1c07acu: goto label_1c07ac;
        case 0x1c07b0u: goto label_1c07b0;
        case 0x1c07b4u: goto label_1c07b4;
        case 0x1c07b8u: goto label_1c07b8;
        case 0x1c07bcu: goto label_1c07bc;
        case 0x1c07c0u: goto label_1c07c0;
        case 0x1c07c4u: goto label_1c07c4;
        default: break;
    }

    ctx->pc = 0x1c0768u;

label_1c0768:
    // 0x1c0768: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c0768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c076c:
    // 0x1c076c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c076cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c0770:
    // 0x1c0770: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c0770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1c0774:
    // 0x1c0774: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c0774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c0778:
    // 0x1c0778: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c0778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c077c:
    // 0x1c077c: 0x8e030394  lw          $v1, 0x394($s0)
    ctx->pc = 0x1c077cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 916)));
label_1c0780:
    // 0x1c0780: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x1c0780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_1c0784:
    // 0x1c0784: 0x40f809  jalr        $v0
label_1c0788:
    if (ctx->pc == 0x1C0788u) {
        ctx->pc = 0x1C078Cu;
        goto label_1c078c;
    }
    ctx->pc = 0x1C0784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C078Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0784u, 0x1C078Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C078Cu;
label_1c078c:
    // 0x1c078c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c078cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c0790:
    // 0x1c0790: 0x8e0204c0  lw          $v0, 0x4C0($s0)
    ctx->pc = 0x1c0790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1216)));
label_1c0794:
    // 0x1c0794: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1c0798:
    if (ctx->pc == 0x1C0798u) {
        ctx->pc = 0x1C0798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0794u;
        // 0x1c0798: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C079Cu;
        goto label_1c079c;
    }
    ctx->pc = 0x1C0794u;
    {
        const bool branch_taken_0x1c0794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0794u;
        // 0x1c0798: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0794) {
            ctx->pc = 0x1C07B0u;
            goto label_1c07b0;
        }
    }
    ctx->pc = 0x1C079Cu;
label_1c079c:
    // 0x1c079c: 0x8e030394  lw          $v1, 0x394($s0)
    ctx->pc = 0x1c079cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 916)));
label_1c07a0:
    // 0x1c07a0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1c07a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1c07a4:
    // 0x1c07a4: 0x40f809  jalr        $v0
label_1c07a8:
    if (ctx->pc == 0x1C07A8u) {
        ctx->pc = 0x1C07A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C07A4u;
        // 0x1c07a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C07ACu;
        goto label_1c07ac;
    }
    ctx->pc = 0x1C07A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C07ACu);
        ctx->pc = 0x1C07A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C07A4u;
        // 0x1c07a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C07A4u, 0x1C07ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C07ACu;
label_1c07ac:
    // 0x1c07ac: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c07acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c07b0:
    // 0x1c07b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c07b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c07b4:
    // 0x1c07b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c07b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c07b8:
    // 0x1c07b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c07b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c07bc:
    // 0x1c07bc: 0x3e00008  jr          $ra
label_1c07c0:
    if (ctx->pc == 0x1C07C0u) {
        ctx->pc = 0x1C07C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C07BCu;
        // 0x1c07c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C07C4u;
        goto label_1c07c4;
    }
    ctx->pc = 0x1C07BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C07C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C07BCu;
        // 0x1c07c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C07BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C07C4u;
label_1c07c4:
    // 0x1c07c4: 0x0  nop
    ctx->pc = 0x1c07c4u;
    // NOP
    ctx->pc = 0x1c07c8u;
}
