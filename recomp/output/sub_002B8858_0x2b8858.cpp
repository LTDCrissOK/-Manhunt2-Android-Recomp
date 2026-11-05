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

// Function: sub_002B8858
// Address: 0x2b8858 - 0x2b8908
void sub_002B8858_0x2b8858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8858_0x2b8858");
#endif

    switch (ctx->pc) {
        case 0x2b8878u: goto label_2b8878;
        case 0x2b8880u: goto label_2b8880;
        case 0x2b88b4u: goto label_2b88b4;
        case 0x2b88c8u: goto label_2b88c8;
        case 0x2b88dcu: goto label_2b88dc;
        default: break;
    }

    ctx->pc = 0x2b8858u;

    // 0x2b8858: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b8858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b885c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b885cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b8860: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b8860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b8864: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b8864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8868: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b8868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b886c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2b886cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8870: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B8870u;
    SET_GPR_U32(ctx, 31, 0x2B8878u);
    ctx->pc = 0x2B8874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8870u;
    // 0x2b8874: 0xae11590c  sw          $s1, 0x590C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 22796), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B8870u, 0x2B8878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8878u;
label_2b8878:
    // 0x2b8878: 0xc0ace0e  jal         func_2B3838
    ctx->pc = 0x2B8878u;
    SET_GPR_U32(ctx, 31, 0x2B8880u);
    ctx->pc = 0x2B887Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8878u;
    // 0x2b887c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3838u, 0x2B8878u, 0x2B8880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8880u;
label_2b8880:
    // 0x2b8880: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2b8880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2b8884: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2b8884u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2b8888: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B8888u;
    {
        const bool branch_taken_0x2b8888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B888Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8888u;
        // 0x2b888c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8888) {
            ctx->pc = 0x2B88ACu;
            goto label_2b88ac;
        }
    }
    ctx->pc = 0x2B8890u;
    // 0x2b8890: 0xae115910  sw          $s1, 0x5910($s0)
    ctx->pc = 0x2b8890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22800), GPR_U32(ctx, 17));
    // 0x2b8894: 0xa040a928  sb          $zero, -0x56D8($v0)
    ctx->pc = 0x2b8894u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294945064), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b8898: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2b8898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2b889c: 0xac60a320  sw          $zero, -0x5CE0($v1)
    ctx->pc = 0x2b889cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x66A320u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66A320u, _value); } while (0);
    // 0x2b88a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b88a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b88a4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2B88A4u;
    {
        const bool branch_taken_0x2b88a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B88A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B88A4u;
        // 0x2b88a8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b88a4) {
            ctx->pc = 0x2B88F0u;
            goto label_2b88f0;
        }
    }
    ctx->pc = 0x2B88ACu;
label_2b88ac:
    // 0x2b88ac: 0xc0ad684  jal         func_2B5A10
    ctx->pc = 0x2B88ACu;
    SET_GPR_U32(ctx, 31, 0x2B88B4u);
    ctx->pc = 0x2B88B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B88ACu;
    // 0x2b88b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5A10u, 0x2B88ACu, 0x2B88B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B88B4u;
label_2b88b4:
    // 0x2b88b4: 0x14510007  bne         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B88B4u;
    {
        const bool branch_taken_0x2b88b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2B88B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B88B4u;
        // 0x2b88b8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b88b4) {
            ctx->pc = 0x2B88D4u;
            goto label_2b88d4;
        }
    }
    ctx->pc = 0x2B88BCu;
    // 0x2b88bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b88bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b88c0: 0xc0ad6ae  jal         func_2B5AB8
    ctx->pc = 0x2B88C0u;
    SET_GPR_U32(ctx, 31, 0x2B88C8u);
    ctx->pc = 0x2B88C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B88C0u;
    // 0x2b88c4: 0xa040a928  sb          $zero, -0x56D8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294945064), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5AB8u, 0x2B88C0u, 0x2B88C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B88C8u;
label_2b88c8:
    // 0x2b88c8: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2b88c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2b88cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B88CCu;
    {
        const bool branch_taken_0x2b88cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B88D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B88CCu;
        // 0x2b88d0: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b88cc) {
            ctx->pc = 0x2B88ECu;
            goto label_2b88ec;
        }
    }
    ctx->pc = 0x2B88D4u;
label_2b88d4:
    // 0x2b88d4: 0xc0ad65a  jal         func_2B5968
    ctx->pc = 0x2B88D4u;
    SET_GPR_U32(ctx, 31, 0x2B88DCu);
    ctx->pc = 0x2B88D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B88D4u;
    // 0x2b88d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5968u, 0x2B88D4u, 0x2B88DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B88DCu;
label_2b88dc:
    // 0x2b88dc: 0x14510004  bne         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B88DCu;
    {
        const bool branch_taken_0x2b88dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2B88E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B88DCu;
        // 0x2b88e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b88dc) {
            ctx->pc = 0x2B88F0u;
            goto label_2b88f0;
        }
    }
    ctx->pc = 0x2B88E4u;
    // 0x2b88e4: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x2b88e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2b88e8: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x2b88e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_2b88ec:
    // 0x2b88ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b88ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2b88f0:
    // 0x2b88f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b88f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b88f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b88f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b88f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b88f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b88fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B88FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B88FCu;
        // 0x2b8900: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B88FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8904u;
    // 0x2b8904: 0x0  nop
    ctx->pc = 0x2b8904u;
    // NOP
    ctx->pc = 0x2b8908u;
}
