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

// Function: sub_00135060
// Address: 0x135060 - 0x135128
void sub_00135060_0x135060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135060_0x135060");
#endif

    switch (ctx->pc) {
        case 0x13508cu: goto label_13508c;
        case 0x1350acu: goto label_1350ac;
        case 0x1350bcu: goto label_1350bc;
        case 0x1350c8u: goto label_1350c8;
        case 0x1350e0u: goto label_1350e0;
        case 0x1350f8u: goto label_1350f8;
        default: break;
    }

    ctx->pc = 0x135060u;

    // 0x135060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x135060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x135064: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x135064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x135068: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x135068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13506c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13506cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135070: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x135070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x135074: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x135074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x135078: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x135078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x13507c: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x13507cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x135080: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x135080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x135084: 0xc07d696  jal         func_1F5A58
    ctx->pc = 0x135084u;
    SET_GPR_U32(ctx, 31, 0x13508Cu);
    ctx->pc = 0x135088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135084u;
    // 0x135088: 0x96060010  lhu         $a2, 0x10($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5A58u, 0x135084u, 0x13508Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13508Cu;
label_13508c:
    // 0x13508c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13508Cu;
    {
        const bool branch_taken_0x13508c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13508c) {
            ctx->pc = 0x135090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13508Cu;
            // 0x135090: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13509Cu;
            goto label_13509c;
        }
    }
    ctx->pc = 0x135094u;
    // 0x135094: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x135094u;
    {
        const bool branch_taken_0x135094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135094u;
        // 0x135098: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135094) {
            ctx->pc = 0x135110u;
            goto label_135110;
        }
    }
    ctx->pc = 0x13509Cu;
label_13509c:
    // 0x13509c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13509cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1350a0: 0x8c520010  lw          $s2, 0x10($v0)
    ctx->pc = 0x1350a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1350a4: 0xc04d396  jal         func_134E58
    ctx->pc = 0x1350A4u;
    SET_GPR_U32(ctx, 31, 0x1350ACu);
    ctx->pc = 0x1350A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1350A4u;
    // 0x1350a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134E58u, 0x1350A4u, 0x1350ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1350ACu;
label_1350ac:
    // 0x1350ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1350ACu;
    {
        const bool branch_taken_0x1350ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1350B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1350ACu;
        // 0x1350b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1350ac) {
            ctx->pc = 0x1350BCu;
            goto label_1350bc;
        }
    }
    ctx->pc = 0x1350B4u;
    // 0x1350b4: 0xc04d348  jal         func_134D20
    ctx->pc = 0x1350B4u;
    SET_GPR_U32(ctx, 31, 0x1350BCu);
    ctx->pc = 0x1350B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1350B4u;
    // 0x1350b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134D20u, 0x1350B4u, 0x1350BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1350BCu;
label_1350bc:
    // 0x1350bc: 0x96050010  lhu         $a1, 0x10($s0)
    ctx->pc = 0x1350bcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1350c0: 0xc04d40a  jal         func_135028
    ctx->pc = 0x1350C0u;
    SET_GPR_U32(ctx, 31, 0x1350C8u);
    ctx->pc = 0x1350C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1350C0u;
    // 0x1350c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135028u, 0x1350C0u, 0x1350C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1350C8u;
label_1350c8:
    // 0x1350c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1350c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1350cc: 0x16200010  bnez        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1350CCu;
    {
        const bool branch_taken_0x1350cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1350D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1350CCu;
        // 0x1350d0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1350cc) {
            ctx->pc = 0x135110u;
            goto label_135110;
        }
    }
    ctx->pc = 0x1350D4u;
    // 0x1350d4: 0x96050010  lhu         $a1, 0x10($s0)
    ctx->pc = 0x1350d4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1350d8: 0xc04d3ea  jal         func_134FA8
    ctx->pc = 0x1350D8u;
    SET_GPR_U32(ctx, 31, 0x1350E0u);
    ctx->pc = 0x1350DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1350D8u;
    // 0x1350dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134FA8u, 0x1350D8u, 0x1350E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1350E0u;
label_1350e0:
    // 0x1350e0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1350e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1350e4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1350e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1350e8: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1350E8u;
    {
        const bool branch_taken_0x1350e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1350ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1350E8u;
        // 0x1350ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1350e8) {
            ctx->pc = 0x1350FCu;
            goto label_1350fc;
        }
    }
    ctx->pc = 0x1350F0u;
    // 0x1350f0: 0xc04d30c  jal         func_134C30
    ctx->pc = 0x1350F0u;
    SET_GPR_U32(ctx, 31, 0x1350F8u);
    ctx->pc = 0x1350F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1350F0u;
    // 0x1350f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134C30u, 0x1350F0u, 0x1350F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1350F8u;
label_1350f8:
    // 0x1350f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1350f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1350fc:
    // 0x1350fc: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1350FCu;
    {
        const bool branch_taken_0x1350fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x135100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1350FCu;
        // 0x135100: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1350fc) {
            ctx->pc = 0x135110u;
            goto label_135110;
        }
    }
    ctx->pc = 0x135104u;
    // 0x135104: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x135104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x135108: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x135108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x13510c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x13510cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_135110:
    // 0x135110: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135114: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135114u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135118: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135118u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13511c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x13511cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135120: 0x3e00008  jr          $ra
    ctx->pc = 0x135120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135120u;
        // 0x135124: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135128u;
}
