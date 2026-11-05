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

// Function: sub_0017B288
// Address: 0x17b288 - 0x17b368
void sub_0017B288_0x17b288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B288_0x17b288");
#endif

    switch (ctx->pc) {
        case 0x17b2d0u: goto label_17b2d0;
        case 0x17b2e8u: goto label_17b2e8;
        case 0x17b318u: goto label_17b318;
        default: break;
    }

    ctx->pc = 0x17b288u;

    // 0x17b288: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17b288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17b28c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17b28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17b290: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17b290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17b294: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17b294u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b298: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17b298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17b29c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17b29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17b2a0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17b2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17b2a4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x17b2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x17b2a8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x17b2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x17b2ac: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x17b2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x17b2b0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17b2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17b2b4: 0x92420530  lbu         $v0, 0x530($s2)
    ctx->pc = 0x17b2b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1328)));
    // 0x17b2b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B2B8u;
    {
        const bool branch_taken_0x17b2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B2B8u;
        // 0x17b2bc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b2b8) {
            ctx->pc = 0x17B2C8u;
            goto label_17b2c8;
        }
    }
    ctx->pc = 0x17B2C0u;
    // 0x17b2c0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x17B2C0u;
    {
        const bool branch_taken_0x17b2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B2C0u;
        // 0x17b2c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b2c0) {
            ctx->pc = 0x17B338u;
            goto label_17b338;
        }
    }
    ctx->pc = 0x17B2C8u;
label_17b2c8:
    // 0x17b2c8: 0xc05a64a  jal         func_169928
    ctx->pc = 0x17B2C8u;
    SET_GPR_U32(ctx, 31, 0x17B2D0u);
    ctx->pc = 0x17B2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B2C8u;
    // 0x17b2cc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169928u, 0x17B2C8u, 0x17B2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B2D0u;
label_17b2d0:
    // 0x17b2d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17b2d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b2d4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x17b2d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b2d8: 0x24170028  addiu       $s7, $zero, 0x28
    ctx->pc = 0x17b2d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x17b2dc: 0x24160012  addiu       $s6, $zero, 0x12
    ctx->pc = 0x17b2dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x17b2e0: 0x26540218  addiu       $s4, $s2, 0x218
    ctx->pc = 0x17b2e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 536));
    // 0x17b2e4: 0x92420530  lbu         $v0, 0x530($s2)
    ctx->pc = 0x17b2e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1328)));
label_17b2e8:
    // 0x17b2e8: 0x12620013  beq         $s3, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x17B2E8u;
    {
        const bool branch_taken_0x17b2e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x17B2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B2E8u;
        // 0x17b2ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b2e8) {
            ctx->pc = 0x17B338u;
            goto label_17b338;
        }
    }
    ctx->pc = 0x17B2F0u;
    // 0x17b2f0: 0x2372018  mult        $a0, $s1, $s7
    ctx->pc = 0x17b2f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x17b2f4: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x17b2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x17b2f8: 0x8c430210  lw          $v1, 0x210($v0)
    ctx->pc = 0x17b2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x17b2fc: 0x10760008  beq         $v1, $s6, . + 4 + (0x8 << 2)
    ctx->pc = 0x17B2FCu;
    {
        const bool branch_taken_0x17b2fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        ctx->pc = 0x17B300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B2FCu;
        // 0x17b300: 0x2841021  addu        $v0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b2fc) {
            ctx->pc = 0x17B320u;
            goto label_17b320;
        }
    }
    ctx->pc = 0x17B304u;
    // 0x17b304: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x17b304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x17b308: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x17b308u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b30c: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x17b30cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x17b310: 0xc05a64a  jal         func_169928
    ctx->pc = 0x17B310u;
    SET_GPR_U32(ctx, 31, 0x17B318u);
    ctx->pc = 0x17B314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B310u;
    // 0x17b314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169928u, 0x17B310u, 0x17B318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B318u;
label_17b318:
    // 0x17b318: 0x12a20007  beq         $s5, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17B318u;
    {
        const bool branch_taken_0x17b318 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x17B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B318u;
        // 0x17b31c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b318) {
            ctx->pc = 0x17B338u;
            goto label_17b338;
        }
    }
    ctx->pc = 0x17B320u;
label_17b320:
    // 0x17b320: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x17b320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x17b324: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x17b324u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17b328: 0x2e230014  sltiu       $v1, $s1, 0x14
    ctx->pc = 0x17b328u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x17b32c: 0x5460ffee  bnel        $v1, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x17B32Cu;
    {
        const bool branch_taken_0x17b32c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b32c) {
            ctx->pc = 0x17B330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B32Cu;
            // 0x17b330: 0x92420530  lbu         $v0, 0x530($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B2E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b2e8;
        }
    }
    ctx->pc = 0x17B334u;
    // 0x17b334: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17b334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b338:
    // 0x17b338: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17b338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b33c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17b33cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b340: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17b340u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b344: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17b344u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17b348: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17b348u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b34c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x17b34cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17b350: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x17b350u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17b354: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x17b354u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17b358: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17b358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17b35c: 0x3e00008  jr          $ra
    ctx->pc = 0x17B35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B35Cu;
        // 0x17b360: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B35Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B364u;
    // 0x17b364: 0x0  nop
    ctx->pc = 0x17b364u;
    // NOP
    ctx->pc = 0x17b368u;
}
