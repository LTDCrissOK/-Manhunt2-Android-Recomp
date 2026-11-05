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

// Function: sub_003B1FC8
// Address: 0x3b1fc8 - 0x3b20e8
void sub_003B1FC8_0x3b1fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1FC8_0x3b1fc8");
#endif

    switch (ctx->pc) {
        case 0x3b2020u: goto label_3b2020;
        case 0x3b2028u: goto label_3b2028;
        case 0x3b2044u: goto label_3b2044;
        case 0x3b2068u: goto label_3b2068;
        case 0x3b2088u: goto label_3b2088;
        case 0x3b20c8u: goto label_3b20c8;
        case 0x3b20d0u: goto label_3b20d0;
        default: break;
    }

    ctx->pc = 0x3b1fc8u;

    // 0x3b1fc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b1fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b1fcc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x3b1fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3b1fd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b1fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b1fd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b1fd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1fd8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b1fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3b1fdc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3b1fdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1fe0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3b1fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3b1fe4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3b1fe4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1fe8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b1fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b1fec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b1fecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1ff0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3b1ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3b1ff4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3b1ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x3b1ff8: 0x8e0801a8  lw          $t0, 0x1A8($s0)
    ctx->pc = 0x3b1ff8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
    // 0x3b1ffc: 0x11030029  beq         $t0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x3B1FFCu;
    {
        const bool branch_taken_0x3b1ffc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B2000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1FFCu;
        // 0x3b2000: 0x8e1301e8  lw          $s3, 0x1E8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1ffc) {
            ctx->pc = 0x3B20A4u;
            goto label_3b20a4;
        }
    }
    ctx->pc = 0x3B2004u;
    // 0x3b2004: 0x8e0401ac  lw          $a0, 0x1AC($s0)
    ctx->pc = 0x3b2004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x3b2008: 0x84083  sra         $t0, $t0, 2
    ctx->pc = 0x3b2008u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 2));
    // 0x3b200c: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x3b200cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b2010: 0x260501e4  addiu       $a1, $s0, 0x1E4
    ctx->pc = 0x3b2010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 484));
    // 0x3b2014: 0x26060220  addiu       $a2, $s0, 0x220
    ctx->pc = 0x3b2014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x3b2018: 0xc0ec9ea  jal         func_3B27A8
    ctx->pc = 0x3B2018u;
    SET_GPR_U32(ctx, 31, 0x3B2020u);
    ctx->pc = 0x3B201Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2018u;
    // 0x3b201c: 0x26070420  addiu       $a3, $s0, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B27A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B27A8u, 0x3B2018u, 0x3B2020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2020u;
label_3b2020:
    // 0x3b2020: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3b2020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2024: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3b2024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b2028:
    // 0x3b2028: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x3b2028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x3b202c: 0x8e0401b0  lw          $a0, 0x1B0($s0)
    ctx->pc = 0x3b202cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x3b2030: 0x2423821  addu        $a3, $s2, $v0
    ctx->pc = 0x3b2030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3b2034: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3b2034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3b2038: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b2038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b203c: 0xc0ecba8  jal         func_3B2EA0
    ctx->pc = 0x3B203Cu;
    SET_GPR_U32(ctx, 31, 0x3B2044u);
    ctx->pc = 0x3B2040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B203Cu;
    // 0x3b2040: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2EA0u, 0x3B203Cu, 0x3B2044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2044u;
label_3b2044:
    // 0x3b2044: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x3b2044u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3b2048: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3B2048u;
    {
        const bool branch_taken_0x3b2048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b2048) {
            ctx->pc = 0x3B204Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2048u;
            // 0x3b204c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b2028;
        }
    }
    ctx->pc = 0x3B2050u;
    // 0x3b2050: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x3b2050u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3b2054: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x3B2054u;
    {
        const bool branch_taken_0x3b2054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b2054) {
            ctx->pc = 0x3B2058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2054u;
            // 0x3b2058: 0x8e0301a8  lw          $v1, 0x1A8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2098u;
            goto label_3b2098;
        }
    }
    ctx->pc = 0x3B205Cu;
    // 0x3b205c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3b205cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2060: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3b2060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b2064: 0x0  nop
    ctx->pc = 0x3b2064u;
    // NOP
label_3b2068:
    // 0x3b2068: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x3b2068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x3b206c: 0x8e0401b0  lw          $a0, 0x1B0($s0)
    ctx->pc = 0x3b206cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x3b2070: 0x2823821  addu        $a3, $s4, $v0
    ctx->pc = 0x3b2070u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x3b2074: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3b2074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3b2078: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3b2078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b207c: 0x24a500c0  addiu       $a1, $a1, 0xC0
    ctx->pc = 0x3b207cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    // 0x3b2080: 0xc0ecba8  jal         func_3B2EA0
    ctx->pc = 0x3B2080u;
    SET_GPR_U32(ctx, 31, 0x3B2088u);
    ctx->pc = 0x3B2084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2080u;
    // 0x3b2084: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2EA0u, 0x3B2080u, 0x3B2088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2088u;
label_3b2088:
    // 0x3b2088: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x3b2088u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3b208c: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x3B208Cu;
    {
        const bool branch_taken_0x3b208c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b208c) {
            ctx->pc = 0x3B2090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B208Cu;
            // 0x3b2090: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b2068;
        }
    }
    ctx->pc = 0x3B2094u;
    // 0x3b2094: 0x8e0301a8  lw          $v1, 0x1A8($s0)
    ctx->pc = 0x3b2094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
label_3b2098:
    // 0x3b2098: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x3b2098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x3b209c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b209cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b20a0: 0xae0301a8  sw          $v1, 0x1A8($s0)
    ctx->pc = 0x3b20a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 3));
label_3b20a4:
    // 0x3b20a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b20a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b20a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b20a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b20ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b20acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b20b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3b20b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3b20b4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3b20b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b20b8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3b20b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3b20bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3B20BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B20C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B20BCu;
        // 0x3b20c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B20BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B20C4u;
    // 0x3b20c4: 0x0  nop
    ctx->pc = 0x3b20c4u;
    // NOP
label_3b20c8:
    // 0x3b20c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B20C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B20CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B20C8u;
        // 0x3b20cc: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B20C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B20D0u;
label_3b20d0:
    // 0x3b20d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b20d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b20d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b20d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b20d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b20d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b20dc: 0x80ec840  j           func_3B2100
    ctx->pc = 0x3B20DCu;
    ctx->pc = 0x3B20E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B20DCu;
    // 0x3b20e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2100u, 0x3B20DCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B20E4u;
    // 0x3b20e4: 0x0  nop
    ctx->pc = 0x3b20e4u;
    // NOP
    ctx->pc = 0x3b20e8u;
}
