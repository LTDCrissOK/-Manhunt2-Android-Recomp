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

// Function: sub_0019C040
// Address: 0x19c040 - 0x19c0c0
void sub_0019C040_0x19c040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C040_0x19c040");
#endif

    switch (ctx->pc) {
        case 0x19c040u: goto label_19c040;
        case 0x19c044u: goto label_19c044;
        case 0x19c048u: goto label_19c048;
        case 0x19c04cu: goto label_19c04c;
        case 0x19c050u: goto label_19c050;
        case 0x19c054u: goto label_19c054;
        case 0x19c058u: goto label_19c058;
        case 0x19c05cu: goto label_19c05c;
        case 0x19c060u: goto label_19c060;
        case 0x19c064u: goto label_19c064;
        case 0x19c068u: goto label_19c068;
        case 0x19c06cu: goto label_19c06c;
        case 0x19c070u: goto label_19c070;
        case 0x19c074u: goto label_19c074;
        case 0x19c078u: goto label_19c078;
        case 0x19c07cu: goto label_19c07c;
        case 0x19c080u: goto label_19c080;
        case 0x19c084u: goto label_19c084;
        case 0x19c088u: goto label_19c088;
        case 0x19c08cu: goto label_19c08c;
        case 0x19c090u: goto label_19c090;
        case 0x19c094u: goto label_19c094;
        case 0x19c098u: goto label_19c098;
        case 0x19c09cu: goto label_19c09c;
        case 0x19c0a0u: goto label_19c0a0;
        case 0x19c0a4u: goto label_19c0a4;
        case 0x19c0a8u: goto label_19c0a8;
        case 0x19c0acu: goto label_19c0ac;
        case 0x19c0b0u: goto label_19c0b0;
        case 0x19c0b4u: goto label_19c0b4;
        case 0x19c0b8u: goto label_19c0b8;
        case 0x19c0bcu: goto label_19c0bc;
        default: break;
    }

    ctx->pc = 0x19c040u;

label_19c040:
    // 0x19c040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19c040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_19c044:
    // 0x19c044: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19c044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19c048:
    // 0x19c048: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19c048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_19c04c:
    // 0x19c04c: 0xc061a1e  jal         func_186878
label_19c050:
    if (ctx->pc == 0x19C050u) {
        ctx->pc = 0x19C050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C04Cu;
        // 0x19c050: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C054u;
        goto label_19c054;
    }
    ctx->pc = 0x19C04Cu;
    SET_GPR_U32(ctx, 31, 0x19C054u);
    ctx->pc = 0x19C050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C04Cu;
    // 0x19c050: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19C04Cu, 0x19C054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C054u;
label_19c054:
    // 0x19c054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19c058:
    // 0x19c058: 0xc061a12  jal         func_186848
label_19c05c:
    if (ctx->pc == 0x19C05Cu) {
        ctx->pc = 0x19C05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C058u;
        // 0x19c05c: 0xac400220  sw          $zero, 0x220($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C060u;
        goto label_19c060;
    }
    ctx->pc = 0x19C058u;
    SET_GPR_U32(ctx, 31, 0x19C060u);
    ctx->pc = 0x19C05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C058u;
    // 0x19c05c: 0xac400220  sw          $zero, 0x220($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19C058u, 0x19C060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C060u;
label_19c060:
    // 0x19c060: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x19c060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_19c064:
    // 0x19c064: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19c064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19c068:
    // 0x19c068: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19c068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_19c06c:
    // 0x19c06c: 0x40f809  jalr        $v0
label_19c070:
    if (ctx->pc == 0x19C070u) {
        ctx->pc = 0x19C074u;
        goto label_19c074;
    }
    ctx->pc = 0x19C06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19C074u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C06Cu, 0x19C074u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C074u;
label_19c074:
    // 0x19c074: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_19c078:
    if (ctx->pc == 0x19C078u) {
        ctx->pc = 0x19C07Cu;
        goto label_19c07c;
    }
    ctx->pc = 0x19C074u;
    {
        const bool branch_taken_0x19c074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c074) {
            ctx->pc = 0x19C084u;
            goto label_19c084;
        }
    }
    ctx->pc = 0x19C07Cu;
label_19c07c:
    // 0x19c07c: 0xc067598  jal         func_19D660
label_19c080:
    if (ctx->pc == 0x19C080u) {
        ctx->pc = 0x19C080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C07Cu;
        // 0x19c080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C084u;
        goto label_19c084;
    }
    ctx->pc = 0x19C07Cu;
    SET_GPR_U32(ctx, 31, 0x19C084u);
    ctx->pc = 0x19C080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C07Cu;
    // 0x19c080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D660u, 0x19C07Cu, 0x19C084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C084u;
label_19c084:
    // 0x19c084: 0xc06766e  jal         func_19D9B8
label_19c088:
    if (ctx->pc == 0x19C088u) {
        ctx->pc = 0x19C088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C084u;
        // 0x19c088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C08Cu;
        goto label_19c08c;
    }
    ctx->pc = 0x19C084u;
    SET_GPR_U32(ctx, 31, 0x19C08Cu);
    ctx->pc = 0x19C088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C084u;
    // 0x19c088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B8u, 0x19C084u, 0x19C08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C08Cu;
label_19c08c:
    // 0x19c08c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_19c090:
    if (ctx->pc == 0x19C090u) {
        ctx->pc = 0x19C094u;
        goto label_19c094;
    }
    ctx->pc = 0x19C08Cu;
    {
        const bool branch_taken_0x19c08c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c08c) {
            ctx->pc = 0x19C0A4u;
            goto label_19c0a4;
        }
    }
    ctx->pc = 0x19C094u;
label_19c094:
    // 0x19c094: 0xc0676b8  jal         func_19DAE0
label_19c098:
    if (ctx->pc == 0x19C098u) {
        ctx->pc = 0x19C098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C094u;
        // 0x19c098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C09Cu;
        goto label_19c09c;
    }
    ctx->pc = 0x19C094u;
    SET_GPR_U32(ctx, 31, 0x19C09Cu);
    ctx->pc = 0x19C098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C094u;
    // 0x19c098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DAE0u, 0x19C094u, 0x19C09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C09Cu;
label_19c09c:
    // 0x19c09c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_19c0a0:
    if (ctx->pc == 0x19C0A0u) {
        ctx->pc = 0x19C0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C09Cu;
        // 0x19c0a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C0A4u;
        goto label_19c0a4;
    }
    ctx->pc = 0x19C09Cu;
    {
        const bool branch_taken_0x19c09c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c09c) {
            ctx->pc = 0x19C0A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C09Cu;
            // 0x19c0a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C0B0u;
            goto label_19c0b0;
        }
    }
    ctx->pc = 0x19C0A4u;
label_19c0a4:
    // 0x19c0a4: 0xc0675e0  jal         func_19D780
label_19c0a8:
    if (ctx->pc == 0x19C0A8u) {
        ctx->pc = 0x19C0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C0A4u;
        // 0x19c0a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C0ACu;
        goto label_19c0ac;
    }
    ctx->pc = 0x19C0A4u;
    SET_GPR_U32(ctx, 31, 0x19C0ACu);
    ctx->pc = 0x19C0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C0A4u;
    // 0x19c0a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D780u, 0x19C0A4u, 0x19C0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C0ACu;
label_19c0ac:
    // 0x19c0ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19c0acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19c0b0:
    // 0x19c0b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19c0b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19c0b4:
    // 0x19c0b4: 0x3e00008  jr          $ra
label_19c0b8:
    if (ctx->pc == 0x19C0B8u) {
        ctx->pc = 0x19C0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C0B4u;
        // 0x19c0b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C0BCu;
        goto label_19c0bc;
    }
    ctx->pc = 0x19C0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C0B4u;
        // 0x19c0b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C0B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C0BCu;
label_19c0bc:
    // 0x19c0bc: 0x0  nop
    ctx->pc = 0x19c0bcu;
    // NOP
    ctx->pc = 0x19c0c0u;
}
