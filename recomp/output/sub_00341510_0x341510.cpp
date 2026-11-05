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

// Function: sub_00341510
// Address: 0x341510 - 0x341570
void sub_00341510_0x341510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341510_0x341510");
#endif

    switch (ctx->pc) {
        case 0x341540u: goto label_341540;
        case 0x34154cu: goto label_34154c;
        default: break;
    }

    ctx->pc = 0x341510u;

    // 0x341510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x341510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x341514: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x341514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x341518: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x341518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34151c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34151cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x341520: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x341520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x341524: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x341524u;
    {
        const bool branch_taken_0x341524 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x341528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341524u;
        // 0x341528: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341524) {
            ctx->pc = 0x341558u;
            goto label_341558;
        }
    }
    ctx->pc = 0x34152Cu;
    // 0x34152c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x34152Cu;
    {
        const bool branch_taken_0x34152c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x341530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34152Cu;
        // 0x341530: 0x3c02005b  lui         $v0, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34152c) {
            ctx->pc = 0x341558u;
            goto label_341558;
        }
    }
    ctx->pc = 0x341534u;
    // 0x341534: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x341534u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x341538: 0x24506ff0  addiu       $s0, $v0, 0x6FF0
    ctx->pc = 0x341538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28656));
    // 0x34153c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x34153cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_341540:
    // 0x341540: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x341540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341544: 0xc0fbbc0  jal         func_3EEF00
    ctx->pc = 0x341544u;
    SET_GPR_U32(ctx, 31, 0x34154Cu);
    ctx->pc = 0x341548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341544u;
    // 0x341548: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EEF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EEF00u, 0x341544u, 0x34154Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34154Cu;
label_34154c:
    // 0x34154c: 0x0  nop
    ctx->pc = 0x34154cu;
    // NOP
    // 0x341550: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x341550u;
    {
        const bool branch_taken_0x341550 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x341554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341550u;
        // 0x341554: 0x261000e0  addiu       $s0, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341550) {
            ctx->pc = 0x341540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341540;
        }
    }
    ctx->pc = 0x341558u;
label_341558:
    // 0x341558: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x341558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34155c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34155cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x341560: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x341560u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x341564: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x341564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x341568: 0x3e00008  jr          $ra
    ctx->pc = 0x341568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341568u;
        // 0x34156c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341570u;
}
