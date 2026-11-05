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

// Function: sub_0012ED08
// Address: 0x12ed08 - 0x12edf8
void sub_0012ED08_0x12ed08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012ED08_0x12ed08");
#endif

    switch (ctx->pc) {
        case 0x12ed28u: goto label_12ed28;
        case 0x12ed5cu: goto label_12ed5c;
        case 0x12ed70u: goto label_12ed70;
        case 0x12ed84u: goto label_12ed84;
        case 0x12ed98u: goto label_12ed98;
        case 0x12edacu: goto label_12edac;
        case 0x12edbcu: goto label_12edbc;
        case 0x12edd0u: goto label_12edd0;
        case 0x12ede0u: goto label_12ede0;
        default: break;
    }

    ctx->pc = 0x12ed08u;

    // 0x12ed08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12ed08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12ed0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12ed0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12ed10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12ed10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12ed14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12ed14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ed18: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12ed18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ed1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12ed1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12ed20: 0xc046144  jal         func_118510
    ctx->pc = 0x12ED20u;
    SET_GPR_U32(ctx, 31, 0x12ED28u);
    ctx->pc = 0x12ED24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ED20u;
    // 0x12ed24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118510u, 0x12ED20u, 0x12ED28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ED28u;
label_12ed28:
    // 0x12ed28: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12ed28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ed2c: 0x2c620023  sltiu       $v0, $v1, 0x23
    ctx->pc = 0x12ed2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
    // 0x12ed30: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x12ED30u;
    {
        const bool branch_taken_0x12ed30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED30u;
        // 0x12ed34: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ed30) {
            ctx->pc = 0x12EDE0u;
            goto label_12ede0;
        }
    }
    ctx->pc = 0x12ED38u;
    // 0x12ed38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12ed38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12ed3c: 0x2442dc20  addiu       $v0, $v0, -0x23E0
    ctx->pc = 0x12ed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958112));
    // 0x12ed40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12ed40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12ed44: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x12ed44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12ed48: 0x800008  jr          $a0
    ctx->pc = 0x12ED48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12ED50u: goto label_12ed50;
            case 0x12ED64u: goto label_12ed64;
            case 0x12ED78u: goto label_12ed78;
            case 0x12ED8Cu: goto label_12ed8c;
            case 0x12EDA0u: goto label_12eda0;
            case 0x12EDB4u: goto label_12edb4;
            case 0x12EDE0u: goto label_12ede0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12ED48u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12ED50u;
label_12ed50:
    // 0x12ed50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12ed50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ed54: 0xc04bcaa  jal         func_12F2A8
    ctx->pc = 0x12ED54u;
    SET_GPR_U32(ctx, 31, 0x12ED5Cu);
    ctx->pc = 0x12ED58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ED54u;
    // 0x12ed58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F2A8u, 0x12ED54u, 0x12ED5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ED5Cu;
label_12ed5c:
    // 0x12ed5c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x12ED5Cu;
    {
        const bool branch_taken_0x12ed5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED5Cu;
        // 0x12ed60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ed5c) {
            ctx->pc = 0x12EDE4u;
            goto label_12ede4;
        }
    }
    ctx->pc = 0x12ED64u;
label_12ed64:
    // 0x12ed64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12ed64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ed68: 0xc04bd98  jal         func_12F660
    ctx->pc = 0x12ED68u;
    SET_GPR_U32(ctx, 31, 0x12ED70u);
    ctx->pc = 0x12ED6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ED68u;
    // 0x12ed6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F660u, 0x12ED68u, 0x12ED70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ED70u;
label_12ed70:
    // 0x12ed70: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x12ED70u;
    {
        const bool branch_taken_0x12ed70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED70u;
        // 0x12ed74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ed70) {
            ctx->pc = 0x12EDE4u;
            goto label_12ede4;
        }
    }
    ctx->pc = 0x12ED78u;
label_12ed78:
    // 0x12ed78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12ed78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ed7c: 0xc04becc  jal         func_12FB30
    ctx->pc = 0x12ED7Cu;
    SET_GPR_U32(ctx, 31, 0x12ED84u);
    ctx->pc = 0x12ED80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ED7Cu;
    // 0x12ed80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FB30u, 0x12ED7Cu, 0x12ED84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ED84u;
label_12ed84:
    // 0x12ed84: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x12ED84u;
    {
        const bool branch_taken_0x12ed84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ED88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED84u;
        // 0x12ed88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ed84) {
            ctx->pc = 0x12EDE4u;
            goto label_12ede4;
        }
    }
    ctx->pc = 0x12ED8Cu;
label_12ed8c:
    // 0x12ed8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12ed8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ed90: 0xc04bdb6  jal         func_12F6D8
    ctx->pc = 0x12ED90u;
    SET_GPR_U32(ctx, 31, 0x12ED98u);
    ctx->pc = 0x12ED94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ED90u;
    // 0x12ed94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F6D8u, 0x12ED90u, 0x12ED98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ED98u;
label_12ed98:
    // 0x12ed98: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x12ED98u;
    {
        const bool branch_taken_0x12ed98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED98u;
        // 0x12ed9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ed98) {
            ctx->pc = 0x12EDE4u;
            goto label_12ede4;
        }
    }
    ctx->pc = 0x12EDA0u;
label_12eda0:
    // 0x12eda0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12eda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eda4: 0xc04bed0  jal         func_12FB40
    ctx->pc = 0x12EDA4u;
    SET_GPR_U32(ctx, 31, 0x12EDACu);
    ctx->pc = 0x12EDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EDA4u;
    // 0x12eda8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FB40u, 0x12EDA4u, 0x12EDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EDACu;
label_12edac:
    // 0x12edac: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x12EDACu;
    {
        const bool branch_taken_0x12edac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EDACu;
        // 0x12edb0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12edac) {
            ctx->pc = 0x12EDE4u;
            goto label_12ede4;
        }
    }
    ctx->pc = 0x12EDB4u;
label_12edb4:
    // 0x12edb4: 0xc046356  jal         func_118D58
    ctx->pc = 0x12EDB4u;
    SET_GPR_U32(ctx, 31, 0x12EDBCu);
    ctx->pc = 0x12EDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EDB4u;
    // 0x12edb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118D58u, 0x12EDB4u, 0x12EDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EDBCu;
label_12edbc:
    // 0x12edbc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x12edbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12edc0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12EDC0u;
    {
        const bool branch_taken_0x12edc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EDC0u;
        // 0x12edc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12edc0) {
            ctx->pc = 0x12EDD8u;
            goto label_12edd8;
        }
    }
    ctx->pc = 0x12EDC8u;
    // 0x12edc8: 0xc04bdd2  jal         func_12F748
    ctx->pc = 0x12EDC8u;
    SET_GPR_U32(ctx, 31, 0x12EDD0u);
    ctx->pc = 0x12EDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EDC8u;
    // 0x12edcc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F748u, 0x12EDC8u, 0x12EDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EDD0u;
label_12edd0:
    // 0x12edd0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12EDD0u;
    {
        const bool branch_taken_0x12edd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EDD0u;
        // 0x12edd4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12edd0) {
            ctx->pc = 0x12EDE4u;
            goto label_12ede4;
        }
    }
    ctx->pc = 0x12EDD8u;
label_12edd8:
    // 0x12edd8: 0xc04bccc  jal         func_12F330
    ctx->pc = 0x12EDD8u;
    SET_GPR_U32(ctx, 31, 0x12EDE0u);
    ctx->pc = 0x12EDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EDD8u;
    // 0x12eddc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F330u, 0x12EDD8u, 0x12EDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EDE0u;
label_12ede0:
    // 0x12ede0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12ede0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12ede4:
    // 0x12ede4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ede8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12ede8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12edec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12edecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12edf0: 0x3e00008  jr          $ra
    ctx->pc = 0x12EDF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EDF0u;
        // 0x12edf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EDF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EDF8u;
}
