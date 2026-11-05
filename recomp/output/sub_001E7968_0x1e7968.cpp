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

// Function: sub_001E7968
// Address: 0x1e7968 - 0x1e7a00
void sub_001E7968_0x1e7968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7968_0x1e7968");
#endif

    switch (ctx->pc) {
        case 0x1e79a0u: goto label_1e79a0;
        case 0x1e79b8u: goto label_1e79b8;
        case 0x1e79c4u: goto label_1e79c4;
        default: break;
    }

    ctx->pc = 0x1e7968u;

    // 0x1e7968: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e7968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e796c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e796cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e7970: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1e7970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1e7974: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e7974u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7978: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1e7978u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e797c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e797cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e7980: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x1e7980u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1e7984: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e7984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e7988: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1e7988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1e798c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1e798cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1e7990: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1e7990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1e7994: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e7994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e7998: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x1E7998u;
    SET_GPR_U32(ctx, 31, 0x1E79A0u);
    ctx->pc = 0x1E799Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7998u;
    // 0x1e799c: 0x2651ffff  addiu       $s1, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x1E7998u, 0x1E79A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E79A0u;
label_1e79a0:
    // 0x1e79a0: 0x24530010  addiu       $s3, $v0, 0x10
    ctx->pc = 0x1e79a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e79a4: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1e79a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1e79a8: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E79A8u;
    {
        const bool branch_taken_0x1e79a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E79ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E79A8u;
        // 0x1e79ac: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e79a8) {
            ctx->pc = 0x1E79D0u;
            goto label_1e79d0;
        }
    }
    ctx->pc = 0x1E79B0u;
    // 0x1e79b0: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x1e79b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e79b4: 0x0  nop
    ctx->pc = 0x1e79b4u;
    // NOP
label_1e79b8:
    // 0x1e79b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e79b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e79bc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E79BCu;
    SET_GPR_U32(ctx, 31, 0x1E79C4u);
    ctx->pc = 0x1E79C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E79BCu;
    // 0x1e79c0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E79BCu, 0x1E79C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E79C4u;
label_1e79c4:
    // 0x1e79c4: 0x0  nop
    ctx->pc = 0x1e79c4u;
    // NOP
    // 0x1e79c8: 0x1634fffb  bne         $s1, $s4, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E79C8u;
    {
        const bool branch_taken_0x1e79c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        ctx->pc = 0x1E79CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E79C8u;
        // 0x1e79cc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e79c8) {
            ctx->pc = 0x1E79B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e79b8;
        }
    }
    ctx->pc = 0x1E79D0u;
label_1e79d0:
    // 0x1e79d0: 0xaeb20014  sw          $s2, 0x14($s5)
    ctx->pc = 0x1e79d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 18));
    // 0x1e79d4: 0xaeb30010  sw          $s3, 0x10($s5)
    ctx->pc = 0x1e79d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 19));
    // 0x1e79d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e79d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e79dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e79dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e79e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e79e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e79e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e79e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e79e8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1e79e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e79ec: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1e79ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e79f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e79f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e79f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E79F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E79F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E79F4u;
        // 0x1e79f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E79F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E79FCu;
    // 0x1e79fc: 0x0  nop
    ctx->pc = 0x1e79fcu;
    // NOP
    ctx->pc = 0x1e7a00u;
}
