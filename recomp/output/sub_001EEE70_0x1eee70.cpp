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

// Function: sub_001EEE70
// Address: 0x1eee70 - 0x1eef48
void sub_001EEE70_0x1eee70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EEE70_0x1eee70");
#endif

    switch (ctx->pc) {
        case 0x1eeea0u: goto label_1eeea0;
        case 0x1eeebcu: goto label_1eeebc;
        case 0x1eeed8u: goto label_1eeed8;
        case 0x1eeef4u: goto label_1eeef4;
        case 0x1eef10u: goto label_1eef10;
        case 0x1eef2cu: goto label_1eef2c;
        default: break;
    }

    ctx->pc = 0x1eee70u;

    // 0x1eee70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1eee70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1eee74: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1eee74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1eee78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1eee78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1eee7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1eee7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1eee80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1eee80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eee84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1eee84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1eee88: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x1eee88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1eee8c: 0x8e051344  lw          $a1, 0x1344($s0)
    ctx->pc = 0x1eee8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4932)));
    // 0x1eee90: 0x4a20006  bltzl       $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EEE90u;
    {
        const bool branch_taken_0x1eee90 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1eee90) {
            ctx->pc = 0x1EEE94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EEE90u;
            // 0x1eee94: 0x8e051340  lw          $a1, 0x1340($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4928)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EEEACu;
            goto label_1eeeac;
        }
    }
    ctx->pc = 0x1EEE98u;
    // 0x1eee98: 0xc07dadc  jal         func_1F6B70
    ctx->pc = 0x1EEE98u;
    SET_GPR_U32(ctx, 31, 0x1EEEA0u);
    ctx->pc = 0x1F6B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6B70u, 0x1EEE98u, 0x1EEEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEEA0u;
label_1eeea0:
    // 0x1eeea0: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x1eeea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1eeea4: 0xae021344  sw          $v0, 0x1344($s0)
    ctx->pc = 0x1eeea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4932), GPR_U32(ctx, 2));
    // 0x1eeea8: 0x8e051340  lw          $a1, 0x1340($s0)
    ctx->pc = 0x1eeea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4928)));
label_1eeeac:
    // 0x1eeeac: 0x4a20006  bltzl       $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EEEACu;
    {
        const bool branch_taken_0x1eeeac = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1eeeac) {
            ctx->pc = 0x1EEEB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EEEACu;
            // 0x1eeeb0: 0x8e05133c  lw          $a1, 0x133C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EEEC8u;
            goto label_1eeec8;
        }
    }
    ctx->pc = 0x1EEEB4u;
    // 0x1eeeb4: 0xc07dadc  jal         func_1F6B70
    ctx->pc = 0x1EEEB4u;
    SET_GPR_U32(ctx, 31, 0x1EEEBCu);
    ctx->pc = 0x1EEEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEEB4u;
    // 0x1eeeb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6B70u, 0x1EEEB4u, 0x1EEEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEEBCu;
label_1eeebc:
    // 0x1eeebc: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x1eeebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1eeec0: 0xae021340  sw          $v0, 0x1340($s0)
    ctx->pc = 0x1eeec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4928), GPR_U32(ctx, 2));
    // 0x1eeec4: 0x8e05133c  lw          $a1, 0x133C($s0)
    ctx->pc = 0x1eeec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
label_1eeec8:
    // 0x1eeec8: 0x4a20006  bltzl       $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EEEC8u;
    {
        const bool branch_taken_0x1eeec8 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1eeec8) {
            ctx->pc = 0x1EEECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EEEC8u;
            // 0x1eeecc: 0x8e051338  lw          $a1, 0x1338($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EEEE4u;
            goto label_1eeee4;
        }
    }
    ctx->pc = 0x1EEED0u;
    // 0x1eeed0: 0xc07dadc  jal         func_1F6B70
    ctx->pc = 0x1EEED0u;
    SET_GPR_U32(ctx, 31, 0x1EEED8u);
    ctx->pc = 0x1EEED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEED0u;
    // 0x1eeed4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6B70u, 0x1EEED0u, 0x1EEED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEED8u;
label_1eeed8:
    // 0x1eeed8: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x1eeed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1eeedc: 0xae02133c  sw          $v0, 0x133C($s0)
    ctx->pc = 0x1eeedcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4924), GPR_U32(ctx, 2));
    // 0x1eeee0: 0x8e051338  lw          $a1, 0x1338($s0)
    ctx->pc = 0x1eeee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
label_1eeee4:
    // 0x1eeee4: 0x4a20006  bltzl       $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EEEE4u;
    {
        const bool branch_taken_0x1eeee4 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1eeee4) {
            ctx->pc = 0x1EEEE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EEEE4u;
            // 0x1eeee8: 0x8e051334  lw          $a1, 0x1334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4916)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EEF00u;
            goto label_1eef00;
        }
    }
    ctx->pc = 0x1EEEECu;
    // 0x1eeeec: 0xc07dadc  jal         func_1F6B70
    ctx->pc = 0x1EEEECu;
    SET_GPR_U32(ctx, 31, 0x1EEEF4u);
    ctx->pc = 0x1EEEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEEECu;
    // 0x1eeef0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6B70u, 0x1EEEECu, 0x1EEEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEEF4u;
label_1eeef4:
    // 0x1eeef4: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x1eeef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1eeef8: 0xae021338  sw          $v0, 0x1338($s0)
    ctx->pc = 0x1eeef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4920), GPR_U32(ctx, 2));
    // 0x1eeefc: 0x8e051334  lw          $a1, 0x1334($s0)
    ctx->pc = 0x1eeefcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4916)));
label_1eef00:
    // 0x1eef00: 0x4a20006  bltzl       $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EEF00u;
    {
        const bool branch_taken_0x1eef00 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1eef00) {
            ctx->pc = 0x1EEF04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EEF00u;
            // 0x1eef04: 0x8e051330  lw          $a1, 0x1330($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4912)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EEF1Cu;
            goto label_1eef1c;
        }
    }
    ctx->pc = 0x1EEF08u;
    // 0x1eef08: 0xc07dadc  jal         func_1F6B70
    ctx->pc = 0x1EEF08u;
    SET_GPR_U32(ctx, 31, 0x1EEF10u);
    ctx->pc = 0x1EEF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEF08u;
    // 0x1eef0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6B70u, 0x1EEF08u, 0x1EEF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEF10u;
label_1eef10:
    // 0x1eef10: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x1eef10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1eef14: 0xae021334  sw          $v0, 0x1334($s0)
    ctx->pc = 0x1eef14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4916), GPR_U32(ctx, 2));
    // 0x1eef18: 0x8e051330  lw          $a1, 0x1330($s0)
    ctx->pc = 0x1eef18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4912)));
label_1eef1c:
    // 0x1eef1c: 0x4a20006  bltzl       $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EEF1Cu;
    {
        const bool branch_taken_0x1eef1c = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1eef1c) {
            ctx->pc = 0x1EEF20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EEF1Cu;
            // 0x1eef20: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EEF38u;
            goto label_1eef38;
        }
    }
    ctx->pc = 0x1EEF24u;
    // 0x1eef24: 0xc07dadc  jal         func_1F6B70
    ctx->pc = 0x1EEF24u;
    SET_GPR_U32(ctx, 31, 0x1EEF2Cu);
    ctx->pc = 0x1EEF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEF24u;
    // 0x1eef28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6B70u, 0x1EEF24u, 0x1EEF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEF2Cu;
label_1eef2c:
    // 0x1eef2c: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x1eef2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1eef30: 0xae021330  sw          $v0, 0x1330($s0)
    ctx->pc = 0x1eef30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4912), GPR_U32(ctx, 2));
    // 0x1eef34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1eef34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1eef38:
    // 0x1eef38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1eef38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1eef3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1eef3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eef40: 0x3e00008  jr          $ra
    ctx->pc = 0x1EEF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF40u;
        // 0x1eef44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEF40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EEF48u;
}
