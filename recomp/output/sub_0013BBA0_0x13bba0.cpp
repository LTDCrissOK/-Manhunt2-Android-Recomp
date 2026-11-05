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

// Function: sub_0013BBA0
// Address: 0x13bba0 - 0x13bc60
void sub_0013BBA0_0x13bba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013BBA0_0x13bba0");
#endif

    switch (ctx->pc) {
        case 0x13bbc0u: goto label_13bbc0;
        case 0x13bbdcu: goto label_13bbdc;
        case 0x13bbecu: goto label_13bbec;
        case 0x13bc0cu: goto label_13bc0c;
        case 0x13bc20u: goto label_13bc20;
        case 0x13bc30u: goto label_13bc30;
        default: break;
    }

    ctx->pc = 0x13bba0u;

    // 0x13bba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13bba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13bba4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x13bba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x13bba8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x13bba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x13bbac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13bbacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bbb0: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x13bbb0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13bbb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13bbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13bbb8: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x13BBB8u;
    SET_GPR_U32(ctx, 31, 0x13BBC0u);
    ctx->pc = 0x13BBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BBB8u;
    // 0x13bbbc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x13BBB8u, 0x13BBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BBC0u;
label_13bbc0:
    // 0x13bbc0: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x13bbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x13bbc4: 0x2631051c  addiu       $s1, $s1, 0x51C
    ctx->pc = 0x13bbc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1308));
    // 0x13bbc8: 0x2038018  mult        $s0, $s0, $v1
    ctx->pc = 0x13bbc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x13bbcc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13bbccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bbd0: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x13bbd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x13bbd4: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x13BBD4u;
    SET_GPR_U32(ctx, 31, 0x13BBDCu);
    ctx->pc = 0x13BBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BBD4u;
    // 0x13bbd8: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x13BBD4u, 0x13BBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BBDCu;
label_13bbdc:
    // 0x13bbdc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x13BBDCu;
    {
        const bool branch_taken_0x13bbdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BBDCu;
        // 0x13bbe0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bbdc) {
            ctx->pc = 0x13BC28u;
            goto label_13bc28;
        }
    }
    ctx->pc = 0x13BBE4u;
    // 0x13bbe4: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x13BBE4u;
    SET_GPR_U32(ctx, 31, 0x13BBECu);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x13BBE4u, 0x13BBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BBECu;
label_13bbec:
    // 0x13bbec: 0x24030fa1  addiu       $v1, $zero, 0xFA1
    ctx->pc = 0x13bbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4001));
    // 0x13bbf0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13bbf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bbf4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x13bbf4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x13bbf8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13BBF8u;
    {
        const bool branch_taken_0x13bbf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bbf8) {
            ctx->pc = 0x13BBFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BBF8u;
            // 0x13bbfc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13BC00u;
            goto label_13bc00;
        }
    }
    ctx->pc = 0x13BC00u;
label_13bc00:
    // 0x13bc00: 0x8010  mfhi        $s0
    ctx->pc = 0x13bc00u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x13bc04: 0xc0aafc4  jal         func_2ABF10
    ctx->pc = 0x13BC04u;
    SET_GPR_U32(ctx, 31, 0x13BC0Cu);
    ctx->pc = 0x13BC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BC04u;
    // 0x13bc08: 0x26100fa0  addiu       $s0, $s0, 0xFA0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF10u, 0x13BC04u, 0x13BC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BC0Cu;
label_13bc0c:
    // 0x13bc0c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x13bc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x13bc10: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13bc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bc14: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x13bc14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x13bc18: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x13BC18u;
    SET_GPR_U32(ctx, 31, 0x13BC20u);
    ctx->pc = 0x13BC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BC18u;
    // 0x13bc1c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x13BC18u, 0x13BC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BC20u;
label_13bc20:
    // 0x13bc20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13BC20u;
    {
        const bool branch_taken_0x13bc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BC20u;
        // 0x13bc24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bc20) {
            ctx->pc = 0x13BC34u;
            goto label_13bc34;
        }
    }
    ctx->pc = 0x13BC28u;
label_13bc28:
    // 0x13bc28: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x13BC28u;
    SET_GPR_U32(ctx, 31, 0x13BC30u);
    ctx->pc = 0x13BC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BC28u;
    // 0x13bc2c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x13BC28u, 0x13BC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BC30u;
label_13bc30:
    // 0x13bc30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13bc30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13bc34:
    // 0x13bc34: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x13bc34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13bc38: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x13bc38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13bc3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13bc3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13bc40: 0x3e00008  jr          $ra
    ctx->pc = 0x13BC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BC40u;
        // 0x13bc44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BC40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BC48u;
    // 0x13bc48: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x13bc48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13bc4c: 0x0  nop
    ctx->pc = 0x13bc4cu;
    // NOP
    // 0x13bc50: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x13bc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13bc54: 0x0  nop
    ctx->pc = 0x13bc54u;
    // NOP
    // 0x13bc58: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x13bc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x13bc5c: 0x0  nop
    ctx->pc = 0x13bc5cu;
    // NOP
    ctx->pc = 0x13bc60u;
}
