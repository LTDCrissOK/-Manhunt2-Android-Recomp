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

// Function: sub_00169220
// Address: 0x169220 - 0x169300
void sub_00169220_0x169220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169220_0x169220");
#endif

    switch (ctx->pc) {
        case 0x169290u: goto label_169290;
        case 0x169298u: goto label_169298;
        default: break;
    }

    ctx->pc = 0x169220u;

    // 0x169220: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x169220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x169224: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x169224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x169228: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x169228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16922c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x16922cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169230: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x169230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x169234: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x169234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x169238: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x169238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16923c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16923cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x169240: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x169240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x169244: 0x96b30320  lhu         $s3, 0x320($s5)
    ctx->pc = 0x169244u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 800)));
    // 0x169248: 0x2e620002  sltiu       $v0, $s3, 0x2
    ctx->pc = 0x169248u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x16924c: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x16924Cu;
    {
        const bool branch_taken_0x16924c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x169250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16924Cu;
        // 0x169250: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16924c) {
            ctx->pc = 0x1692E0u;
            goto label_1692e0;
        }
    }
    ctx->pc = 0x169254u;
    // 0x169254: 0x8ea20344  lw          $v0, 0x344($s5)
    ctx->pc = 0x169254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 836)));
    // 0x169258: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x169258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x16925c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16925cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169260: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x169260u;
    {
        const bool branch_taken_0x169260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x169260) {
            ctx->pc = 0x169264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169260u;
            // 0x169264: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x169268u;
            goto label_169268;
        }
    }
    ctx->pc = 0x169268u;
label_169268:
    // 0x169268: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x169268u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16926c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x16926cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x169270: 0x1012  mflo        $v0
    ctx->pc = 0x169270u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x169274: 0x42200b  movn        $a0, $v0, $v0
    ctx->pc = 0x169274u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x169278: 0x2648823  subu        $s1, $s3, $a0
    ctx->pc = 0x169278u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x16927c: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x16927Cu;
    {
        const bool branch_taken_0x16927c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x169280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16927Cu;
        // 0x169280: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16927c) {
            ctx->pc = 0x1692DCu;
            goto label_1692dc;
        }
    }
    ctx->pc = 0x169284u;
    // 0x169284: 0x12600015  beqz        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x169284u;
    {
        const bool branch_taken_0x169284 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x169288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169284u;
        // 0x169288: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169284) {
            ctx->pc = 0x1692DCu;
            goto label_1692dc;
        }
    }
    ctx->pc = 0x16928Cu;
    // 0x16928c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x16928cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169290:
    // 0x169290: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x169290u;
    SET_GPR_U32(ctx, 31, 0x169298u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x169290u, 0x169298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169298u;
label_169298:
    // 0x169298: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x169298u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x16929c: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x16929Cu;
    {
        const bool branch_taken_0x16929c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16929c) {
            ctx->pc = 0x1692A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16929Cu;
            // 0x1692a0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1692A4u;
            goto label_1692a4;
        }
    }
    ctx->pc = 0x1692A4u;
label_1692a4:
    // 0x1692a4: 0x1810  mfhi        $v1
    ctx->pc = 0x1692a4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1692a8: 0x71182b  sltu        $v1, $v1, $s1
    ctx->pc = 0x1692a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1692ac: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1692ACu;
    {
        const bool branch_taken_0x1692ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1692ac) {
            ctx->pc = 0x1692B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1692ACu;
            // 0x1692b0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1692CCu;
            goto label_1692cc;
        }
    }
    ctx->pc = 0x1692B4u;
    // 0x1692b4: 0x8ea20324  lw          $v0, 0x324($s5)
    ctx->pc = 0x1692b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 804)));
    // 0x1692b8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1692b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1692bc: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1692bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1692c0: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1692C0u;
    {
        const bool branch_taken_0x1692c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1692C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1692C0u;
        // 0x1692c4: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1692c0) {
            ctx->pc = 0x1692DCu;
            goto label_1692dc;
        }
    }
    ctx->pc = 0x1692C8u;
    // 0x1692c8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1692c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1692cc:
    // 0x1692cc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1692ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1692d0: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x1692d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1692d4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1692D4u;
    {
        const bool branch_taken_0x1692d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1692D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1692D4u;
        // 0x1692d8: 0x26940018  addiu       $s4, $s4, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1692d4) {
            ctx->pc = 0x169290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169290;
        }
    }
    ctx->pc = 0x1692DCu;
label_1692dc:
    // 0x1692dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1692dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1692e0:
    // 0x1692e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1692e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1692e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1692e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1692e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1692e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1692ec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1692ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1692f0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1692f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1692f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1692f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1692f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1692F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1692FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1692F8u;
        // 0x1692fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1692F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169300u;
}
