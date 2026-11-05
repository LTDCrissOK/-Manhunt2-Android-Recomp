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

// Function: sub_00191770
// Address: 0x191770 - 0x1917c8
void sub_00191770_0x191770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191770_0x191770");
#endif

    switch (ctx->pc) {
        case 0x191770u: goto label_191770;
        case 0x191774u: goto label_191774;
        case 0x191778u: goto label_191778;
        case 0x19177cu: goto label_19177c;
        case 0x191780u: goto label_191780;
        case 0x191784u: goto label_191784;
        case 0x191788u: goto label_191788;
        case 0x19178cu: goto label_19178c;
        case 0x191790u: goto label_191790;
        case 0x191794u: goto label_191794;
        case 0x191798u: goto label_191798;
        case 0x19179cu: goto label_19179c;
        case 0x1917a0u: goto label_1917a0;
        case 0x1917a4u: goto label_1917a4;
        case 0x1917a8u: goto label_1917a8;
        case 0x1917acu: goto label_1917ac;
        case 0x1917b0u: goto label_1917b0;
        case 0x1917b4u: goto label_1917b4;
        case 0x1917b8u: goto label_1917b8;
        case 0x1917bcu: goto label_1917bc;
        case 0x1917c0u: goto label_1917c0;
        case 0x1917c4u: goto label_1917c4;
        default: break;
    }

    ctx->pc = 0x191770u;

label_191770:
    // 0x191770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x191770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_191774:
    // 0x191774: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x191774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_191778:
    // 0x191778: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x191778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_19177c:
    // 0x19177c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19177cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_191780:
    // 0x191780: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x191780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_191784:
    // 0x191784: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x191784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_191788:
    // 0x191788: 0x40f809  jalr        $v0
label_19178c:
    if (ctx->pc == 0x19178Cu) {
        ctx->pc = 0x191790u;
        goto label_191790;
    }
    ctx->pc = 0x191788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x191790u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191788u, 0x191790u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x191790u;
label_191790:
    // 0x191790: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_191794:
    if (ctx->pc == 0x191794u) {
        ctx->pc = 0x191798u;
        goto label_191798;
    }
    ctx->pc = 0x191790u;
    {
        const bool branch_taken_0x191790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191790) {
            ctx->pc = 0x1917A8u;
            goto label_1917a8;
        }
    }
    ctx->pc = 0x191798u;
label_191798:
    // 0x191798: 0xc061a12  jal         func_186848
label_19179c:
    if (ctx->pc == 0x19179Cu) {
        ctx->pc = 0x19179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191798u;
        // 0x19179c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1917A0u;
        goto label_1917a0;
    }
    ctx->pc = 0x191798u;
    SET_GPR_U32(ctx, 31, 0x1917A0u);
    ctx->pc = 0x19179Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191798u;
    // 0x19179c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x191798u, 0x1917A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1917A0u;
label_1917a0:
    // 0x1917a0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1917a4:
    if (ctx->pc == 0x1917A4u) {
        ctx->pc = 0x1917A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917A0u;
        // 0x1917a4: 0xac40035c  sw          $zero, 0x35C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 860), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1917A8u;
        goto label_1917a8;
    }
    ctx->pc = 0x1917A0u;
    {
        const bool branch_taken_0x1917a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1917A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917A0u;
        // 0x1917a4: 0xac40035c  sw          $zero, 0x35C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 860), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1917a0) {
            ctx->pc = 0x1917B8u;
            goto label_1917b8;
        }
    }
    ctx->pc = 0x1917A8u;
label_1917a8:
    // 0x1917a8: 0xc061a12  jal         func_186848
label_1917ac:
    if (ctx->pc == 0x1917ACu) {
        ctx->pc = 0x1917ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917A8u;
        // 0x1917ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1917B0u;
        goto label_1917b0;
    }
    ctx->pc = 0x1917A8u;
    SET_GPR_U32(ctx, 31, 0x1917B0u);
    ctx->pc = 0x1917ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1917A8u;
    // 0x1917ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1917A8u, 0x1917B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1917B0u;
label_1917b0:
    // 0x1917b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1917b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1917b4:
    // 0x1917b4: 0xac43035c  sw          $v1, 0x35C($v0)
    ctx->pc = 0x1917b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 860), GPR_U32(ctx, 3));
label_1917b8:
    // 0x1917b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1917b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1917bc:
    // 0x1917bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1917bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1917c0:
    // 0x1917c0: 0x3e00008  jr          $ra
label_1917c4:
    if (ctx->pc == 0x1917C4u) {
        ctx->pc = 0x1917C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917C0u;
        // 0x1917c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1917C8u;
        goto label_fallthrough_0x1917c0;
    }
    ctx->pc = 0x1917C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1917C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917C0u;
        // 0x1917c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1917C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1917c0:
    ctx->pc = 0x1917C8u;
}
