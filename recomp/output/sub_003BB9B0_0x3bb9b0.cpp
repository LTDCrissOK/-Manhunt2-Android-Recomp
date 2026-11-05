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

// Function: sub_003BB9B0
// Address: 0x3bb9b0 - 0x3bba68
void sub_003BB9B0_0x3bb9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BB9B0_0x3bb9b0");
#endif

    switch (ctx->pc) {
        case 0x3bb9d8u: goto label_3bb9d8;
        case 0x3bb9f4u: goto label_3bb9f4;
        case 0x3bba18u: goto label_3bba18;
        case 0x3bba20u: goto label_3bba20;
        case 0x3bba38u: goto label_3bba38;
        case 0x3bba40u: goto label_3bba40;
        default: break;
    }

    ctx->pc = 0x3bb9b0u;

label_3bb9b0:
    // 0x3bb9b0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3bb9b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb9b4: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x3bb9b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x3bb9b8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BB9B8u;
    {
        const bool branch_taken_0x3bb9b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BB9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB9B8u;
        // 0x3bb9bc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb9b8) {
            ctx->pc = 0x3BB9CCu;
            goto label_3bb9cc;
        }
    }
    ctx->pc = 0x3BB9C0u;
    // 0x3bb9c0: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x3bb9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x3bb9c4: 0x80eee36  j           func_3BB8D8
    ctx->pc = 0x3BB9C4u;
    ctx->pc = 0x3BB9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB9C4u;
    // 0x3bb9c8: 0xa0620003  sb          $v0, 0x3($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB8D8u, 0x3BB9C4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3BB9CCu;
label_3bb9cc:
    // 0x3bb9cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3BB9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BB9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB9CCu;
        // 0x3bb9d0: 0xa0620003  sb          $v0, 0x3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB9CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BB9D4u;
    // 0x3bb9d4: 0x0  nop
    ctx->pc = 0x3bb9d4u;
    // NOP
label_3bb9d8:
    // 0x3bb9d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3bb9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3bb9dc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3bb9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3bb9e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3bb9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3bb9e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3bb9e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb9e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3bb9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3bb9ec: 0xc0eedd4  jal         func_3BB750
    ctx->pc = 0x3BB9ECu;
    SET_GPR_U32(ctx, 31, 0x3BB9F4u);
    ctx->pc = 0x3BB9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB9ECu;
    // 0x3bb9f0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB750u, 0x3BB9ECu, 0x3BB9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB9F4u;
label_3bb9f4:
    // 0x3bb9f4: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x3bb9f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3bb9f8: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x3bb9f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3bb9fc: 0x602000e  bltzl       $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x3BB9FCu;
    {
        const bool branch_taken_0x3bb9fc = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x3bb9fc) {
            ctx->pc = 0x3BBA00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BB9FCu;
            // 0x3bba00: 0x2610003c  addiu       $s0, $s0, 0x3C (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BBA38u;
            goto label_3bba38;
        }
    }
    ctx->pc = 0x3BBA04u;
    // 0x3bba04: 0x2a02003c  slti        $v0, $s0, 0x3C
    ctx->pc = 0x3bba04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x3bba08: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x3BBA08u;
    {
        const bool branch_taken_0x3bba08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bba08) {
            ctx->pc = 0x3BBA0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BBA08u;
            // 0x3bba0c: 0xa2300002  sb          $s0, 0x2($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BBA4Cu;
            goto label_3bba4c;
        }
    }
    ctx->pc = 0x3BBA10u;
    // 0x3bba10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bba10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bba14: 0x0  nop
    ctx->pc = 0x3bba14u;
    // NOP
label_3bba18:
    // 0x3bba18: 0xc0eee60  jal         func_3BB980
    ctx->pc = 0x3BBA18u;
    SET_GPR_U32(ctx, 31, 0x3BBA20u);
    ctx->pc = 0x3BBA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBA18u;
    // 0x3bba1c: 0x2610ffc4  addiu       $s0, $s0, -0x3C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967236));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB980u, 0x3BBA18u, 0x3BBA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBA20u;
label_3bba20:
    // 0x3bba20: 0x2a02003c  slti        $v0, $s0, 0x3C
    ctx->pc = 0x3bba20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x3bba24: 0x1040fffc  beqz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x3BBA24u;
    {
        const bool branch_taken_0x3bba24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBA24u;
        // 0x3bba28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bba24) {
            ctx->pc = 0x3BBA18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bba18;
        }
    }
    ctx->pc = 0x3BBA2Cu;
    // 0x3bba2c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3BBA2Cu;
    {
        const bool branch_taken_0x3bba2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBA2Cu;
        // 0x3bba30: 0xa2300002  sb          $s0, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bba2c) {
            ctx->pc = 0x3BBA50u;
            goto label_3bba50;
        }
    }
    ctx->pc = 0x3BBA34u;
    // 0x3bba34: 0x0  nop
    ctx->pc = 0x3bba34u;
    // NOP
label_3bba38:
    // 0x3bba38: 0xc0eee6c  jal         func_3BB9B0
    ctx->pc = 0x3BBA38u;
    SET_GPR_U32(ctx, 31, 0x3BBA40u);
    ctx->pc = 0x3BBA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBA38u;
    // 0x3bba3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB9B0u;
    goto label_3bb9b0;
    ctx->pc = 0x3BBA40u;
label_3bba40:
    // 0x3bba40: 0x602fffd  bltzl       $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x3BBA40u;
    {
        const bool branch_taken_0x3bba40 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x3bba40) {
            ctx->pc = 0x3BBA44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BBA40u;
            // 0x3bba44: 0x2610003c  addiu       $s0, $s0, 0x3C (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BBA38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bba38;
        }
    }
    ctx->pc = 0x3BBA48u;
    // 0x3bba48: 0xa2300002  sb          $s0, 0x2($s1)
    ctx->pc = 0x3bba48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 16));
label_3bba4c:
    // 0x3bba4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bba4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bba50:
    // 0x3bba50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3bba50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bba54: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3bba54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bba58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3bba58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bba5c: 0x80eedee  j           func_3BB7B8
    ctx->pc = 0x3BBA5Cu;
    ctx->pc = 0x3BBA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBA5Cu;
    // 0x3bba60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB7B8u, 0x3BBA5Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3BBA64u;
    // 0x3bba64: 0x0  nop
    ctx->pc = 0x3bba64u;
    // NOP
    ctx->pc = 0x3bba68u;
}
