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

// Function: sub_001D4928
// Address: 0x1d4928 - 0x1d49c8
void sub_001D4928_0x1d4928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4928_0x1d4928");
#endif

    switch (ctx->pc) {
        case 0x1d4968u: goto label_1d4968;
        case 0x1d497cu: goto label_1d497c;
        default: break;
    }

    ctx->pc = 0x1d4928u;

    // 0x1d4928: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d4928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d492c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1d492cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1d4930: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d4930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d4934: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d4934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d4938: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d4938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d493c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d493cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1d4940: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d4940u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4944: 0x8c438eb4  lw          $v1, -0x714C($v0)
    ctx->pc = 0x1d4944u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F8EB4u));
    // 0x1d4948: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1d4948u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d494c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d494cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d4950: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d4950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d4954: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d4954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d4958: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D4958u;
    {
        const bool branch_taken_0x1d4958 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1D495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4958u;
        // 0x1d495c: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4958) {
            ctx->pc = 0x1D499Cu;
            goto label_1d499c;
        }
    }
    ctx->pc = 0x1D4960u;
    // 0x1d4960: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x1d4960u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x1d4964: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d4964u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4968:
    // 0x1d4968: 0x8e828eb0  lw          $v0, -0x7150($s4)
    ctx->pc = 0x1d4968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294938288)));
    // 0x1d496c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d496cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4970: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x1d4970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1d4974: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x1D4974u;
    SET_GPR_U32(ctx, 31, 0x1D497Cu);
    ctx->pc = 0x1D4978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4974u;
    // 0x1d4978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x1D4974u, 0x1D497Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D497Cu;
label_1d497c:
    // 0x1d497c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d497cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d4980: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D4980u;
    {
        const bool branch_taken_0x1d4980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4980u;
        // 0x1d4984: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4980) {
            ctx->pc = 0x1D49A0u;
            goto label_1d49a0;
        }
    }
    ctx->pc = 0x1D4988u;
    // 0x1d4988: 0x8ea28eb4  lw          $v0, -0x714C($s5)
    ctx->pc = 0x1d4988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294938292)));
    // 0x1d498c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d498cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d4990: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1d4990u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d4994: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1D4994u;
    {
        const bool branch_taken_0x1d4994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4994u;
        // 0x1d4998: 0x26520818  addiu       $s2, $s2, 0x818 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4994) {
            ctx->pc = 0x1D4968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4968;
        }
    }
    ctx->pc = 0x1D499Cu;
label_1d499c:
    // 0x1d499c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d499cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d49a0:
    // 0x1d49a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d49a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d49a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d49a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d49a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d49a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d49ac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d49acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d49b0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d49b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d49b4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d49b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d49b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d49b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d49bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D49BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D49C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D49BCu;
        // 0x1d49c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D49BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D49C4u;
    // 0x1d49c4: 0x0  nop
    ctx->pc = 0x1d49c4u;
    // NOP
    ctx->pc = 0x1d49c8u;
}
