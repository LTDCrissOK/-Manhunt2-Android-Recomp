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

// Function: sub_002A03C8
// Address: 0x2a03c8 - 0x2a0468
void sub_002A03C8_0x2a03c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A03C8_0x2a03c8");
#endif

    switch (ctx->pc) {
        case 0x2a0400u: goto label_2a0400;
        case 0x2a0410u: goto label_2a0410;
        case 0x2a0424u: goto label_2a0424;
        default: break;
    }

    ctx->pc = 0x2a03c8u;

    // 0x2a03c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a03c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a03cc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2a03ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a03d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2a03d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2a03d4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2a03d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2a03d8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a03d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a03dc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2a03dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2a03e0: 0x26740014  addiu       $s4, $s3, 0x14
    ctx->pc = 0x2a03e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x2a03e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a03e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a03e8: 0x24150014  addiu       $s5, $zero, 0x14
    ctx->pc = 0x2a03e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2a03ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a03ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a03f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a03f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a03f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a03f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a03f8: 0x751018  mult        $v0, $v1, $s5
    ctx->pc = 0x2a03f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a03fc: 0x0  nop
    ctx->pc = 0x2a03fcu;
    // NOP
label_2a0400:
    // 0x2a0400: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a0400u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0404: 0x24720001  addiu       $s2, $v1, 0x1
    ctx->pc = 0x2a0404u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a0408: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x2a0408u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2a040c: 0x0  nop
    ctx->pc = 0x2a040cu;
    // NOP
label_2a0410:
    // 0x2a0410: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2a0410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a0414: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0414u;
    {
        const bool branch_taken_0x2a0414 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0414) {
            ctx->pc = 0x2A0418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0414u;
            // 0x2a0418: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0428u;
            goto label_2a0428;
        }
    }
    ctx->pc = 0x2A041Cu;
    // 0x2a041c: 0xc0a7ca2  jal         func_29F288
    ctx->pc = 0x2A041Cu;
    SET_GPR_U32(ctx, 31, 0x2A0424u);
    ctx->pc = 0x2A0420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A041Cu;
    // 0x2a0420: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F288u, 0x2A041Cu, 0x2A0424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0424u;
label_2a0424:
    // 0x2a0424: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a0424u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2a0428:
    // 0x2a0428: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x2a0428u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2a042c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2A042Cu;
    {
        const bool branch_taken_0x2a042c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A042Cu;
        // 0x2a0430: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a042c) {
            ctx->pc = 0x2A0410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0410;
        }
    }
    ctx->pc = 0x2A0434u;
    // 0x2a0434: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x2a0434u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0438: 0x2c620019  sltiu       $v0, $v1, 0x19
    ctx->pc = 0x2a0438u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x2a043c: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2A043Cu;
    {
        const bool branch_taken_0x2a043c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a043c) {
            ctx->pc = 0x2A0440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A043Cu;
            // 0x2a0440: 0x751018  mult        $v0, $v1, $s5 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0400;
        }
    }
    ctx->pc = 0x2A0444u;
    // 0x2a0444: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a0444u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a0448: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a0448u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a044c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a044cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a0450: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2a0450u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a0454: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2a0454u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a0458: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2a0458u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2a045c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a045cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a0460: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0460u;
        // 0x2a0464: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0468u;
}
