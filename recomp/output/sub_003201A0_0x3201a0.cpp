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

// Function: sub_003201A0
// Address: 0x3201a0 - 0x320238
void sub_003201A0_0x3201a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003201A0_0x3201a0");
#endif

    switch (ctx->pc) {
        case 0x3201e8u: goto label_3201e8;
        case 0x3201f8u: goto label_3201f8;
        default: break;
    }

    ctx->pc = 0x3201a0u;

    // 0x3201a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3201a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3201a4: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x3201a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x3201a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3201a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3201ac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3201acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3201b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3201b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3201b4: 0x24522840  addiu       $s2, $v0, 0x2840
    ctx->pc = 0x3201b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
    // 0x3201b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3201b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3201bc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3201bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3201c0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3201c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x3201c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3201c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3201c8: 0x8e51000c  lw          $s1, 0xC($s2)
    ctx->pc = 0x3201c8u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5B284Cu));
    // 0x3201cc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3201ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x3201d0: 0x12230010  beq         $s1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3201D0u;
    {
        const bool branch_taken_0x3201d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x3201D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3201D0u;
        // 0x3201d4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3201d0) {
            ctx->pc = 0x320214u;
            goto label_320214;
        }
    }
    ctx->pc = 0x3201D8u;
    // 0x3201d8: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x3201d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x3201dc: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x3201dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3201e0: 0x2228018  mult        $s0, $s1, $v0
    ctx->pc = 0x3201e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x3201e4: 0x0  nop
    ctx->pc = 0x3201e4u;
    // NOP
label_3201e8:
    // 0x3201e8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3201e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3201ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3201ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3201f0: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x3201F0u;
    SET_GPR_U32(ctx, 31, 0x3201F8u);
    ctx->pc = 0x3201F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3201F0u;
    // 0x3201f4: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x3201F0u, 0x3201F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3201F8u;
label_3201f8:
    // 0x3201f8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3201F8u;
    {
        const bool branch_taken_0x3201f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3201FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3201F8u;
        // 0x3201fc: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3201f8) {
            ctx->pc = 0x32020Cu;
            goto label_32020c;
        }
    }
    ctx->pc = 0x320200u;
    // 0x320200: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x320200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x320204: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x320204u;
    {
        const bool branch_taken_0x320204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320204u;
        // 0x320208: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320204) {
            ctx->pc = 0x320218u;
            goto label_320218;
        }
    }
    ctx->pc = 0x32020Cu;
label_32020c:
    // 0x32020c: 0x1634fff6  bne         $s1, $s4, . + 4 + (-0xA << 2)
    ctx->pc = 0x32020Cu;
    {
        const bool branch_taken_0x32020c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        ctx->pc = 0x320210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32020Cu;
        // 0x320210: 0x2610ffd8  addiu       $s0, $s0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32020c) {
            ctx->pc = 0x3201E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3201e8;
        }
    }
    ctx->pc = 0x320214u;
label_320214:
    // 0x320214: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x320214u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_320218:
    // 0x320218: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x320218u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32021c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32021cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x320220: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x320220u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x320224: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x320224u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x320228: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x320228u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32022c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x32022cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x320230: 0x3e00008  jr          $ra
    ctx->pc = 0x320230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320230u;
        // 0x320234: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320238u;
}
