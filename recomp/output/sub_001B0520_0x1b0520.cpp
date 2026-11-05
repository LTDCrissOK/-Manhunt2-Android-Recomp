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

// Function: sub_001B0520
// Address: 0x1b0520 - 0x1b05b8
void sub_001B0520_0x1b0520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0520_0x1b0520");
#endif

    switch (ctx->pc) {
        case 0x1b0544u: goto label_1b0544;
        case 0x1b0568u: goto label_1b0568;
        case 0x1b057cu: goto label_1b057c;
        default: break;
    }

    ctx->pc = 0x1b0520u;

    // 0x1b0520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b0520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b0524: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b0524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b0528: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b0528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b052c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b052cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b0530: 0x8c84009c  lw          $a0, 0x9C($a0)
    ctx->pc = 0x1b0530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x1b0534: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B0534u;
    {
        const bool branch_taken_0x1b0534 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0534u;
        // 0x1b0538: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0534) {
            ctx->pc = 0x1B0584u;
            goto label_1b0584;
        }
    }
    ctx->pc = 0x1B053Cu;
    // 0x1b053c: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1B053Cu;
    SET_GPR_U32(ctx, 31, 0x1B0544u);
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1B053Cu, 0x1B0544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0544u;
label_1b0544:
    // 0x1b0544: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b0544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0548: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B0548u;
    {
        const bool branch_taken_0x1b0548 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0548u;
        // 0x1b054c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0548) {
            ctx->pc = 0x1B0588u;
            goto label_1b0588;
        }
    }
    ctx->pc = 0x1B0550u;
    // 0x1b0550: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1b0550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1b0554: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x1b0554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x1b0558: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B0558u;
    {
        const bool branch_taken_0x1b0558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0558u;
        // 0x1b055c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0558) {
            ctx->pc = 0x1B0588u;
            goto label_1b0588;
        }
    }
    ctx->pc = 0x1B0560u;
    // 0x1b0560: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x1B0560u;
    SET_GPR_U32(ctx, 31, 0x1B0568u);
    ctx->pc = 0x1B0564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0560u;
    // 0x1b0564: 0x8e040274  lw          $a0, 0x274($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x1B0560u, 0x1B0568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0568u;
label_1b0568:
    // 0x1b0568: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x1b0568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x1b056c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B056Cu;
    {
        const bool branch_taken_0x1b056c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B056Cu;
        // 0x1b0570: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b056c) {
            ctx->pc = 0x1B0588u;
            goto label_1b0588;
        }
    }
    ctx->pc = 0x1B0574u;
    // 0x1b0574: 0xc0987d2  jal         func_261F48
    ctx->pc = 0x1B0574u;
    SET_GPR_U32(ctx, 31, 0x1B057Cu);
    ctx->pc = 0x1B0578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0574u;
    // 0x1b0578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261F48u, 0x1B0574u, 0x1B057Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B057Cu;
label_1b057c:
    // 0x1b057c: 0x3843000e  xori        $v1, $v0, 0xE
    ctx->pc = 0x1b057cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x1b0580: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x1b0580u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_1b0584:
    // 0x1b0584: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b0584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b0588:
    // 0x1b0588: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b0588u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b058c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b058cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b0590: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b0590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0594: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0594u;
        // 0x1b0598: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B059Cu;
    // 0x1b059c: 0x0  nop
    ctx->pc = 0x1b059cu;
    // NOP
    // 0x1b05a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1b05a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b05a4: 0x0  nop
    ctx->pc = 0x1b05a4u;
    // NOP
    // 0x1b05a8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1b05a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b05ac: 0x0  nop
    ctx->pc = 0x1b05acu;
    // NOP
    // 0x1b05b0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1b05b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b05b4: 0x0  nop
    ctx->pc = 0x1b05b4u;
    // NOP
    ctx->pc = 0x1b05b8u;
}
