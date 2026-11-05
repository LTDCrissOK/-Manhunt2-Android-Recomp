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

// Function: sub_001E78B8
// Address: 0x1e78b8 - 0x1e7968
void sub_001E78B8_0x1e78b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E78B8_0x1e78b8");
#endif

    switch (ctx->pc) {
        case 0x1e78f4u: goto label_1e78f4;
        case 0x1e7908u: goto label_1e7908;
        case 0x1e7914u: goto label_1e7914;
        case 0x1e7938u: goto label_1e7938;
        default: break;
    }

    ctx->pc = 0x1e78b8u;

    // 0x1e78b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e78b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e78bc: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1e78bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1e78c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e78c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e78c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e78c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e78c8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1e78c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1e78cc: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x1e78ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e78d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e78d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e78d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e78d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e78d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e78d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e78dc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1e78dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1e78e0: 0x2632ffff  addiu       $s2, $s1, -0x1
    ctx->pc = 0x1e78e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1e78e4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1e78e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1e78e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e78e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e78ec: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x1E78ECu;
    SET_GPR_U32(ctx, 31, 0x1E78F4u);
    ctx->pc = 0x1E78F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E78ECu;
    // 0x1e78f0: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x1E78ECu, 0x1E78F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E78F4u;
label_1e78f4:
    // 0x1e78f4: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x1e78f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e78f8: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x1e78f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x1e78fc: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E78FCu;
    {
        const bool branch_taken_0x1e78fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E78FCu;
        // 0x1e7900: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e78fc) {
            ctx->pc = 0x1E7920u;
            goto label_1e7920;
        }
    }
    ctx->pc = 0x1E7904u;
    // 0x1e7904: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x1e7904u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e7908:
    // 0x1e7908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e790c: 0xc07a804  jal         func_1EA010
    ctx->pc = 0x1E790Cu;
    SET_GPR_U32(ctx, 31, 0x1E7914u);
    ctx->pc = 0x1E7910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E790Cu;
    // 0x1e7910: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA010u, 0x1E790Cu, 0x1E7914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7914u;
label_1e7914:
    // 0x1e7914: 0x0  nop
    ctx->pc = 0x1e7914u;
    // NOP
    // 0x1e7918: 0x1655fffb  bne         $s2, $s5, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E7918u;
    {
        const bool branch_taken_0x1e7918 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 21));
        ctx->pc = 0x1E791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7918u;
        // 0x1e791c: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7918) {
            ctx->pc = 0x1E7908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7908;
        }
    }
    ctx->pc = 0x1E7920u;
label_1e7920:
    // 0x1e7920: 0x118040  sll         $s0, $s1, 1
    ctx->pc = 0x1e7920u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e7924: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x1e7924u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
    // 0x1e7928: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x1e7928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1e792c: 0xae710008  sw          $s1, 0x8($s3)
    ctx->pc = 0x1e792cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
    // 0x1e7930: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x1E7930u;
    SET_GPR_U32(ctx, 31, 0x1E7938u);
    ctx->pc = 0x1E7934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7930u;
    // 0x1e7934: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x1E7930u, 0x1E7938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7938u;
label_1e7938:
    // 0x1e7938: 0xae70001c  sw          $s0, 0x1C($s3)
    ctx->pc = 0x1e7938u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 16));
    // 0x1e793c: 0xae620018  sw          $v0, 0x18($s3)
    ctx->pc = 0x1e793cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
    // 0x1e7940: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e7940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7944: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e7944u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e7948: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e7948u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e794c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e794cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e7950: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1e7950u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7954: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1e7954u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e7958: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e7958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e795c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E795Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E795Cu;
        // 0x1e7960: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E795Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7964u;
    // 0x1e7964: 0x0  nop
    ctx->pc = 0x1e7964u;
    // NOP
    ctx->pc = 0x1e7968u;
}
