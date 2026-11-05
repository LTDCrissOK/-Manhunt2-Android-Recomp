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

// Function: sub_001E5880
// Address: 0x1e5880 - 0x1e5920
void sub_001E5880_0x1e5880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5880_0x1e5880");
#endif

    switch (ctx->pc) {
        case 0x1e58bcu: goto label_1e58bc;
        case 0x1e58d0u: goto label_1e58d0;
        case 0x1e58d8u: goto label_1e58d8;
        default: break;
    }

    ctx->pc = 0x1e5880u;

    // 0x1e5880: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e5880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e5884: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1e5884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1e5888: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e5888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e588c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e588cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5890: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1e5890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1e5894: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x1e5894u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e5898: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1e5898u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e589c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e589cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e58a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e58a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e58a4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1e58a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1e58a8: 0x2651ffff  addiu       $s1, $s2, -0x1
    ctx->pc = 0x1e58a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1e58ac: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1e58acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1e58b0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e58b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e58b4: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x1E58B4u;
    SET_GPR_U32(ctx, 31, 0x1E58BCu);
    ctx->pc = 0x1E58B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E58B4u;
    // 0x1e58b8: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x1E58B4u, 0x1E58BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E58BCu;
label_1e58bc:
    // 0x1e58bc: 0x24530010  addiu       $s3, $v0, 0x10
    ctx->pc = 0x1e58bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e58c0: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1e58c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1e58c4: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x1E58C4u;
    {
        const bool branch_taken_0x1e58c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E58C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E58C4u;
        // 0x1e58c8: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e58c4) {
            ctx->pc = 0x1E58F4u;
            goto label_1e58f4;
        }
    }
    ctx->pc = 0x1E58CCu;
    // 0x1e58cc: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x1e58ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e58d0:
    // 0x1e58d0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E58D0u;
    SET_GPR_U32(ctx, 31, 0x1E58D8u);
    ctx->pc = 0x1E58D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E58D0u;
    // 0x1e58d4: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E58D0u, 0x1E58D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E58D8u;
label_1e58d8:
    // 0x1e58d8: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1e58d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1e58dc: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1e58dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1e58e0: 0x7e000010  sq          $zero, 0x10($s0)
    ctx->pc = 0x1e58e0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 0));
    // 0x1e58e4: 0x7e000040  sq          $zero, 0x40($s0)
    ctx->pc = 0x1e58e4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 0));
    // 0x1e58e8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1e58e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1e58ec: 0x1634fff8  bne         $s1, $s4, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1E58ECu;
    {
        const bool branch_taken_0x1e58ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        ctx->pc = 0x1E58F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E58ECu;
        // 0x1e58f0: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e58ec) {
            ctx->pc = 0x1E58D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e58d0;
        }
    }
    ctx->pc = 0x1E58F4u;
label_1e58f4:
    // 0x1e58f4: 0xaeb20008  sw          $s2, 0x8($s5)
    ctx->pc = 0x1e58f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 18));
    // 0x1e58f8: 0xaeb30004  sw          $s3, 0x4($s5)
    ctx->pc = 0x1e58f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 19));
    // 0x1e58fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e58fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5900: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e5900u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e5904: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e5904u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5908: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e5908u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e590c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1e590cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5910: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1e5910u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e5914: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e5914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e5918: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E591Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5918u;
        // 0x1e591c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5920u;
}
