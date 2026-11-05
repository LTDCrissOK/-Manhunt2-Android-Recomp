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

// Function: sub_0020AFB0
// Address: 0x20afb0 - 0x20aff0
void sub_0020AFB0_0x20afb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020AFB0_0x20afb0");
#endif

    switch (ctx->pc) {
        case 0x20afb0u: goto label_20afb0;
        case 0x20afb4u: goto label_20afb4;
        case 0x20afb8u: goto label_20afb8;
        case 0x20afbcu: goto label_20afbc;
        case 0x20afc0u: goto label_20afc0;
        case 0x20afc4u: goto label_20afc4;
        case 0x20afc8u: goto label_20afc8;
        case 0x20afccu: goto label_20afcc;
        case 0x20afd0u: goto label_20afd0;
        case 0x20afd4u: goto label_20afd4;
        case 0x20afd8u: goto label_20afd8;
        case 0x20afdcu: goto label_20afdc;
        case 0x20afe0u: goto label_20afe0;
        case 0x20afe4u: goto label_20afe4;
        case 0x20afe8u: goto label_20afe8;
        case 0x20afecu: goto label_20afec;
        default: break;
    }

    ctx->pc = 0x20afb0u;

label_20afb0:
    // 0x20afb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20afb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20afb4:
    // 0x20afb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20afb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20afb8:
    // 0x20afb8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x20afb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_20afbc:
    // 0x20afbc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x20afbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20afc0:
    // 0x20afc0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x20afc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_20afc4:
    // 0x20afc4: 0x40f809  jalr        $v0
label_20afc8:
    if (ctx->pc == 0x20AFC8u) {
        ctx->pc = 0x20AFCCu;
        goto label_20afcc;
    }
    ctx->pc = 0x20AFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20AFCCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AFC4u, 0x20AFCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20AFCCu;
label_20afcc:
    // 0x20afcc: 0xc07597a  jal         func_1D65E8
label_20afd0:
    if (ctx->pc == 0x20AFD0u) {
        ctx->pc = 0x20AFD4u;
        goto label_20afd4;
    }
    ctx->pc = 0x20AFCCu;
    SET_GPR_U32(ctx, 31, 0x20AFD4u);
    ctx->pc = 0x1D65E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D65E8u, 0x20AFCCu, 0x20AFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AFD4u;
label_20afd4:
    // 0x20afd4: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x20afd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_20afd8:
    // 0x20afd8: 0xc0abc30  jal         func_2AF0C0
label_20afdc:
    if (ctx->pc == 0x20AFDCu) {
        ctx->pc = 0x20AFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFD8u;
        // 0x20afdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AFE0u;
        goto label_20afe0;
    }
    ctx->pc = 0x20AFD8u;
    SET_GPR_U32(ctx, 31, 0x20AFE0u);
    ctx->pc = 0x20AFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AFD8u;
    // 0x20afdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF0C0u, 0x20AFD8u, 0x20AFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AFE0u;
label_20afe0:
    // 0x20afe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20afe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20afe4:
    // 0x20afe4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20afe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20afe8:
    // 0x20afe8: 0x3e00008  jr          $ra
label_20afec:
    if (ctx->pc == 0x20AFECu) {
        ctx->pc = 0x20AFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFE8u;
        // 0x20afec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AFF0u;
        goto label_fallthrough_0x20afe8;
    }
    ctx->pc = 0x20AFE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFE8u;
        // 0x20afec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AFE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20afe8:
    ctx->pc = 0x20AFF0u;
}
