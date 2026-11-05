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

// Function: sub_00236510
// Address: 0x236510 - 0x236588
void sub_00236510_0x236510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236510_0x236510");
#endif

    switch (ctx->pc) {
        case 0x23655cu: goto label_23655c;
        case 0x236564u: goto label_236564;
        case 0x236570u: goto label_236570;
        default: break;
    }

    ctx->pc = 0x236510u;

    // 0x236510: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x236514: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236518: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x236518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x23651c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23651cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x236520: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x236520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236524: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x236524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x236528: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x236528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x23652c: 0x10430010  beq         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x23652Cu;
    {
        const bool branch_taken_0x23652c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x236530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23652Cu;
        // 0x236530: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23652c) {
            ctx->pc = 0x236570u;
            goto label_236570;
        }
    }
    ctx->pc = 0x236534u;
    // 0x236534: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x236534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x236538: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x236538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x23653c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23653cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x236540: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x236540u;
    {
        const bool branch_taken_0x236540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x236544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236540u;
        // 0x236544: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236540) {
            ctx->pc = 0x236554u;
            goto label_236554;
        }
    }
    ctx->pc = 0x236548u;
    // 0x236548: 0x8e020370  lw          $v0, 0x370($s0)
    ctx->pc = 0x236548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 880)));
    // 0x23654c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x23654cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x236550: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x236550u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_236554:
    // 0x236554: 0xc069952  jal         func_1A6548
    ctx->pc = 0x236554u;
    SET_GPR_U32(ctx, 31, 0x23655Cu);
    ctx->pc = 0x1A6548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6548u, 0x236554u, 0x23655Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23655Cu;
label_23655c:
    // 0x23655c: 0xc06a328  jal         func_1A8CA0
    ctx->pc = 0x23655Cu;
    SET_GPR_U32(ctx, 31, 0x236564u);
    ctx->pc = 0x236560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23655Cu;
    // 0x236560: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8CA0u, 0x23655Cu, 0x236564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236564u;
label_236564:
    // 0x236564: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x236564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x236568: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x236568u;
    SET_GPR_U32(ctx, 31, 0x236570u);
    ctx->pc = 0x23656Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236568u;
    // 0x23656c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x236568u, 0x236570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236570u;
label_236570:
    // 0x236570: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236570u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236574: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x236574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x236578: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x236578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23657c: 0x3e00008  jr          $ra
    ctx->pc = 0x23657Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23657Cu;
        // 0x236580: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23657Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236584u;
    // 0x236584: 0x0  nop
    ctx->pc = 0x236584u;
    // NOP
    ctx->pc = 0x236588u;
}
