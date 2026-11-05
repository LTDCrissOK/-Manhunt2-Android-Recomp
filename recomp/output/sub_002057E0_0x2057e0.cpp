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

// Function: sub_002057E0
// Address: 0x2057e0 - 0x205870
void sub_002057E0_0x2057e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002057E0_0x2057e0");
#endif

    switch (ctx->pc) {
        case 0x20580cu: goto label_20580c;
        case 0x205818u: goto label_205818;
        case 0x205828u: goto label_205828;
        case 0x205838u: goto label_205838;
        case 0x205858u: goto label_205858;
        default: break;
    }

    ctx->pc = 0x2057e0u;

    // 0x2057e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2057e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2057e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2057e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2057e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2057e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2057ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2057ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2057f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2057f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2057f4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2057f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2057f8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2057f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2057fc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2057FCu;
    {
        const bool branch_taken_0x2057fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057FCu;
        // 0x205800: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2057fc) {
            ctx->pc = 0x205858u;
            goto label_205858;
        }
    }
    ctx->pc = 0x205804u;
    // 0x205804: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x205804u;
    SET_GPR_U32(ctx, 31, 0x20580Cu);
    ctx->pc = 0x205808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205804u;
    // 0x205808: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x205804u, 0x20580Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20580Cu;
label_20580c:
    // 0x20580c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x20580cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x205810: 0xc0e7e2c  jal         func_39F8B0
    ctx->pc = 0x205810u;
    SET_GPR_U32(ctx, 31, 0x205818u);
    ctx->pc = 0x205814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205810u;
    // 0x205814: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39F8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39F8B0u, 0x205810u, 0x205818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205818u;
label_205818:
    // 0x205818: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x205818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x20581c: 0x5840000b  blezl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x20581Cu;
    {
        const bool branch_taken_0x20581c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x20581c) {
            ctx->pc = 0x205820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20581Cu;
            // 0x205820: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20584Cu;
            goto label_20584c;
        }
    }
    ctx->pc = 0x205824u;
    // 0x205824: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x205824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_205828:
    // 0x205828: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x205828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20582c: 0x2406fc40  addiu       $a2, $zero, -0x3C0
    ctx->pc = 0x20582cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966336));
    // 0x205830: 0xc0816d6  jal         func_205B58
    ctx->pc = 0x205830u;
    SET_GPR_U32(ctx, 31, 0x205838u);
    ctx->pc = 0x205834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205830u;
    // 0x205834: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205B58u, 0x205830u, 0x205838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205838u;
label_205838:
    // 0x205838: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x205838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x20583c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x20583cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x205840: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x205840u;
    {
        const bool branch_taken_0x205840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205840u;
        // 0x205844: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205840) {
            ctx->pc = 0x205828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205828;
        }
    }
    ctx->pc = 0x205848u;
    // 0x205848: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x205848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20584c:
    // 0x20584c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20584cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205850: 0xc0e7d16  jal         func_39F458
    ctx->pc = 0x205850u;
    SET_GPR_U32(ctx, 31, 0x205858u);
    ctx->pc = 0x205854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205850u;
    // 0x205854: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39F458u, 0x205850u, 0x205858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205858u;
label_205858:
    // 0x205858: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x205858u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20585c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20585cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205860: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x205860u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x205864: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x205864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205868: 0x3e00008  jr          $ra
    ctx->pc = 0x205868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205868u;
        // 0x20586c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205870u;
}
