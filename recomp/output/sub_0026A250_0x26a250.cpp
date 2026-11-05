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

// Function: sub_0026A250
// Address: 0x26a250 - 0x26a2b8
void sub_0026A250_0x26a250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026A250_0x26a250");
#endif

    switch (ctx->pc) {
        case 0x26a250u: goto label_26a250;
        case 0x26a254u: goto label_26a254;
        case 0x26a258u: goto label_26a258;
        case 0x26a25cu: goto label_26a25c;
        case 0x26a260u: goto label_26a260;
        case 0x26a264u: goto label_26a264;
        case 0x26a268u: goto label_26a268;
        case 0x26a26cu: goto label_26a26c;
        case 0x26a270u: goto label_26a270;
        case 0x26a274u: goto label_26a274;
        case 0x26a278u: goto label_26a278;
        case 0x26a27cu: goto label_26a27c;
        case 0x26a280u: goto label_26a280;
        case 0x26a284u: goto label_26a284;
        case 0x26a288u: goto label_26a288;
        case 0x26a28cu: goto label_26a28c;
        case 0x26a290u: goto label_26a290;
        case 0x26a294u: goto label_26a294;
        case 0x26a298u: goto label_26a298;
        case 0x26a29cu: goto label_26a29c;
        case 0x26a2a0u: goto label_26a2a0;
        case 0x26a2a4u: goto label_26a2a4;
        case 0x26a2a8u: goto label_26a2a8;
        case 0x26a2acu: goto label_26a2ac;
        case 0x26a2b0u: goto label_26a2b0;
        case 0x26a2b4u: goto label_26a2b4;
        default: break;
    }

    ctx->pc = 0x26a250u;

label_26a250:
    // 0x26a250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26a250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_26a254:
    // 0x26a254: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x26a254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_26a258:
    // 0x26a258: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26a258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_26a25c:
    // 0x26a25c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26a25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_26a260:
    // 0x26a260: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26a260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_26a264:
    // 0x26a264: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x26a264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
label_26a268:
    // 0x26a268: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26a268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_26a26c:
    // 0x26a26c: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
label_26a270:
    if (ctx->pc == 0x26A270u) {
        ctx->pc = 0x26A270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A26Cu;
        // 0x26a270: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A274u;
        goto label_26a274;
    }
    ctx->pc = 0x26A26Cu;
    {
        const bool branch_taken_0x26a26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x26A270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A26Cu;
        // 0x26a270: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a26c) {
            ctx->pc = 0x26A2A4u;
            goto label_26a2a4;
        }
    }
    ctx->pc = 0x26A274u;
label_26a274:
    // 0x26a274: 0x8c820220  lw          $v0, 0x220($a0)
    ctx->pc = 0x26a274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 544)));
label_26a278:
    // 0x26a278: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26a278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26a27c:
    // 0x26a27c: 0x8c460024  lw          $a2, 0x24($v0)
    ctx->pc = 0x26a27cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_26a280:
    // 0x26a280: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26a280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26a284:
    // 0x26a284: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x26a284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_26a288:
    // 0x26a288: 0x60f809  jalr        $v1
label_26a28c:
    if (ctx->pc == 0x26A28Cu) {
        ctx->pc = 0x26A28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A288u;
        // 0x26a28c: 0x8c500034  lw          $s0, 0x34($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A290u;
        goto label_26a290;
    }
    ctx->pc = 0x26A288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x26A290u);
        ctx->pc = 0x26A28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A288u;
        // 0x26a28c: 0x8c500034  lw          $s0, 0x34($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A288u, 0x26A290u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26A290u;
label_26a290:
    // 0x26a290: 0x8e060218  lw          $a2, 0x218($s0)
    ctx->pc = 0x26a290u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_26a294:
    // 0x26a294: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26a298:
    // 0x26a298: 0x8cc20060  lw          $v0, 0x60($a2)
    ctx->pc = 0x26a298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
label_26a29c:
    // 0x26a29c: 0x40f809  jalr        $v0
label_26a2a0:
    if (ctx->pc == 0x26A2A0u) {
        ctx->pc = 0x26A2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A29Cu;
        // 0x26a2a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A2A4u;
        goto label_26a2a4;
    }
    ctx->pc = 0x26A29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26A2A4u);
        ctx->pc = 0x26A2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A29Cu;
        // 0x26a2a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A29Cu, 0x26A2A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26A2A4u;
label_26a2a4:
    // 0x26a2a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26a2a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26a2a8:
    // 0x26a2a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26a2a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_26a2ac:
    // 0x26a2ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26a2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26a2b0:
    // 0x26a2b0: 0x3e00008  jr          $ra
label_26a2b4:
    if (ctx->pc == 0x26A2B4u) {
        ctx->pc = 0x26A2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A2B0u;
        // 0x26a2b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A2B8u;
        goto label_fallthrough_0x26a2b0;
    }
    ctx->pc = 0x26A2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A2B0u;
        // 0x26a2b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A2B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x26a2b0:
    ctx->pc = 0x26A2B8u;
}
