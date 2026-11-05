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

// Function: sub_00279028
// Address: 0x279028 - 0x279168
void sub_00279028_0x279028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279028_0x279028");
#endif

    switch (ctx->pc) {
        case 0x279058u: goto label_279058;
        case 0x279088u: goto label_279088;
        case 0x2790c4u: goto label_2790c4;
        case 0x2790d0u: goto label_2790d0;
        case 0x279104u: goto label_279104;
        case 0x279110u: goto label_279110;
        case 0x279144u: goto label_279144;
        default: break;
    }

    ctx->pc = 0x279028u;

    // 0x279028: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x279028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27902c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27902cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x279030: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x279030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279034: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x279034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x279038: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x279038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x27903c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x27903cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x279040: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x279040u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279044: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x279044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x279048: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x279048u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27904c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x27904cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x279050: 0xc09e2c2  jal         func_278B08
    ctx->pc = 0x279050u;
    SET_GPR_U32(ctx, 31, 0x279058u);
    ctx->pc = 0x279054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279050u;
    // 0x279054: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B08u, 0x279050u, 0x279058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279058u;
label_279058:
    // 0x279058: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x279058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x27905c: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x27905cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x279060: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x279060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x279064: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x279064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x279068: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x279068u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27906c: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x27906Cu;
    {
        const bool branch_taken_0x27906c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x27906c) {
            ctx->pc = 0x279070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27906Cu;
            // 0x279070: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279088u;
            goto label_279088;
        }
    }
    ctx->pc = 0x279074u;
    // 0x279074: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x279074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x279078: 0x1482000f  bne         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x279078u;
    {
        const bool branch_taken_0x279078 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x27907Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279078u;
        // 0x27907c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279078) {
            ctx->pc = 0x2790B8u;
            goto label_2790b8;
        }
    }
    ctx->pc = 0x279080u;
    // 0x279080: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x279080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x279084: 0x0  nop
    ctx->pc = 0x279084u;
    // NOP
label_279088:
    // 0x279088: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x279088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x27908c: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x27908cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279090: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x279090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x279094: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x279094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x279098: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x279098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x27909c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27909cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2790a0: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x2790a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2790a4: 0x5064fff8  beql        $v1, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2790A4u;
    {
        const bool branch_taken_0x2790a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2790a4) {
            ctx->pc = 0x2790A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2790A4u;
            // 0x2790a8: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279088;
        }
    }
    ctx->pc = 0x2790ACu;
    // 0x2790ac: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2790acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2790b0: 0x5062fff5  beql        $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2790B0u;
    {
        const bool branch_taken_0x2790b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2790b0) {
            ctx->pc = 0x2790B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2790B0u;
            // 0x2790b4: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279088;
        }
    }
    ctx->pc = 0x2790B8u;
label_2790b8:
    // 0x2790b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2790b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2790bc: 0xc09e2c2  jal         func_278B08
    ctx->pc = 0x2790BCu;
    SET_GPR_U32(ctx, 31, 0x2790C4u);
    ctx->pc = 0x2790C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2790BCu;
    // 0x2790c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B08u, 0x2790BCu, 0x2790C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2790C4u;
label_2790c4:
    // 0x2790c4: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x2790c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x2790c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2790C8u;
    {
        const bool branch_taken_0x2790c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2790CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2790C8u;
        // 0x2790cc: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2790c8) {
            ctx->pc = 0x2790DCu;
            goto label_2790dc;
        }
    }
    ctx->pc = 0x2790D0u;
label_2790d0:
    // 0x2790d0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2790d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2790d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2790d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2790d8: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x2790d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
label_2790dc:
    // 0x2790dc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2790dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2790e0: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x2790e0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2790e4: 0x5083fffa  beql        $a0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2790E4u;
    {
        const bool branch_taken_0x2790e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2790e4) {
            ctx->pc = 0x2790E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2790E4u;
            // 0x2790e8: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2790D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2790d0;
        }
    }
    ctx->pc = 0x2790ECu;
    // 0x2790ec: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2790ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2790f0: 0x5082fff7  beql        $a0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2790F0u;
    {
        const bool branch_taken_0x2790f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2790f0) {
            ctx->pc = 0x2790F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2790F0u;
            // 0x2790f4: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2790D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2790d0;
        }
    }
    ctx->pc = 0x2790F8u;
    // 0x2790f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2790f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2790fc: 0xc09e2c2  jal         func_278B08
    ctx->pc = 0x2790FCu;
    SET_GPR_U32(ctx, 31, 0x279104u);
    ctx->pc = 0x279100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2790FCu;
    // 0x279100: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B08u, 0x2790FCu, 0x279104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279104u;
label_279104:
    // 0x279104: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x279104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x279108: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x279108u;
    {
        const bool branch_taken_0x279108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27910Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279108u;
        // 0x27910c: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279108) {
            ctx->pc = 0x27911Cu;
            goto label_27911c;
        }
    }
    ctx->pc = 0x279110u;
label_279110:
    // 0x279110: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x279110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x279114: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x279114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x279118: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x279118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
label_27911c:
    // 0x27911c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x27911cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x279120: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x279120u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279124: 0x5083fffa  beql        $a0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x279124u;
    {
        const bool branch_taken_0x279124 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x279124) {
            ctx->pc = 0x279128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279124u;
            // 0x279128: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279110;
        }
    }
    ctx->pc = 0x27912Cu;
    // 0x27912c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x27912cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x279130: 0x5082fff7  beql        $a0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x279130u;
    {
        const bool branch_taken_0x279130 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x279130) {
            ctx->pc = 0x279134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279130u;
            // 0x279134: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279110;
        }
    }
    ctx->pc = 0x279138u;
    // 0x279138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27913c: 0xc09e2c2  jal         func_278B08
    ctx->pc = 0x27913Cu;
    SET_GPR_U32(ctx, 31, 0x279144u);
    ctx->pc = 0x279140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27913Cu;
    // 0x279140: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B08u, 0x27913Cu, 0x279144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279144u;
label_279144:
    // 0x279144: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x279144u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279148: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x279148u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27914c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x27914cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279150: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x279150u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x279154: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x279154u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279158: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x279158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27915c: 0x3e00008  jr          $ra
    ctx->pc = 0x27915Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27915Cu;
        // 0x279160: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27915Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279164u;
    // 0x279164: 0x0  nop
    ctx->pc = 0x279164u;
    // NOP
    ctx->pc = 0x279168u;
}
