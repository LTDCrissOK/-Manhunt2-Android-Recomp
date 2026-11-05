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

// Function: sub_00279168
// Address: 0x279168 - 0x2792a8
void sub_00279168_0x279168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279168_0x279168");
#endif

    switch (ctx->pc) {
        case 0x279190u: goto label_279190;
        case 0x2791c0u: goto label_2791c0;
        case 0x279200u: goto label_279200;
        case 0x279210u: goto label_279210;
        case 0x279260u: goto label_279260;
        case 0x27928cu: goto label_27928c;
        default: break;
    }

    ctx->pc = 0x279168u;

    // 0x279168: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x279168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27916c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27916cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x279170: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x279170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279174: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x279174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x279178: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x279178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x27917c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27917cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x279180: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x279180u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279184: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x279184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x279188: 0xc09e2c2  jal         func_278B08
    ctx->pc = 0x279188u;
    SET_GPR_U32(ctx, 31, 0x279190u);
    ctx->pc = 0x27918Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279188u;
    // 0x27918c: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B08u, 0x279188u, 0x279190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279190u;
label_279190:
    // 0x279190: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x279190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x279194: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x279194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x279198: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x279198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27919c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x27919cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2791a0: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x2791a0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2791a4: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2791A4u;
    {
        const bool branch_taken_0x2791a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2791a4) {
            ctx->pc = 0x2791A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2791A4u;
            // 0x2791a8: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2791C0u;
            goto label_2791c0;
        }
    }
    ctx->pc = 0x2791ACu;
    // 0x2791ac: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2791acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2791b0: 0x1482000f  bne         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2791B0u;
    {
        const bool branch_taken_0x2791b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2791B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2791B0u;
        // 0x2791b4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2791b0) {
            ctx->pc = 0x2791F0u;
            goto label_2791f0;
        }
    }
    ctx->pc = 0x2791B8u;
    // 0x2791b8: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x2791b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x2791bc: 0x0  nop
    ctx->pc = 0x2791bcu;
    // NOP
label_2791c0:
    // 0x2791c0: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x2791c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2791c4: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x2791c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2791c8: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2791c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2791cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2791ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2791d0: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x2791d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x2791d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2791d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2791d8: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x2791d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2791dc: 0x5064fff8  beql        $v1, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2791DCu;
    {
        const bool branch_taken_0x2791dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2791dc) {
            ctx->pc = 0x2791E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2791DCu;
            // 0x2791e0: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2791C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2791c0;
        }
    }
    ctx->pc = 0x2791E4u;
    // 0x2791e4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2791e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2791e8: 0x5062fff5  beql        $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2791E8u;
    {
        const bool branch_taken_0x2791e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2791e8) {
            ctx->pc = 0x2791ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2791E8u;
            // 0x2791ec: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2791C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2791c0;
        }
    }
    ctx->pc = 0x2791F0u;
label_2791f0:
    // 0x2791f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2791f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2791f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2791f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2791f8: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x2791F8u;
    SET_GPR_U32(ctx, 31, 0x279200u);
    ctx->pc = 0x2791FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2791F8u;
    // 0x2791fc: 0x24a60004  addiu       $a2, $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x2791F8u, 0x279200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279200u;
label_279200:
    // 0x279200: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x279200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x279204: 0x26660004  addiu       $a2, $s3, 0x4
    ctx->pc = 0x279204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x279208: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x279208u;
    {
        const bool branch_taken_0x279208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279208u;
        // 0x27920c: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279208) {
            ctx->pc = 0x27921Cu;
            goto label_27921c;
        }
    }
    ctx->pc = 0x279210u;
label_279210:
    // 0x279210: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x279210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x279214: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x279214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x279218: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x279218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
label_27921c:
    // 0x27921c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x27921cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x279220: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x279220u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279224: 0x5083fffa  beql        $a0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x279224u;
    {
        const bool branch_taken_0x279224 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x279224) {
            ctx->pc = 0x279228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279224u;
            // 0x279228: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279210;
        }
    }
    ctx->pc = 0x27922Cu;
    // 0x27922c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x27922cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x279230: 0x5082fff7  beql        $a0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x279230u;
    {
        const bool branch_taken_0x279230 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x279230) {
            ctx->pc = 0x279234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279230u;
            // 0x279234: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279210;
        }
    }
    ctx->pc = 0x279238u;
    // 0x279238: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x279238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x27923c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x27923cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x279240: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x279240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x279244: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x279244u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279248: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x279248u;
    {
        const bool branch_taken_0x279248 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x27924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279248u;
        // 0x27924c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279248) {
            ctx->pc = 0x279280u;
            goto label_279280;
        }
    }
    ctx->pc = 0x279250u;
    // 0x279250: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x279250u;
    {
        const bool branch_taken_0x279250 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x279254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279250u;
        // 0x279254: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279250) {
            ctx->pc = 0x279280u;
            goto label_279280;
        }
    }
    ctx->pc = 0x279258u;
    // 0x279258: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x279258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x27925c: 0x0  nop
    ctx->pc = 0x27925cu;
    // NOP
label_279260:
    // 0x279260: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x279260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x279264: 0xae030114  sw          $v1, 0x114($s0)
    ctx->pc = 0x279264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
    // 0x279268: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x279268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x27926c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x27926cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279270: 0x10470004  beq         $v0, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x279270u;
    {
        const bool branch_taken_0x279270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x279274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279270u;
        // 0x279274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279270) {
            ctx->pc = 0x279284u;
            goto label_279284;
        }
    }
    ctx->pc = 0x279278u;
    // 0x279278: 0x1445fff9  bne         $v0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x279278u;
    {
        const bool branch_taken_0x279278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x27927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279278u;
        // 0x27927c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279278) {
            ctx->pc = 0x279260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279260;
        }
    }
    ctx->pc = 0x279280u;
label_279280:
    // 0x279280: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_279284:
    // 0x279284: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x279284u;
    SET_GPR_U32(ctx, 31, 0x27928Cu);
    ctx->pc = 0x279288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279284u;
    // 0x279288: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x279284u, 0x27928Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27928Cu;
label_27928c:
    // 0x27928c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27928cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279290: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x279290u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x279294: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x279294u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279298: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x279298u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27929c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27929cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2792a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2792A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2792A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2792A0u;
        // 0x2792a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2792A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2792A8u;
}
