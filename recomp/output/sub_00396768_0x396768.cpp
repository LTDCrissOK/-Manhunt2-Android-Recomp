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

// Function: sub_00396768
// Address: 0x396768 - 0x3967b8
void sub_00396768_0x396768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396768_0x396768");
#endif

    switch (ctx->pc) {
        case 0x396768u: goto label_396768;
        case 0x39676cu: goto label_39676c;
        case 0x396770u: goto label_396770;
        case 0x396774u: goto label_396774;
        case 0x396778u: goto label_396778;
        case 0x39677cu: goto label_39677c;
        case 0x396780u: goto label_396780;
        case 0x396784u: goto label_396784;
        case 0x396788u: goto label_396788;
        case 0x39678cu: goto label_39678c;
        case 0x396790u: goto label_396790;
        case 0x396794u: goto label_396794;
        case 0x396798u: goto label_396798;
        case 0x39679cu: goto label_39679c;
        case 0x3967a0u: goto label_3967a0;
        case 0x3967a4u: goto label_3967a4;
        case 0x3967a8u: goto label_3967a8;
        case 0x3967acu: goto label_3967ac;
        case 0x3967b0u: goto label_3967b0;
        case 0x3967b4u: goto label_3967b4;
        default: break;
    }

    ctx->pc = 0x396768u;

label_396768:
    // 0x396768: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x396768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_39676c:
    // 0x39676c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39676cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_396770:
    // 0x396770: 0x8c4318a8  lw          $v1, 0x18A8($v0)
    ctx->pc = 0x396770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6312)));
label_396774:
    // 0x396774: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_396778:
    if (ctx->pc == 0x396778u) {
        ctx->pc = 0x396778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396774u;
        // 0x396778: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39677Cu;
        goto label_39677c;
    }
    ctx->pc = 0x396774u;
    {
        const bool branch_taken_0x396774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x396778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396774u;
        // 0x396778: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396774) {
            ctx->pc = 0x396788u;
            goto label_396788;
        }
    }
    ctx->pc = 0x39677Cu;
label_39677c:
    // 0x39677c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x39677cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_396780:
    // 0x396780: 0x60f809  jalr        $v1
label_396784:
    if (ctx->pc == 0x396784u) {
        ctx->pc = 0x396784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396780u;
        // 0x396784: 0x8c4418ac  lw          $a0, 0x18AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396788u;
        goto label_396788;
    }
    ctx->pc = 0x396780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x396788u);
        ctx->pc = 0x396784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396780u;
        // 0x396784: 0x8c4418ac  lw          $a0, 0x18AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6316)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396780u, 0x396788u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x396788u;
label_396788:
    // 0x396788: 0xc0e9c90  jal         func_3A7240
label_39678c:
    if (ctx->pc == 0x39678Cu) {
        ctx->pc = 0x396790u;
        goto label_396790;
    }
    ctx->pc = 0x396788u;
    SET_GPR_U32(ctx, 31, 0x396790u);
    ctx->pc = 0x3A7240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7240u, 0x396788u, 0x396790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396790u;
label_396790:
    // 0x396790: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x396790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_396794:
    // 0x396794: 0x8c4318b0  lw          $v1, 0x18B0($v0)
    ctx->pc = 0x396794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6320)));
label_396798:
    // 0x396798: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_39679c:
    if (ctx->pc == 0x39679Cu) {
        ctx->pc = 0x39679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396798u;
        // 0x39679c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3967A0u;
        goto label_3967a0;
    }
    ctx->pc = 0x396798u;
    {
        const bool branch_taken_0x396798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396798u;
        // 0x39679c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396798) {
            ctx->pc = 0x3967A8u;
            goto label_3967a8;
        }
    }
    ctx->pc = 0x3967A0u;
label_3967a0:
    // 0x3967a0: 0x60f809  jalr        $v1
label_3967a4:
    if (ctx->pc == 0x3967A4u) {
        ctx->pc = 0x3967A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3967A0u;
        // 0x3967a4: 0x8c4418b4  lw          $a0, 0x18B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6324)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3967A8u;
        goto label_3967a8;
    }
    ctx->pc = 0x3967A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3967A8u);
        ctx->pc = 0x3967A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3967A0u;
        // 0x3967a4: 0x8c4418b4  lw          $a0, 0x18B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6324)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3967A0u, 0x3967A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3967A8u;
label_3967a8:
    // 0x3967a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3967a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3967ac:
    // 0x3967ac: 0x3e00008  jr          $ra
label_3967b0:
    if (ctx->pc == 0x3967B0u) {
        ctx->pc = 0x3967B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3967ACu;
        // 0x3967b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3967B4u;
        goto label_3967b4;
    }
    ctx->pc = 0x3967ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3967B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3967ACu;
        // 0x3967b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3967ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3967B4u;
label_3967b4:
    // 0x3967b4: 0x0  nop
    ctx->pc = 0x3967b4u;
    // NOP
    ctx->pc = 0x3967b8u;
}
