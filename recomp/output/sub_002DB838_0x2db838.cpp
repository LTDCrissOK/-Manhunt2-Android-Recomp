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

// Function: sub_002DB838
// Address: 0x2db838 - 0x2db8b8
void sub_002DB838_0x2db838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB838_0x2db838");
#endif

    switch (ctx->pc) {
        case 0x2db860u: goto label_2db860;
        case 0x2db88cu: goto label_2db88c;
        default: break;
    }

    ctx->pc = 0x2db838u;

    // 0x2db838: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2db838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2db83c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2db83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2db840: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2db840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2db844: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2db844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db848: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2db848u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db84c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2db84cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2db850: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2db850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2db854: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x2db854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x2db858: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x2DB858u;
    SET_GPR_U32(ctx, 31, 0x2DB860u);
    ctx->pc = 0x2DB85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB858u;
    // 0x2db85c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x2DB858u, 0x2DB860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB860u;
label_2db860:
    // 0x2db860: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2db860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db864: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2DB864u;
    {
        const bool branch_taken_0x2db864 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB864u;
        // 0x2db868: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db864) {
            ctx->pc = 0x2DB890u;
            goto label_2db890;
        }
    }
    ctx->pc = 0x2DB86Cu;
    // 0x2db86c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2db86cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2db870: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DB870u;
    {
        const bool branch_taken_0x2db870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB870u;
        // 0x2db874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db870) {
            ctx->pc = 0x2DB880u;
            goto label_2db880;
        }
    }
    ctx->pc = 0x2DB878u;
    // 0x2db878: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2DB878u;
    {
        const bool branch_taken_0x2db878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB878u;
        // 0x2db87c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db878) {
            ctx->pc = 0x2DB890u;
            goto label_2db890;
        }
    }
    ctx->pc = 0x2DB880u;
label_2db880:
    // 0x2db880: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2db880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db884: 0xc0b6e3c  jal         func_2DB8F0
    ctx->pc = 0x2DB884u;
    SET_GPR_U32(ctx, 31, 0x2DB88Cu);
    ctx->pc = 0x2DB888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB884u;
    // 0x2db888: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB8F0u, 0x2DB884u, 0x2DB88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB88Cu;
label_2db88c:
    // 0x2db88c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2db88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2db890:
    // 0x2db890: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2db890u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db894: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2db894u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2db898: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2db898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2db89c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB89Cu;
        // 0x2db8a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB89Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB8A4u;
    // 0x2db8a4: 0x0  nop
    ctx->pc = 0x2db8a4u;
    // NOP
    // 0x2db8a8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2db8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2db8ac: 0x0  nop
    ctx->pc = 0x2db8acu;
    // NOP
    // 0x2db8b0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2db8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2db8b4: 0x0  nop
    ctx->pc = 0x2db8b4u;
    // NOP
    ctx->pc = 0x2db8b8u;
}
