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

// Function: sub_00159298
// Address: 0x159298 - 0x159338
void sub_00159298_0x159298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159298_0x159298");
#endif

    switch (ctx->pc) {
        case 0x1592c0u: goto label_1592c0;
        case 0x1592c4u: goto label_1592c4;
        case 0x1592f0u: goto label_1592f0;
        case 0x159304u: goto label_159304;
        case 0x15930cu: goto label_15930c;
        default: break;
    }

    ctx->pc = 0x159298u;

    // 0x159298: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x159298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15929c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x15929cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1592a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1592a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1592a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1592a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1592a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1592a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1592ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1592acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1592b0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1592b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1592b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1592B4u;
    {
        const bool branch_taken_0x1592b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1592B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1592B4u;
        // 0x1592b8: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1592b4) {
            ctx->pc = 0x1592C8u;
            goto label_1592c8;
        }
    }
    ctx->pc = 0x1592BCu;
    // 0x1592bc: 0x0  nop
    ctx->pc = 0x1592bcu;
    // NOP
label_1592c0:
    // 0x1592c0: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1592c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1592c4:
    // 0x1592c4: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1592c4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1592c8:
    // 0x1592c8: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x1592c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1592cc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1592CCu;
    {
        const bool branch_taken_0x1592cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1592D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1592CCu;
        // 0x1592d0: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1592cc) {
            ctx->pc = 0x159320u;
            goto label_159320;
        }
    }
    ctx->pc = 0x1592D4u;
    // 0x1592d4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1592d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1592d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1592d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1592dc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1592dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1592e0: 0x1080fff7  beqz        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1592E0u;
    {
        const bool branch_taken_0x1592e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1592E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1592E0u;
        // 0x1592e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1592e0) {
            ctx->pc = 0x1592C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1592c0;
        }
    }
    ctx->pc = 0x1592E8u;
    // 0x1592e8: 0xc04f1ae  jal         func_13C6B8
    ctx->pc = 0x1592E8u;
    SET_GPR_U32(ctx, 31, 0x1592F0u);
    ctx->pc = 0x1592ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1592E8u;
    // 0x1592ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C6B8u, 0x1592E8u, 0x1592F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1592F0u;
label_1592f0:
    // 0x1592f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1592F0u;
    {
        const bool branch_taken_0x1592f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1592F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1592F0u;
        // 0x1592f4: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1592f0) {
            ctx->pc = 0x159310u;
            goto label_159310;
        }
    }
    ctx->pc = 0x1592F8u;
    // 0x1592f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1592f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1592fc: 0xc04f452  jal         func_13D148
    ctx->pc = 0x1592FCu;
    SET_GPR_U32(ctx, 31, 0x159304u);
    ctx->pc = 0x159300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1592FCu;
    // 0x159300: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D148u, 0x1592FCu, 0x159304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159304u;
label_159304:
    // 0x159304: 0xc04f478  jal         func_13D1E0
    ctx->pc = 0x159304u;
    SET_GPR_U32(ctx, 31, 0x15930Cu);
    ctx->pc = 0x159308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159304u;
    // 0x159308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D1E0u, 0x159304u, 0x15930Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15930Cu;
label_15930c:
    // 0x15930c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x15930cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_159310:
    // 0x159310: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x159310u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x159314: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x159314u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x159318: 0x1643ffea  bne         $s2, $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x159318u;
    {
        const bool branch_taken_0x159318 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x15931Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159318u;
        // 0x15931c: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159318) {
            ctx->pc = 0x1592C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1592c4;
        }
    }
    ctx->pc = 0x159320u;
label_159320:
    // 0x159320: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x159320u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159324: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x159324u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x159328: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x159328u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15932c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x15932cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x159330: 0x3e00008  jr          $ra
    ctx->pc = 0x159330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159330u;
        // 0x159334: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159338u;
}
