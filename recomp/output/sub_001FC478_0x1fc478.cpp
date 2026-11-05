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

// Function: sub_001FC478
// Address: 0x1fc478 - 0x1fc578
void sub_001FC478_0x1fc478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC478_0x1fc478");
#endif

    switch (ctx->pc) {
        case 0x1fc510u: goto label_1fc510;
        case 0x1fc53cu: goto label_1fc53c;
        default: break;
    }

    ctx->pc = 0x1fc478u;

    // 0x1fc478: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fc478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fc47c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fc47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fc480: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fc480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1fc484: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fc484u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc488: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1fc488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1fc48c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1fc48cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc490: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1fc490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1fc494: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1fc494u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc498: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1fc498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1fc49c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1fc49cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc4a0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x1fc4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x1fc4a4: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x1fc4a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc4a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fc4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fc4ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fc4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fc4b0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1fc4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1fc4b4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1fc4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1fc4b8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1fc4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1fc4bc: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1FC4BCu;
    {
        const bool branch_taken_0x1fc4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC4BCu;
        // 0x1fc4c0: 0x120f02d  daddu       $fp, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc4bc) {
            ctx->pc = 0x1FC544u;
            goto label_1fc544;
        }
    }
    ctx->pc = 0x1FC4C4u;
    // 0x1fc4c4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1fc4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1fc4c8: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x1fc4c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1fc4cc: 0x8e231338  lw          $v1, 0x1338($s1)
    ctx->pc = 0x1fc4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4920)));
    // 0x1fc4d0: 0x460001d  bltz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1FC4D0u;
    {
        const bool branch_taken_0x1fc4d0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1FC4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC4D0u;
        // 0x1fc4d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc4d0) {
            ctx->pc = 0x1FC548u;
            goto label_1fc548;
        }
    }
    ctx->pc = 0x1FC4D8u;
    // 0x1fc4d8: 0x92220370  lbu         $v0, 0x370($s1)
    ctx->pc = 0x1fc4d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 880)));
    // 0x1fc4dc: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x1fc4dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1fc4e0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1FC4E0u;
    {
        const bool branch_taken_0x1fc4e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC4E0u;
        // 0x1fc4e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc4e0) {
            ctx->pc = 0x1FC548u;
            goto label_1fc548;
        }
    }
    ctx->pc = 0x1FC4E8u;
    // 0x1fc4e8: 0x12600018  beqz        $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x1FC4E8u;
    {
        const bool branch_taken_0x1fc4e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC4E8u;
        // 0x1fc4ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc4e8) {
            ctx->pc = 0x1FC54Cu;
            goto label_1fc54c;
        }
    }
    ctx->pc = 0x1FC4F0u;
    // 0x1fc4f0: 0x8e620104  lw          $v0, 0x104($s3)
    ctx->pc = 0x1fc4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
    // 0x1fc4f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fc4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fc4f8: 0x24740070  addiu       $s4, $v1, 0x70
    ctx->pc = 0x1fc4f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x1fc4fc: 0x12800011  beqz        $s4, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FC4FCu;
    {
        const bool branch_taken_0x1fc4fc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC4FCu;
        // 0x1fc500: 0x34108380  ori         $s0, $zero, 0x8380 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33664);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc4fc) {
            ctx->pc = 0x1FC544u;
            goto label_1fc544;
        }
    }
    ctx->pc = 0x1FC504u;
    // 0x1fc504: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1fc504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1fc508: 0xc07ecb0  jal         func_1FB2C0
    ctx->pc = 0x1FC508u;
    SET_GPR_U32(ctx, 31, 0x1FC510u);
    ctx->pc = 0x1FC50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC508u;
    // 0x1fc50c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB2C0u, 0x1FC508u, 0x1FC510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC510u;
label_1fc510:
    // 0x1fc510: 0xae3303b0  sw          $s3, 0x3B0($s1)
    ctx->pc = 0x1fc510u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 944), GPR_U32(ctx, 19));
    // 0x1fc514: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fc514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc518: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1fc518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc51c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1fc51cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc520: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1fc520u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fc524: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1fc524u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc528: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1fc528u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc52c: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x1fc52cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc530: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1fc530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1fc534: 0xc07f02c  jal         func_1FC0B0
    ctx->pc = 0x1FC534u;
    SET_GPR_U32(ctx, 31, 0x1FC53Cu);
    ctx->pc = 0x1FC538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC534u;
    // 0x1fc538: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0B0u, 0x1FC534u, 0x1FC53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC53Cu;
label_1fc53c:
    // 0x1fc53c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC53Cu;
    {
        const bool branch_taken_0x1fc53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC53Cu;
        // 0x1fc540: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc53c) {
            ctx->pc = 0x1FC54Cu;
            goto label_1fc54c;
        }
    }
    ctx->pc = 0x1FC544u;
label_1fc544:
    // 0x1fc544: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fc544u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fc548:
    // 0x1fc548: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fc548u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fc54c:
    // 0x1fc54c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fc54cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fc550: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fc550u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc554: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fc554u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fc558: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1fc558u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc55c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1fc55cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fc560: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1fc560u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fc564: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1fc564u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fc568: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1fc568u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fc56c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1fc56cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc570: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC570u;
        // 0x1fc574: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC578u;
}
