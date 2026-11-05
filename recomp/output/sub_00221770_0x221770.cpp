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

// Function: sub_00221770
// Address: 0x221770 - 0x222498
void sub_00221770_0x221770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221770_0x221770");
#endif

    switch (ctx->pc) {
        case 0x2217acu: goto label_2217ac;
        case 0x2217c0u: goto label_2217c0;
        case 0x2217d8u: goto label_2217d8;
        case 0x2217ecu: goto label_2217ec;
        case 0x221804u: goto label_221804;
        case 0x221818u: goto label_221818;
        case 0x221830u: goto label_221830;
        case 0x221844u: goto label_221844;
        case 0x22185cu: goto label_22185c;
        case 0x221870u: goto label_221870;
        case 0x221888u: goto label_221888;
        case 0x22189cu: goto label_22189c;
        case 0x2218b4u: goto label_2218b4;
        case 0x2218c8u: goto label_2218c8;
        case 0x2218e0u: goto label_2218e0;
        case 0x2218f4u: goto label_2218f4;
        case 0x22190cu: goto label_22190c;
        case 0x221934u: goto label_221934;
        case 0x221948u: goto label_221948;
        case 0x221960u: goto label_221960;
        case 0x22198cu: goto label_22198c;
        case 0x2219b8u: goto label_2219b8;
        case 0x2219e4u: goto label_2219e4;
        case 0x221a10u: goto label_221a10;
        case 0x221a24u: goto label_221a24;
        case 0x221a30u: goto label_221a30;
        case 0x221a84u: goto label_221a84;
        case 0x221a98u: goto label_221a98;
        case 0x221aa8u: goto label_221aa8;
        case 0x221b0cu: goto label_221b0c;
        case 0x221b38u: goto label_221b38;
        case 0x221b58u: goto label_221b58;
        case 0x221b8cu: goto label_221b8c;
        case 0x221bacu: goto label_221bac;
        case 0x221bc4u: goto label_221bc4;
        case 0x221bf0u: goto label_221bf0;
        case 0x221c1cu: goto label_221c1c;
        case 0x221c48u: goto label_221c48;
        case 0x221c74u: goto label_221c74;
        case 0x221ca0u: goto label_221ca0;
        case 0x221cc0u: goto label_221cc0;
        case 0x221cd8u: goto label_221cd8;
        case 0x221d04u: goto label_221d04;
        case 0x221d30u: goto label_221d30;
        case 0x221d50u: goto label_221d50;
        case 0x221d68u: goto label_221d68;
        case 0x221d7cu: goto label_221d7c;
        case 0x221d90u: goto label_221d90;
        case 0x221da8u: goto label_221da8;
        case 0x221db4u: goto label_221db4;
        case 0x221dd8u: goto label_221dd8;
        case 0x221decu: goto label_221dec;
        case 0x221e00u: goto label_221e00;
        case 0x221e68u: goto label_221e68;
        case 0x221e8cu: goto label_221e8c;
        case 0x221ea0u: goto label_221ea0;
        case 0x221eb8u: goto label_221eb8;
        case 0x221eccu: goto label_221ecc;
        case 0x221ee4u: goto label_221ee4;
        case 0x221ef8u: goto label_221ef8;
        case 0x221f10u: goto label_221f10;
        case 0x221f2cu: goto label_221f2c;
        case 0x221f44u: goto label_221f44;
        case 0x221f58u: goto label_221f58;
        case 0x221f70u: goto label_221f70;
        case 0x221f8cu: goto label_221f8c;
        case 0x221fa4u: goto label_221fa4;
        case 0x221fb8u: goto label_221fb8;
        case 0x221fd0u: goto label_221fd0;
        case 0x221fe4u: goto label_221fe4;
        case 0x221ffcu: goto label_221ffc;
        case 0x222010u: goto label_222010;
        case 0x222028u: goto label_222028;
        case 0x22203cu: goto label_22203c;
        case 0x222050u: goto label_222050;
        case 0x22207cu: goto label_22207c;
        case 0x222090u: goto label_222090;
        case 0x22209cu: goto label_22209c;
        case 0x2220a4u: goto label_2220a4;
        case 0x2220b4u: goto label_2220b4;
        case 0x2220c8u: goto label_2220c8;
        case 0x2220e4u: goto label_2220e4;
        case 0x2220fcu: goto label_2220fc;
        case 0x222118u: goto label_222118;
        case 0x222130u: goto label_222130;
        case 0x222144u: goto label_222144;
        case 0x22215cu: goto label_22215c;
        case 0x222170u: goto label_222170;
        case 0x222188u: goto label_222188;
        case 0x22219cu: goto label_22219c;
        case 0x2221b4u: goto label_2221b4;
        case 0x2221c8u: goto label_2221c8;
        case 0x2221e0u: goto label_2221e0;
        case 0x2221f4u: goto label_2221f4;
        case 0x22220cu: goto label_22220c;
        case 0x222220u: goto label_222220;
        case 0x222238u: goto label_222238;
        case 0x22224cu: goto label_22224c;
        case 0x222264u: goto label_222264;
        case 0x222278u: goto label_222278;
        case 0x222290u: goto label_222290;
        case 0x2222a4u: goto label_2222a4;
        case 0x2222bcu: goto label_2222bc;
        case 0x2222d0u: goto label_2222d0;
        case 0x2222e8u: goto label_2222e8;
        case 0x2222fcu: goto label_2222fc;
        case 0x222314u: goto label_222314;
        case 0x222328u: goto label_222328;
        case 0x222340u: goto label_222340;
        case 0x222354u: goto label_222354;
        case 0x22236cu: goto label_22236c;
        case 0x222380u: goto label_222380;
        case 0x222398u: goto label_222398;
        case 0x2223acu: goto label_2223ac;
        case 0x2223c4u: goto label_2223c4;
        case 0x2223d8u: goto label_2223d8;
        case 0x2223f0u: goto label_2223f0;
        case 0x222404u: goto label_222404;
        case 0x22241cu: goto label_22241c;
        case 0x222430u: goto label_222430;
        case 0x222448u: goto label_222448;
        case 0x222460u: goto label_222460;
        case 0x222470u: goto label_222470;
        default: break;
    }

    ctx->pc = 0x221770u;

    // 0x221770: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x221770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x221774: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x221774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x221778: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x221778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x22177c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22177cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221780: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x221780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x221784: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x221784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x221788: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x221788u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22178c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x22178cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x221790: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x221790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x221794: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x221794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x221798: 0x2451fe40  addiu       $s1, $v0, -0x1C0
    ctx->pc = 0x221798u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966848));
    // 0x22179c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x22179cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2217a0: 0x24a52b40  addiu       $a1, $a1, 0x2B40
    ctx->pc = 0x2217a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11072));
    // 0x2217a4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2217A4u;
    SET_GPR_U32(ctx, 31, 0x2217ACu);
    ctx->pc = 0x2217A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2217A4u;
    // 0x2217a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2217A4u, 0x2217ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2217ACu;
label_2217ac:
    // 0x2217ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2217acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2217b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2217B0u;
    {
        const bool branch_taken_0x2217b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2217B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2217B0u;
        // 0x2217b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2217b0) {
            ctx->pc = 0x2217C8u;
            goto label_2217c8;
        }
    }
    ctx->pc = 0x2217B8u;
    // 0x2217b8: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x2217B8u;
    SET_GPR_U32(ctx, 31, 0x2217C0u);
    ctx->pc = 0x2217BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2217B8u;
    // 0x2217bc: 0x26650340  addiu       $a1, $s3, 0x340 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x2217B8u, 0x2217C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2217C0u;
label_2217c0:
    // 0x2217c0: 0x1000032c  b           . + 4 + (0x32C << 2)
    ctx->pc = 0x2217C0u;
    {
        const bool branch_taken_0x2217c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2217C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2217C0u;
        // 0x2217c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2217c0) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x2217C8u;
label_2217c8:
    // 0x2217c8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2217c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2217cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2217ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2217d0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2217D0u;
    SET_GPR_U32(ctx, 31, 0x2217D8u);
    ctx->pc = 0x2217D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2217D0u;
    // 0x2217d4: 0x24a52b48  addiu       $a1, $a1, 0x2B48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2217D0u, 0x2217D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2217D8u;
label_2217d8:
    // 0x2217d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2217d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2217dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2217DCu;
    {
        const bool branch_taken_0x2217dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2217E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2217DCu;
        // 0x2217e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2217dc) {
            ctx->pc = 0x2217F4u;
            goto label_2217f4;
        }
    }
    ctx->pc = 0x2217E4u;
    // 0x2217e4: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x2217E4u;
    SET_GPR_U32(ctx, 31, 0x2217ECu);
    ctx->pc = 0x2217E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2217E4u;
    // 0x2217e8: 0x26650348  addiu       $a1, $s3, 0x348 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x2217E4u, 0x2217ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2217ECu;
label_2217ec:
    // 0x2217ec: 0x10000321  b           . + 4 + (0x321 << 2)
    ctx->pc = 0x2217ECu;
    {
        const bool branch_taken_0x2217ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2217F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2217ECu;
        // 0x2217f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2217ec) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x2217F4u;
label_2217f4:
    // 0x2217f4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2217f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2217f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2217f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2217fc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2217FCu;
    SET_GPR_U32(ctx, 31, 0x221804u);
    ctx->pc = 0x221800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2217FCu;
    // 0x221800: 0x24a52b58  addiu       $a1, $a1, 0x2B58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2217FCu, 0x221804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221804u;
label_221804:
    // 0x221804: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x221804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x221808: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x221808u;
    {
        const bool branch_taken_0x221808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221808u;
        // 0x22180c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221808) {
            ctx->pc = 0x221820u;
            goto label_221820;
        }
    }
    ctx->pc = 0x221810u;
    // 0x221810: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x221810u;
    SET_GPR_U32(ctx, 31, 0x221818u);
    ctx->pc = 0x221814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221810u;
    // 0x221814: 0x26650350  addiu       $a1, $s3, 0x350 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x221810u, 0x221818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221818u;
label_221818:
    // 0x221818: 0x10000316  b           . + 4 + (0x316 << 2)
    ctx->pc = 0x221818u;
    {
        const bool branch_taken_0x221818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221818u;
        // 0x22181c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221818) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x221820u;
label_221820:
    // 0x221820: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x221820u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x221824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221828: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x221828u;
    SET_GPR_U32(ctx, 31, 0x221830u);
    ctx->pc = 0x22182Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221828u;
    // 0x22182c: 0x24a52b68  addiu       $a1, $a1, 0x2B68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x221828u, 0x221830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221830u;
label_221830:
    // 0x221830: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x221830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x221834: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x221834u;
    {
        const bool branch_taken_0x221834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221834u;
        // 0x221838: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221834) {
            ctx->pc = 0x22184Cu;
            goto label_22184c;
        }
    }
    ctx->pc = 0x22183Cu;
    // 0x22183c: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x22183Cu;
    SET_GPR_U32(ctx, 31, 0x221844u);
    ctx->pc = 0x221840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22183Cu;
    // 0x221840: 0x26650358  addiu       $a1, $s3, 0x358 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x22183Cu, 0x221844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221844u;
label_221844:
    // 0x221844: 0x1000030b  b           . + 4 + (0x30B << 2)
    ctx->pc = 0x221844u;
    {
        const bool branch_taken_0x221844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221844u;
        // 0x221848: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221844) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x22184Cu;
label_22184c:
    // 0x22184c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x22184cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x221850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221854: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x221854u;
    SET_GPR_U32(ctx, 31, 0x22185Cu);
    ctx->pc = 0x221858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221854u;
    // 0x221858: 0x24a52b78  addiu       $a1, $a1, 0x2B78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x221854u, 0x22185Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22185Cu;
label_22185c:
    // 0x22185c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22185cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x221860: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x221860u;
    {
        const bool branch_taken_0x221860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221860u;
        // 0x221864: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221860) {
            ctx->pc = 0x221878u;
            goto label_221878;
        }
    }
    ctx->pc = 0x221868u;
    // 0x221868: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x221868u;
    SET_GPR_U32(ctx, 31, 0x221870u);
    ctx->pc = 0x22186Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221868u;
    // 0x22186c: 0x26650644  addiu       $a1, $s3, 0x644 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1604));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x221868u, 0x221870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221870u;
label_221870:
    // 0x221870: 0x10000300  b           . + 4 + (0x300 << 2)
    ctx->pc = 0x221870u;
    {
        const bool branch_taken_0x221870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221870u;
        // 0x221874: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221870) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x221878u;
label_221878:
    // 0x221878: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x221878u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x22187c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22187cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221880: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x221880u;
    SET_GPR_U32(ctx, 31, 0x221888u);
    ctx->pc = 0x221884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221880u;
    // 0x221884: 0x24a52b88  addiu       $a1, $a1, 0x2B88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x221880u, 0x221888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221888u;
label_221888:
    // 0x221888: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x221888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22188c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22188Cu;
    {
        const bool branch_taken_0x22188c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22188Cu;
        // 0x221890: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22188c) {
            ctx->pc = 0x2218A4u;
            goto label_2218a4;
        }
    }
    ctx->pc = 0x221894u;
    // 0x221894: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x221894u;
    SET_GPR_U32(ctx, 31, 0x22189Cu);
    ctx->pc = 0x221898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221894u;
    // 0x221898: 0x26650648  addiu       $a1, $s3, 0x648 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x221894u, 0x22189Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22189Cu;
label_22189c:
    // 0x22189c: 0x100002f5  b           . + 4 + (0x2F5 << 2)
    ctx->pc = 0x22189Cu;
    {
        const bool branch_taken_0x22189c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2218A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22189Cu;
        // 0x2218a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22189c) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x2218A4u;
label_2218a4:
    // 0x2218a4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2218a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2218a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2218a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2218ac: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2218ACu;
    SET_GPR_U32(ctx, 31, 0x2218B4u);
    ctx->pc = 0x2218B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2218ACu;
    // 0x2218b0: 0x24a52b98  addiu       $a1, $a1, 0x2B98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2218ACu, 0x2218B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2218B4u;
label_2218b4:
    // 0x2218b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2218b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2218b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2218B8u;
    {
        const bool branch_taken_0x2218b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2218BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2218B8u;
        // 0x2218bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2218b8) {
            ctx->pc = 0x2218D0u;
            goto label_2218d0;
        }
    }
    ctx->pc = 0x2218C0u;
    // 0x2218c0: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2218C0u;
    SET_GPR_U32(ctx, 31, 0x2218C8u);
    ctx->pc = 0x2218C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2218C0u;
    // 0x2218c4: 0x2665064c  addiu       $a1, $s3, 0x64C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1612));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2218C0u, 0x2218C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2218C8u;
label_2218c8:
    // 0x2218c8: 0x100002ea  b           . + 4 + (0x2EA << 2)
    ctx->pc = 0x2218C8u;
    {
        const bool branch_taken_0x2218c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2218CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2218C8u;
        // 0x2218cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2218c8) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x2218D0u;
label_2218d0:
    // 0x2218d0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2218d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2218d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2218d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2218d8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2218D8u;
    SET_GPR_U32(ctx, 31, 0x2218E0u);
    ctx->pc = 0x2218DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2218D8u;
    // 0x2218dc: 0x24a52ba8  addiu       $a1, $a1, 0x2BA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2218D8u, 0x2218E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2218E0u;
label_2218e0:
    // 0x2218e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2218e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2218e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2218E4u;
    {
        const bool branch_taken_0x2218e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2218E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2218E4u;
        // 0x2218e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2218e4) {
            ctx->pc = 0x2218FCu;
            goto label_2218fc;
        }
    }
    ctx->pc = 0x2218ECu;
    // 0x2218ec: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2218ECu;
    SET_GPR_U32(ctx, 31, 0x2218F4u);
    ctx->pc = 0x2218F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2218ECu;
    // 0x2218f0: 0x26650650  addiu       $a1, $s3, 0x650 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2218ECu, 0x2218F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2218F4u;
label_2218f4:
    // 0x2218f4: 0x100002df  b           . + 4 + (0x2DF << 2)
    ctx->pc = 0x2218F4u;
    {
        const bool branch_taken_0x2218f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2218F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2218F4u;
        // 0x2218f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2218f4) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x2218FCu;
label_2218fc:
    // 0x2218fc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2218fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x221900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221904: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x221904u;
    SET_GPR_U32(ctx, 31, 0x22190Cu);
    ctx->pc = 0x221908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221904u;
    // 0x221908: 0x24a52bb8  addiu       $a1, $a1, 0x2BB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x221904u, 0x22190Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22190Cu;
label_22190c:
    // 0x22190c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22190cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x221910: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x221910u;
    {
        const bool branch_taken_0x221910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221910) {
            ctx->pc = 0x221914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221910u;
            // 0x221914: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x221928u;
            goto label_221928;
        }
    }
    ctx->pc = 0x221918u;
    // 0x221918: 0x8e6206a8  lw          $v0, 0x6A8($s3)
    ctx->pc = 0x221918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1704)));
    // 0x22191c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22191cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x221920: 0x100002d3  b           . + 4 + (0x2D3 << 2)
    ctx->pc = 0x221920u;
    {
        const bool branch_taken_0x221920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221920u;
        // 0x221924: 0xae6206a8  sw          $v0, 0x6A8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221920) {
            ctx->pc = 0x222470u;
            goto label_222470;
        }
    }
    ctx->pc = 0x221928u;
label_221928:
    // 0x221928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22192c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x22192Cu;
    SET_GPR_U32(ctx, 31, 0x221934u);
    ctx->pc = 0x221930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22192Cu;
    // 0x221930: 0x24a52bc8  addiu       $a1, $a1, 0x2BC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x22192Cu, 0x221934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221934u;
label_221934:
    // 0x221934: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x221934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x221938: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x221938u;
    {
        const bool branch_taken_0x221938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221938u;
        // 0x22193c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221938) {
            ctx->pc = 0x221950u;
            goto label_221950;
        }
    }
    ctx->pc = 0x221940u;
    // 0x221940: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x221940u;
    SET_GPR_U32(ctx, 31, 0x221948u);
    ctx->pc = 0x221944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221940u;
    // 0x221944: 0x26650584  addiu       $a1, $s3, 0x584 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1412));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x221940u, 0x221948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221948u;
label_221948:
    // 0x221948: 0x100002ca  b           . + 4 + (0x2CA << 2)
    ctx->pc = 0x221948u;
    {
        const bool branch_taken_0x221948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221948u;
        // 0x22194c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221948) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x221950u;
label_221950:
    // 0x221950: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x221950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x221954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221958: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x221958u;
    SET_GPR_U32(ctx, 31, 0x221960u);
    ctx->pc = 0x22195Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221958u;
    // 0x22195c: 0x24a52bd8  addiu       $a1, $a1, 0x2BD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x221958u, 0x221960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221960u;
label_221960:
    // 0x221960: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x221960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x221964: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x221964u;
    {
        const bool branch_taken_0x221964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221964u;
        // 0x221968: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221964) {
            ctx->pc = 0x22197Cu;
            goto label_22197c;
        }
    }
    ctx->pc = 0x22196Cu;
    // 0x22196c: 0x8e6506a8  lw          $a1, 0x6A8($s3)
    ctx->pc = 0x22196cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1704)));
    // 0x221970: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x221970u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x221974: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x221974u;
    {
        const bool branch_taken_0x221974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221974u;
        // 0x221978: 0x24a5036c  addiu       $a1, $a1, 0x36C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 876));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221974) {
            ctx->pc = 0x221D48u;
            goto label_221d48;
        }
    }
    ctx->pc = 0x22197Cu;
label_22197c:
    // 0x22197c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x22197cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x221980: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221984: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x221984u;
    SET_GPR_U32(ctx, 31, 0x22198Cu);
    ctx->pc = 0x221988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221984u;
    // 0x221988: 0x24a52bf8  addiu       $a1, $a1, 0x2BF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x221984u, 0x22198Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22198Cu;
label_22198c:
    // 0x22198c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22198cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x221990: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x221990u;
    {
        const bool branch_taken_0x221990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221990u;
        // 0x221994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221990) {
            ctx->pc = 0x2219A8u;
            goto label_2219a8;
        }
    }
    ctx->pc = 0x221998u;
    // 0x221998: 0x8e6506a8  lw          $a1, 0x6A8($s3)
    ctx->pc = 0x221998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1704)));
    // 0x22199c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x22199cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2219a0: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x2219A0u;
    {
        const bool branch_taken_0x2219a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2219A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2219A0u;
        // 0x2219a4: 0x24a5037c  addiu       $a1, $a1, 0x37C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 892));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2219a0) {
            ctx->pc = 0x221D48u;
            goto label_221d48;
        }
    }
    ctx->pc = 0x2219A8u;
label_2219a8:
    // 0x2219a8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2219a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2219ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2219acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2219b0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2219B0u;
    SET_GPR_U32(ctx, 31, 0x2219B8u);
    ctx->pc = 0x2219B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2219B0u;
    // 0x2219b4: 0x24a52c20  addiu       $a1, $a1, 0x2C20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2219B0u, 0x2219B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2219B8u;
label_2219b8:
    // 0x2219b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2219b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2219bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2219BCu;
    {
        const bool branch_taken_0x2219bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2219C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2219BCu;
        // 0x2219c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2219bc) {
            ctx->pc = 0x2219D4u;
            goto label_2219d4;
        }
    }
    ctx->pc = 0x2219C4u;
    // 0x2219c4: 0x8e6506a8  lw          $a1, 0x6A8($s3)
    ctx->pc = 0x2219c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1704)));
    // 0x2219c8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2219c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2219cc: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x2219CCu;
    {
        const bool branch_taken_0x2219cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2219D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2219CCu;
        // 0x2219d0: 0x24a503bc  addiu       $a1, $a1, 0x3BC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 956));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2219cc) {
            ctx->pc = 0x221CB8u;
            goto label_221cb8;
        }
    }
    ctx->pc = 0x2219D4u;
label_2219d4:
    // 0x2219d4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2219d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2219d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2219d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2219dc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2219DCu;
    SET_GPR_U32(ctx, 31, 0x2219E4u);
    ctx->pc = 0x2219E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2219DCu;
    // 0x2219e0: 0x24a52c38  addiu       $a1, $a1, 0x2C38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2219DCu, 0x2219E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2219E4u;
label_2219e4:
    // 0x2219e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2219e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2219e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2219E8u;
    {
        const bool branch_taken_0x2219e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2219ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2219E8u;
        // 0x2219ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2219e8) {
            ctx->pc = 0x221A00u;
            goto label_221a00;
        }
    }
    ctx->pc = 0x2219F0u;
    // 0x2219f0: 0x8e6506a8  lw          $a1, 0x6A8($s3)
    ctx->pc = 0x2219f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1704)));
    // 0x2219f4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2219f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2219f8: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x2219F8u;
    {
        const bool branch_taken_0x2219f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2219FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2219F8u;
        // 0x2219fc: 0x24a5038c  addiu       $a1, $a1, 0x38C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 908));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2219f8) {
            ctx->pc = 0x221CB8u;
            goto label_221cb8;
        }
    }
    ctx->pc = 0x221A00u;
label_221a00:
    // 0x221a00: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x221a00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x221a04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221a08: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x221A08u;
    SET_GPR_U32(ctx, 31, 0x221A10u);
    ctx->pc = 0x221A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221A08u;
    // 0x221a0c: 0x24a52c48  addiu       $a1, $a1, 0x2C48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x221A08u, 0x221A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221A10u;
label_221a10:
    // 0x221a10: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x221a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x221a14: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x221A14u;
    {
        const bool branch_taken_0x221a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221A14u;
        // 0x221a18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221a14) {
            ctx->pc = 0x221A74u;
            goto label_221a74;
        }
    }
    ctx->pc = 0x221A1Cu;
    // 0x221a1c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x221A1Cu;
    SET_GPR_U32(ctx, 31, 0x221A24u);
    ctx->pc = 0x221A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221A1Cu;
    // 0x221a20: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x221A1Cu, 0x221A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221A24u;
label_221a24:
    // 0x221a24: 0x266504b0  addiu       $a1, $s3, 0x4B0
    ctx->pc = 0x221a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1200));
    // 0x221a28: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x221a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221a2c: 0x8e6206a8  lw          $v0, 0x6A8($s3)
    ctx->pc = 0x221a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1704)));
label_221a30:
    // 0x221a30: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x221a30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x221a34: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x221a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221a38: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x221a38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x221a3c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x221a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x221a40: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x221a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x221a44: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x221a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221a48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x221a48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221a4c: 0x0  nop
    ctx->pc = 0x221a4cu;
    // NOP
    // 0x221a50: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x221A50u;
    {
        const bool branch_taken_0x221a50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x221A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221A50u;
        // 0x221a54: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221a50) {
            ctx->pc = 0x221A60u;
            goto label_221a60;
        }
    }
    ctx->pc = 0x221A58u;
    // 0x221a58: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x221a58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x221a5c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x221a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_221a60:
    // 0x221a60: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x221a60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x221a64: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x221A64u;
    {
        const bool branch_taken_0x221a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x221a64) {
            ctx->pc = 0x221A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221A64u;
            // 0x221a68: 0x8e6206a8  lw          $v0, 0x6A8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1704)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x221A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_221a30;
        }
    }
    ctx->pc = 0x221A6Cu;
    // 0x221a6c: 0x10000281  b           . + 4 + (0x281 << 2)
    ctx->pc = 0x221A6Cu;
    {
        const bool branch_taken_0x221a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221A6Cu;
        // 0x221a70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221a6c) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x221A74u;
label_221a74:
    // 0x221a74: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x221a74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x221a78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221a7c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x221A7Cu;
    SET_GPR_U32(ctx, 31, 0x221A84u);
    ctx->pc = 0x221A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221A7Cu;
    // 0x221a80: 0x24a52c58  addiu       $a1, $a1, 0x2C58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x221A7Cu, 0x221A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221A84u;
label_221a84:
    // 0x221a84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x221a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x221a88: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x221A88u;
    {
        const bool branch_taken_0x221a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221A88u;
        // 0x221a8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221a88) {
            ctx->pc = 0x221AFCu;
            goto label_221afc;
        }
    }
    ctx->pc = 0x221A90u;
    // 0x221a90: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x221A90u;
    SET_GPR_U32(ctx, 31, 0x221A98u);
    ctx->pc = 0x221A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221A90u;
    // 0x221a94: 0x27a50014  addiu       $a1, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x221A90u, 0x221A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221A98u;
label_221a98:
    // 0x221a98: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x221a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x221a9c: 0x26650530  addiu       $a1, $s3, 0x530
    ctx->pc = 0x221a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1328));
    // 0x221aa0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x221aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221aa4: 0x8e6206a8  lw          $v0, 0x6A8($s3)
    ctx->pc = 0x221aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1704)));
label_221aa8:
    // 0x221aa8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x221aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x221aac: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x221aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221ab0: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x221ab0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x221ab4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x221ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x221ab8: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x221ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x221abc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x221abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221ac0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x221ac0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221ac4: 0x0  nop
    ctx->pc = 0x221ac4u;
    // NOP
    // 0x221ac8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x221AC8u;
    {
        const bool branch_taken_0x221ac8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x221ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221AC8u;
        // 0x221acc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221ac8) {
            ctx->pc = 0x221AD8u;
            goto label_221ad8;
        }
    }
    ctx->pc = 0x221AD0u;
    // 0x221ad0: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x221ad0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x221ad4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x221ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_221ad8:
    // 0x221ad8: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x221ad8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x221adc: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x221ADCu;
    {
        const bool branch_taken_0x221adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x221adc) {
            ctx->pc = 0x221AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221ADCu;
            // 0x221ae0: 0x8e6206a8  lw          $v0, 0x6A8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1704)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x221AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_221aa8;
        }
    }
    ctx->pc = 0x221AE4u;
    // 0x221ae4: 0x8e6306ac  lw          $v1, 0x6AC($s3)
    ctx->pc = 0x221ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1708)));
    // 0x221ae8: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x221ae8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x221aec: 0x10400260  beqz        $v0, . + 4 + (0x260 << 2)
    ctx->pc = 0x221AECu;
    {
        const bool branch_taken_0x221aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221AECu;
        // 0x221af0: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221aec) {
            ctx->pc = 0x222470u;
            goto label_222470;
        }
    }
    ctx->pc = 0x221AF4u;
    // 0x221af4: 0x1000025e  b           . + 4 + (0x25E << 2)
    ctx->pc = 0x221AF4u;
    {
        const bool branch_taken_0x221af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221AF4u;
        // 0x221af8: 0xae6206ac  sw          $v0, 0x6AC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1708), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221af4) {
            ctx->pc = 0x222470u;
            goto label_222470;
        }
    }
    ctx->pc = 0x221AFCu;
label_221afc:
    // 0x221afc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x221afcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x221b00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221b04: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x221B04u;
    SET_GPR_U32(ctx, 31, 0x221B0Cu);
    ctx->pc = 0x221B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221B04u;
    // 0x221b08: 0x24a52c68  addiu       $a1, $a1, 0x2C68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x221B04u, 0x221B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221B0Cu;
label_221b0c:
    // 0x221b0c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x221b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x221b10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x221B10u;
    {
        const bool branch_taken_0x221b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221B10u;
        // 0x221b14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221b10) {
            ctx->pc = 0x221B28u;
            goto label_221b28;
        }
    }
    ctx->pc = 0x221B18u;
    // 0x221b18: 0x8e6506a8  lw          $a1, 0x6A8($s3)
    ctx->pc = 0x221b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1704)));
    // 0x221b1c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x221b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x221b20: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x221B20u;
    {
        const bool branch_taken_0x221b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221B20u;
        // 0x221b24: 0x24a503dc  addiu       $a1, $a1, 0x3DC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 988));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221b20) {
            ctx->pc = 0x221BA4u;
            goto label_221ba4;
        }
    }
    ctx->pc = 0x221B28u;
label_221b28:
    // 0x221b28: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x221b28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x221b2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221b30: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x221B30u;
    SET_GPR_U32(ctx, 31, 0x221B38u);
    ctx->pc = 0x221B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221B30u;
    // 0x221b34: 0x24a52c78  addiu       $a1, $a1, 0x2C78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x221B30u, 0x221B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221B38u;
label_221b38:
    // 0x221b38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x221b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x221b3c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x221B3Cu;
    {
        const bool branch_taken_0x221b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221B3Cu;
        // 0x221b40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221b3c) {
            ctx->pc = 0x221B7Cu;
            goto label_221b7c;
        }
    }
    ctx->pc = 0x221B44u;
    // 0x221b44: 0x8e6506a8  lw          $a1, 0x6A8($s3)
    ctx->pc = 0x221b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1704)));
    // 0x221b48: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x221b48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x221b4c: 0x24a503ec  addiu       $a1, $a1, 0x3EC
    ctx->pc = 0x221b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1004));
    // 0x221b50: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x221B50u;
    SET_GPR_U32(ctx, 31, 0x221B58u);
    ctx->pc = 0x221B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221B50u;
    // 0x221b54: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x221B50u, 0x221B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221B58u;
label_221b58:
    // 0x221b58: 0x8e6206a8  lw          $v0, 0x6A8($s3)
    ctx->pc = 0x221b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1704)));
    // 0x221b5c: 0x2664040c  addiu       $a0, $s3, 0x40C
    ctx->pc = 0x221b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1036));
    // 0x221b60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x221b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x221b64: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x221b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x221b68: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x221b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x221b6c: 0x14600241  bnez        $v1, . + 4 + (0x241 << 2)
    ctx->pc = 0x221B6Cu;
    {
        const bool branch_taken_0x221b6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x221B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221B6Cu;
        // 0x221b70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221b6c) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x221B74u;
    // 0x221b74: 0x1000023f  b           . + 4 + (0x23F << 2)
    ctx->pc = 0x221B74u;
    {
        const bool branch_taken_0x221b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221B74u;
        // 0x221b78: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221b74) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x221B7Cu;
label_221b7c:
    // 0x221b7c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x221b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x221b80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221b84: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x221B84u;
    SET_GPR_U32(ctx, 31, 0x221B8Cu);
    ctx->pc = 0x221B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221B84u;
    // 0x221b88: 0x24a52c88  addiu       $a1, $a1, 0x2C88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x221B84u, 0x221B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221B8Cu;
label_221b8c:
    // 0x221b8c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x221b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x221b90: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x221B90u;
    {
        const bool branch_taken_0x221b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221B90u;
        // 0x221b94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221b90) {
            ctx->pc = 0x221BB4u;
            goto label_221bb4;
        }
    }
    ctx->pc = 0x221B98u;
    // 0x221b98: 0x8e6506a8  lw          $a1, 0x6A8($s3)
    ctx->pc = 0x221b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1704)));
    // 0x221b9c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x221b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x221ba0: 0x24a5040c  addiu       $a1, $a1, 0x40C
    ctx->pc = 0x221ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1036));
label_221ba4:
    // 0x221ba4: 0xc09e056  jal         func_278158
    ctx->pc = 0x221BA4u;
    SET_GPR_U32(ctx, 31, 0x221BACu);
    ctx->pc = 0x221BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221BA4u;
    // 0x221ba8: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x221BA4u, 0x221BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221BACu;
label_221bac:
    // 0x221bac: 0x10000231  b           . + 4 + (0x231 << 2)
    ctx->pc = 0x221BACu;
    {
        const bool branch_taken_0x221bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221BACu;
        // 0x221bb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221bac) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x221BB4u;
label_221bb4:
    // 0x221bb4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x221bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x221bb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221bbc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x221BBCu;
    SET_GPR_U32(ctx, 31, 0x221BC4u);
    ctx->pc = 0x221BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221BBCu;
    // 0x221bc0: 0x24a52ca0  addiu       $a1, $a1, 0x2CA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x221BBCu, 0x221BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221BC4u;
label_221bc4:
    // 0x221bc4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x221bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x221bc8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x221BC8u;
    {
        const bool branch_taken_0x221bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221BC8u;
        // 0x221bcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221bc8) {
            ctx->pc = 0x221BE0u;
            goto label_221be0;
        }
    }
    ctx->pc = 0x221BD0u;
    // 0x221bd0: 0x8e6506a8  lw          $a1, 0x6A8($s3)
    ctx->pc = 0x221bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1704)));
    // 0x221bd4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x221bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x221bd8: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x221BD8u;
    {
        const bool branch_taken_0x221bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221BD8u;
        // 0x221bdc: 0x24a5041c  addiu       $a1, $a1, 0x41C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1052));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221bd8) {
            ctx->pc = 0x221D48u;
            goto label_221d48;
        }
    }
    ctx->pc = 0x221BE0u;
label_221be0:
    // 0x221be0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x221be0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x221be4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221be8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x221BE8u;
    SET_GPR_U32(ctx, 31, 0x221BF0u);
    ctx->pc = 0x221BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221BE8u;
    // 0x221bec: 0x24a52cb8  addiu       $a1, $a1, 0x2CB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x221BE8u, 0x221BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221BF0u;
label_221bf0:
    // 0x221bf0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x221bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x221bf4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x221BF4u;
    {
        const bool branch_taken_0x221bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221BF4u;
        // 0x221bf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221bf4) {
            ctx->pc = 0x221C0Cu;
            goto label_221c0c;
        }
    }
    ctx->pc = 0x221BFCu;
    // 0x221bfc: 0x8e6506a8  lw          $a1, 0x6A8($s3)
    ctx->pc = 0x221bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1704)));
    // 0x221c00: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x221c00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x221c04: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x221C04u;
    {
        const bool branch_taken_0x221c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221C04u;
        // 0x221c08: 0x24a5042c  addiu       $a1, $a1, 0x42C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1068));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221c04) {
            ctx->pc = 0x221D48u;
            goto label_221d48;
        }
    }
    ctx->pc = 0x221C0Cu;
label_221c0c:
    // 0x221c0c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x221c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x221c10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221c14: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x221C14u;
    SET_GPR_U32(ctx, 31, 0x221C1Cu);
    ctx->pc = 0x221C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221C14u;
    // 0x221c18: 0x24a52cd0  addiu       $a1, $a1, 0x2CD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x221C14u, 0x221C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221C1Cu;
label_221c1c:
    // 0x221c1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x221c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x221c20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x221C20u;
    {
        const bool branch_taken_0x221c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221C20u;
        // 0x221c24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221c20) {
            ctx->pc = 0x221C38u;
            goto label_221c38;
        }
    }
    ctx->pc = 0x221C28u;
    // 0x221c28: 0x8e6506a8  lw          $a1, 0x6A8($s3)
    ctx->pc = 0x221c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1704)));
    // 0x221c2c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x221c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x221c30: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x221C30u;
    {
        const bool branch_taken_0x221c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221C30u;
        // 0x221c34: 0x24a5043c  addiu       $a1, $a1, 0x43C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1084));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221c30) {
            ctx->pc = 0x221D48u;
            goto label_221d48;
        }
    }
    ctx->pc = 0x221C38u;
label_221c38:
    // 0x221c38: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x221c38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x221c3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221c40: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x221C40u;
    SET_GPR_U32(ctx, 31, 0x221C48u);
    ctx->pc = 0x221C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221C40u;
    // 0x221c44: 0x24a52cf0  addiu       $a1, $a1, 0x2CF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x221C40u, 0x221C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221C48u;
label_221c48:
    // 0x221c48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x221c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x221c4c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x221C4Cu;
    {
        const bool branch_taken_0x221c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221C4Cu;
        // 0x221c50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221c4c) {
            ctx->pc = 0x221C64u;
            goto label_221c64;
        }
    }
    ctx->pc = 0x221C54u;
    // 0x221c54: 0x8e6506a8  lw          $a1, 0x6A8($s3)
    ctx->pc = 0x221c54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1704)));
    // 0x221c58: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x221c58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x221c5c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x221C5Cu;
    {
        const bool branch_taken_0x221c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221C5Cu;
        // 0x221c60: 0x24a5044c  addiu       $a1, $a1, 0x44C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221c5c) {
            ctx->pc = 0x221D48u;
            goto label_221d48;
        }
    }
    ctx->pc = 0x221C64u;
label_221c64:
    // 0x221c64: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x221c64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x221c68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221c6c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x221C6Cu;
    SET_GPR_U32(ctx, 31, 0x221C74u);
    ctx->pc = 0x221C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221C6Cu;
    // 0x221c70: 0x24a52d10  addiu       $a1, $a1, 0x2D10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x221C6Cu, 0x221C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221C74u;
label_221c74:
    // 0x221c74: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x221c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x221c78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x221C78u;
    {
        const bool branch_taken_0x221c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221C78u;
        // 0x221c7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221c78) {
            ctx->pc = 0x221C90u;
            goto label_221c90;
        }
    }
    ctx->pc = 0x221C80u;
    // 0x221c80: 0x8e6506a8  lw          $a1, 0x6A8($s3)
    ctx->pc = 0x221c80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1704)));
    // 0x221c84: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x221c84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x221c88: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x221C88u;
    {
        const bool branch_taken_0x221c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221C88u;
        // 0x221c8c: 0x24a5045c  addiu       $a1, $a1, 0x45C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221c88) {
            ctx->pc = 0x221D48u;
            goto label_221d48;
        }
    }
    ctx->pc = 0x221C90u;
label_221c90:
    // 0x221c90: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x221c90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x221c94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221c98: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x221C98u;
    SET_GPR_U32(ctx, 31, 0x221CA0u);
    ctx->pc = 0x221C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221C98u;
    // 0x221c9c: 0x24a52d28  addiu       $a1, $a1, 0x2D28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x221C98u, 0x221CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221CA0u;
label_221ca0:
    // 0x221ca0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x221ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x221ca4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x221CA4u;
    {
        const bool branch_taken_0x221ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221CA4u;
        // 0x221ca8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221ca4) {
            ctx->pc = 0x221CC8u;
            goto label_221cc8;
        }
    }
    ctx->pc = 0x221CACu;
    // 0x221cac: 0x8e6506a8  lw          $a1, 0x6A8($s3)
    ctx->pc = 0x221cacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1704)));
    // 0x221cb0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x221cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x221cb4: 0x24a50480  addiu       $a1, $a1, 0x480
    ctx->pc = 0x221cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1152));
label_221cb8:
    // 0x221cb8: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x221CB8u;
    SET_GPR_U32(ctx, 31, 0x221CC0u);
    ctx->pc = 0x221CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221CB8u;
    // 0x221cbc: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x221CB8u, 0x221CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221CC0u;
label_221cc0:
    // 0x221cc0: 0x100001ec  b           . + 4 + (0x1EC << 2)
    ctx->pc = 0x221CC0u;
    {
        const bool branch_taken_0x221cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221CC0u;
        // 0x221cc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221cc0) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x221CC8u;
label_221cc8:
    // 0x221cc8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x221cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x221ccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221cd0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x221CD0u;
    SET_GPR_U32(ctx, 31, 0x221CD8u);
    ctx->pc = 0x221CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221CD0u;
    // 0x221cd4: 0x24a52d40  addiu       $a1, $a1, 0x2D40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x221CD0u, 0x221CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221CD8u;
label_221cd8:
    // 0x221cd8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x221cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x221cdc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x221CDCu;
    {
        const bool branch_taken_0x221cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221CDCu;
        // 0x221ce0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221cdc) {
            ctx->pc = 0x221CF4u;
            goto label_221cf4;
        }
    }
    ctx->pc = 0x221CE4u;
    // 0x221ce4: 0x8e6506a8  lw          $a1, 0x6A8($s3)
    ctx->pc = 0x221ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1704)));
    // 0x221ce8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x221ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x221cec: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x221CECu;
    {
        const bool branch_taken_0x221cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221CECu;
        // 0x221cf0: 0x24a5046c  addiu       $a1, $a1, 0x46C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221cec) {
            ctx->pc = 0x221D48u;
            goto label_221d48;
        }
    }
    ctx->pc = 0x221CF4u;
label_221cf4:
    // 0x221cf4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x221cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x221cf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221cfc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x221CFCu;
    SET_GPR_U32(ctx, 31, 0x221D04u);
    ctx->pc = 0x221D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221CFCu;
    // 0x221d00: 0x24a52d60  addiu       $a1, $a1, 0x2D60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x221CFCu, 0x221D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221D04u;
label_221d04:
    // 0x221d04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x221d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x221d08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x221D08u;
    {
        const bool branch_taken_0x221d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D08u;
        // 0x221d0c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221d08) {
            ctx->pc = 0x221D20u;
            goto label_221d20;
        }
    }
    ctx->pc = 0x221D10u;
    // 0x221d10: 0x8e6206a8  lw          $v0, 0x6A8($s3)
    ctx->pc = 0x221d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1704)));
    // 0x221d14: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x221d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x221d18: 0x100001d5  b           . + 4 + (0x1D5 << 2)
    ctx->pc = 0x221D18u;
    {
        const bool branch_taken_0x221d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D18u;
        // 0x221d1c: 0xa043047c  sb          $v1, 0x47C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1148), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221d18) {
            ctx->pc = 0x222470u;
            goto label_222470;
        }
    }
    ctx->pc = 0x221D20u;
label_221d20:
    // 0x221d20: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x221d20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x221d24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221d28: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x221D28u;
    SET_GPR_U32(ctx, 31, 0x221D30u);
    ctx->pc = 0x221D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221D28u;
    // 0x221d2c: 0x24a52d80  addiu       $a1, $a1, 0x2D80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x221D28u, 0x221D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221D30u;
label_221d30:
    // 0x221d30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x221d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x221d34: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x221D34u;
    {
        const bool branch_taken_0x221d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D34u;
        // 0x221d38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221d34) {
            ctx->pc = 0x221D58u;
            goto label_221d58;
        }
    }
    ctx->pc = 0x221D3Cu;
    // 0x221d3c: 0x8e6506a8  lw          $a1, 0x6A8($s3)
    ctx->pc = 0x221d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1704)));
    // 0x221d40: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x221d40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x221d44: 0x24a504a0  addiu       $a1, $a1, 0x4A0
    ctx->pc = 0x221d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1184));
label_221d48:
    // 0x221d48: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x221D48u;
    SET_GPR_U32(ctx, 31, 0x221D50u);
    ctx->pc = 0x221D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221D48u;
    // 0x221d4c: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x221D48u, 0x221D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221D50u;
label_221d50:
    // 0x221d50: 0x100001c8  b           . + 4 + (0x1C8 << 2)
    ctx->pc = 0x221D50u;
    {
        const bool branch_taken_0x221d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D50u;
        // 0x221d54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221d50) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x221D58u;
label_221d58:
    // 0x221d58: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x221d58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x221d5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221d60: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x221D60u;
    SET_GPR_U32(ctx, 31, 0x221D68u);
    ctx->pc = 0x221D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221D60u;
    // 0x221d64: 0x24a52da0  addiu       $a1, $a1, 0x2DA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x221D60u, 0x221D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221D68u;
label_221d68:
    // 0x221d68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x221d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x221d6c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x221D6Cu;
    {
        const bool branch_taken_0x221d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D6Cu;
        // 0x221d70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221d6c) {
            ctx->pc = 0x221DC8u;
            goto label_221dc8;
        }
    }
    ctx->pc = 0x221D74u;
    // 0x221d74: 0xc09e056  jal         func_278158
    ctx->pc = 0x221D74u;
    SET_GPR_U32(ctx, 31, 0x221D7Cu);
    ctx->pc = 0x221D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221D74u;
    // 0x221d78: 0x26650588  addiu       $a1, $s3, 0x588 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x221D74u, 0x221D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221D7Cu;
label_221d7c:
    // 0x221d7c: 0x8e700588  lw          $s0, 0x588($s3)
    ctx->pc = 0x221d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1416)));
    // 0x221d80: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x221d80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x221d84: 0x2612ffff  addiu       $s2, $s0, -0x1
    ctx->pc = 0x221d84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x221d88: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x221D88u;
    SET_GPR_U32(ctx, 31, 0x221D90u);
    ctx->pc = 0x221D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221D88u;
    // 0x221d8c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x221D88u, 0x221D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221D90u;
label_221d90:
    // 0x221d90: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x221d90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x221d94: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x221d94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x221d98: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x221D98u;
    {
        const bool branch_taken_0x221d98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x221D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D98u;
        // 0x221d9c: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221d98) {
            ctx->pc = 0x221DC0u;
            goto label_221dc0;
        }
    }
    ctx->pc = 0x221DA0u;
    // 0x221da0: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x221da0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x221da4: 0x0  nop
    ctx->pc = 0x221da4u;
    // NOP
label_221da8:
    // 0x221da8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221dac: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x221DACu;
    SET_GPR_U32(ctx, 31, 0x221DB4u);
    ctx->pc = 0x221DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221DACu;
    // 0x221db0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x221DACu, 0x221DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221DB4u;
label_221db4:
    // 0x221db4: 0x0  nop
    ctx->pc = 0x221db4u;
    // NOP
    // 0x221db8: 0x1650fffb  bne         $s2, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x221DB8u;
    {
        const bool branch_taken_0x221db8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x221DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221DB8u;
        // 0x221dbc: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221db8) {
            ctx->pc = 0x221DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_221da8;
        }
    }
    ctx->pc = 0x221DC0u;
label_221dc0:
    // 0x221dc0: 0x100001ab  b           . + 4 + (0x1AB << 2)
    ctx->pc = 0x221DC0u;
    {
        const bool branch_taken_0x221dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221DC0u;
        // 0x221dc4: 0xae74058c  sw          $s4, 0x58C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1420), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221dc0) {
            ctx->pc = 0x222470u;
            goto label_222470;
        }
    }
    ctx->pc = 0x221DC8u;
label_221dc8:
    // 0x221dc8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x221dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x221dcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221dd0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x221DD0u;
    SET_GPR_U32(ctx, 31, 0x221DD8u);
    ctx->pc = 0x221DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221DD0u;
    // 0x221dd4: 0x24a52db0  addiu       $a1, $a1, 0x2DB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x221DD0u, 0x221DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221DD8u;
label_221dd8:
    // 0x221dd8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x221dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x221ddc: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x221DDCu;
    {
        const bool branch_taken_0x221ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221DDCu;
        // 0x221de0: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221ddc) {
            ctx->pc = 0x221E5Cu;
            goto label_221e5c;
        }
    }
    ctx->pc = 0x221DE4u;
    // 0x221de4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x221DE4u;
    SET_GPR_U32(ctx, 31, 0x221DECu);
    ctx->pc = 0x221DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221DE4u;
    // 0x221de8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x221DE4u, 0x221DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221DECu;
label_221dec:
    // 0x221dec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221df0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x221df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221df4: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x221df4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x221df8: 0xc09df62  jal         func_277D88
    ctx->pc = 0x221DF8u;
    SET_GPR_U32(ctx, 31, 0x221E00u);
    ctx->pc = 0x221DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221DF8u;
    // 0x221dfc: 0x37a70008  ori         $a3, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x221DF8u, 0x221E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221E00u;
label_221e00:
    // 0x221e00: 0x8e6306a4  lw          $v1, 0x6A4($s3)
    ctx->pc = 0x221e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1700)));
    // 0x221e04: 0x8e62058c  lw          $v0, 0x58C($s3)
    ctx->pc = 0x221e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1420)));
    // 0x221e08: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x221e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221e0c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x221e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x221e10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x221e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x221e14: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x221e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x221e18: 0x8e6206a4  lw          $v0, 0x6A4($s3)
    ctx->pc = 0x221e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1700)));
    // 0x221e1c: 0x8e63058c  lw          $v1, 0x58C($s3)
    ctx->pc = 0x221e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1420)));
    // 0x221e20: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x221e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221e24: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x221e24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x221e28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x221e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x221e2c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x221e2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x221e30: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x221e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221e34: 0x8e6306a4  lw          $v1, 0x6A4($s3)
    ctx->pc = 0x221e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1700)));
    // 0x221e38: 0x8e62058c  lw          $v0, 0x58C($s3)
    ctx->pc = 0x221e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1420)));
    // 0x221e3c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x221e3cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x221e40: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x221e40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x221e44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x221e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x221e48: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x221e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x221e4c: 0x8e6206a4  lw          $v0, 0x6A4($s3)
    ctx->pc = 0x221e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1700)));
    // 0x221e50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x221e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x221e54: 0x10000186  b           . + 4 + (0x186 << 2)
    ctx->pc = 0x221E54u;
    {
        const bool branch_taken_0x221e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E54u;
        // 0x221e58: 0xae6206a4  sw          $v0, 0x6A4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1700), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221e54) {
            ctx->pc = 0x222470u;
            goto label_222470;
        }
    }
    ctx->pc = 0x221E5Cu;
label_221e5c:
    // 0x221e5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221e60: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x221E60u;
    SET_GPR_U32(ctx, 31, 0x221E68u);
    ctx->pc = 0x221E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221E60u;
    // 0x221e64: 0x24a52dc0  addiu       $a1, $a1, 0x2DC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x221E60u, 0x221E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221E68u;
label_221e68:
    // 0x221e68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x221e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x221e6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x221E6Cu;
    {
        const bool branch_taken_0x221e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E6Cu;
        // 0x221e70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221e6c) {
            ctx->pc = 0x221E7Cu;
            goto label_221e7c;
        }
    }
    ctx->pc = 0x221E74u;
    // 0x221e74: 0x1000017f  b           . + 4 + (0x17F << 2)
    ctx->pc = 0x221E74u;
    {
        const bool branch_taken_0x221e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E74u;
        // 0x221e78: 0xae620590  sw          $v0, 0x590($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1424), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221e74) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x221E7Cu;
label_221e7c:
    // 0x221e7c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x221e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x221e80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221e84: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x221E84u;
    SET_GPR_U32(ctx, 31, 0x221E8Cu);
    ctx->pc = 0x221E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221E84u;
    // 0x221e88: 0x24a52dd0  addiu       $a1, $a1, 0x2DD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x221E84u, 0x221E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221E8Cu;
label_221e8c:
    // 0x221e8c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x221e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x221e90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x221E90u;
    {
        const bool branch_taken_0x221e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E90u;
        // 0x221e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221e90) {
            ctx->pc = 0x221EA8u;
            goto label_221ea8;
        }
    }
    ctx->pc = 0x221E98u;
    // 0x221e98: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x221E98u;
    SET_GPR_U32(ctx, 31, 0x221EA0u);
    ctx->pc = 0x221E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221E98u;
    // 0x221e9c: 0x26650594  addiu       $a1, $s3, 0x594 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1428));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x221E98u, 0x221EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221EA0u;
label_221ea0:
    // 0x221ea0: 0x10000174  b           . + 4 + (0x174 << 2)
    ctx->pc = 0x221EA0u;
    {
        const bool branch_taken_0x221ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221EA0u;
        // 0x221ea4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221ea0) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x221EA8u;
label_221ea8:
    // 0x221ea8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x221ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x221eac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221eb0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x221EB0u;
    SET_GPR_U32(ctx, 31, 0x221EB8u);
    ctx->pc = 0x221EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221EB0u;
    // 0x221eb4: 0x24a52de8  addiu       $a1, $a1, 0x2DE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x221EB0u, 0x221EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221EB8u;
label_221eb8:
    // 0x221eb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x221eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x221ebc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x221EBCu;
    {
        const bool branch_taken_0x221ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221EBCu;
        // 0x221ec0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221ebc) {
            ctx->pc = 0x221ED4u;
            goto label_221ed4;
        }
    }
    ctx->pc = 0x221EC4u;
    // 0x221ec4: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x221EC4u;
    SET_GPR_U32(ctx, 31, 0x221ECCu);
    ctx->pc = 0x221EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221EC4u;
    // 0x221ec8: 0x26650598  addiu       $a1, $s3, 0x598 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x221EC4u, 0x221ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221ECCu;
label_221ecc:
    // 0x221ecc: 0x10000169  b           . + 4 + (0x169 << 2)
    ctx->pc = 0x221ECCu;
    {
        const bool branch_taken_0x221ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221ECCu;
        // 0x221ed0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221ecc) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x221ED4u;
label_221ed4:
    // 0x221ed4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x221ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x221ed8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221edc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x221EDCu;
    SET_GPR_U32(ctx, 31, 0x221EE4u);
    ctx->pc = 0x221EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221EDCu;
    // 0x221ee0: 0x24a52e08  addiu       $a1, $a1, 0x2E08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x221EDCu, 0x221EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221EE4u;
label_221ee4:
    // 0x221ee4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x221ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x221ee8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x221EE8u;
    {
        const bool branch_taken_0x221ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221EE8u;
        // 0x221eec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221ee8) {
            ctx->pc = 0x221F00u;
            goto label_221f00;
        }
    }
    ctx->pc = 0x221EF0u;
    // 0x221ef0: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x221EF0u;
    SET_GPR_U32(ctx, 31, 0x221EF8u);
    ctx->pc = 0x221EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221EF0u;
    // 0x221ef4: 0x2665059c  addiu       $a1, $s3, 0x59C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x221EF0u, 0x221EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221EF8u;
label_221ef8:
    // 0x221ef8: 0x1000015e  b           . + 4 + (0x15E << 2)
    ctx->pc = 0x221EF8u;
    {
        const bool branch_taken_0x221ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221EF8u;
        // 0x221efc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221ef8) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x221F00u;
label_221f00:
    // 0x221f00: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x221f00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x221f04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f08: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x221F08u;
    SET_GPR_U32(ctx, 31, 0x221F10u);
    ctx->pc = 0x221F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221F08u;
    // 0x221f0c: 0x24a52e20  addiu       $a1, $a1, 0x2E20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x221F08u, 0x221F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F10u;
label_221f10:
    // 0x221f10: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x221f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x221f14: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x221F14u;
    {
        const bool branch_taken_0x221f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F14u;
        // 0x221f18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221f14) {
            ctx->pc = 0x221F34u;
            goto label_221f34;
        }
    }
    ctx->pc = 0x221F1Cu;
    // 0x221f1c: 0x266705a8  addiu       $a3, $s3, 0x5A8
    ctx->pc = 0x221f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 1448));
    // 0x221f20: 0x266505a0  addiu       $a1, $s3, 0x5A0
    ctx->pc = 0x221f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1440));
    // 0x221f24: 0xc09df62  jal         func_277D88
    ctx->pc = 0x221F24u;
    SET_GPR_U32(ctx, 31, 0x221F2Cu);
    ctx->pc = 0x221F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221F24u;
    // 0x221f28: 0x266605a4  addiu       $a2, $s3, 0x5A4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1444));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x221F24u, 0x221F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F2Cu;
label_221f2c:
    // 0x221f2c: 0x10000151  b           . + 4 + (0x151 << 2)
    ctx->pc = 0x221F2Cu;
    {
        const bool branch_taken_0x221f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F2Cu;
        // 0x221f30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221f2c) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x221F34u;
label_221f34:
    // 0x221f34: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x221f34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x221f38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f3c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x221F3Cu;
    SET_GPR_U32(ctx, 31, 0x221F44u);
    ctx->pc = 0x221F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221F3Cu;
    // 0x221f40: 0x24a52e30  addiu       $a1, $a1, 0x2E30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x221F3Cu, 0x221F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F44u;
label_221f44:
    // 0x221f44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x221f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x221f48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x221F48u;
    {
        const bool branch_taken_0x221f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F48u;
        // 0x221f4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221f48) {
            ctx->pc = 0x221F60u;
            goto label_221f60;
        }
    }
    ctx->pc = 0x221F50u;
    // 0x221f50: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x221F50u;
    SET_GPR_U32(ctx, 31, 0x221F58u);
    ctx->pc = 0x221F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221F50u;
    // 0x221f54: 0x266505b0  addiu       $a1, $s3, 0x5B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x221F50u, 0x221F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F58u;
label_221f58:
    // 0x221f58: 0x10000146  b           . + 4 + (0x146 << 2)
    ctx->pc = 0x221F58u;
    {
        const bool branch_taken_0x221f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F58u;
        // 0x221f5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221f58) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x221F60u;
label_221f60:
    // 0x221f60: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x221f60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x221f64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f68: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x221F68u;
    SET_GPR_U32(ctx, 31, 0x221F70u);
    ctx->pc = 0x221F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221F68u;
    // 0x221f6c: 0x24a52e40  addiu       $a1, $a1, 0x2E40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x221F68u, 0x221F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F70u;
label_221f70:
    // 0x221f70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x221f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x221f74: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x221F74u;
    {
        const bool branch_taken_0x221f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F74u;
        // 0x221f78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221f74) {
            ctx->pc = 0x221F94u;
            goto label_221f94;
        }
    }
    ctx->pc = 0x221F7Cu;
    // 0x221f7c: 0x266705c8  addiu       $a3, $s3, 0x5C8
    ctx->pc = 0x221f7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 1480));
    // 0x221f80: 0x266505c0  addiu       $a1, $s3, 0x5C0
    ctx->pc = 0x221f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1472));
    // 0x221f84: 0xc09df62  jal         func_277D88
    ctx->pc = 0x221F84u;
    SET_GPR_U32(ctx, 31, 0x221F8Cu);
    ctx->pc = 0x221F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221F84u;
    // 0x221f88: 0x266605c4  addiu       $a2, $s3, 0x5C4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1476));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x221F84u, 0x221F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F8Cu;
label_221f8c:
    // 0x221f8c: 0x10000139  b           . + 4 + (0x139 << 2)
    ctx->pc = 0x221F8Cu;
    {
        const bool branch_taken_0x221f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F8Cu;
        // 0x221f90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221f8c) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x221F94u;
label_221f94:
    // 0x221f94: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x221f94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x221f98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f9c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x221F9Cu;
    SET_GPR_U32(ctx, 31, 0x221FA4u);
    ctx->pc = 0x221FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221F9Cu;
    // 0x221fa0: 0x24a52e50  addiu       $a1, $a1, 0x2E50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x221F9Cu, 0x221FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221FA4u;
label_221fa4:
    // 0x221fa4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x221fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x221fa8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x221FA8u;
    {
        const bool branch_taken_0x221fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221FA8u;
        // 0x221fac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221fa8) {
            ctx->pc = 0x221FC0u;
            goto label_221fc0;
        }
    }
    ctx->pc = 0x221FB0u;
    // 0x221fb0: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x221FB0u;
    SET_GPR_U32(ctx, 31, 0x221FB8u);
    ctx->pc = 0x221FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221FB0u;
    // 0x221fb4: 0x266505d0  addiu       $a1, $s3, 0x5D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x221FB0u, 0x221FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221FB8u;
label_221fb8:
    // 0x221fb8: 0x1000012e  b           . + 4 + (0x12E << 2)
    ctx->pc = 0x221FB8u;
    {
        const bool branch_taken_0x221fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221FB8u;
        // 0x221fbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221fb8) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x221FC0u;
label_221fc0:
    // 0x221fc0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x221fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x221fc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221fc8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x221FC8u;
    SET_GPR_U32(ctx, 31, 0x221FD0u);
    ctx->pc = 0x221FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221FC8u;
    // 0x221fcc: 0x24a52e60  addiu       $a1, $a1, 0x2E60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x221FC8u, 0x221FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221FD0u;
label_221fd0:
    // 0x221fd0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x221fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x221fd4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x221FD4u;
    {
        const bool branch_taken_0x221fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221FD4u;
        // 0x221fd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221fd4) {
            ctx->pc = 0x221FECu;
            goto label_221fec;
        }
    }
    ctx->pc = 0x221FDCu;
    // 0x221fdc: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x221FDCu;
    SET_GPR_U32(ctx, 31, 0x221FE4u);
    ctx->pc = 0x221FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221FDCu;
    // 0x221fe0: 0x266505dc  addiu       $a1, $s3, 0x5DC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x221FDCu, 0x221FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221FE4u;
label_221fe4:
    // 0x221fe4: 0x10000123  b           . + 4 + (0x123 << 2)
    ctx->pc = 0x221FE4u;
    {
        const bool branch_taken_0x221fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221FE4u;
        // 0x221fe8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221fe4) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x221FECu;
label_221fec:
    // 0x221fec: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x221fecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x221ff0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221ff4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x221FF4u;
    SET_GPR_U32(ctx, 31, 0x221FFCu);
    ctx->pc = 0x221FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221FF4u;
    // 0x221ff8: 0x24a52e70  addiu       $a1, $a1, 0x2E70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x221FF4u, 0x221FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221FFCu;
label_221ffc:
    // 0x221ffc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x221ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222000: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x222000u;
    {
        const bool branch_taken_0x222000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222000u;
        // 0x222004: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222000) {
            ctx->pc = 0x222018u;
            goto label_222018;
        }
    }
    ctx->pc = 0x222008u;
    // 0x222008: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x222008u;
    SET_GPR_U32(ctx, 31, 0x222010u);
    ctx->pc = 0x22200Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222008u;
    // 0x22200c: 0x266505e0  addiu       $a1, $s3, 0x5E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x222008u, 0x222010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222010u;
label_222010:
    // 0x222010: 0x10000118  b           . + 4 + (0x118 << 2)
    ctx->pc = 0x222010u;
    {
        const bool branch_taken_0x222010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222010u;
        // 0x222014: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222010) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x222018u;
label_222018:
    // 0x222018: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222018u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x22201c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22201cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222020: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222020u;
    SET_GPR_U32(ctx, 31, 0x222028u);
    ctx->pc = 0x222024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222020u;
    // 0x222024: 0x24a52e80  addiu       $a1, $a1, 0x2E80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222020u, 0x222028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222028u;
label_222028:
    // 0x222028: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22202c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x22202Cu;
    {
        const bool branch_taken_0x22202c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22202Cu;
        // 0x222030: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22202c) {
            ctx->pc = 0x222070u;
            goto label_222070;
        }
    }
    ctx->pc = 0x222034u;
    // 0x222034: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x222034u;
    SET_GPR_U32(ctx, 31, 0x22203Cu);
    ctx->pc = 0x222038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222034u;
    // 0x222038: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x222034u, 0x22203Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22203Cu;
label_22203c:
    // 0x22203c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22203cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222040: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x222040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222044: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x222044u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x222048: 0xc09df62  jal         func_277D88
    ctx->pc = 0x222048u;
    SET_GPR_U32(ctx, 31, 0x222050u);
    ctx->pc = 0x22204Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222048u;
    // 0x22204c: 0x37a70008  ori         $a3, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x222048u, 0x222050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222050u;
label_222050:
    // 0x222050: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x222050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222054: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x222054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x222058: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x222058u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x22205c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x22205cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222060: 0xe66205f0  swc1        $f2, 0x5F0($s3)
    ctx->pc = 0x222060u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1520), bits); }
    // 0x222064: 0xe66105f4  swc1        $f1, 0x5F4($s3)
    ctx->pc = 0x222064u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1524), bits); }
    // 0x222068: 0x10000101  b           . + 4 + (0x101 << 2)
    ctx->pc = 0x222068u;
    {
        const bool branch_taken_0x222068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222068u;
        // 0x22206c: 0xe66005f8  swc1        $f0, 0x5F8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1528), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x222068) {
            ctx->pc = 0x222470u;
            goto label_222470;
        }
    }
    ctx->pc = 0x222070u;
label_222070:
    // 0x222070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222074: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222074u;
    SET_GPR_U32(ctx, 31, 0x22207Cu);
    ctx->pc = 0x222078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222074u;
    // 0x222078: 0x24a52e90  addiu       $a1, $a1, 0x2E90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222074u, 0x22207Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22207Cu;
label_22207c:
    // 0x22207c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22207cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222080: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x222080u;
    {
        const bool branch_taken_0x222080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222080) {
            ctx->pc = 0x222084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222080u;
            // 0x222084: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2220BCu;
            goto label_2220bc;
        }
    }
    ctx->pc = 0x222088u;
    // 0x222088: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x222088u;
    SET_GPR_U32(ctx, 31, 0x222090u);
    ctx->pc = 0x22208Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222088u;
    // 0x22208c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x222088u, 0x222090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222090u;
label_222090:
    // 0x222090: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x222090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222094: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x222094u;
    SET_GPR_U32(ctx, 31, 0x22209Cu);
    ctx->pc = 0x222098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222094u;
    // 0x222098: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x222094u, 0x22209Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22209Cu;
label_22209c:
    // 0x22209c: 0xc097844  jal         func_25E110
    ctx->pc = 0x22209Cu;
    SET_GPR_U32(ctx, 31, 0x2220A4u);
    ctx->pc = 0x2220A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22209Cu;
    // 0x2220a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E110u, 0x22209Cu, 0x2220A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2220A4u;
label_2220a4:
    // 0x2220a4: 0xae620580  sw          $v0, 0x580($s3)
    ctx->pc = 0x2220a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1408), GPR_U32(ctx, 2));
    // 0x2220a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2220a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2220ac: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2220ACu;
    SET_GPR_U32(ctx, 31, 0x2220B4u);
    ctx->pc = 0x2220B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2220ACu;
    // 0x2220b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2220ACu, 0x2220B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2220B4u;
label_2220b4:
    // 0x2220b4: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x2220B4u;
    {
        const bool branch_taken_0x2220b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2220B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2220B4u;
        // 0x2220b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2220b4) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x2220BCu;
label_2220bc:
    // 0x2220bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2220bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2220c0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2220C0u;
    SET_GPR_U32(ctx, 31, 0x2220C8u);
    ctx->pc = 0x2220C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2220C0u;
    // 0x2220c4: 0x24a52ea8  addiu       $a1, $a1, 0x2EA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2220C0u, 0x2220C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2220C8u;
label_2220c8:
    // 0x2220c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2220c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2220cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2220CCu;
    {
        const bool branch_taken_0x2220cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2220D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2220CCu;
        // 0x2220d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2220cc) {
            ctx->pc = 0x2220ECu;
            goto label_2220ec;
        }
    }
    ctx->pc = 0x2220D4u;
    // 0x2220d4: 0x26670608  addiu       $a3, $s3, 0x608
    ctx->pc = 0x2220d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 1544));
    // 0x2220d8: 0x26650600  addiu       $a1, $s3, 0x600
    ctx->pc = 0x2220d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1536));
    // 0x2220dc: 0xc09df62  jal         func_277D88
    ctx->pc = 0x2220DCu;
    SET_GPR_U32(ctx, 31, 0x2220E4u);
    ctx->pc = 0x2220E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2220DCu;
    // 0x2220e0: 0x26660604  addiu       $a2, $s3, 0x604 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1540));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x2220DCu, 0x2220E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2220E4u;
label_2220e4:
    // 0x2220e4: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x2220E4u;
    {
        const bool branch_taken_0x2220e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2220E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2220E4u;
        // 0x2220e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2220e4) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x2220ECu;
label_2220ec:
    // 0x2220ec: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2220ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2220f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2220f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2220f4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2220F4u;
    SET_GPR_U32(ctx, 31, 0x2220FCu);
    ctx->pc = 0x2220F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2220F4u;
    // 0x2220f8: 0x24a52eb8  addiu       $a1, $a1, 0x2EB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2220F4u, 0x2220FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2220FCu;
label_2220fc:
    // 0x2220fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2220fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222100: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x222100u;
    {
        const bool branch_taken_0x222100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222100u;
        // 0x222104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222100) {
            ctx->pc = 0x222120u;
            goto label_222120;
        }
    }
    ctx->pc = 0x222108u;
    // 0x222108: 0x26670618  addiu       $a3, $s3, 0x618
    ctx->pc = 0x222108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 1560));
    // 0x22210c: 0x26650610  addiu       $a1, $s3, 0x610
    ctx->pc = 0x22210cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1552));
    // 0x222110: 0xc09df62  jal         func_277D88
    ctx->pc = 0x222110u;
    SET_GPR_U32(ctx, 31, 0x222118u);
    ctx->pc = 0x222114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222110u;
    // 0x222114: 0x26660614  addiu       $a2, $s3, 0x614 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1556));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x222110u, 0x222118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222118u;
label_222118:
    // 0x222118: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x222118u;
    {
        const bool branch_taken_0x222118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222118u;
        // 0x22211c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222118) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x222120u;
label_222120:
    // 0x222120: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222120u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222124: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222128: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222128u;
    SET_GPR_U32(ctx, 31, 0x222130u);
    ctx->pc = 0x22212Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222128u;
    // 0x22212c: 0x24a52ed0  addiu       $a1, $a1, 0x2ED0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222128u, 0x222130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222130u;
label_222130:
    // 0x222130: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222134: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x222134u;
    {
        const bool branch_taken_0x222134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222134u;
        // 0x222138: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222134) {
            ctx->pc = 0x22214Cu;
            goto label_22214c;
        }
    }
    ctx->pc = 0x22213Cu;
    // 0x22213c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x22213Cu;
    SET_GPR_U32(ctx, 31, 0x222144u);
    ctx->pc = 0x222140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22213Cu;
    // 0x222140: 0x26650624  addiu       $a1, $s3, 0x624 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1572));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x22213Cu, 0x222144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222144u;
label_222144:
    // 0x222144: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x222144u;
    {
        const bool branch_taken_0x222144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222144u;
        // 0x222148: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222144) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x22214Cu;
label_22214c:
    // 0x22214c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x22214cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222154: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222154u;
    SET_GPR_U32(ctx, 31, 0x22215Cu);
    ctx->pc = 0x222158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222154u;
    // 0x222158: 0x24a52ee0  addiu       $a1, $a1, 0x2EE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222154u, 0x22215Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22215Cu;
label_22215c:
    // 0x22215c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22215cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222160: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x222160u;
    {
        const bool branch_taken_0x222160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222160u;
        // 0x222164: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222160) {
            ctx->pc = 0x222178u;
            goto label_222178;
        }
    }
    ctx->pc = 0x222168u;
    // 0x222168: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x222168u;
    SET_GPR_U32(ctx, 31, 0x222170u);
    ctx->pc = 0x22216Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222168u;
    // 0x22216c: 0x26650628  addiu       $a1, $s3, 0x628 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x222168u, 0x222170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222170u;
label_222170:
    // 0x222170: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x222170u;
    {
        const bool branch_taken_0x222170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222170u;
        // 0x222174: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222170) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x222178u;
label_222178:
    // 0x222178: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x22217c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22217cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222180: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222180u;
    SET_GPR_U32(ctx, 31, 0x222188u);
    ctx->pc = 0x222184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222180u;
    // 0x222184: 0x24a52ef8  addiu       $a1, $a1, 0x2EF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222180u, 0x222188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222188u;
label_222188:
    // 0x222188: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22218c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22218Cu;
    {
        const bool branch_taken_0x22218c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22218Cu;
        // 0x222190: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22218c) {
            ctx->pc = 0x2221A4u;
            goto label_2221a4;
        }
    }
    ctx->pc = 0x222194u;
    // 0x222194: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x222194u;
    SET_GPR_U32(ctx, 31, 0x22219Cu);
    ctx->pc = 0x222198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222194u;
    // 0x222198: 0x2665062c  addiu       $a1, $s3, 0x62C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1580));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x222194u, 0x22219Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22219Cu;
label_22219c:
    // 0x22219c: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x22219Cu;
    {
        const bool branch_taken_0x22219c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2221A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22219Cu;
        // 0x2221a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22219c) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x2221A4u;
label_2221a4:
    // 0x2221a4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2221a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2221a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2221a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2221ac: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2221ACu;
    SET_GPR_U32(ctx, 31, 0x2221B4u);
    ctx->pc = 0x2221B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2221ACu;
    // 0x2221b0: 0x24a52f10  addiu       $a1, $a1, 0x2F10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2221ACu, 0x2221B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2221B4u;
label_2221b4:
    // 0x2221b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2221b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2221b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2221B8u;
    {
        const bool branch_taken_0x2221b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2221BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2221B8u;
        // 0x2221bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2221b8) {
            ctx->pc = 0x2221D0u;
            goto label_2221d0;
        }
    }
    ctx->pc = 0x2221C0u;
    // 0x2221c0: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x2221C0u;
    SET_GPR_U32(ctx, 31, 0x2221C8u);
    ctx->pc = 0x2221C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2221C0u;
    // 0x2221c4: 0x26650630  addiu       $a1, $s3, 0x630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x2221C0u, 0x2221C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2221C8u;
label_2221c8:
    // 0x2221c8: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x2221C8u;
    {
        const bool branch_taken_0x2221c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2221CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2221C8u;
        // 0x2221cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2221c8) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x2221D0u;
label_2221d0:
    // 0x2221d0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2221d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2221d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2221d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2221d8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2221D8u;
    SET_GPR_U32(ctx, 31, 0x2221E0u);
    ctx->pc = 0x2221DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2221D8u;
    // 0x2221dc: 0x24a52f20  addiu       $a1, $a1, 0x2F20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2221D8u, 0x2221E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2221E0u;
label_2221e0:
    // 0x2221e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2221e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2221e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2221E4u;
    {
        const bool branch_taken_0x2221e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2221E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2221E4u;
        // 0x2221e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2221e4) {
            ctx->pc = 0x2221FCu;
            goto label_2221fc;
        }
    }
    ctx->pc = 0x2221ECu;
    // 0x2221ec: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x2221ECu;
    SET_GPR_U32(ctx, 31, 0x2221F4u);
    ctx->pc = 0x2221F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2221ECu;
    // 0x2221f0: 0x26650638  addiu       $a1, $s3, 0x638 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x2221ECu, 0x2221F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2221F4u;
label_2221f4:
    // 0x2221f4: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x2221F4u;
    {
        const bool branch_taken_0x2221f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2221F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2221F4u;
        // 0x2221f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2221f4) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x2221FCu;
label_2221fc:
    // 0x2221fc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2221fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222204: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222204u;
    SET_GPR_U32(ctx, 31, 0x22220Cu);
    ctx->pc = 0x222208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222204u;
    // 0x222208: 0x24a52f30  addiu       $a1, $a1, 0x2F30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222204u, 0x22220Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22220Cu;
label_22220c:
    // 0x22220c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22220cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222210: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x222210u;
    {
        const bool branch_taken_0x222210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222210u;
        // 0x222214: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222210) {
            ctx->pc = 0x222228u;
            goto label_222228;
        }
    }
    ctx->pc = 0x222218u;
    // 0x222218: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x222218u;
    SET_GPR_U32(ctx, 31, 0x222220u);
    ctx->pc = 0x22221Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222218u;
    // 0x22221c: 0x26650640  addiu       $a1, $s3, 0x640 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x222218u, 0x222220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222220u;
label_222220:
    // 0x222220: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x222220u;
    {
        const bool branch_taken_0x222220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222220u;
        // 0x222224: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222220) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x222228u;
label_222228:
    // 0x222228: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x22222c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22222cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222230: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222230u;
    SET_GPR_U32(ctx, 31, 0x222238u);
    ctx->pc = 0x222234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222230u;
    // 0x222234: 0x24a52f40  addiu       $a1, $a1, 0x2F40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222230u, 0x222238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222238u;
label_222238:
    // 0x222238: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22223c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22223Cu;
    {
        const bool branch_taken_0x22223c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22223Cu;
        // 0x222240: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22223c) {
            ctx->pc = 0x222254u;
            goto label_222254;
        }
    }
    ctx->pc = 0x222244u;
    // 0x222244: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x222244u;
    SET_GPR_U32(ctx, 31, 0x22224Cu);
    ctx->pc = 0x222248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222244u;
    // 0x222248: 0x26650654  addiu       $a1, $s3, 0x654 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1620));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x222244u, 0x22224Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22224Cu;
label_22224c:
    // 0x22224c: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x22224Cu;
    {
        const bool branch_taken_0x22224c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22224Cu;
        // 0x222250: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22224c) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x222254u;
label_222254:
    // 0x222254: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222254u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22225c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x22225Cu;
    SET_GPR_U32(ctx, 31, 0x222264u);
    ctx->pc = 0x222260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22225Cu;
    // 0x222260: 0x24a52f60  addiu       $a1, $a1, 0x2F60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x22225Cu, 0x222264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222264u;
label_222264:
    // 0x222264: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222268: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x222268u;
    {
        const bool branch_taken_0x222268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222268u;
        // 0x22226c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222268) {
            ctx->pc = 0x222280u;
            goto label_222280;
        }
    }
    ctx->pc = 0x222270u;
    // 0x222270: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x222270u;
    SET_GPR_U32(ctx, 31, 0x222278u);
    ctx->pc = 0x222274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222270u;
    // 0x222274: 0x26650660  addiu       $a1, $s3, 0x660 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x222270u, 0x222278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222278u;
label_222278:
    // 0x222278: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x222278u;
    {
        const bool branch_taken_0x222278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222278u;
        // 0x22227c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222278) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x222280u;
label_222280:
    // 0x222280: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222280u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222288: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222288u;
    SET_GPR_U32(ctx, 31, 0x222290u);
    ctx->pc = 0x22228Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222288u;
    // 0x22228c: 0x24a52f80  addiu       $a1, $a1, 0x2F80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222288u, 0x222290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222290u;
label_222290:
    // 0x222290: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222294: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x222294u;
    {
        const bool branch_taken_0x222294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222294u;
        // 0x222298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222294) {
            ctx->pc = 0x2222ACu;
            goto label_2222ac;
        }
    }
    ctx->pc = 0x22229Cu;
    // 0x22229c: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x22229Cu;
    SET_GPR_U32(ctx, 31, 0x2222A4u);
    ctx->pc = 0x2222A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22229Cu;
    // 0x2222a0: 0x2665066c  addiu       $a1, $s3, 0x66C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1644));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x22229Cu, 0x2222A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2222A4u;
label_2222a4:
    // 0x2222a4: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x2222A4u;
    {
        const bool branch_taken_0x2222a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2222A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2222A4u;
        // 0x2222a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2222a4) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x2222ACu;
label_2222ac:
    // 0x2222ac: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2222acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2222b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2222b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2222b4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2222B4u;
    SET_GPR_U32(ctx, 31, 0x2222BCu);
    ctx->pc = 0x2222B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2222B4u;
    // 0x2222b8: 0x24a52fa0  addiu       $a1, $a1, 0x2FA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2222B4u, 0x2222BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2222BCu;
label_2222bc:
    // 0x2222bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2222bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2222c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2222C0u;
    {
        const bool branch_taken_0x2222c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2222C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2222C0u;
        // 0x2222c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2222c0) {
            ctx->pc = 0x2222D8u;
            goto label_2222d8;
        }
    }
    ctx->pc = 0x2222C8u;
    // 0x2222c8: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2222C8u;
    SET_GPR_U32(ctx, 31, 0x2222D0u);
    ctx->pc = 0x2222CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2222C8u;
    // 0x2222cc: 0x26650678  addiu       $a1, $s3, 0x678 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2222C8u, 0x2222D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2222D0u;
label_2222d0:
    // 0x2222d0: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x2222D0u;
    {
        const bool branch_taken_0x2222d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2222D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2222D0u;
        // 0x2222d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2222d0) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x2222D8u;
label_2222d8:
    // 0x2222d8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2222d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2222dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2222dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2222e0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2222E0u;
    SET_GPR_U32(ctx, 31, 0x2222E8u);
    ctx->pc = 0x2222E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2222E0u;
    // 0x2222e4: 0x24a52fc0  addiu       $a1, $a1, 0x2FC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2222E0u, 0x2222E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2222E8u;
label_2222e8:
    // 0x2222e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2222e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2222ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2222ECu;
    {
        const bool branch_taken_0x2222ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2222F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2222ECu;
        // 0x2222f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2222ec) {
            ctx->pc = 0x222304u;
            goto label_222304;
        }
    }
    ctx->pc = 0x2222F4u;
    // 0x2222f4: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2222F4u;
    SET_GPR_U32(ctx, 31, 0x2222FCu);
    ctx->pc = 0x2222F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2222F4u;
    // 0x2222f8: 0x2665067c  addiu       $a1, $s3, 0x67C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1660));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2222F4u, 0x2222FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2222FCu;
label_2222fc:
    // 0x2222fc: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x2222FCu;
    {
        const bool branch_taken_0x2222fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2222FCu;
        // 0x222300: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2222fc) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x222304u;
label_222304:
    // 0x222304: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22230c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x22230Cu;
    SET_GPR_U32(ctx, 31, 0x222314u);
    ctx->pc = 0x222310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22230Cu;
    // 0x222310: 0x24a52fe0  addiu       $a1, $a1, 0x2FE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x22230Cu, 0x222314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222314u;
label_222314:
    // 0x222314: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222318: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x222318u;
    {
        const bool branch_taken_0x222318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222318u;
        // 0x22231c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222318) {
            ctx->pc = 0x222330u;
            goto label_222330;
        }
    }
    ctx->pc = 0x222320u;
    // 0x222320: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x222320u;
    SET_GPR_U32(ctx, 31, 0x222328u);
    ctx->pc = 0x222324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222320u;
    // 0x222324: 0x26650680  addiu       $a1, $s3, 0x680 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x222320u, 0x222328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222328u;
label_222328:
    // 0x222328: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x222328u;
    {
        const bool branch_taken_0x222328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222328u;
        // 0x22232c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222328) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x222330u;
label_222330:
    // 0x222330: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222330u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222338: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222338u;
    SET_GPR_U32(ctx, 31, 0x222340u);
    ctx->pc = 0x22233Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222338u;
    // 0x22233c: 0x24a53000  addiu       $a1, $a1, 0x3000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222338u, 0x222340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222340u;
label_222340:
    // 0x222340: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222344: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x222344u;
    {
        const bool branch_taken_0x222344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222344u;
        // 0x222348: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222344) {
            ctx->pc = 0x22235Cu;
            goto label_22235c;
        }
    }
    ctx->pc = 0x22234Cu;
    // 0x22234c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x22234Cu;
    SET_GPR_U32(ctx, 31, 0x222354u);
    ctx->pc = 0x222350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22234Cu;
    // 0x222350: 0x26650684  addiu       $a1, $s3, 0x684 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1668));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x22234Cu, 0x222354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222354u;
label_222354:
    // 0x222354: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x222354u;
    {
        const bool branch_taken_0x222354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222354u;
        // 0x222358: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222354) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x22235Cu;
label_22235c:
    // 0x22235c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x22235cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222364: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222364u;
    SET_GPR_U32(ctx, 31, 0x22236Cu);
    ctx->pc = 0x222368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222364u;
    // 0x222368: 0x24a53020  addiu       $a1, $a1, 0x3020 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222364u, 0x22236Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22236Cu;
label_22236c:
    // 0x22236c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22236cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222370: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x222370u;
    {
        const bool branch_taken_0x222370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222370u;
        // 0x222374: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222370) {
            ctx->pc = 0x222388u;
            goto label_222388;
        }
    }
    ctx->pc = 0x222378u;
    // 0x222378: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x222378u;
    SET_GPR_U32(ctx, 31, 0x222380u);
    ctx->pc = 0x22237Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222378u;
    // 0x22237c: 0x26650688  addiu       $a1, $s3, 0x688 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x222378u, 0x222380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222380u;
label_222380:
    // 0x222380: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x222380u;
    {
        const bool branch_taken_0x222380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222380u;
        // 0x222384: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222380) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x222388u;
label_222388:
    // 0x222388: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222388u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x22238c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22238cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222390: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222390u;
    SET_GPR_U32(ctx, 31, 0x222398u);
    ctx->pc = 0x222394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222390u;
    // 0x222394: 0x24a53040  addiu       $a1, $a1, 0x3040 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222390u, 0x222398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222398u;
label_222398:
    // 0x222398: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22239c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22239Cu;
    {
        const bool branch_taken_0x22239c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2223A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22239Cu;
        // 0x2223a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22239c) {
            ctx->pc = 0x2223B4u;
            goto label_2223b4;
        }
    }
    ctx->pc = 0x2223A4u;
    // 0x2223a4: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2223A4u;
    SET_GPR_U32(ctx, 31, 0x2223ACu);
    ctx->pc = 0x2223A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2223A4u;
    // 0x2223a8: 0x2665068c  addiu       $a1, $s3, 0x68C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1676));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2223A4u, 0x2223ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2223ACu;
label_2223ac:
    // 0x2223ac: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2223ACu;
    {
        const bool branch_taken_0x2223ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2223B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2223ACu;
        // 0x2223b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2223ac) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x2223B4u;
label_2223b4:
    // 0x2223b4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2223b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2223b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2223b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2223bc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2223BCu;
    SET_GPR_U32(ctx, 31, 0x2223C4u);
    ctx->pc = 0x2223C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2223BCu;
    // 0x2223c0: 0x24a53060  addiu       $a1, $a1, 0x3060 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2223BCu, 0x2223C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2223C4u;
label_2223c4:
    // 0x2223c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2223c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2223c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2223C8u;
    {
        const bool branch_taken_0x2223c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2223CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2223C8u;
        // 0x2223cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2223c8) {
            ctx->pc = 0x2223E0u;
            goto label_2223e0;
        }
    }
    ctx->pc = 0x2223D0u;
    // 0x2223d0: 0xc09e056  jal         func_278158
    ctx->pc = 0x2223D0u;
    SET_GPR_U32(ctx, 31, 0x2223D8u);
    ctx->pc = 0x2223D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2223D0u;
    // 0x2223d4: 0x26650620  addiu       $a1, $s3, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x2223D0u, 0x2223D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2223D8u;
label_2223d8:
    // 0x2223d8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2223D8u;
    {
        const bool branch_taken_0x2223d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2223DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2223D8u;
        // 0x2223dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2223d8) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x2223E0u;
label_2223e0:
    // 0x2223e0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2223e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2223e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2223e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2223e8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2223E8u;
    SET_GPR_U32(ctx, 31, 0x2223F0u);
    ctx->pc = 0x2223ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2223E8u;
    // 0x2223ec: 0x24a53078  addiu       $a1, $a1, 0x3078 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2223E8u, 0x2223F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2223F0u;
label_2223f0:
    // 0x2223f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2223f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2223f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2223F4u;
    {
        const bool branch_taken_0x2223f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2223F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2223F4u;
        // 0x2223f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2223f4) {
            ctx->pc = 0x22240Cu;
            goto label_22240c;
        }
    }
    ctx->pc = 0x2223FCu;
    // 0x2223fc: 0xc09e056  jal         func_278158
    ctx->pc = 0x2223FCu;
    SET_GPR_U32(ctx, 31, 0x222404u);
    ctx->pc = 0x222400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2223FCu;
    // 0x222400: 0x26650690  addiu       $a1, $s3, 0x690 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x2223FCu, 0x222404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222404u;
label_222404:
    // 0x222404: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x222404u;
    {
        const bool branch_taken_0x222404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222404u;
        // 0x222408: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222404) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x22240Cu;
label_22240c:
    // 0x22240c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x22240cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222414: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222414u;
    SET_GPR_U32(ctx, 31, 0x22241Cu);
    ctx->pc = 0x222418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222414u;
    // 0x222418: 0x24a53090  addiu       $a1, $a1, 0x3090 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222414u, 0x22241Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22241Cu;
label_22241c:
    // 0x22241c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22241cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222420: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x222420u;
    {
        const bool branch_taken_0x222420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222420u;
        // 0x222424: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222420) {
            ctx->pc = 0x222438u;
            goto label_222438;
        }
    }
    ctx->pc = 0x222428u;
    // 0x222428: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x222428u;
    SET_GPR_U32(ctx, 31, 0x222430u);
    ctx->pc = 0x22242Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222428u;
    // 0x22242c: 0x26650694  addiu       $a1, $s3, 0x694 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1684));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x222428u, 0x222430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222430u;
label_222430:
    // 0x222430: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x222430u;
    {
        const bool branch_taken_0x222430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222430u;
        // 0x222434: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222430) {
            ctx->pc = 0x222474u;
            goto label_222474;
        }
    }
    ctx->pc = 0x222438u;
label_222438:
    // 0x222438: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222438u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x22243c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22243cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222440: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222440u;
    SET_GPR_U32(ctx, 31, 0x222448u);
    ctx->pc = 0x222444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222440u;
    // 0x222444: 0x24a530a0  addiu       $a1, $a1, 0x30A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222440u, 0x222448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222448u;
label_222448:
    // 0x222448: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22244c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22244Cu;
    {
        const bool branch_taken_0x22244c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22244Cu;
        // 0x222450: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22244c) {
            ctx->pc = 0x222468u;
            goto label_222468;
        }
    }
    ctx->pc = 0x222454u;
    // 0x222454: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x222454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222458: 0xc0881f4  jal         func_2207D0
    ctx->pc = 0x222458u;
    SET_GPR_U32(ctx, 31, 0x222460u);
    ctx->pc = 0x22245Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222458u;
    // 0x22245c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2207D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2207D0u, 0x222458u, 0x222460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222460u;
label_222460:
    // 0x222460: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x222460u;
    {
        const bool branch_taken_0x222460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222460u;
        // 0x222464: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222460) {
            ctx->pc = 0x222478u;
            goto label_222478;
        }
    }
    ctx->pc = 0x222468u;
label_222468:
    // 0x222468: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x222468u;
    SET_GPR_U32(ctx, 31, 0x222470u);
    ctx->pc = 0x22246Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222468u;
    // 0x22246c: 0x2665069c  addiu       $a1, $s3, 0x69C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1692));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x222468u, 0x222470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222470u;
label_222470:
    // 0x222470: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x222470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_222474:
    // 0x222474: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x222474u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_222478:
    // 0x222478: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x222478u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22247c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x22247cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x222480: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x222480u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x222484: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x222484u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x222488: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x222488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22248c: 0x3e00008  jr          $ra
    ctx->pc = 0x22248Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22248Cu;
        // 0x222490: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22248Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222494u;
    // 0x222494: 0x0  nop
    ctx->pc = 0x222494u;
    // NOP
    ctx->pc = 0x222498u;
}
