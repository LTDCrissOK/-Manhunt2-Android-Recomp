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

// Function: sub_00278298
// Address: 0x278298 - 0x278418
void sub_00278298_0x278298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278298_0x278298");
#endif

    switch (ctx->pc) {
        case 0x2782c0u: goto label_2782c0;
        case 0x2782f0u: goto label_2782f0;
        case 0x278348u: goto label_278348;
        case 0x278374u: goto label_278374;
        case 0x278380u: goto label_278380;
        case 0x2783d0u: goto label_2783d0;
        case 0x2783fcu: goto label_2783fc;
        default: break;
    }

    ctx->pc = 0x278298u;

    // 0x278298: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x278298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27829c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27829cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2782a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2782a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2782a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2782a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2782a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2782a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2782ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2782acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2782b0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2782b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2782b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2782b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2782b8: 0xc09e062  jal         func_278188
    ctx->pc = 0x2782B8u;
    SET_GPR_U32(ctx, 31, 0x2782C0u);
    ctx->pc = 0x2782BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2782B8u;
    // 0x2782bc: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278188u, 0x2782B8u, 0x2782C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2782C0u;
label_2782c0:
    // 0x2782c0: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x2782c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x2782c4: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x2782c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2782c8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2782c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2782cc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2782ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2782d0: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x2782d0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2782d4: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2782D4u;
    {
        const bool branch_taken_0x2782d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2782d4) {
            ctx->pc = 0x2782D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2782D4u;
            // 0x2782d8: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2782F0u;
            goto label_2782f0;
        }
    }
    ctx->pc = 0x2782DCu;
    // 0x2782dc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2782dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2782e0: 0x1482000f  bne         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2782E0u;
    {
        const bool branch_taken_0x2782e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2782E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2782E0u;
        // 0x2782e4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2782e0) {
            ctx->pc = 0x278320u;
            goto label_278320;
        }
    }
    ctx->pc = 0x2782E8u;
    // 0x2782e8: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x2782e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x2782ec: 0x0  nop
    ctx->pc = 0x2782ecu;
    // NOP
label_2782f0:
    // 0x2782f0: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x2782f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2782f4: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x2782f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2782f8: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2782f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2782fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2782fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x278300: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x278300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x278304: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x278304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x278308: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x278308u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27830c: 0x5064fff8  beql        $v1, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x27830Cu;
    {
        const bool branch_taken_0x27830c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x27830c) {
            ctx->pc = 0x278310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27830Cu;
            // 0x278310: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2782F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2782f0;
        }
    }
    ctx->pc = 0x278314u;
    // 0x278314: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x278314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x278318: 0x5062fff5  beql        $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x278318u;
    {
        const bool branch_taken_0x278318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x278318) {
            ctx->pc = 0x27831Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278318u;
            // 0x27831c: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2782F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2782f0;
        }
    }
    ctx->pc = 0x278320u;
label_278320:
    // 0x278320: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x278320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x278324: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x278324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x278328: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x278328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x27832c: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x27832cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278330: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x278330u;
    {
        const bool branch_taken_0x278330 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x278334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278330u;
        // 0x278334: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278330) {
            ctx->pc = 0x278368u;
            goto label_278368;
        }
    }
    ctx->pc = 0x278338u;
    // 0x278338: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x278338u;
    {
        const bool branch_taken_0x278338 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x27833Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278338u;
        // 0x27833c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278338) {
            ctx->pc = 0x278368u;
            goto label_278368;
        }
    }
    ctx->pc = 0x278340u;
    // 0x278340: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x278340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x278344: 0x0  nop
    ctx->pc = 0x278344u;
    // NOP
label_278348:
    // 0x278348: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x278348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x27834c: 0xae030114  sw          $v1, 0x114($s0)
    ctx->pc = 0x27834cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
    // 0x278350: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x278350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x278354: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x278354u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278358: 0x10460004  beq         $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x278358u;
    {
        const bool branch_taken_0x278358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x27835Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278358u;
        // 0x27835c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278358) {
            ctx->pc = 0x27836Cu;
            goto label_27836c;
        }
    }
    ctx->pc = 0x278360u;
    // 0x278360: 0x1445fff9  bne         $v0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x278360u;
    {
        const bool branch_taken_0x278360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x278364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278360u;
        // 0x278364: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278360) {
            ctx->pc = 0x278348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278348;
        }
    }
    ctx->pc = 0x278368u;
label_278368:
    // 0x278368: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27836c:
    // 0x27836c: 0xc09e062  jal         func_278188
    ctx->pc = 0x27836Cu;
    SET_GPR_U32(ctx, 31, 0x278374u);
    ctx->pc = 0x278370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27836Cu;
    // 0x278370: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278188u, 0x27836Cu, 0x278374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278374u;
label_278374:
    // 0x278374: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x278374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x278378: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x278378u;
    {
        const bool branch_taken_0x278378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278378u;
        // 0x27837c: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278378) {
            ctx->pc = 0x27838Cu;
            goto label_27838c;
        }
    }
    ctx->pc = 0x278380u;
label_278380:
    // 0x278380: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x278380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x278384: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x278384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x278388: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x278388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
label_27838c:
    // 0x27838c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x27838cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x278390: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x278390u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278394: 0x5083fffa  beql        $a0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x278394u;
    {
        const bool branch_taken_0x278394 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x278394) {
            ctx->pc = 0x278398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278394u;
            // 0x278398: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278380;
        }
    }
    ctx->pc = 0x27839Cu;
    // 0x27839c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x27839cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2783a0: 0x5082fff7  beql        $a0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2783A0u;
    {
        const bool branch_taken_0x2783a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2783a0) {
            ctx->pc = 0x2783A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2783A0u;
            // 0x2783a4: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278380;
        }
    }
    ctx->pc = 0x2783A8u;
    // 0x2783a8: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x2783a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x2783ac: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2783acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2783b0: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x2783b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2783b4: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x2783b4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2783b8: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2783B8u;
    {
        const bool branch_taken_0x2783b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2783BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2783B8u;
        // 0x2783bc: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2783b8) {
            ctx->pc = 0x2783F0u;
            goto label_2783f0;
        }
    }
    ctx->pc = 0x2783C0u;
    // 0x2783c0: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2783C0u;
    {
        const bool branch_taken_0x2783c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2783C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2783C0u;
        // 0x2783c4: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2783c0) {
            ctx->pc = 0x2783F0u;
            goto label_2783f0;
        }
    }
    ctx->pc = 0x2783C8u;
    // 0x2783c8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2783c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2783cc: 0x0  nop
    ctx->pc = 0x2783ccu;
    // NOP
label_2783d0:
    // 0x2783d0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2783d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2783d4: 0xae030114  sw          $v1, 0x114($s0)
    ctx->pc = 0x2783d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
    // 0x2783d8: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x2783d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2783dc: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2783dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2783e0: 0x10460004  beq         $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2783E0u;
    {
        const bool branch_taken_0x2783e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x2783E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2783E0u;
        // 0x2783e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2783e0) {
            ctx->pc = 0x2783F4u;
            goto label_2783f4;
        }
    }
    ctx->pc = 0x2783E8u;
    // 0x2783e8: 0x1445fff9  bne         $v0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2783E8u;
    {
        const bool branch_taken_0x2783e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2783ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2783E8u;
        // 0x2783ec: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2783e8) {
            ctx->pc = 0x2783D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2783d0;
        }
    }
    ctx->pc = 0x2783F0u;
label_2783f0:
    // 0x2783f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2783f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2783f4:
    // 0x2783f4: 0xc09e062  jal         func_278188
    ctx->pc = 0x2783F4u;
    SET_GPR_U32(ctx, 31, 0x2783FCu);
    ctx->pc = 0x2783F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2783F4u;
    // 0x2783f8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278188u, 0x2783F4u, 0x2783FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2783FCu;
label_2783fc:
    // 0x2783fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2783fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278400: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x278400u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x278404: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x278404u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278408: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x278408u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27840c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27840cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278410: 0x3e00008  jr          $ra
    ctx->pc = 0x278410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278410u;
        // 0x278414: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278418u;
}
