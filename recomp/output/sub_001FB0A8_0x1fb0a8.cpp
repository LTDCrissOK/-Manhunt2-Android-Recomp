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

// Function: sub_001FB0A8
// Address: 0x1fb0a8 - 0x1fb1c0
void sub_001FB0A8_0x1fb0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB0A8_0x1fb0a8");
#endif

    switch (ctx->pc) {
        case 0x1fb14cu: goto label_1fb14c;
        case 0x1fb184u: goto label_1fb184;
        default: break;
    }

    ctx->pc = 0x1fb0a8u;

    // 0x1fb0a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fb0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fb0ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fb0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fb0b0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1fb0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1fb0b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fb0b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb0b8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1fb0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1fb0bc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1fb0bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb0c0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1fb0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1fb0c4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1fb0c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb0c8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1fb0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1fb0cc: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1fb0ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb0d0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x1fb0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x1fb0d4: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x1fb0d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb0d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fb0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fb0dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fb0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fb0e0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fb0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1fb0e4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1fb0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1fb0e8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1fb0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1fb0ec: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1FB0ECu;
    {
        const bool branch_taken_0x1fb0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB0ECu;
        // 0x1fb0f0: 0x120f02d  daddu       $fp, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb0ec) {
            ctx->pc = 0x1FB18Cu;
            goto label_1fb18c;
        }
    }
    ctx->pc = 0x1FB0F4u;
    // 0x1fb0f4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1fb0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1fb0f8: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x1fb0f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1fb0fc: 0x8e231340  lw          $v1, 0x1340($s1)
    ctx->pc = 0x1fb0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4928)));
    // 0x1fb100: 0x4600023  bltz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1FB100u;
    {
        const bool branch_taken_0x1fb100 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1FB104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB100u;
        // 0x1fb104: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb100) {
            ctx->pc = 0x1FB190u;
            goto label_1fb190;
        }
    }
    ctx->pc = 0x1FB108u;
    // 0x1fb108: 0x8e2215e8  lw          $v0, 0x15E8($s1)
    ctx->pc = 0x1fb108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5608)));
    // 0x1fb10c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1FB10Cu;
    {
        const bool branch_taken_0x1fb10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB10Cu;
        // 0x1fb110: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb10c) {
            ctx->pc = 0x1FB190u;
            goto label_1fb190;
        }
    }
    ctx->pc = 0x1FB114u;
    // 0x1fb114: 0x922212e0  lbu         $v0, 0x12E0($s1)
    ctx->pc = 0x1fb114u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4832)));
    // 0x1fb118: 0x2c420014  sltiu       $v0, $v0, 0x14
    ctx->pc = 0x1fb118u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x1fb11c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1FB11Cu;
    {
        const bool branch_taken_0x1fb11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB11Cu;
        // 0x1fb120: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb11c) {
            ctx->pc = 0x1FB190u;
            goto label_1fb190;
        }
    }
    ctx->pc = 0x1FB124u;
    // 0x1fb124: 0x1280001b  beqz        $s4, . + 4 + (0x1B << 2)
    ctx->pc = 0x1FB124u;
    {
        const bool branch_taken_0x1fb124 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB124u;
        // 0x1fb128: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb124) {
            ctx->pc = 0x1FB194u;
            goto label_1fb194;
        }
    }
    ctx->pc = 0x1FB12Cu;
    // 0x1fb12c: 0x8e820104  lw          $v0, 0x104($s4)
    ctx->pc = 0x1fb12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
    // 0x1fb130: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fb130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fb134: 0x24730070  addiu       $s3, $v1, 0x70
    ctx->pc = 0x1fb134u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x1fb138: 0x12600014  beqz        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x1FB138u;
    {
        const bool branch_taken_0x1fb138 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB138u;
        // 0x1fb13c: 0x341092f0  ori         $s0, $zero, 0x92F0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37616);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb138) {
            ctx->pc = 0x1FB18Cu;
            goto label_1fb18c;
        }
    }
    ctx->pc = 0x1FB140u;
    // 0x1fb140: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1fb140u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1fb144: 0xc07e85c  jal         func_1FA170
    ctx->pc = 0x1FB144u;
    SET_GPR_U32(ctx, 31, 0x1FB14Cu);
    ctx->pc = 0x1FB148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB144u;
    // 0x1fb148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA170u, 0x1FB144u, 0x1FB14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB14Cu;
label_1fb14c:
    // 0x1fb14c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1fb14cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fb150: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fb150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb154: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1fb154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb158: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1fb158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb15c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1fb15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1fb160: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1fb160u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb164: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1fb164u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fb168: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1fb168u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb16c: 0xae341320  sw          $s4, 0x1320($s1)
    ctx->pc = 0x1fb16cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4896), GPR_U32(ctx, 20));
    // 0x1fb170: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x1fb170u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb174: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1fb174u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fb178: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1fb178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1fb17c: 0xc07ebba  jal         func_1FAEE8
    ctx->pc = 0x1FB17Cu;
    SET_GPR_U32(ctx, 31, 0x1FB184u);
    ctx->pc = 0x1FB180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB17Cu;
    // 0x1fb180: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAEE8u, 0x1FB17Cu, 0x1FB184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB184u;
label_1fb184:
    // 0x1fb184: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FB184u;
    {
        const bool branch_taken_0x1fb184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB184u;
        // 0x1fb188: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb184) {
            ctx->pc = 0x1FB194u;
            goto label_1fb194;
        }
    }
    ctx->pc = 0x1FB18Cu;
label_1fb18c:
    // 0x1fb18c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fb18cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb190:
    // 0x1fb190: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fb190u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fb194:
    // 0x1fb194: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fb194u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fb198: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fb198u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fb19c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fb19cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fb1a0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1fb1a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fb1a4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1fb1a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fb1a8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1fb1a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fb1ac: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1fb1acu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fb1b0: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1fb1b0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fb1b4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1fb1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fb1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB1B8u;
        // 0x1fb1bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB1C0u;
}
