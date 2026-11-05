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

// Function: sub_002D4478
// Address: 0x2d4478 - 0x2d4538
void sub_002D4478_0x2d4478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4478_0x2d4478");
#endif

    switch (ctx->pc) {
        case 0x2d44c8u: goto label_2d44c8;
        case 0x2d44ecu: goto label_2d44ec;
        default: break;
    }

    ctx->pc = 0x2d4478u;

    // 0x2d4478: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d4478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d447c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2d447cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2d4480: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d4480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d4484: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d4484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d4488: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d4488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d448c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d448cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d4490: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d4490u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4494: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d4494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d4498: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d4498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2d449c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d449cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2d44a0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d44a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d44a4: 0x8c43bd20  lw          $v1, -0x42E0($v0)
    ctx->pc = 0x2d44a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD20u));
    // 0x2d44a8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d44a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d44ac: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2d44acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2d44b0: 0x8c750030  lw          $s5, 0x30($v1)
    ctx->pc = 0x2d44b0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2d44b4: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2d44b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2d44b8: 0x18a00015  blez        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D44B8u;
    {
        const bool branch_taken_0x2d44b8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2D44BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D44B8u;
        // 0x2d44bc: 0x2029821  addu        $s3, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d44b8) {
            ctx->pc = 0x2D4510u;
            goto label_2d4510;
        }
    }
    ctx->pc = 0x2D44C0u;
    // 0x2d44c0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d44c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d44c4: 0x26340040  addiu       $s4, $s1, 0x40
    ctx->pc = 0x2d44c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_2d44c8:
    // 0x2d44c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d44c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d44cc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2d44ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d44d0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2d44d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2d44d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d44d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d44d8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d44d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d44dc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2d44dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d44e0: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x2d44e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2d44e4: 0xc0b5cd4  jal         func_2D7350
    ctx->pc = 0x2D44E4u;
    SET_GPR_U32(ctx, 31, 0x2D44ECu);
    ctx->pc = 0x2D44E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D44E4u;
    // 0x2d44e8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7350u, 0x2D44E4u, 0x2D44ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D44ECu;
label_2d44ec:
    // 0x2d44ec: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2d44ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2d44f0: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x2d44f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x2d44f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d44f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d44f8: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x2d44f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2d44fc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2d44fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2d4500: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x2d4500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x2d4504: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d4504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d4508: 0x1640ffef  bnez        $s2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2D4508u;
    {
        const bool branch_taken_0x2d4508 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D450Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4508u;
        // 0x2d450c: 0xae22003c  sw          $v0, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4508) {
            ctx->pc = 0x2D44C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d44c8;
        }
    }
    ctx->pc = 0x2D4510u;
label_2d4510:
    // 0x2d4510: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d4510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4514: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d4514u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d4518: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d4518u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d451c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d451cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4520: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d4520u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d4524: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d4524u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4528: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d4528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d452c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D452Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D452Cu;
        // 0x2d4530: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D452Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4534u;
    // 0x2d4534: 0x0  nop
    ctx->pc = 0x2d4534u;
    // NOP
    ctx->pc = 0x2d4538u;
}
