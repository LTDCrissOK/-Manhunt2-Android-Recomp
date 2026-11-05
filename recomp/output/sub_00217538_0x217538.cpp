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

// Function: sub_00217538
// Address: 0x217538 - 0x2175e0
void sub_00217538_0x217538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217538_0x217538");
#endif

    switch (ctx->pc) {
        case 0x217564u: goto label_217564;
        case 0x217590u: goto label_217590;
        case 0x217598u: goto label_217598;
        default: break;
    }

    ctx->pc = 0x217538u;

    // 0x217538: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x217538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21753c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21753cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x217540: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x217540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x217544: 0x3c10004a  lui         $s0, 0x4A
    ctx->pc = 0x217544u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
    // 0x217548: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x217548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x21754c: 0x26103598  addiu       $s0, $s0, 0x3598
    ctx->pc = 0x21754cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 13720));
    // 0x217550: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x217550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x217554: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x217554u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217558: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x217558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21755c: 0xc085a12  jal         func_216848
    ctx->pc = 0x21755Cu;
    SET_GPR_U32(ctx, 31, 0x217564u);
    ctx->pc = 0x217560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21755Cu;
    // 0x217560: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216848u, 0x21755Cu, 0x217564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217564u;
label_217564:
    // 0x217564: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x217564u;
    {
        const bool branch_taken_0x217564 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x217564) {
            ctx->pc = 0x217568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217564u;
            // 0x217568: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21756Cu;
            goto label_21756c;
        }
    }
    ctx->pc = 0x21756Cu;
label_21756c:
    // 0x21756c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21756cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x217570: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x217570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x217574: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x217574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x217578: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x217578u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x21757c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x21757cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x217580: 0x1211000b  beq         $s0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x217580u;
    {
        const bool branch_taken_0x217580 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x217584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217580u;
        // 0x217584: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217580) {
            ctx->pc = 0x2175B0u;
            goto label_2175b0;
        }
    }
    ctx->pc = 0x217588u;
    // 0x217588: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x217588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21758c: 0x0  nop
    ctx->pc = 0x21758cu;
    // NOP
label_217590:
    // 0x217590: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x217590u;
    SET_GPR_U32(ctx, 31, 0x217598u);
    ctx->pc = 0x217594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217590u;
    // 0x217594: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x217590u, 0x217598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217598u;
label_217598:
    // 0x217598: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x217598u;
    {
        const bool branch_taken_0x217598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217598u;
        // 0x21759c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217598) {
            ctx->pc = 0x2175B0u;
            goto label_2175b0;
        }
    }
    ctx->pc = 0x2175A0u;
    // 0x2175a0: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x2175a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2175a4: 0x5611fffa  bnel        $s0, $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2175A4u;
    {
        const bool branch_taken_0x2175a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x2175a4) {
            ctx->pc = 0x2175A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2175A4u;
            // 0x2175a8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217590;
        }
    }
    ctx->pc = 0x2175ACu;
    // 0x2175ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2175acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2175b0:
    // 0x2175b0: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2175B0u;
    {
        const bool branch_taken_0x2175b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2175b0) {
            ctx->pc = 0x2175B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2175B0u;
            // 0x2175b4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2175BCu;
            goto label_2175bc;
        }
    }
    ctx->pc = 0x2175B8u;
    // 0x2175b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2175b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2175bc:
    // 0x2175bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2175bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2175c0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2175c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2175c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2175c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2175c8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2175c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2175cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2175CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2175D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2175CCu;
        // 0x2175d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2175CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2175D4u;
    // 0x2175d4: 0x0  nop
    ctx->pc = 0x2175d4u;
    // NOP
    // 0x2175d8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2175d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2175dc: 0x0  nop
    ctx->pc = 0x2175dcu;
    // NOP
    ctx->pc = 0x2175e0u;
}
