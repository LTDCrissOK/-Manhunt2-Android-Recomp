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

// Function: sub_001FC290
// Address: 0x1fc290 - 0x1fc3a0
void sub_001FC290_0x1fc290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC290_0x1fc290");
#endif

    switch (ctx->pc) {
        case 0x1fc328u: goto label_1fc328;
        case 0x1fc360u: goto label_1fc360;
        default: break;
    }

    ctx->pc = 0x1fc290u;

    // 0x1fc290: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fc290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fc294: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fc294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fc298: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1fc298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1fc29c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fc29cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc2a0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1fc2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1fc2a4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1fc2a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc2a8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1fc2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1fc2ac: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1fc2acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc2b0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1fc2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1fc2b4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1fc2b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc2b8: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x1fc2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x1fc2bc: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x1fc2bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc2c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fc2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fc2c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fc2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fc2c8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fc2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1fc2cc: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1fc2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1fc2d0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1fc2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fc2d4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1FC2D4u;
    {
        const bool branch_taken_0x1fc2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC2D4u;
        // 0x1fc2d8: 0x120f02d  daddu       $fp, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc2d4) {
            ctx->pc = 0x1FC368u;
            goto label_1fc368;
        }
    }
    ctx->pc = 0x1FC2DCu;
    // 0x1fc2dc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1fc2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1fc2e0: 0x2229021  addu        $s2, $s1, $v0
    ctx->pc = 0x1fc2e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1fc2e4: 0x8e431338  lw          $v1, 0x1338($s2)
    ctx->pc = 0x1fc2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4920)));
    // 0x1fc2e8: 0x4600020  bltz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1FC2E8u;
    {
        const bool branch_taken_0x1fc2e8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1FC2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC2E8u;
        // 0x1fc2ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc2e8) {
            ctx->pc = 0x1FC36Cu;
            goto label_1fc36c;
        }
    }
    ctx->pc = 0x1FC2F0u;
    // 0x1fc2f0: 0x92420370  lbu         $v0, 0x370($s2)
    ctx->pc = 0x1fc2f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 880)));
    // 0x1fc2f4: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x1fc2f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1fc2f8: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1FC2F8u;
    {
        const bool branch_taken_0x1fc2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC2F8u;
        // 0x1fc2fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc2f8) {
            ctx->pc = 0x1FC36Cu;
            goto label_1fc36c;
        }
    }
    ctx->pc = 0x1FC300u;
    // 0x1fc300: 0x1280001b  beqz        $s4, . + 4 + (0x1B << 2)
    ctx->pc = 0x1FC300u;
    {
        const bool branch_taken_0x1fc300 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC300u;
        // 0x1fc304: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc300) {
            ctx->pc = 0x1FC370u;
            goto label_1fc370;
        }
    }
    ctx->pc = 0x1FC308u;
    // 0x1fc308: 0x8e820104  lw          $v0, 0x104($s4)
    ctx->pc = 0x1fc308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
    // 0x1fc30c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fc30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fc310: 0x24730070  addiu       $s3, $v1, 0x70
    ctx->pc = 0x1fc310u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x1fc314: 0x12600014  beqz        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x1FC314u;
    {
        const bool branch_taken_0x1fc314 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC314u;
        // 0x1fc318: 0x34108380  ori         $s0, $zero, 0x8380 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33664);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc314) {
            ctx->pc = 0x1FC368u;
            goto label_1fc368;
        }
    }
    ctx->pc = 0x1FC31Cu;
    // 0x1fc31c: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x1fc31cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1fc320: 0xc07ecb0  jal         func_1FB2C0
    ctx->pc = 0x1FC320u;
    SET_GPR_U32(ctx, 31, 0x1FC328u);
    ctx->pc = 0x1FC324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC320u;
    // 0x1fc324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB2C0u, 0x1FC320u, 0x1FC328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC328u;
label_1fc328:
    // 0x1fc328: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1fc328u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fc32c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fc32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc330: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1fc330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc334: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1fc334u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc338: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1fc338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1fc33c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1fc33cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc340: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1fc340u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fc344: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1fc344u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc348: 0xae5403b0  sw          $s4, 0x3B0($s2)
    ctx->pc = 0x1fc348u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 944), GPR_U32(ctx, 20));
    // 0x1fc34c: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x1fc34cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc350: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1fc350u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fc354: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1fc354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1fc358: 0xc07f02c  jal         func_1FC0B0
    ctx->pc = 0x1FC358u;
    SET_GPR_U32(ctx, 31, 0x1FC360u);
    ctx->pc = 0x1FC35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC358u;
    // 0x1fc35c: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0B0u, 0x1FC358u, 0x1FC360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC360u;
label_1fc360:
    // 0x1fc360: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC360u;
    {
        const bool branch_taken_0x1fc360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC360u;
        // 0x1fc364: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc360) {
            ctx->pc = 0x1FC370u;
            goto label_1fc370;
        }
    }
    ctx->pc = 0x1FC368u;
label_1fc368:
    // 0x1fc368: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fc368u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fc36c:
    // 0x1fc36c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fc36cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fc370:
    // 0x1fc370: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fc370u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fc374: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fc374u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc378: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fc378u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fc37c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1fc37cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc380: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1fc380u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fc384: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1fc384u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fc388: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1fc388u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fc38c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1fc38cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fc390: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1fc390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc394: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC394u;
        // 0x1fc398: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC39Cu;
    // 0x1fc39c: 0x0  nop
    ctx->pc = 0x1fc39cu;
    // NOP
    ctx->pc = 0x1fc3a0u;
}
