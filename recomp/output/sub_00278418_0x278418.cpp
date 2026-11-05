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

// Function: sub_00278418
// Address: 0x278418 - 0x2785a0
void sub_00278418_0x278418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278418_0x278418");
#endif

    switch (ctx->pc) {
        case 0x278440u: goto label_278440;
        case 0x278470u: goto label_278470;
        case 0x2784c8u: goto label_2784c8;
        case 0x2784f4u: goto label_2784f4;
        case 0x278500u: goto label_278500;
        case 0x278550u: goto label_278550;
        case 0x27857cu: goto label_27857c;
        default: break;
    }

    ctx->pc = 0x278418u;

    // 0x278418: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x278418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27841c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27841cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x278420: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x278420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278424: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x278424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x278428: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x278428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x27842c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27842cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x278430: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x278430u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278434: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x278434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x278438: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x278438u;
    SET_GPR_U32(ctx, 31, 0x278440u);
    ctx->pc = 0x27843Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278438u;
    // 0x27843c: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x278438u, 0x278440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278440u;
label_278440:
    // 0x278440: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x278440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x278444: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x278444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x278448: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x278448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27844c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x27844cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x278450: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x278450u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278454: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x278454u;
    {
        const bool branch_taken_0x278454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x278454) {
            ctx->pc = 0x278458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278454u;
            // 0x278458: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278470u;
            goto label_278470;
        }
    }
    ctx->pc = 0x27845Cu;
    // 0x27845c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x27845cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x278460: 0x1482000f  bne         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x278460u;
    {
        const bool branch_taken_0x278460 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x278464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278460u;
        // 0x278464: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278460) {
            ctx->pc = 0x2784A0u;
            goto label_2784a0;
        }
    }
    ctx->pc = 0x278468u;
    // 0x278468: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x278468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x27846c: 0x0  nop
    ctx->pc = 0x27846cu;
    // NOP
label_278470:
    // 0x278470: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x278470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x278474: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x278474u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278478: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x278478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27847c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27847cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x278480: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x278480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x278484: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x278484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x278488: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x278488u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27848c: 0x5064fff8  beql        $v1, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x27848Cu;
    {
        const bool branch_taken_0x27848c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x27848c) {
            ctx->pc = 0x278490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27848Cu;
            // 0x278490: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278470;
        }
    }
    ctx->pc = 0x278494u;
    // 0x278494: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x278494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x278498: 0x5062fff5  beql        $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x278498u;
    {
        const bool branch_taken_0x278498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x278498) {
            ctx->pc = 0x27849Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278498u;
            // 0x27849c: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278470;
        }
    }
    ctx->pc = 0x2784A0u;
label_2784a0:
    // 0x2784a0: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x2784a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x2784a4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2784a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2784a8: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x2784a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2784ac: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x2784acu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2784b0: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2784B0u;
    {
        const bool branch_taken_0x2784b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2784B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2784B0u;
        // 0x2784b4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2784b0) {
            ctx->pc = 0x2784E8u;
            goto label_2784e8;
        }
    }
    ctx->pc = 0x2784B8u;
    // 0x2784b8: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2784B8u;
    {
        const bool branch_taken_0x2784b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2784BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2784B8u;
        // 0x2784bc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2784b8) {
            ctx->pc = 0x2784E8u;
            goto label_2784e8;
        }
    }
    ctx->pc = 0x2784C0u;
    // 0x2784c0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2784c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2784c4: 0x0  nop
    ctx->pc = 0x2784c4u;
    // NOP
label_2784c8:
    // 0x2784c8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2784c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2784cc: 0xae030114  sw          $v1, 0x114($s0)
    ctx->pc = 0x2784ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
    // 0x2784d0: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x2784d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2784d4: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2784d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2784d8: 0x10460004  beq         $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2784D8u;
    {
        const bool branch_taken_0x2784d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x2784DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2784D8u;
        // 0x2784dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2784d8) {
            ctx->pc = 0x2784ECu;
            goto label_2784ec;
        }
    }
    ctx->pc = 0x2784E0u;
    // 0x2784e0: 0x1445fff9  bne         $v0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2784E0u;
    {
        const bool branch_taken_0x2784e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2784E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2784E0u;
        // 0x2784e4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2784e0) {
            ctx->pc = 0x2784C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2784c8;
        }
    }
    ctx->pc = 0x2784E8u;
label_2784e8:
    // 0x2784e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2784e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2784ec:
    // 0x2784ec: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x2784ECu;
    SET_GPR_U32(ctx, 31, 0x2784F4u);
    ctx->pc = 0x2784F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2784ECu;
    // 0x2784f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x2784ECu, 0x2784F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2784F4u;
label_2784f4:
    // 0x2784f4: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x2784f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x2784f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2784F8u;
    {
        const bool branch_taken_0x2784f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2784FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2784F8u;
        // 0x2784fc: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2784f8) {
            ctx->pc = 0x27850Cu;
            goto label_27850c;
        }
    }
    ctx->pc = 0x278500u;
label_278500:
    // 0x278500: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x278500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x278504: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x278504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x278508: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x278508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
label_27850c:
    // 0x27850c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x27850cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x278510: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x278510u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278514: 0x5083fffa  beql        $a0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x278514u;
    {
        const bool branch_taken_0x278514 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x278514) {
            ctx->pc = 0x278518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278514u;
            // 0x278518: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278500;
        }
    }
    ctx->pc = 0x27851Cu;
    // 0x27851c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x27851cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x278520: 0x5082fff7  beql        $a0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x278520u;
    {
        const bool branch_taken_0x278520 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x278520) {
            ctx->pc = 0x278524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278520u;
            // 0x278524: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278500;
        }
    }
    ctx->pc = 0x278528u;
    // 0x278528: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x278528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x27852c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x27852cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x278530: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x278530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x278534: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x278534u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278538: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x278538u;
    {
        const bool branch_taken_0x278538 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x27853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278538u;
        // 0x27853c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278538) {
            ctx->pc = 0x278570u;
            goto label_278570;
        }
    }
    ctx->pc = 0x278540u;
    // 0x278540: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x278540u;
    {
        const bool branch_taken_0x278540 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x278544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278540u;
        // 0x278544: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278540) {
            ctx->pc = 0x278570u;
            goto label_278570;
        }
    }
    ctx->pc = 0x278548u;
    // 0x278548: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x278548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x27854c: 0x0  nop
    ctx->pc = 0x27854cu;
    // NOP
label_278550:
    // 0x278550: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x278550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x278554: 0xae030114  sw          $v1, 0x114($s0)
    ctx->pc = 0x278554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
    // 0x278558: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x278558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x27855c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x27855cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278560: 0x10460004  beq         $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x278560u;
    {
        const bool branch_taken_0x278560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x278564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278560u;
        // 0x278564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278560) {
            ctx->pc = 0x278574u;
            goto label_278574;
        }
    }
    ctx->pc = 0x278568u;
    // 0x278568: 0x1445fff9  bne         $v0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x278568u;
    {
        const bool branch_taken_0x278568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x27856Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278568u;
        // 0x27856c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278568) {
            ctx->pc = 0x278550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278550;
        }
    }
    ctx->pc = 0x278570u;
label_278570:
    // 0x278570: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_278574:
    // 0x278574: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x278574u;
    SET_GPR_U32(ctx, 31, 0x27857Cu);
    ctx->pc = 0x278578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278574u;
    // 0x278578: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x278574u, 0x27857Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27857Cu;
label_27857c:
    // 0x27857c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27857cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278580: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x278580u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x278584: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x278584u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278588: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x278588u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27858c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27858cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278590: 0x3e00008  jr          $ra
    ctx->pc = 0x278590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278590u;
        // 0x278594: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278598u;
    // 0x278598: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x278598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27859c: 0x0  nop
    ctx->pc = 0x27859cu;
    // NOP
    ctx->pc = 0x2785a0u;
}
