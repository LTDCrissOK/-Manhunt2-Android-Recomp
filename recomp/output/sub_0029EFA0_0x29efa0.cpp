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

// Function: sub_0029EFA0
// Address: 0x29efa0 - 0x29f058
void sub_0029EFA0_0x29efa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029EFA0_0x29efa0");
#endif

    switch (ctx->pc) {
        case 0x29efa0u: goto label_29efa0;
        case 0x29efa4u: goto label_29efa4;
        case 0x29efa8u: goto label_29efa8;
        case 0x29efacu: goto label_29efac;
        case 0x29efb0u: goto label_29efb0;
        case 0x29efb4u: goto label_29efb4;
        case 0x29efb8u: goto label_29efb8;
        case 0x29efbcu: goto label_29efbc;
        case 0x29efc0u: goto label_29efc0;
        case 0x29efc4u: goto label_29efc4;
        case 0x29efc8u: goto label_29efc8;
        case 0x29efccu: goto label_29efcc;
        case 0x29efd0u: goto label_29efd0;
        case 0x29efd4u: goto label_29efd4;
        case 0x29efd8u: goto label_29efd8;
        case 0x29efdcu: goto label_29efdc;
        case 0x29efe0u: goto label_29efe0;
        case 0x29efe4u: goto label_29efe4;
        case 0x29efe8u: goto label_29efe8;
        case 0x29efecu: goto label_29efec;
        case 0x29eff0u: goto label_29eff0;
        case 0x29eff4u: goto label_29eff4;
        case 0x29eff8u: goto label_29eff8;
        case 0x29effcu: goto label_29effc;
        case 0x29f000u: goto label_29f000;
        case 0x29f004u: goto label_29f004;
        case 0x29f008u: goto label_29f008;
        case 0x29f00cu: goto label_29f00c;
        case 0x29f010u: goto label_29f010;
        case 0x29f014u: goto label_29f014;
        case 0x29f018u: goto label_29f018;
        case 0x29f01cu: goto label_29f01c;
        case 0x29f020u: goto label_29f020;
        case 0x29f024u: goto label_29f024;
        case 0x29f028u: goto label_29f028;
        case 0x29f02cu: goto label_29f02c;
        case 0x29f030u: goto label_29f030;
        case 0x29f034u: goto label_29f034;
        case 0x29f038u: goto label_29f038;
        case 0x29f03cu: goto label_29f03c;
        case 0x29f040u: goto label_29f040;
        case 0x29f044u: goto label_29f044;
        case 0x29f048u: goto label_29f048;
        case 0x29f04cu: goto label_29f04c;
        case 0x29f050u: goto label_29f050;
        case 0x29f054u: goto label_29f054;
        default: break;
    }

    ctx->pc = 0x29efa0u;

label_29efa0:
    // 0x29efa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29efa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_29efa4:
    // 0x29efa4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29efa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_29efa8:
    // 0x29efa8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29efa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_29efac:
    // 0x29efac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29efacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29efb0:
    // 0x29efb0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29efb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_29efb4:
    // 0x29efb4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29efb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29efb8:
    // 0x29efb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29efb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29efbc:
    // 0x29efbc: 0x24140014  addiu       $s4, $zero, 0x14
    ctx->pc = 0x29efbcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_29efc0:
    // 0x29efc0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29efc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_29efc4:
    // 0x29efc4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x29efc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_29efc8:
    // 0x29efc8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29efc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29efcc:
    // 0x29efcc: 0x0  nop
    ctx->pc = 0x29efccu;
    // NOP
label_29efd0:
    // 0x29efd0: 0x26330001  addiu       $s3, $s1, 0x1
    ctx->pc = 0x29efd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_29efd4:
    // 0x29efd4: 0x8e420208  lw          $v0, 0x208($s2)
    ctx->pc = 0x29efd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 520)));
label_29efd8:
    // 0x29efd8: 0x2342018  mult        $a0, $s1, $s4
    ctx->pc = 0x29efd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_29efdc:
    // 0x29efdc: 0x1222000e  beq         $s1, $v0, . + 4 + (0xE << 2)
label_29efe0:
    if (ctx->pc == 0x29EFE0u) {
        ctx->pc = 0x29EFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EFDCu;
        // 0x29efe0: 0x26450014  addiu       $a1, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EFE4u;
        goto label_29efe4;
    }
    ctx->pc = 0x29EFDCu;
    {
        const bool branch_taken_0x29efdc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x29EFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EFDCu;
        // 0x29efe0: 0x26450014  addiu       $a1, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29efdc) {
            ctx->pc = 0x29F018u;
            goto label_29f018;
        }
    }
    ctx->pc = 0x29EFE4u;
label_29efe4:
    // 0x29efe4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x29efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_29efe8:
    // 0x29efe8: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x29efe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_29efec:
    // 0x29efec: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x29efecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_29eff0:
    // 0x29eff0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x29eff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29eff4:
    // 0x29eff4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_29eff8:
    if (ctx->pc == 0x29EFF8u) {
        ctx->pc = 0x29EFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EFF4u;
        // 0x29eff8: 0xa21821  addu        $v1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EFFCu;
        goto label_29effc;
    }
    ctx->pc = 0x29EFF4u;
    {
        const bool branch_taken_0x29eff4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EFF4u;
        // 0x29eff8: 0xa21821  addu        $v1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eff4) {
            ctx->pc = 0x29F018u;
            goto label_29f018;
        }
    }
    ctx->pc = 0x29EFFCu;
label_29effc:
    // 0x29effc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x29effcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29f000:
    // 0x29f000: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_29f004:
    if (ctx->pc == 0x29F004u) {
        ctx->pc = 0x29F004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F000u;
        // 0x29f004: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F008u;
        goto label_29f008;
    }
    ctx->pc = 0x29F000u;
    {
        const bool branch_taken_0x29f000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F000u;
        // 0x29f004: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f000) {
            ctx->pc = 0x29F018u;
            goto label_29f018;
        }
    }
    ctx->pc = 0x29F008u;
label_29f008:
    // 0x29f008: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x29f008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_29f00c:
    // 0x29f00c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x29f00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_29f010:
    // 0x29f010: 0x60f809  jalr        $v1
label_29f014:
    if (ctx->pc == 0x29F014u) {
        ctx->pc = 0x29F018u;
        goto label_29f018;
    }
    ctx->pc = 0x29F010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x29F018u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F010u, 0x29F018u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29F018u;
label_29f018:
    // 0x29f018: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29f018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_29f01c:
    // 0x29f01c: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x29f01cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_29f020:
    // 0x29f020: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
label_29f024:
    if (ctx->pc == 0x29F024u) {
        ctx->pc = 0x29F024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F020u;
        // 0x29f024: 0x8e420208  lw          $v0, 0x208($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 520)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F028u;
        goto label_29f028;
    }
    ctx->pc = 0x29F020u;
    {
        const bool branch_taken_0x29f020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29f020) {
            ctx->pc = 0x29F024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29F020u;
            // 0x29f024: 0x8e420208  lw          $v0, 0x208($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29EFD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29efd8;
        }
    }
    ctx->pc = 0x29F028u;
label_29f028:
    // 0x29f028: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x29f028u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29f02c:
    // 0x29f02c: 0x2e220019  sltiu       $v0, $s1, 0x19
    ctx->pc = 0x29f02cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
label_29f030:
    // 0x29f030: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_29f034:
    if (ctx->pc == 0x29F034u) {
        ctx->pc = 0x29F034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F030u;
        // 0x29f034: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F038u;
        goto label_29f038;
    }
    ctx->pc = 0x29F030u;
    {
        const bool branch_taken_0x29f030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F030u;
        // 0x29f034: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f030) {
            ctx->pc = 0x29EFD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29efd0;
        }
    }
    ctx->pc = 0x29F038u;
label_29f038:
    // 0x29f038: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29f038u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29f03c:
    // 0x29f03c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29f03cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_29f040:
    // 0x29f040: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29f040u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29f044:
    // 0x29f044: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29f044u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_29f048:
    // 0x29f048: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x29f048u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29f04c:
    // 0x29f04c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x29f04cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_29f050:
    // 0x29f050: 0x3e00008  jr          $ra
label_29f054:
    if (ctx->pc == 0x29F054u) {
        ctx->pc = 0x29F054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F050u;
        // 0x29f054: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F058u;
        goto label_fallthrough_0x29f050;
    }
    ctx->pc = 0x29F050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F050u;
        // 0x29f054: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29f050:
    ctx->pc = 0x29F058u;
}
