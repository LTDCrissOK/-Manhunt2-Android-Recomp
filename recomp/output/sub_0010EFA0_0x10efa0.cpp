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

// Function: sub_0010EFA0
// Address: 0x10efa0 - 0x10f080
void sub_0010EFA0_0x10efa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010EFA0_0x10efa0");
#endif

    switch (ctx->pc) {
        case 0x10efe8u: goto label_10efe8;
        case 0x10f010u: goto label_10f010;
        case 0x10f020u: goto label_10f020;
        case 0x10f030u: goto label_10f030;
        case 0x10f03cu: goto label_10f03c;
        default: break;
    }

    ctx->pc = 0x10efa0u;

    // 0x10efa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10efa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10efa4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10efa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10efa8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x10efa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x10efac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x10efacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10efb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10efb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10efb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10efb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10efb8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10efb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10efbc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x10efbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x10efc0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x10efc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x10efc4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x10efc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x10efc8: 0x8e6200b8  lw          $v0, 0xB8($s3)
    ctx->pc = 0x10efc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
    // 0x10efcc: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x10EFCCu;
    {
        const bool branch_taken_0x10efcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EFCCu;
        // 0x10efd0: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10efcc) {
            ctx->pc = 0x10F054u;
            goto label_10f054;
        }
    }
    ctx->pc = 0x10EFD4u;
    // 0x10efd4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x10efd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10efd8: 0x26740024  addiu       $s4, $s3, 0x24
    ctx->pc = 0x10efd8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
    // 0x10efdc: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x10efdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10efe0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10EFE0u;
    {
        const bool branch_taken_0x10efe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EFE0u;
        // 0x10efe4: 0x3c160049  lui         $s6, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10efe0) {
            ctx->pc = 0x10EFECu;
            goto label_10efec;
        }
    }
    ctx->pc = 0x10EFE8u;
label_10efe8:
    // 0x10efe8: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x10efe8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10efec:
    // 0x10efec: 0x2e420020  sltiu       $v0, $s2, 0x20
    ctx->pc = 0x10efecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x10eff0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x10EFF0u;
    {
        const bool branch_taken_0x10eff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EFF0u;
        // 0x10eff4: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eff0) {
            ctx->pc = 0x10F054u;
            goto label_10f054;
        }
    }
    ctx->pc = 0x10EFF8u;
    // 0x10eff8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x10eff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x10effc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x10effcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10f000: 0x1200fff9  beqz        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x10F000u;
    {
        const bool branch_taken_0x10f000 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F000u;
        // 0x10f004: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f000) {
            ctx->pc = 0x10EFE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10efe8;
        }
    }
    ctx->pc = 0x10F008u;
    // 0x10f008: 0xc04561a  jal         func_115868
    ctx->pc = 0x10F008u;
    SET_GPR_U32(ctx, 31, 0x10F010u);
    ctx->pc = 0x10F00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F008u;
    // 0x10f00c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115868u, 0x10F008u, 0x10F010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F010u;
label_10f010:
    // 0x10f010: 0x1455000c  bne         $v0, $s5, . + 4 + (0xC << 2)
    ctx->pc = 0x10F010u;
    {
        const bool branch_taken_0x10f010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x10F014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F010u;
        // 0x10f014: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f010) {
            ctx->pc = 0x10F044u;
            goto label_10f044;
        }
    }
    ctx->pc = 0x10F018u;
    // 0x10f018: 0xc0456a2  jal         func_115A88
    ctx->pc = 0x10F018u;
    SET_GPR_U32(ctx, 31, 0x10F020u);
    ctx->pc = 0x10F01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F018u;
    // 0x10f01c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115A88u, 0x10F018u, 0x10F020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F020u;
label_10f020:
    // 0x10f020: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10F020u;
    {
        const bool branch_taken_0x10f020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F020u;
        // 0x10f024: 0x26c4b530  addiu       $a0, $s6, -0x4AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294948144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f020) {
            ctx->pc = 0x10F030u;
            goto label_10f030;
        }
    }
    ctx->pc = 0x10F028u;
    // 0x10f028: 0xc04b2a6  jal         func_12CA98
    ctx->pc = 0x10F028u;
    SET_GPR_U32(ctx, 31, 0x10F030u);
    ctx->pc = 0x10F02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F028u;
    // 0x10f02c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CA98u, 0x10F028u, 0x10F030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F030u;
label_10f030:
    // 0x10f030: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10f030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f034: 0xc0449f4  jal         func_1127D0
    ctx->pc = 0x10F034u;
    SET_GPR_U32(ctx, 31, 0x10F03Cu);
    ctx->pc = 0x10F038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F034u;
    // 0x10f038: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1127D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1127D0u, 0x10F034u, 0x10F03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F03Cu;
label_10f03c:
    // 0x10f03c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10F03Cu;
    {
        const bool branch_taken_0x10f03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F03Cu;
        // 0x10f040: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f03c) {
            ctx->pc = 0x10F058u;
            goto label_10f058;
        }
    }
    ctx->pc = 0x10F044u;
label_10f044:
    // 0x10f044: 0x926300a4  lbu         $v1, 0xA4($s3)
    ctx->pc = 0x10f044u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 164)));
    // 0x10f048: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x10f048u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x10f04c: 0x1623ffe6  bne         $s1, $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x10F04Cu;
    {
        const bool branch_taken_0x10f04c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x10F050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F04Cu;
        // 0x10f050: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f04c) {
            ctx->pc = 0x10EFE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10efe8;
        }
    }
    ctx->pc = 0x10F054u;
label_10f054:
    // 0x10f054: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10f054u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10f058:
    // 0x10f058: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10f058u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10f05c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10f05cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f060: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10f060u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10f064: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10f064u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10f068: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x10f068u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10f06c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x10f06cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10f070: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x10f070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x10f074: 0x3e00008  jr          $ra
    ctx->pc = 0x10F074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F074u;
        // 0x10f078: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F07Cu;
    // 0x10f07c: 0x0  nop
    ctx->pc = 0x10f07cu;
    // NOP
    ctx->pc = 0x10f080u;
}
