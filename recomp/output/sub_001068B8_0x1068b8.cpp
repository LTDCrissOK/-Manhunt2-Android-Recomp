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

// Function: sub_001068B8
// Address: 0x1068b8 - 0x106948
void sub_001068B8_0x1068b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001068B8_0x1068b8");
#endif

    switch (ctx->pc) {
        case 0x1068f4u: goto label_1068f4;
        case 0x106908u: goto label_106908;
        case 0x106914u: goto label_106914;
        default: break;
    }

    ctx->pc = 0x1068b8u;

    // 0x1068b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1068b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1068bc: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1068bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1068c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1068c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1068c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1068c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1068c8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1068c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1068cc: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x1068ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1068d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1068d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1068d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1068d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1068d8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1068d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1068dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1068dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1068e0: 0x2612ffff  addiu       $s2, $s0, -0x1
    ctx->pc = 0x1068e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1068e4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1068e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1068e8: 0xa2900022  sb          $s0, 0x22($s4)
    ctx->pc = 0x1068e8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 34), (uint8_t)GPR_U32(ctx, 16));
    // 0x1068ec: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x1068ECu;
    SET_GPR_U32(ctx, 31, 0x1068F4u);
    ctx->pc = 0x1068F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1068ECu;
    // 0x1068f0: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x1068ECu, 0x1068F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1068F4u;
label_1068f4:
    // 0x1068f4: 0x24530010  addiu       $s3, $v0, 0x10
    ctx->pc = 0x1068f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1068f8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1068f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1068fc: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1068FCu;
    {
        const bool branch_taken_0x1068fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x106900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1068FCu;
        // 0x106900: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1068fc) {
            ctx->pc = 0x106920u;
            goto label_106920;
        }
    }
    ctx->pc = 0x106904u;
    // 0x106904: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x106904u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_106908:
    // 0x106908: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x106908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10690c: 0xc041112  jal         func_104448
    ctx->pc = 0x10690Cu;
    SET_GPR_U32(ctx, 31, 0x106914u);
    ctx->pc = 0x106910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10690Cu;
    // 0x106910: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104448u, 0x10690Cu, 0x106914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106914u;
label_106914:
    // 0x106914: 0x0  nop
    ctx->pc = 0x106914u;
    // NOP
    // 0x106918: 0x1650fffb  bne         $s2, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x106918u;
    {
        const bool branch_taken_0x106918 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x10691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106918u;
        // 0x10691c: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106918) {
            ctx->pc = 0x106908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106908;
        }
    }
    ctx->pc = 0x106920u;
label_106920:
    // 0x106920: 0xae930024  sw          $s3, 0x24($s4)
    ctx->pc = 0x106920u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 19));
    // 0x106924: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x106924u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106928: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x106928u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10692c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10692cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106930: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x106930u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x106934: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x106934u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106938: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x106938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10693c: 0x3e00008  jr          $ra
    ctx->pc = 0x10693Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10693Cu;
        // 0x106940: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10693Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106944u;
    // 0x106944: 0x0  nop
    ctx->pc = 0x106944u;
    // NOP
    ctx->pc = 0x106948u;
}
