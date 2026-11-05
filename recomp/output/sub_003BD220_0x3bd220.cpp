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

// Function: sub_003BD220
// Address: 0x3bd220 - 0x3bd2e0
void sub_003BD220_0x3bd220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BD220_0x3bd220");
#endif

    switch (ctx->pc) {
        case 0x3bd258u: goto label_3bd258;
        case 0x3bd27cu: goto label_3bd27c;
        case 0x3bd294u: goto label_3bd294;
        case 0x3bd2acu: goto label_3bd2ac;
        default: break;
    }

    ctx->pc = 0x3bd220u;

    // 0x3bd220: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3bd220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3bd224: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3bd224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3bd228: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3bd228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3bd22c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3bd22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3bd230: 0x2452c340  addiu       $s2, $v0, -0x3CC0
    ctx->pc = 0x3bd230u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951744));
    // 0x3bd234: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3bd234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3bd238: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3bd238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd23c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3bd23cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd240: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3bd240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3bd244: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3bd244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3bd248: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3bd248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd24c: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x3bd24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x3bd250: 0xc0f3246  jal         func_3CC918
    ctx->pc = 0x3BD250u;
    SET_GPR_U32(ctx, 31, 0x3BD258u);
    ctx->pc = 0x3BD254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD250u;
    // 0x3bd254: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC918u, 0x3BD250u, 0x3BD258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD258u;
label_3bd258:
    // 0x3bd258: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bd258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bd25c: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BD25Cu;
    {
        const bool branch_taken_0x3bd25c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3BD260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD25Cu;
        // 0x3bd260: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd25c) {
            ctx->pc = 0x3BD274u;
            goto label_3bd274;
        }
    }
    ctx->pc = 0x3BD264u;
    // 0x3bd264: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3BD264u;
    {
        const bool branch_taken_0x3bd264 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3BD268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD264u;
        // 0x3bd268: 0x3c100066  lui         $s0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd264) {
            ctx->pc = 0x3BD284u;
            goto label_3bd284;
        }
    }
    ctx->pc = 0x3BD26Cu;
    // 0x3bd26c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3BD26Cu;
    {
        const bool branch_taken_0x3bd26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD26Cu;
        // 0x3bd270: 0xae330004  sw          $s3, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd26c) {
            ctx->pc = 0x3BD2C0u;
            goto label_3bd2c0;
        }
    }
    ctx->pc = 0x3BD274u;
label_3bd274:
    // 0x3bd274: 0xc0ef43c  jal         func_3BD0F0
    ctx->pc = 0x3BD274u;
    SET_GPR_U32(ctx, 31, 0x3BD27Cu);
    ctx->pc = 0x3BD278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD274u;
    // 0x3bd278: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BD0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD0F0u, 0x3BD274u, 0x3BD27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD27Cu;
label_3bd27c:
    // 0x3bd27c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3BD27Cu;
    {
        const bool branch_taken_0x3bd27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD27Cu;
        // 0x3bd280: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd27c) {
            ctx->pc = 0x3BD2BCu;
            goto label_3bd2bc;
        }
    }
    ctx->pc = 0x3BD284u;
label_3bd284:
    // 0x3bd284: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x3bd284u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3bd288: 0x8e04e340  lw          $a0, -0x1CC0($s0)
    ctx->pc = 0x3bd288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294959936)));
    // 0x3bd28c: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3BD28Cu;
    SET_GPR_U32(ctx, 31, 0x3BD294u);
    ctx->pc = 0x3BD290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD28Cu;
    // 0x3bd290: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3BD28Cu, 0x3BD294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD294u;
label_3bd294:
    // 0x3bd294: 0x8e03e340  lw          $v1, -0x1CC0($s0)
    ctx->pc = 0x3bd294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294959936)));
    // 0x3bd298: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x3bd298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x3bd29c: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x3bd29cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3bd2a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3bd2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd2a4: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3BD2A4u;
    SET_GPR_U32(ctx, 31, 0x3BD2ACu);
    ctx->pc = 0x3BD2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD2A4u;
    // 0x3bd2a8: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3BD2A4u, 0x3BD2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD2ACu;
label_3bd2ac:
    // 0x3bd2ac: 0x8e03e340  lw          $v1, -0x1CC0($s0)
    ctx->pc = 0x3bd2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294959936)));
    // 0x3bd2b0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3bd2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3bd2b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3bd2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3bd2b8: 0xae03e340  sw          $v1, -0x1CC0($s0)
    ctx->pc = 0x3bd2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294959936), GPR_U32(ctx, 3));
label_3bd2bc:
    // 0x3bd2bc: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x3bd2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
label_3bd2c0:
    // 0x3bd2c0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3bd2c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd2c4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3bd2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3bd2c8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3bd2c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3bd2cc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3bd2ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bd2d0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3bd2d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bd2d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3bd2d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bd2d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3BD2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BD2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD2D8u;
        // 0x3bd2dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BD2D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BD2E0u;
}
