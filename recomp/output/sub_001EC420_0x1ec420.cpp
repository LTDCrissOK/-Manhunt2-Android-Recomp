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

// Function: sub_001EC420
// Address: 0x1ec420 - 0x1ec520
void sub_001EC420_0x1ec420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC420_0x1ec420");
#endif

    switch (ctx->pc) {
        case 0x1ec4a8u: goto label_1ec4a8;
        case 0x1ec4d0u: goto label_1ec4d0;
        default: break;
    }

    ctx->pc = 0x1ec420u;

    // 0x1ec420: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ec420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ec424: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ec424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ec428: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ec428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ec42c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ec42cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec430: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ec430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ec434: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ec434u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec438: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1ec438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1ec43c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1ec43cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec440: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1ec440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1ec444: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1ec444u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec448: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1ec448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1ec44c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1ec44cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec450: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ec450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ec454: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1ec454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1ec458: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ec458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ec45c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1EC45Cu;
    {
        const bool branch_taken_0x1ec45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC45Cu;
        // 0x1ec460: 0x120b02d  daddu       $s6, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec45c) {
            ctx->pc = 0x1EC4D8u;
            goto label_1ec4d8;
        }
    }
    ctx->pc = 0x1EC464u;
    // 0x1ec464: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1ec464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ec468: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1ec468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ec46c: 0x8c83133c  lw          $v1, 0x133C($a0)
    ctx->pc = 0x1ec46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4924)));
    // 0x1ec470: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1EC470u;
    {
        const bool branch_taken_0x1ec470 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1EC474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC470u;
        // 0x1ec474: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec470) {
            ctx->pc = 0x1EC4DCu;
            goto label_1ec4dc;
        }
    }
    ctx->pc = 0x1EC478u;
    // 0x1ec478: 0x8c8215e8  lw          $v0, 0x15E8($a0)
    ctx->pc = 0x1ec478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5608)));
    // 0x1ec47c: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1EC47Cu;
    {
        const bool branch_taken_0x1ec47c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC47Cu;
        // 0x1ec480: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec47c) {
            ctx->pc = 0x1EC4DCu;
            goto label_1ec4dc;
        }
    }
    ctx->pc = 0x1EC484u;
    // 0x1ec484: 0x90820d80  lbu         $v0, 0xD80($a0)
    ctx->pc = 0x1ec484u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3456)));
    // 0x1ec488: 0x2c42001e  sltiu       $v0, $v0, 0x1E
    ctx->pc = 0x1ec488u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x1ec48c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1EC48Cu;
    {
        const bool branch_taken_0x1ec48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC48Cu;
        // 0x1ec490: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec48c) {
            ctx->pc = 0x1EC4DCu;
            goto label_1ec4dc;
        }
    }
    ctx->pc = 0x1EC494u;
    // 0x1ec494: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1EC494u;
    {
        const bool branch_taken_0x1ec494 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC494u;
        // 0x1ec498: 0x34108d90  ori         $s0, $zero, 0x8D90 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36240);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec494) {
            ctx->pc = 0x1EC4DCu;
            goto label_1ec4dc;
        }
    }
    ctx->pc = 0x1EC49Cu;
    // 0x1ec49c: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x1ec49cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1ec4a0: 0xc07abea  jal         func_1EAFA8
    ctx->pc = 0x1EC4A0u;
    SET_GPR_U32(ctx, 31, 0x1EC4A8u);
    ctx->pc = 0x1EC4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC4A0u;
    // 0x1ec4a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAFA8u, 0x1EC4A0u, 0x1EC4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC4A8u;
label_1ec4a8:
    // 0x1ec4a8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1ec4a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ec4ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ec4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec4b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ec4b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec4b4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ec4b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec4b8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1ec4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1ec4bc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1ec4bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec4c0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1ec4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ec4c4: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1ec4c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec4c8: 0xc07b050  jal         func_1EC140
    ctx->pc = 0x1EC4C8u;
    SET_GPR_U32(ctx, 31, 0x1EC4D0u);
    ctx->pc = 0x1EC4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC4C8u;
    // 0x1ec4cc: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC140u, 0x1EC4C8u, 0x1EC4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC4D0u;
label_1ec4d0:
    // 0x1ec4d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC4D0u;
    {
        const bool branch_taken_0x1ec4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC4D0u;
        // 0x1ec4d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec4d0) {
            ctx->pc = 0x1EC4E0u;
            goto label_1ec4e0;
        }
    }
    ctx->pc = 0x1EC4D8u;
label_1ec4d8:
    // 0x1ec4d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ec4d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec4dc:
    // 0x1ec4dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ec4dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ec4e0:
    // 0x1ec4e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ec4e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ec4e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ec4e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec4e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ec4e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ec4ec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ec4ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec4f0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1ec4f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ec4f4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1ec4f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ec4f8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1ec4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ec4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC4FCu;
        // 0x1ec500: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC504u;
    // 0x1ec504: 0x0  nop
    ctx->pc = 0x1ec504u;
    // NOP
    // 0x1ec508: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1ec508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ec50c: 0x0  nop
    ctx->pc = 0x1ec50cu;
    // NOP
    // 0x1ec510: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1ec510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ec514: 0x0  nop
    ctx->pc = 0x1ec514u;
    // NOP
    // 0x1ec518: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ec518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec51c: 0x0  nop
    ctx->pc = 0x1ec51cu;
    // NOP
    ctx->pc = 0x1ec520u;
}
