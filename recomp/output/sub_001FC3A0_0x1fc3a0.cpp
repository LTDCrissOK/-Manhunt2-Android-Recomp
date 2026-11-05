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

// Function: sub_001FC3A0
// Address: 0x1fc3a0 - 0x1fc478
void sub_001FC3A0_0x1fc3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC3A0_0x1fc3a0");
#endif

    switch (ctx->pc) {
        case 0x1fc41cu: goto label_1fc41c;
        case 0x1fc444u: goto label_1fc444;
        default: break;
    }

    ctx->pc = 0x1fc3a0u;

    // 0x1fc3a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fc3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fc3a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fc3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fc3a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fc3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fc3ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fc3acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc3b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fc3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1fc3b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1fc3b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc3b8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1fc3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1fc3bc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1fc3bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc3c0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1fc3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1fc3c4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1fc3c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc3c8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1fc3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1fc3cc: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1fc3ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc3d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fc3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fc3d4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1fc3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1fc3d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1fc3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fc3dc: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1FC3DCu;
    {
        const bool branch_taken_0x1fc3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC3DCu;
        // 0x1fc3e0: 0x120b02d  daddu       $s6, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc3dc) {
            ctx->pc = 0x1FC44Cu;
            goto label_1fc44c;
        }
    }
    ctx->pc = 0x1FC3E4u;
    // 0x1fc3e4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1fc3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1fc3e8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1fc3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1fc3ec: 0x8c431338  lw          $v1, 0x1338($v0)
    ctx->pc = 0x1fc3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
    // 0x1fc3f0: 0x4620017  bltzl       $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1FC3F0u;
    {
        const bool branch_taken_0x1fc3f0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1fc3f0) {
            ctx->pc = 0x1FC3F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC3F0u;
            // 0x1fc3f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC450u;
            goto label_1fc450;
        }
    }
    ctx->pc = 0x1FC3F8u;
    // 0x1fc3f8: 0x90420370  lbu         $v0, 0x370($v0)
    ctx->pc = 0x1fc3f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x1fc3fc: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x1fc3fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1fc400: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FC400u;
    {
        const bool branch_taken_0x1fc400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC400u;
        // 0x1fc404: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc400) {
            ctx->pc = 0x1FC450u;
            goto label_1fc450;
        }
    }
    ctx->pc = 0x1FC408u;
    // 0x1fc408: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FC408u;
    {
        const bool branch_taken_0x1fc408 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC408u;
        // 0x1fc40c: 0x34108380  ori         $s0, $zero, 0x8380 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33664);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc408) {
            ctx->pc = 0x1FC450u;
            goto label_1fc450;
        }
    }
    ctx->pc = 0x1FC410u;
    // 0x1fc410: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x1fc410u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1fc414: 0xc07ecb0  jal         func_1FB2C0
    ctx->pc = 0x1FC414u;
    SET_GPR_U32(ctx, 31, 0x1FC41Cu);
    ctx->pc = 0x1FC418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC414u;
    // 0x1fc418: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB2C0u, 0x1FC414u, 0x1FC41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC41Cu;
label_1fc41c:
    // 0x1fc41c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1fc41cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fc420: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fc420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc424: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fc424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc428: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1fc428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc42c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1fc42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1fc430: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1fc430u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc434: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1fc434u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fc438: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1fc438u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc43c: 0xc07f02c  jal         func_1FC0B0
    ctx->pc = 0x1FC43Cu;
    SET_GPR_U32(ctx, 31, 0x1FC444u);
    ctx->pc = 0x1FC440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC43Cu;
    // 0x1fc440: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0B0u, 0x1FC43Cu, 0x1FC444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC444u;
label_1fc444:
    // 0x1fc444: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC444u;
    {
        const bool branch_taken_0x1fc444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC444u;
        // 0x1fc448: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc444) {
            ctx->pc = 0x1FC454u;
            goto label_1fc454;
        }
    }
    ctx->pc = 0x1FC44Cu;
label_1fc44c:
    // 0x1fc44c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fc44cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fc450:
    // 0x1fc450: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fc450u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fc454:
    // 0x1fc454: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fc454u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fc458: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fc458u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc45c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fc45cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fc460: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1fc460u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc464: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1fc464u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fc468: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1fc468u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fc46c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1fc46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fc470: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC470u;
        // 0x1fc474: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC478u;
}
