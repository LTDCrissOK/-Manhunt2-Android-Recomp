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

// Function: sub_00133778
// Address: 0x133778 - 0x1337d0
void sub_00133778_0x133778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133778_0x133778");
#endif

    switch (ctx->pc) {
        case 0x133778u: goto label_133778;
        case 0x13377cu: goto label_13377c;
        case 0x133780u: goto label_133780;
        case 0x133784u: goto label_133784;
        case 0x133788u: goto label_133788;
        case 0x13378cu: goto label_13378c;
        case 0x133790u: goto label_133790;
        case 0x133794u: goto label_133794;
        case 0x133798u: goto label_133798;
        case 0x13379cu: goto label_13379c;
        case 0x1337a0u: goto label_1337a0;
        case 0x1337a4u: goto label_1337a4;
        case 0x1337a8u: goto label_1337a8;
        case 0x1337acu: goto label_1337ac;
        case 0x1337b0u: goto label_1337b0;
        case 0x1337b4u: goto label_1337b4;
        case 0x1337b8u: goto label_1337b8;
        case 0x1337bcu: goto label_1337bc;
        case 0x1337c0u: goto label_1337c0;
        case 0x1337c4u: goto label_1337c4;
        case 0x1337c8u: goto label_1337c8;
        case 0x1337ccu: goto label_1337cc;
        default: break;
    }

    ctx->pc = 0x133778u;

label_133778:
    // 0x133778: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x133778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_13377c:
    // 0x13377c: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x13377cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_133780:
    // 0x133780: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x133780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_133784:
    // 0x133784: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x133784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_133788:
    // 0x133788: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x133788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13378c:
    // 0x13378c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x13378cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_133790:
    // 0x133790: 0x5043000c  beql        $v0, $v1, . + 4 + (0xC << 2)
label_133794:
    if (ctx->pc == 0x133794u) {
        ctx->pc = 0x133794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133790u;
        // 0x133794: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133798u;
        goto label_133798;
    }
    ctx->pc = 0x133790u;
    {
        const bool branch_taken_0x133790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x133790) {
            ctx->pc = 0x133794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133790u;
            // 0x133794: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1337C4u;
            goto label_1337c4;
        }
    }
    ctx->pc = 0x133798u;
label_133798:
    // 0x133798: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x133798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_13379c:
    // 0x13379c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x13379cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1337a0:
    // 0x1337a0: 0x40f809  jalr        $v0
label_1337a4:
    if (ctx->pc == 0x1337A4u) {
        ctx->pc = 0x1337A8u;
        goto label_1337a8;
    }
    ctx->pc = 0x1337A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1337A8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1337A0u, 0x1337A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1337A8u;
label_1337a8:
    // 0x1337a8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_1337ac:
    if (ctx->pc == 0x1337ACu) {
        ctx->pc = 0x1337ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1337A8u;
        // 0x1337ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1337B0u;
        goto label_1337b0;
    }
    ctx->pc = 0x1337A8u;
    {
        const bool branch_taken_0x1337a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1337a8) {
            ctx->pc = 0x1337ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1337A8u;
            // 0x1337ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1337C4u;
            goto label_1337c4;
        }
    }
    ctx->pc = 0x1337B0u;
label_1337b0:
    // 0x1337b0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1337b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1337b4:
    // 0x1337b4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1337b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1337b8:
    // 0x1337b8: 0x40f809  jalr        $v0
label_1337bc:
    if (ctx->pc == 0x1337BCu) {
        ctx->pc = 0x1337BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1337B8u;
        // 0x1337bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1337C0u;
        goto label_1337c0;
    }
    ctx->pc = 0x1337B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1337C0u);
        ctx->pc = 0x1337BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1337B8u;
        // 0x1337bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1337B8u, 0x1337C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1337C0u;
label_1337c0:
    // 0x1337c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1337c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1337c4:
    // 0x1337c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1337c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1337c8:
    // 0x1337c8: 0x3e00008  jr          $ra
label_1337cc:
    if (ctx->pc == 0x1337CCu) {
        ctx->pc = 0x1337CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1337C8u;
        // 0x1337cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1337D0u;
        goto label_fallthrough_0x1337c8;
    }
    ctx->pc = 0x1337C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1337CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1337C8u;
        // 0x1337cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1337C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1337c8:
    ctx->pc = 0x1337D0u;
}
