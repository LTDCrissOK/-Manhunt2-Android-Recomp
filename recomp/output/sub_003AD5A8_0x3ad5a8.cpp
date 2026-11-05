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

// Function: sub_003AD5A8
// Address: 0x3ad5a8 - 0x3ad688
void sub_003AD5A8_0x3ad5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AD5A8_0x3ad5a8");
#endif

    switch (ctx->pc) {
        case 0x3ad5a8u: goto label_3ad5a8;
        case 0x3ad5acu: goto label_3ad5ac;
        case 0x3ad5b0u: goto label_3ad5b0;
        case 0x3ad5b4u: goto label_3ad5b4;
        case 0x3ad5b8u: goto label_3ad5b8;
        case 0x3ad5bcu: goto label_3ad5bc;
        case 0x3ad5c0u: goto label_3ad5c0;
        case 0x3ad5c4u: goto label_3ad5c4;
        case 0x3ad5c8u: goto label_3ad5c8;
        case 0x3ad5ccu: goto label_3ad5cc;
        case 0x3ad5d0u: goto label_3ad5d0;
        case 0x3ad5d4u: goto label_3ad5d4;
        case 0x3ad5d8u: goto label_3ad5d8;
        case 0x3ad5dcu: goto label_3ad5dc;
        case 0x3ad5e0u: goto label_3ad5e0;
        case 0x3ad5e4u: goto label_3ad5e4;
        case 0x3ad5e8u: goto label_3ad5e8;
        case 0x3ad5ecu: goto label_3ad5ec;
        case 0x3ad5f0u: goto label_3ad5f0;
        case 0x3ad5f4u: goto label_3ad5f4;
        case 0x3ad5f8u: goto label_3ad5f8;
        case 0x3ad5fcu: goto label_3ad5fc;
        case 0x3ad600u: goto label_3ad600;
        case 0x3ad604u: goto label_3ad604;
        case 0x3ad608u: goto label_3ad608;
        case 0x3ad60cu: goto label_3ad60c;
        case 0x3ad610u: goto label_3ad610;
        case 0x3ad614u: goto label_3ad614;
        case 0x3ad618u: goto label_3ad618;
        case 0x3ad61cu: goto label_3ad61c;
        case 0x3ad620u: goto label_3ad620;
        case 0x3ad624u: goto label_3ad624;
        case 0x3ad628u: goto label_3ad628;
        case 0x3ad62cu: goto label_3ad62c;
        case 0x3ad630u: goto label_3ad630;
        case 0x3ad634u: goto label_3ad634;
        case 0x3ad638u: goto label_3ad638;
        case 0x3ad63cu: goto label_3ad63c;
        case 0x3ad640u: goto label_3ad640;
        case 0x3ad644u: goto label_3ad644;
        case 0x3ad648u: goto label_3ad648;
        case 0x3ad64cu: goto label_3ad64c;
        case 0x3ad650u: goto label_3ad650;
        case 0x3ad654u: goto label_3ad654;
        case 0x3ad658u: goto label_3ad658;
        case 0x3ad65cu: goto label_3ad65c;
        case 0x3ad660u: goto label_3ad660;
        case 0x3ad664u: goto label_3ad664;
        case 0x3ad668u: goto label_3ad668;
        case 0x3ad66cu: goto label_3ad66c;
        case 0x3ad670u: goto label_3ad670;
        case 0x3ad674u: goto label_3ad674;
        case 0x3ad678u: goto label_3ad678;
        case 0x3ad67cu: goto label_3ad67c;
        case 0x3ad680u: goto label_3ad680;
        case 0x3ad684u: goto label_3ad684;
        default: break;
    }

    ctx->pc = 0x3ad5a8u;

label_3ad5a8:
    // 0x3ad5a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ad5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3ad5ac:
    // 0x3ad5ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ad5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3ad5b0:
    // 0x3ad5b0: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x3ad5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
label_3ad5b4:
    // 0x3ad5b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3ad5b8:
    if (ctx->pc == 0x3AD5B8u) {
        ctx->pc = 0x3AD5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD5B4u;
        // 0x3ad5b8: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD5BCu;
        goto label_3ad5bc;
    }
    ctx->pc = 0x3AD5B4u;
    {
        const bool branch_taken_0x3ad5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD5B4u;
        // 0x3ad5b8: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad5b4) {
            ctx->pc = 0x3AD5C8u;
            goto label_3ad5c8;
        }
    }
    ctx->pc = 0x3AD5BCu;
label_3ad5bc:
    // 0x3ad5bc: 0x8c4336e0  lw          $v1, 0x36E0($v0)
    ctx->pc = 0x3ad5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14048)));
label_3ad5c0:
    // 0x3ad5c0: 0x60f809  jalr        $v1
label_3ad5c4:
    if (ctx->pc == 0x3AD5C4u) {
        ctx->pc = 0x3AD5C8u;
        goto label_3ad5c8;
    }
    ctx->pc = 0x3AD5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3AD5C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD5C0u, 0x3AD5C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AD5C8u;
label_3ad5c8:
    // 0x3ad5c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ad5c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ad5cc:
    // 0x3ad5cc: 0x3e00008  jr          $ra
label_3ad5d0:
    if (ctx->pc == 0x3AD5D0u) {
        ctx->pc = 0x3AD5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD5CCu;
        // 0x3ad5d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD5D4u;
        goto label_3ad5d4;
    }
    ctx->pc = 0x3AD5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD5CCu;
        // 0x3ad5d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD5CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD5D4u;
label_3ad5d4:
    // 0x3ad5d4: 0x0  nop
    ctx->pc = 0x3ad5d4u;
    // NOP
label_3ad5d8:
    // 0x3ad5d8: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x3ad5d8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ad5dc:
    // 0x3ad5dc: 0x8dc300c0  lw          $v1, 0xC0($t6)
    ctx->pc = 0x3ad5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 192)));
label_3ad5e0:
    // 0x3ad5e0: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_3ad5e4:
    if (ctx->pc == 0x3AD5E4u) {
        ctx->pc = 0x3AD5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD5E0u;
        // 0x3ad5e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD5E8u;
        goto label_3ad5e8;
    }
    ctx->pc = 0x3AD5E0u;
    {
        const bool branch_taken_0x3ad5e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD5E0u;
        // 0x3ad5e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad5e0) {
            ctx->pc = 0x3AD680u;
            goto label_3ad680;
        }
    }
    ctx->pc = 0x3AD5E8u;
label_3ad5e8:
    // 0x3ad5e8: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x3ad5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_3ad5ec:
    // 0x3ad5ec: 0x8dcc003c  lw          $t4, 0x3C($t6)
    ctx->pc = 0x3ad5ecu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 60)));
label_3ad5f0:
    // 0x3ad5f0: 0x8dcd0040  lw          $t5, 0x40($t6)
    ctx->pc = 0x3ad5f0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 64)));
label_3ad5f4:
    // 0x3ad5f4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x3ad5f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ad5f8:
    // 0x3ad5f8: 0x8dcb0044  lw          $t3, 0x44($t6)
    ctx->pc = 0x3ad5f8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 68)));
label_3ad5fc:
    // 0x3ad5fc: 0x24090600  addiu       $t1, $zero, 0x600
    ctx->pc = 0x3ad5fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
label_3ad600:
    // 0x3ad600: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x3ad600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3ad604:
    // 0x3ad604: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3ad604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3ad608:
    // 0x3ad608: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x3ad608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_3ad60c:
    // 0x3ad60c: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x3ad60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3ad610:
    // 0x3ad610: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3ad610u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ad614:
    // 0x3ad614: 0x2408007f  addiu       $t0, $zero, 0x7F
    ctx->pc = 0x3ad614u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_3ad618:
    // 0x3ad618: 0x3402bb80  ori         $v0, $zero, 0xBB80
    ctx->pc = 0x3ad618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
label_3ad61c:
    // 0x3ad61c: 0xa1ca000e  sb          $t2, 0xE($t6)
    ctx->pc = 0x3ad61cu;
    WRITE8(ADD32(GPR_U32(ctx, 14), 14), (uint8_t)GPR_U32(ctx, 10));
label_3ad620:
    // 0x3ad620: 0xa1c4000d  sb          $a0, 0xD($t6)
    ctx->pc = 0x3ad620u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 13), (uint8_t)GPR_U32(ctx, 4));
label_3ad624:
    // 0x3ad624: 0xadc30018  sw          $v1, 0x18($t6)
    ctx->pc = 0x3ad624u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 24), GPR_U32(ctx, 3));
label_3ad628:
    // 0x3ad628: 0xa1c5000f  sb          $a1, 0xF($t6)
    ctx->pc = 0x3ad628u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 15), (uint8_t)GPR_U32(ctx, 5));
label_3ad62c:
    // 0x3ad62c: 0xa5c60098  sh          $a2, 0x98($t6)
    ctx->pc = 0x3ad62cu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 152), (uint16_t)GPR_U32(ctx, 6));
label_3ad630:
    // 0x3ad630: 0xadc70050  sw          $a3, 0x50($t6)
    ctx->pc = 0x3ad630u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 80), GPR_U32(ctx, 7));
label_3ad634:
    // 0x3ad634: 0xadc80054  sw          $t0, 0x54($t6)
    ctx->pc = 0x3ad634u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 84), GPR_U32(ctx, 8));
label_3ad638:
    // 0x3ad638: 0xadc90058  sw          $t1, 0x58($t6)
    ctx->pc = 0x3ad638u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 88), GPR_U32(ctx, 9));
label_3ad63c:
    // 0x3ad63c: 0xadcc005c  sw          $t4, 0x5C($t6)
    ctx->pc = 0x3ad63cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 92), GPR_U32(ctx, 12));
label_3ad640:
    // 0x3ad640: 0xadcd0060  sw          $t5, 0x60($t6)
    ctx->pc = 0x3ad640u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 96), GPR_U32(ctx, 13));
label_3ad644:
    // 0x3ad644: 0xadcb0064  sw          $t3, 0x64($t6)
    ctx->pc = 0x3ad644u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 100), GPR_U32(ctx, 11));
label_3ad648:
    // 0x3ad648: 0xadc00088  sw          $zero, 0x88($t6)
    ctx->pc = 0x3ad648u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 136), GPR_U32(ctx, 0));
label_3ad64c:
    // 0x3ad64c: 0xa5ca0002  sh          $t2, 0x2($t6)
    ctx->pc = 0x3ad64cu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 2), (uint16_t)GPR_U32(ctx, 10));
label_3ad650:
    // 0x3ad650: 0xadc90010  sw          $t1, 0x10($t6)
    ctx->pc = 0x3ad650u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 16), GPR_U32(ctx, 9));
label_3ad654:
    // 0x3ad654: 0xadc0008c  sw          $zero, 0x8C($t6)
    ctx->pc = 0x3ad654u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 140), GPR_U32(ctx, 0));
label_3ad658:
    // 0x3ad658: 0xa5c0001c  sh          $zero, 0x1C($t6)
    ctx->pc = 0x3ad658u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 28), (uint16_t)GPR_U32(ctx, 0));
label_3ad65c:
    // 0x3ad65c: 0xa5c00024  sh          $zero, 0x24($t6)
    ctx->pc = 0x3ad65cu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 36), (uint16_t)GPR_U32(ctx, 0));
label_3ad660:
    // 0x3ad660: 0xa5c00026  sh          $zero, 0x26($t6)
    ctx->pc = 0x3ad660u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 38), (uint16_t)GPR_U32(ctx, 0));
label_3ad664:
    // 0x3ad664: 0xadc00020  sw          $zero, 0x20($t6)
    ctx->pc = 0x3ad664u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 32), GPR_U32(ctx, 0));
label_3ad668:
    // 0x3ad668: 0xadc00028  sw          $zero, 0x28($t6)
    ctx->pc = 0x3ad668u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 40), GPR_U32(ctx, 0));
label_3ad66c:
    // 0x3ad66c: 0xadc0002c  sw          $zero, 0x2C($t6)
    ctx->pc = 0x3ad66cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 44), GPR_U32(ctx, 0));
label_3ad670:
    // 0x3ad670: 0xadc00030  sw          $zero, 0x30($t6)
    ctx->pc = 0x3ad670u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 48), GPR_U32(ctx, 0));
label_3ad674:
    // 0x3ad674: 0xadc00034  sw          $zero, 0x34($t6)
    ctx->pc = 0x3ad674u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 52), GPR_U32(ctx, 0));
label_3ad678:
    // 0x3ad678: 0xadc20014  sw          $v0, 0x14($t6)
    ctx->pc = 0x3ad678u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 20), GPR_U32(ctx, 2));
label_3ad67c:
    // 0x3ad67c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ad67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ad680:
    // 0x3ad680: 0x3e00008  jr          $ra
label_3ad684:
    if (ctx->pc == 0x3AD684u) {
        ctx->pc = 0x3AD688u;
        goto label_fallthrough_0x3ad680;
    }
    ctx->pc = 0x3AD680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ad680:
    ctx->pc = 0x3AD688u;
}
