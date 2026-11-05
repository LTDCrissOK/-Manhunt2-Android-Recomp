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

// Function: sub_002D3548
// Address: 0x2d3548 - 0x2d35d8
void sub_002D3548_0x2d3548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3548_0x2d3548");
#endif

    switch (ctx->pc) {
        case 0x2d3580u: goto label_2d3580;
        case 0x2d358cu: goto label_2d358c;
        case 0x2d35b4u: goto label_2d35b4;
        default: break;
    }

    ctx->pc = 0x2d3548u;

    // 0x2d3548: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d3548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d354c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2d354cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2d3550: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d3550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d3554: 0x24423db8  addiu       $v0, $v0, 0x3DB8
    ctx->pc = 0x2d3554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15800));
    // 0x2d3558: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d3558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d355c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d355cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3560: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d3560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d3564: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d3564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d3568: 0x26300014  addiu       $s0, $s1, 0x14
    ctx->pc = 0x2d3568u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x2d356c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d356cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d3570: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x2d3570u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d3574: 0xae2200ac  sw          $v0, 0xAC($s1)
    ctx->pc = 0x2d3574u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 2));
    // 0x2d3578: 0xc0f6ad4  jal         func_3DAB50
    ctx->pc = 0x2D3578u;
    SET_GPR_U32(ctx, 31, 0x2D3580u);
    ctx->pc = 0x2D357Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3578u;
    // 0x2d357c: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAB50u, 0x2D3578u, 0x2D3580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3580u;
label_2d3580:
    // 0x2d3580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d3580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3584: 0xc0b4c9a  jal         func_2D3268
    ctx->pc = 0x2D3584u;
    SET_GPR_U32(ctx, 31, 0x2D358Cu);
    ctx->pc = 0x2D3588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3584u;
    // 0x2d3588: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3268u, 0x2D3584u, 0x2D358Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D358Cu;
label_2d358c:
    // 0x2d358c: 0x0  nop
    ctx->pc = 0x2d358cu;
    // NOP
    // 0x2d3590: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D3590u;
    {
        const bool branch_taken_0x2d3590 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x2D3594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3590u;
        // 0x2d3594: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3590) {
            ctx->pc = 0x2D3580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d3580;
        }
    }
    ctx->pc = 0x2D3598u;
    // 0x2d3598: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x2d3598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
    // 0x2d359c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d359cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d35a0: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x2d35a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
    // 0x2d35a4: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2d35a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d35a8: 0xae2000a4  sw          $zero, 0xA4($s1)
    ctx->pc = 0x2d35a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
    // 0x2d35ac: 0xc0b4db4  jal         func_2D36D0
    ctx->pc = 0x2D35ACu;
    SET_GPR_U32(ctx, 31, 0x2D35B4u);
    ctx->pc = 0x2D35B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D35ACu;
    // 0x2d35b0: 0xae2000a8  sw          $zero, 0xA8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D36D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D36D0u, 0x2D35ACu, 0x2D35B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D35B4u;
label_2d35b4:
    // 0x2d35b4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d35b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d35b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d35b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d35bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d35bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d35c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d35c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d35c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d35c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d35c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d35c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d35cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D35CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D35D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D35CCu;
        // 0x2d35d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D35CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D35D4u;
    // 0x2d35d4: 0x0  nop
    ctx->pc = 0x2d35d4u;
    // NOP
    ctx->pc = 0x2d35d8u;
}
