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

// Function: sub_0030D940
// Address: 0x30d940 - 0x30d9c8
void sub_0030D940_0x30d940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D940_0x30d940");
#endif

    switch (ctx->pc) {
        case 0x30d978u: goto label_30d978;
        case 0x30d984u: goto label_30d984;
        default: break;
    }

    ctx->pc = 0x30d940u;

    // 0x30d940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30d940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30d944: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x30d944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x30d948: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30d948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30d94c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30d94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30d950: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30d950u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d954: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x30d954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x30d958: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x30d958u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x30d95c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x30d95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x30d960: 0x2452bbb0  addiu       $s2, $v0, -0x4450
    ctx->pc = 0x30d960u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949808));
    // 0x30d964: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x30d964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x30d968: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x30d968u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d96c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x30d96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x30d970: 0x3c140001  lui         $s4, 0x1
    ctx->pc = 0x30d970u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)1 << 16));
    // 0x30d974: 0x0  nop
    ctx->pc = 0x30d974u;
    // NOP
label_30d978:
    // 0x30d978: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x30d978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x30d97c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x30D97Cu;
    SET_GPR_U32(ctx, 31, 0x30D984u);
    ctx->pc = 0x30D980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D97Cu;
    // 0x30d980: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x30D97Cu, 0x30D984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D984u;
label_30d984:
    // 0x30d984: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30D984u;
    {
        const bool branch_taken_0x30d984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D984u;
        // 0x30d988: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d984) {
            ctx->pc = 0x30D994u;
            goto label_30d994;
        }
    }
    ctx->pc = 0x30D98Cu;
    // 0x30d98c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30D98Cu;
    {
        const bool branch_taken_0x30d98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D98Cu;
        // 0x30d990: 0x111403  sra         $v0, $s1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d98c) {
            ctx->pc = 0x30D9A8u;
            goto label_30d9a8;
        }
    }
    ctx->pc = 0x30D994u;
label_30d994:
    // 0x30d994: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x30d994u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x30d998: 0x2a020046  slti        $v0, $s0, 0x46
    ctx->pc = 0x30d998u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)70) ? 1 : 0);
    // 0x30d99c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x30D99Cu;
    {
        const bool branch_taken_0x30d99c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D99Cu;
        // 0x30d9a0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d99c) {
            ctx->pc = 0x30D978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d978;
        }
    }
    ctx->pc = 0x30D9A4u;
    // 0x30d9a4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x30d9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_30d9a8:
    // 0x30d9a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30d9a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30d9ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30d9acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30d9b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x30d9b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d9b4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x30d9b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d9b8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x30d9b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30d9bc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x30d9bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d9c0: 0x3e00008  jr          $ra
    ctx->pc = 0x30D9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D9C0u;
        // 0x30d9c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D9C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D9C8u;
}
