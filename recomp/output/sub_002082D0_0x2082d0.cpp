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

// Function: sub_002082D0
// Address: 0x2082d0 - 0x208370
void sub_002082D0_0x2082d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002082D0_0x2082d0");
#endif

    switch (ctx->pc) {
        case 0x2082f0u: goto label_2082f0;
        case 0x208310u: goto label_208310;
        default: break;
    }

    ctx->pc = 0x2082d0u;

    // 0x2082d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2082d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2082d4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2082d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2082d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2082d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2082dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2082dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2082e0: 0x2490338c  addiu       $s0, $a0, 0x338C
    ctx->pc = 0x2082e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 13196));
    // 0x2082e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2082e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2082e8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2082e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2082ec: 0x0  nop
    ctx->pc = 0x2082ecu;
    // NOP
label_2082f0:
    // 0x2082f0: 0x8e02fff4  lw          $v0, -0xC($s0)
    ctx->pc = 0x2082f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967284)));
    // 0x2082f4: 0x14450014  bne         $v0, $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2082F4u;
    {
        const bool branch_taken_0x2082f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2082F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2082F4u;
        // 0x2082f8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2082f4) {
            ctx->pc = 0x208348u;
            goto label_208348;
        }
    }
    ctx->pc = 0x2082FCu;
    // 0x2082fc: 0x9202fffc  lbu         $v0, -0x4($s0)
    ctx->pc = 0x2082fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294967292)));
    // 0x208300: 0x54470012  bnel        $v0, $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x208300u;
    {
        const bool branch_taken_0x208300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x208300) {
            ctx->pc = 0x208304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208300u;
            // 0x208304: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20834Cu;
            goto label_20834c;
        }
    }
    ctx->pc = 0x208308u;
    // 0x208308: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x208308u;
    SET_GPR_U32(ctx, 31, 0x208310u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x208308u, 0x208310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208310u;
label_208310:
    // 0x208310: 0x8e03fff8  lw          $v1, -0x8($s0)
    ctx->pc = 0x208310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
    // 0x208314: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x208314u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x208318: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x208318u;
    {
        const bool branch_taken_0x208318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x208318) {
            ctx->pc = 0x20831Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208318u;
            // 0x20831c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x208320u;
            goto label_208320;
        }
    }
    ctx->pc = 0x208320u;
label_208320:
    // 0x208320: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x208320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x208324: 0x2010  mfhi        $a0
    ctx->pc = 0x208324u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x208328: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x208328u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x20832c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x20832cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x208330: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x208330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x208334: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x208334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x208338: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x208338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20833c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x20833cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x208340: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x208340u;
    {
        const bool branch_taken_0x208340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208340u;
        // 0x208344: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208340) {
            ctx->pc = 0x208358u;
            goto label_208358;
        }
    }
    ctx->pc = 0x208348u;
label_208348:
    // 0x208348: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x208348u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_20834c:
    // 0x20834c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x20834Cu;
    {
        const bool branch_taken_0x20834c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20834Cu;
        // 0x208350: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20834c) {
            ctx->pc = 0x2082F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2082f0;
        }
    }
    ctx->pc = 0x208354u;
    // 0x208354: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x208354u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208358:
    // 0x208358: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x208358u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20835c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20835cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x208360: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x208360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208364: 0x3e00008  jr          $ra
    ctx->pc = 0x208364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208364u;
        // 0x208368: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20836Cu;
    // 0x20836c: 0x0  nop
    ctx->pc = 0x20836cu;
    // NOP
    ctx->pc = 0x208370u;
}
