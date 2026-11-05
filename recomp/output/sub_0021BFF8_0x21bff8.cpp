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

// Function: sub_0021BFF8
// Address: 0x21bff8 - 0x21c098
void sub_0021BFF8_0x21bff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021BFF8_0x21bff8");
#endif

    switch (ctx->pc) {
        case 0x21bff8u: goto label_21bff8;
        case 0x21bffcu: goto label_21bffc;
        case 0x21c000u: goto label_21c000;
        case 0x21c004u: goto label_21c004;
        case 0x21c008u: goto label_21c008;
        case 0x21c00cu: goto label_21c00c;
        case 0x21c010u: goto label_21c010;
        case 0x21c014u: goto label_21c014;
        case 0x21c018u: goto label_21c018;
        case 0x21c01cu: goto label_21c01c;
        case 0x21c020u: goto label_21c020;
        case 0x21c024u: goto label_21c024;
        case 0x21c028u: goto label_21c028;
        case 0x21c02cu: goto label_21c02c;
        case 0x21c030u: goto label_21c030;
        case 0x21c034u: goto label_21c034;
        case 0x21c038u: goto label_21c038;
        case 0x21c03cu: goto label_21c03c;
        case 0x21c040u: goto label_21c040;
        case 0x21c044u: goto label_21c044;
        case 0x21c048u: goto label_21c048;
        case 0x21c04cu: goto label_21c04c;
        case 0x21c050u: goto label_21c050;
        case 0x21c054u: goto label_21c054;
        case 0x21c058u: goto label_21c058;
        case 0x21c05cu: goto label_21c05c;
        case 0x21c060u: goto label_21c060;
        case 0x21c064u: goto label_21c064;
        case 0x21c068u: goto label_21c068;
        case 0x21c06cu: goto label_21c06c;
        case 0x21c070u: goto label_21c070;
        case 0x21c074u: goto label_21c074;
        case 0x21c078u: goto label_21c078;
        case 0x21c07cu: goto label_21c07c;
        case 0x21c080u: goto label_21c080;
        case 0x21c084u: goto label_21c084;
        case 0x21c088u: goto label_21c088;
        case 0x21c08cu: goto label_21c08c;
        case 0x21c090u: goto label_21c090;
        case 0x21c094u: goto label_21c094;
        default: break;
    }

    ctx->pc = 0x21bff8u;

label_21bff8:
    // 0x21bff8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21bff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_21bffc:
    // 0x21bffc: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x21bffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
label_21c000:
    // 0x21c000: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21c000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_21c004:
    // 0x21c004: 0x24443500  addiu       $a0, $v0, 0x3500
    ctx->pc = 0x21c004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 13568));
label_21c008:
    // 0x21c008: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21c008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_21c00c:
    // 0x21c00c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x21c00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_21c010:
    // 0x21c010: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x21c010u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_21c014:
    // 0x21c014: 0x1000000e  b           . + 4 + (0xE << 2)
label_21c018:
    if (ctx->pc == 0x21C018u) {
        ctx->pc = 0x21C018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C014u;
        // 0x21c018: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C01Cu;
        goto label_21c01c;
    }
    ctx->pc = 0x21C014u;
    {
        const bool branch_taken_0x21c014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C014u;
        // 0x21c018: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c014) {
            ctx->pc = 0x21C050u;
            goto label_21c050;
        }
    }
    ctx->pc = 0x21C01Cu;
label_21c01c:
    // 0x21c01c: 0x0  nop
    ctx->pc = 0x21c01cu;
    // NOP
label_21c020:
    // 0x21c020: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x21c020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_21c024:
    // 0x21c024: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x21c024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_21c028:
    // 0x21c028: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_21c02c:
    if (ctx->pc == 0x21C02Cu) {
        ctx->pc = 0x21C02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C028u;
        // 0x21c02c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C030u;
        goto label_21c030;
    }
    ctx->pc = 0x21C028u;
    {
        const bool branch_taken_0x21c028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c028) {
            ctx->pc = 0x21C02Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C028u;
            // 0x21c02c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C038u;
            goto label_21c038;
        }
    }
    ctx->pc = 0x21C030u;
label_21c030:
    // 0x21c030: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
label_21c034:
    if (ctx->pc == 0x21C034u) {
        ctx->pc = 0x21C034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C030u;
        // 0x21c034: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C038u;
        goto label_21c038;
    }
    ctx->pc = 0x21C030u;
    {
        const bool branch_taken_0x21c030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c030) {
            ctx->pc = 0x21C034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C030u;
            // 0x21c034: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C038u;
            goto label_21c038;
        }
    }
    ctx->pc = 0x21C038u;
label_21c038:
    // 0x21c038: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
label_21c03c:
    if (ctx->pc == 0x21C03Cu) {
        ctx->pc = 0x21C03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C038u;
        // 0x21c03c: 0x26073500  addiu       $a3, $s0, 0x3500 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 13568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C040u;
        goto label_21c040;
    }
    ctx->pc = 0x21C038u;
    {
        const bool branch_taken_0x21c038 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C038u;
        // 0x21c03c: 0x26073500  addiu       $a3, $s0, 0x3500 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 13568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c038) {
            ctx->pc = 0x21C054u;
            goto label_21c054;
        }
    }
    ctx->pc = 0x21C040u;
label_21c040:
    // 0x21c040: 0x8cc20218  lw          $v0, 0x218($a2)
    ctx->pc = 0x21c040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 536)));
label_21c044:
    // 0x21c044: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x21c044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_21c048:
    // 0x21c048: 0x60f809  jalr        $v1
label_21c04c:
    if (ctx->pc == 0x21C04Cu) {
        ctx->pc = 0x21C050u;
        goto label_21c050;
    }
    ctx->pc = 0x21C048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21C050u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C048u, 0x21C050u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21C050u;
label_21c050:
    // 0x21c050: 0x26073500  addiu       $a3, $s0, 0x3500
    ctx->pc = 0x21c050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 13568));
label_21c054:
    // 0x21c054: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21c054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c058:
    // 0x21c058: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x21c058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_21c05c:
    // 0x21c05c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21c05cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c060:
    // 0x21c060: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_21c064:
    if (ctx->pc == 0x21C064u) {
        ctx->pc = 0x21C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C060u;
        // 0x21c064: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C068u;
        goto label_21c068;
    }
    ctx->pc = 0x21C060u;
    {
        const bool branch_taken_0x21c060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C060u;
        // 0x21c064: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c060) {
            ctx->pc = 0x21C06Cu;
            goto label_21c06c;
        }
    }
    ctx->pc = 0x21C068u;
label_21c068:
    // 0x21c068: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x21c068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21c06c:
    // 0x21c06c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x21c06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_21c070:
    // 0x21c070: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21c074:
    if (ctx->pc == 0x21C074u) {
        ctx->pc = 0x21C074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C070u;
        // 0x21c074: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C078u;
        goto label_21c078;
    }
    ctx->pc = 0x21C070u;
    {
        const bool branch_taken_0x21c070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C070u;
        // 0x21c074: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c070) {
            ctx->pc = 0x21C080u;
            goto label_21c080;
        }
    }
    ctx->pc = 0x21C078u;
label_21c078:
    // 0x21c078: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x21c078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_21c07c:
    // 0x21c07c: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x21c07cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_21c080:
    // 0x21c080: 0x5460ffe7  bnel        $v1, $zero, . + 4 + (-0x19 << 2)
label_21c084:
    if (ctx->pc == 0x21C084u) {
        ctx->pc = 0x21C084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C080u;
        // 0x21c084: 0x8c6200c0  lw          $v0, 0xC0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C088u;
        goto label_21c088;
    }
    ctx->pc = 0x21C080u;
    {
        const bool branch_taken_0x21c080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c080) {
            ctx->pc = 0x21C084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C080u;
            // 0x21c084: 0x8c6200c0  lw          $v0, 0xC0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c020;
        }
    }
    ctx->pc = 0x21C088u;
label_21c088:
    // 0x21c088: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21c08c:
    // 0x21c08c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21c08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_21c090:
    // 0x21c090: 0x3e00008  jr          $ra
label_21c094:
    if (ctx->pc == 0x21C094u) {
        ctx->pc = 0x21C094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C090u;
        // 0x21c094: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C098u;
        goto label_fallthrough_0x21c090;
    }
    ctx->pc = 0x21C090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C090u;
        // 0x21c094: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21c090:
    ctx->pc = 0x21C098u;
}
