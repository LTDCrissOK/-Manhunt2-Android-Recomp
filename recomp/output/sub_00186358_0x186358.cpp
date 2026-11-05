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

// Function: sub_00186358
// Address: 0x186358 - 0x1863b8
void sub_00186358_0x186358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186358_0x186358");
#endif

    switch (ctx->pc) {
        case 0x186388u: goto label_186388;
        case 0x186394u: goto label_186394;
        default: break;
    }

    ctx->pc = 0x186358u;

    // 0x186358: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x186358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18635c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18635cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x186360: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x186360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x186364: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x186364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x186368: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x186368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18636c: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x18636Cu;
    {
        const bool branch_taken_0x18636c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x186370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18636Cu;
        // 0x186370: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18636c) {
            ctx->pc = 0x1863A0u;
            goto label_1863a0;
        }
    }
    ctx->pc = 0x186374u;
    // 0x186374: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x186374u;
    {
        const bool branch_taken_0x186374 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x186378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186374u;
        // 0x186378: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186374) {
            ctx->pc = 0x1863A0u;
            goto label_1863a0;
        }
    }
    ctx->pc = 0x18637Cu;
    // 0x18637c: 0x24110020  addiu       $s1, $zero, 0x20
    ctx->pc = 0x18637cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x186380: 0x2450bdc0  addiu       $s0, $v0, -0x4240
    ctx->pc = 0x186380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950336));
    // 0x186384: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x186384u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_186388:
    // 0x186388: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18638c: 0xc0604b2  jal         func_1812C8
    ctx->pc = 0x18638Cu;
    SET_GPR_U32(ctx, 31, 0x186394u);
    ctx->pc = 0x186390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18638Cu;
    // 0x186390: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1812C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1812C8u, 0x18638Cu, 0x186394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186394u;
label_186394:
    // 0x186394: 0x0  nop
    ctx->pc = 0x186394u;
    // NOP
    // 0x186398: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x186398u;
    {
        const bool branch_taken_0x186398 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x18639Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186398u;
        // 0x18639c: 0x26100180  addiu       $s0, $s0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186398) {
            ctx->pc = 0x186388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186388;
        }
    }
    ctx->pc = 0x1863A0u;
label_1863a0:
    // 0x1863a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1863a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1863a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1863a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1863a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1863a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1863ac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1863acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1863b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1863B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1863B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1863B0u;
        // 0x1863b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1863B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1863B8u;
}
