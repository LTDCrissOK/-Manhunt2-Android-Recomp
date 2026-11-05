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

// Function: sub_0016B2A8
// Address: 0x16b2a8 - 0x16b368
void sub_0016B2A8_0x16b2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B2A8_0x16b2a8");
#endif

    switch (ctx->pc) {
        case 0x16b2dcu: goto label_16b2dc;
        case 0x16b2ecu: goto label_16b2ec;
        case 0x16b310u: goto label_16b310;
        default: break;
    }

    ctx->pc = 0x16b2a8u;

    // 0x16b2a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16b2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16b2ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16b2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16b2b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16b2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16b2b4: 0x30f0ffff  andi        $s0, $a3, 0xFFFF
    ctx->pc = 0x16b2b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x16b2b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16b2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16b2bc: 0x30d100ff  andi        $s1, $a2, 0xFF
    ctx->pc = 0x16b2bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x16b2c0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16b2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16b2c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16b2c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b2c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16b2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16b2cc: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B2CCu;
    {
        const bool branch_taken_0x16b2cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B2CCu;
        // 0x16b2d0: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b2cc) {
            ctx->pc = 0x16B2E4u;
            goto label_16b2e4;
        }
    }
    ctx->pc = 0x16B2D4u;
    // 0x16b2d4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x16B2D4u;
    {
        const bool branch_taken_0x16b2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B2D4u;
        // 0x16b2d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b2d4) {
            ctx->pc = 0x16B34Cu;
            goto label_16b34c;
        }
    }
    ctx->pc = 0x16B2DCu;
label_16b2dc:
    // 0x16b2dc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x16B2DCu;
    {
        const bool branch_taken_0x16b2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B2DCu;
        // 0x16b2e0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b2dc) {
            ctx->pc = 0x16B34Cu;
            goto label_16b34c;
        }
    }
    ctx->pc = 0x16B2E4u;
label_16b2e4:
    // 0x16b2e4: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x16B2E4u;
    SET_GPR_U32(ctx, 31, 0x16B2ECu);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x16B2E4u, 0x16B2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B2ECu;
label_16b2ec:
    // 0x16b2ec: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x16b2ecu;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x16b2f0: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x16B2F0u;
    {
        const bool branch_taken_0x16b2f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b2f0) {
            ctx->pc = 0x16B2F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B2F0u;
            // 0x16b2f4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B2F8u;
            goto label_16b2f8;
        }
    }
    ctx->pc = 0x16B2F8u;
label_16b2f8:
    // 0x16b2f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16b2f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b2fc: 0x1810  mfhi        $v1
    ctx->pc = 0x16b2fcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x16b300: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x16B300u;
    {
        const bool branch_taken_0x16b300 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B300u;
        // 0x16b304: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b300) {
            ctx->pc = 0x16B348u;
            goto label_16b348;
        }
    }
    ctx->pc = 0x16B308u;
    // 0x16b308: 0x26440008  addiu       $a0, $s2, 0x8
    ctx->pc = 0x16b308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x16b30c: 0x2651021  addu        $v0, $s3, $a1
    ctx->pc = 0x16b30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_16b310:
    // 0x16b310: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x16b310u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16b314: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16b314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16b318: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16b318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16b31c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16b31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16b320: 0x90620018  lbu         $v0, 0x18($v1)
    ctx->pc = 0x16b320u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x16b324: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16b324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16b328: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x16b328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16b32c: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x16b32cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16b330: 0x4c0ffea  bltz        $a2, . + 4 + (-0x16 << 2)
    ctx->pc = 0x16B330u;
    {
        const bool branch_taken_0x16b330 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x16B334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B330u;
        // 0x16b334: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b330) {
            ctx->pc = 0x16B2DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16b2dc;
        }
    }
    ctx->pc = 0x16B338u;
    // 0x16b338: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x16b338u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16b33c: 0xb1182b  sltu        $v1, $a1, $s1
    ctx->pc = 0x16b33cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x16b340: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x16B340u;
    {
        const bool branch_taken_0x16b340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B340u;
        // 0x16b344: 0x2651021  addu        $v0, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b340) {
            ctx->pc = 0x16B310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16b310;
        }
    }
    ctx->pc = 0x16B348u;
label_16b348:
    // 0x16b348: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16b348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16b34c:
    // 0x16b34c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16b34cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b350: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16b350u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b354: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16b354u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b358: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16b358u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16b35c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16b35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b360: 0x3e00008  jr          $ra
    ctx->pc = 0x16B360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B360u;
        // 0x16b364: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B368u;
}
