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

// Function: sub_0027C3C0
// Address: 0x27c3c0 - 0x27c460
void sub_0027C3C0_0x27c3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027C3C0_0x27c3c0");
#endif

    switch (ctx->pc) {
        case 0x27c3f8u: goto label_27c3f8;
        case 0x27c418u: goto label_27c418;
        default: break;
    }

    ctx->pc = 0x27c3c0u;

    // 0x27c3c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27c3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27c3c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27c3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27c3c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27c3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27c3cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27c3ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c3d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27c3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27c3d4: 0x8e020700  lw          $v0, 0x700($s0)
    ctx->pc = 0x27c3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1792)));
    // 0x27c3d8: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x27C3D8u;
    {
        const bool branch_taken_0x27c3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c3d8) {
            ctx->pc = 0x27C3DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C3D8u;
            // 0x27c3dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C44Cu;
            goto label_27c44c;
        }
    }
    ctx->pc = 0x27C3E0u;
    // 0x27c3e0: 0x8e020704  lw          $v0, 0x704($s0)
    ctx->pc = 0x27c3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1796)));
    // 0x27c3e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x27c3e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c3e8: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x27C3E8u;
    {
        const bool branch_taken_0x27c3e8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27C3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C3E8u;
        // 0x27c3ec: 0xae00073c  sw          $zero, 0x73C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1852), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c3e8) {
            ctx->pc = 0x27C444u;
            goto label_27c444;
        }
    }
    ctx->pc = 0x27C3F0u;
    // 0x27c3f0: 0x8e02073c  lw          $v0, 0x73C($s0)
    ctx->pc = 0x27c3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1852)));
    // 0x27c3f4: 0x0  nop
    ctx->pc = 0x27c3f4u;
    // NOP
label_27c3f8:
    // 0x27c3f8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27C3F8u;
    {
        const bool branch_taken_0x27c3f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C3F8u;
        // 0x27c3fc: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c3f8) {
            ctx->pc = 0x27C420u;
            goto label_27c420;
        }
    }
    ctx->pc = 0x27C400u;
    // 0x27c400: 0x8e030728  lw          $v1, 0x728($s0)
    ctx->pc = 0x27c400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1832)));
    // 0x27c404: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x27c404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x27c408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27c408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c40c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27c40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27c410: 0xc09f1a2  jal         func_27C688
    ctx->pc = 0x27C410u;
    SET_GPR_U32(ctx, 31, 0x27C418u);
    ctx->pc = 0x27C414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C410u;
    // 0x27c414: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C688u, 0x27C410u, 0x27C418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C418u;
label_27c418:
    // 0x27c418: 0x8e02073c  lw          $v0, 0x73C($s0)
    ctx->pc = 0x27c418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1852)));
    // 0x27c41c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27c41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27c420:
    // 0x27c420: 0x28430004  slti        $v1, $v0, 0x4
    ctx->pc = 0x27c420u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x27c424: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x27C424u;
    {
        const bool branch_taken_0x27c424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C424u;
        // 0x27c428: 0xae02073c  sw          $v0, 0x73C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1852), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c424) {
            ctx->pc = 0x27C430u;
            goto label_27c430;
        }
    }
    ctx->pc = 0x27C42Cu;
    // 0x27c42c: 0xae00073c  sw          $zero, 0x73C($s0)
    ctx->pc = 0x27c42cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1852), GPR_U32(ctx, 0));
label_27c430:
    // 0x27c430: 0x8e020704  lw          $v0, 0x704($s0)
    ctx->pc = 0x27c430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1796)));
    // 0x27c434: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x27c434u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x27c438: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x27c438u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27c43c: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x27C43Cu;
    {
        const bool branch_taken_0x27c43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c43c) {
            ctx->pc = 0x27C440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C43Cu;
            // 0x27c440: 0x8e02073c  lw          $v0, 0x73C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1852)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27c3f8;
        }
    }
    ctx->pc = 0x27C444u;
label_27c444:
    // 0x27c444: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27c444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c448: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27c448u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27c44c:
    // 0x27c44c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27c44cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27c450: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27c450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27c454: 0x3e00008  jr          $ra
    ctx->pc = 0x27C454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C454u;
        // 0x27c458: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27C45Cu;
    // 0x27c45c: 0x0  nop
    ctx->pc = 0x27c45cu;
    // NOP
    ctx->pc = 0x27c460u;
}
