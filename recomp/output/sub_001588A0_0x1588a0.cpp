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

// Function: sub_001588A0
// Address: 0x1588a0 - 0x158960
void sub_001588A0_0x1588a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001588A0_0x1588a0");
#endif

    switch (ctx->pc) {
        case 0x1588a0u: goto label_1588a0;
        case 0x1588a4u: goto label_1588a4;
        case 0x1588a8u: goto label_1588a8;
        case 0x1588acu: goto label_1588ac;
        case 0x1588b0u: goto label_1588b0;
        case 0x1588b4u: goto label_1588b4;
        case 0x1588b8u: goto label_1588b8;
        case 0x1588bcu: goto label_1588bc;
        case 0x1588c0u: goto label_1588c0;
        case 0x1588c4u: goto label_1588c4;
        case 0x1588c8u: goto label_1588c8;
        case 0x1588ccu: goto label_1588cc;
        case 0x1588d0u: goto label_1588d0;
        case 0x1588d4u: goto label_1588d4;
        case 0x1588d8u: goto label_1588d8;
        case 0x1588dcu: goto label_1588dc;
        case 0x1588e0u: goto label_1588e0;
        case 0x1588e4u: goto label_1588e4;
        case 0x1588e8u: goto label_1588e8;
        case 0x1588ecu: goto label_1588ec;
        case 0x1588f0u: goto label_1588f0;
        case 0x1588f4u: goto label_1588f4;
        case 0x1588f8u: goto label_1588f8;
        case 0x1588fcu: goto label_1588fc;
        case 0x158900u: goto label_158900;
        case 0x158904u: goto label_158904;
        case 0x158908u: goto label_158908;
        case 0x15890cu: goto label_15890c;
        case 0x158910u: goto label_158910;
        case 0x158914u: goto label_158914;
        case 0x158918u: goto label_158918;
        case 0x15891cu: goto label_15891c;
        case 0x158920u: goto label_158920;
        case 0x158924u: goto label_158924;
        case 0x158928u: goto label_158928;
        case 0x15892cu: goto label_15892c;
        case 0x158930u: goto label_158930;
        case 0x158934u: goto label_158934;
        case 0x158938u: goto label_158938;
        case 0x15893cu: goto label_15893c;
        case 0x158940u: goto label_158940;
        case 0x158944u: goto label_158944;
        case 0x158948u: goto label_158948;
        case 0x15894cu: goto label_15894c;
        case 0x158950u: goto label_158950;
        case 0x158954u: goto label_158954;
        case 0x158958u: goto label_158958;
        case 0x15895cu: goto label_15895c;
        default: break;
    }

    ctx->pc = 0x1588a0u;

label_1588a0:
    // 0x1588a0: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x1588a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_1588a4:
    // 0x1588a4: 0xffb201c0  sd          $s2, 0x1C0($sp)
    ctx->pc = 0x1588a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 18));
label_1588a8:
    // 0x1588a8: 0xffb001b0  sd          $s0, 0x1B0($sp)
    ctx->pc = 0x1588a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 16));
label_1588ac:
    // 0x1588ac: 0xffb101b8  sd          $s1, 0x1B8($sp)
    ctx->pc = 0x1588acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 440), GPR_U64(ctx, 17));
label_1588b0:
    // 0x1588b0: 0xffb301c8  sd          $s3, 0x1C8($sp)
    ctx->pc = 0x1588b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 19));
label_1588b4:
    // 0x1588b4: 0xffbf01d0  sd          $ra, 0x1D0($sp)
    ctx->pc = 0x1588b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 31));
label_1588b8:
    // 0x1588b8: 0xc04f1e0  jal         func_13C780
label_1588bc:
    if (ctx->pc == 0x1588BCu) {
        ctx->pc = 0x1588BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1588B8u;
        // 0x1588bc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1588C0u;
        goto label_1588c0;
    }
    ctx->pc = 0x1588B8u;
    SET_GPR_U32(ctx, 31, 0x1588C0u);
    ctx->pc = 0x1588BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1588B8u;
    // 0x1588bc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C780u, 0x1588B8u, 0x1588C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1588C0u;
label_1588c0:
    // 0x1588c0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1588c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1588c4:
    // 0x1588c4: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x1588c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1588c8:
    // 0x1588c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1588c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1588cc:
    // 0x1588cc: 0xc04f33e  jal         func_13CCF8
label_1588d0:
    if (ctx->pc == 0x1588D0u) {
        ctx->pc = 0x1588D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1588CCu;
        // 0x1588d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1588D4u;
        goto label_1588d4;
    }
    ctx->pc = 0x1588CCu;
    SET_GPR_U32(ctx, 31, 0x1588D4u);
    ctx->pc = 0x1588D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1588CCu;
    // 0x1588d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCF8u, 0x1588CCu, 0x1588D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1588D4u;
label_1588d4:
    // 0x1588d4: 0xc05a7b0  jal         func_169EC0
label_1588d8:
    if (ctx->pc == 0x1588D8u) {
        ctx->pc = 0x1588D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1588D4u;
        // 0x1588d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1588DCu;
        goto label_1588dc;
    }
    ctx->pc = 0x1588D4u;
    SET_GPR_U32(ctx, 31, 0x1588DCu);
    ctx->pc = 0x1588D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1588D4u;
    // 0x1588d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169EC0u, 0x1588D4u, 0x1588DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1588DCu;
label_1588dc:
    // 0x1588dc: 0xc05abc8  jal         func_16AF20
label_1588e0:
    if (ctx->pc == 0x1588E0u) {
        ctx->pc = 0x1588E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1588DCu;
        // 0x1588e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1588E4u;
        goto label_1588e4;
    }
    ctx->pc = 0x1588DCu;
    SET_GPR_U32(ctx, 31, 0x1588E4u);
    ctx->pc = 0x1588E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1588DCu;
    // 0x1588e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AF20u, 0x1588DCu, 0x1588E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1588E4u;
label_1588e4:
    // 0x1588e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1588e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1588e8:
    // 0x1588e8: 0x3403c34f  ori         $v1, $zero, 0xC34F
    ctx->pc = 0x1588e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49999);
label_1588ec:
    // 0x1588ec: 0xa6030016  sh          $v1, 0x16($s0)
    ctx->pc = 0x1588ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 3));
label_1588f0:
    // 0x1588f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1588f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1588f4:
    // 0x1588f4: 0xa6030014  sh          $v1, 0x14($s0)
    ctx->pc = 0x1588f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
label_1588f8:
    // 0x1588f8: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1588f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1588fc:
    // 0x1588fc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1588fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_158900:
    // 0x158900: 0x8e420308  lw          $v0, 0x308($s2)
    ctx->pc = 0x158900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 776)));
label_158904:
    // 0x158904: 0xc04f0b6  jal         func_13C2D8
label_158908:
    if (ctx->pc == 0x158908u) {
        ctx->pc = 0x158908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158904u;
        // 0x158908: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15890Cu;
        goto label_15890c;
    }
    ctx->pc = 0x158904u;
    SET_GPR_U32(ctx, 31, 0x15890Cu);
    ctx->pc = 0x158908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158904u;
    // 0x158908: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x158904u, 0x15890Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15890Cu;
label_15890c:
    // 0x15890c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15890cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_158910:
    // 0x158910: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x158910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_158914:
    // 0x158914: 0xc046304  jal         func_118C10
label_158918:
    if (ctx->pc == 0x158918u) {
        ctx->pc = 0x158918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158914u;
        // 0x158918: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15891Cu;
        goto label_15891c;
    }
    ctx->pc = 0x158914u;
    SET_GPR_U32(ctx, 31, 0x15891Cu);
    ctx->pc = 0x158918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158914u;
    // 0x158918: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118C10u, 0x158914u, 0x15891Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15891Cu;
label_15891c:
    // 0x15891c: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x15891cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_158920:
    // 0x158920: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x158920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_158924:
    // 0x158924: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x158924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_158928:
    // 0x158928: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x158928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_15892c:
    // 0x15892c: 0x40f809  jalr        $v0
label_158930:
    if (ctx->pc == 0x158930u) {
        ctx->pc = 0x158930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15892Cu;
        // 0x158930: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158934u;
        goto label_158934;
    }
    ctx->pc = 0x15892Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x158934u);
        ctx->pc = 0x158930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15892Cu;
        // 0x158930: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15892Cu, 0x158934u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158934u;
label_158934:
    // 0x158934: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x158934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_158938:
    // 0x158938: 0xc05a7e6  jal         func_169F98
label_15893c:
    if (ctx->pc == 0x15893Cu) {
        ctx->pc = 0x15893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158938u;
        // 0x15893c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158940u;
        goto label_158940;
    }
    ctx->pc = 0x158938u;
    SET_GPR_U32(ctx, 31, 0x158940u);
    ctx->pc = 0x15893Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158938u;
    // 0x15893c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169F98u, 0x158938u, 0x158940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158940u;
label_158940:
    // 0x158940: 0xdfb001b0  ld          $s0, 0x1B0($sp)
    ctx->pc = 0x158940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 432)));
label_158944:
    // 0x158944: 0xdfb101b8  ld          $s1, 0x1B8($sp)
    ctx->pc = 0x158944u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 440)));
label_158948:
    // 0x158948: 0xdfb201c0  ld          $s2, 0x1C0($sp)
    ctx->pc = 0x158948u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 448)));
label_15894c:
    // 0x15894c: 0xdfb301c8  ld          $s3, 0x1C8($sp)
    ctx->pc = 0x15894cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 456)));
label_158950:
    // 0x158950: 0xdfbf01d0  ld          $ra, 0x1D0($sp)
    ctx->pc = 0x158950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 464)));
label_158954:
    // 0x158954: 0x3e00008  jr          $ra
label_158958:
    if (ctx->pc == 0x158958u) {
        ctx->pc = 0x158958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158954u;
        // 0x158958: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15895Cu;
        goto label_15895c;
    }
    ctx->pc = 0x158954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158954u;
        // 0x158958: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15895Cu;
label_15895c:
    // 0x15895c: 0x0  nop
    ctx->pc = 0x15895cu;
    // NOP
    ctx->pc = 0x158960u;
}
