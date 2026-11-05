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

// Function: sub_00169300
// Address: 0x169300 - 0x1693e8
void sub_00169300_0x169300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169300_0x169300");
#endif

    switch (ctx->pc) {
        case 0x169370u: goto label_169370;
        case 0x169378u: goto label_169378;
        default: break;
    }

    ctx->pc = 0x169300u;

    // 0x169300: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x169300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x169304: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x169304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x169308: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x169308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16930c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16930cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169310: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x169310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x169314: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x169314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x169318: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x169318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x16931c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x16931cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x169320: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x169320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x169324: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x169324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x169328: 0x96540320  lhu         $s4, 0x320($s2)
    ctx->pc = 0x169328u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 800)));
    // 0x16932c: 0x2e820003  sltiu       $v0, $s4, 0x3
    ctx->pc = 0x16932cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x169330: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x169330u;
    {
        const bool branch_taken_0x169330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x169334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169330u;
        // 0x169334: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169330) {
            ctx->pc = 0x1693C0u;
            goto label_1693c0;
        }
    }
    ctx->pc = 0x169338u;
    // 0x169338: 0x8e420348  lw          $v0, 0x348($s2)
    ctx->pc = 0x169338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 840)));
    // 0x16933c: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x16933cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x169340: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x169340u;
    {
        const bool branch_taken_0x169340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x169340) {
            ctx->pc = 0x169344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169340u;
            // 0x169344: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x169348u;
            goto label_169348;
        }
    }
    ctx->pc = 0x169348u;
label_169348:
    // 0x169348: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x169348u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16934c: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x16934cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x169350: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x169350u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x169354: 0x1012  mflo        $v0
    ctx->pc = 0x169354u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x169358: 0x12800018  beqz        $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x169358u;
    {
        const bool branch_taken_0x169358 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x16935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169358u;
        // 0x16935c: 0x24500001  addiu       $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169358) {
            ctx->pc = 0x1693BCu;
            goto label_1693bc;
        }
    }
    ctx->pc = 0x169360u;
    // 0x169360: 0x24150064  addiu       $s5, $zero, 0x64
    ctx->pc = 0x169360u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x169364: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x169364u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169368: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x169368u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16936c: 0x0  nop
    ctx->pc = 0x16936cu;
    // NOP
label_169370:
    // 0x169370: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x169370u;
    SET_GPR_U32(ctx, 31, 0x169378u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x169370u, 0x169378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169378u;
label_169378:
    // 0x169378: 0x55001b  divu        $zero, $v0, $s5
    ctx->pc = 0x169378u;
    { uint32_t divisor = GPR_U32(ctx, 21); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x16937c: 0x52a00001  beql        $s5, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x16937Cu;
    {
        const bool branch_taken_0x16937c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x16937c) {
            ctx->pc = 0x169380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16937Cu;
            // 0x169380: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x169384u;
            goto label_169384;
        }
    }
    ctx->pc = 0x169384u;
label_169384:
    // 0x169384: 0x8e420348  lw          $v0, 0x348($s2)
    ctx->pc = 0x169384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 840)));
    // 0x169388: 0x1810  mfhi        $v1
    ctx->pc = 0x169388u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x16938c: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x16938cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x169390: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x169390u;
    {
        const bool branch_taken_0x169390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x169390) {
            ctx->pc = 0x169394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169390u;
            // 0x169394: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1693B0u;
            goto label_1693b0;
        }
    }
    ctx->pc = 0x169398u;
    // 0x169398: 0x8e420324  lw          $v0, 0x324($s2)
    ctx->pc = 0x169398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 804)));
    // 0x16939c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x16939cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1693a0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1693a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1693a4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1693A4u;
    {
        const bool branch_taken_0x1693a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1693A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1693A4u;
        // 0x1693a8: 0xac560004  sw          $s6, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1693a4) {
            ctx->pc = 0x1693BCu;
            goto label_1693bc;
        }
    }
    ctx->pc = 0x1693ACu;
    // 0x1693ac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1693acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1693b0:
    // 0x1693b0: 0x234102b  sltu        $v0, $s1, $s4
    ctx->pc = 0x1693b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1693b4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1693B4u;
    {
        const bool branch_taken_0x1693b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1693B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1693B4u;
        // 0x1693b8: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1693b4) {
            ctx->pc = 0x169370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169370;
        }
    }
    ctx->pc = 0x1693BCu;
label_1693bc:
    // 0x1693bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1693bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1693c0:
    // 0x1693c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1693c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1693c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1693c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1693c8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1693c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1693cc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1693ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1693d0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1693d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1693d4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1693d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1693d8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1693d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1693dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1693DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1693E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1693DCu;
        // 0x1693e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1693DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1693E4u;
    // 0x1693e4: 0x0  nop
    ctx->pc = 0x1693e4u;
    // NOP
    ctx->pc = 0x1693e8u;
}
