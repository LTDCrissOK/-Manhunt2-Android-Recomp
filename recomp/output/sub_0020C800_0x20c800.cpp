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

// Function: sub_0020C800
// Address: 0x20c800 - 0x20cf30
void sub_0020C800_0x20c800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C800_0x20c800");
#endif

    switch (ctx->pc) {
        case 0x20c82cu: goto label_20c82c;
        case 0x20c840u: goto label_20c840;
        case 0x20c858u: goto label_20c858;
        case 0x20c86cu: goto label_20c86c;
        case 0x20c874u: goto label_20c874;
        case 0x20c888u: goto label_20c888;
        case 0x20c89cu: goto label_20c89c;
        case 0x20c8a8u: goto label_20c8a8;
        case 0x20c8bcu: goto label_20c8bc;
        case 0x20c8d0u: goto label_20c8d0;
        case 0x20c8dcu: goto label_20c8dc;
        case 0x20c8f0u: goto label_20c8f0;
        case 0x20c904u: goto label_20c904;
        case 0x20c914u: goto label_20c914;
        case 0x20c934u: goto label_20c934;
        case 0x20c948u: goto label_20c948;
        case 0x20c958u: goto label_20c958;
        case 0x20c9a0u: goto label_20c9a0;
        case 0x20c9b4u: goto label_20c9b4;
        case 0x20c9c4u: goto label_20c9c4;
        case 0x20c9e0u: goto label_20c9e0;
        case 0x20c9ecu: goto label_20c9ec;
        case 0x20c9f4u: goto label_20c9f4;
        case 0x20ca10u: goto label_20ca10;
        case 0x20ca44u: goto label_20ca44;
        case 0x20ca64u: goto label_20ca64;
        case 0x20ca80u: goto label_20ca80;
        case 0x20ca88u: goto label_20ca88;
        case 0x20ca94u: goto label_20ca94;
        case 0x20caa0u: goto label_20caa0;
        case 0x20caa8u: goto label_20caa8;
        case 0x20cabcu: goto label_20cabc;
        case 0x20caf8u: goto label_20caf8;
        case 0x20cb0cu: goto label_20cb0c;
        case 0x20cb18u: goto label_20cb18;
        case 0x20cb2cu: goto label_20cb2c;
        case 0x20cb40u: goto label_20cb40;
        case 0x20cb4cu: goto label_20cb4c;
        case 0x20cb60u: goto label_20cb60;
        case 0x20cb74u: goto label_20cb74;
        case 0x20cb84u: goto label_20cb84;
        case 0x20cba4u: goto label_20cba4;
        case 0x20cbb8u: goto label_20cbb8;
        case 0x20cbccu: goto label_20cbcc;
        case 0x20cbe0u: goto label_20cbe0;
        case 0x20cbf0u: goto label_20cbf0;
        case 0x20cc04u: goto label_20cc04;
        case 0x20cc18u: goto label_20cc18;
        case 0x20cc2cu: goto label_20cc2c;
        case 0x20cc5cu: goto label_20cc5c;
        case 0x20cc70u: goto label_20cc70;
        case 0x20cc80u: goto label_20cc80;
        case 0x20cc94u: goto label_20cc94;
        case 0x20cca8u: goto label_20cca8;
        case 0x20ccbcu: goto label_20ccbc;
        case 0x20ccd0u: goto label_20ccd0;
        case 0x20cce4u: goto label_20cce4;
        case 0x20ccf8u: goto label_20ccf8;
        case 0x20cd10u: goto label_20cd10;
        case 0x20cd28u: goto label_20cd28;
        case 0x20cd30u: goto label_20cd30;
        case 0x20cd40u: goto label_20cd40;
        case 0x20cd48u: goto label_20cd48;
        case 0x20cd50u: goto label_20cd50;
        case 0x20cd58u: goto label_20cd58;
        case 0x20cd64u: goto label_20cd64;
        case 0x20cd90u: goto label_20cd90;
        case 0x20cda4u: goto label_20cda4;
        case 0x20cdb4u: goto label_20cdb4;
        case 0x20cdc8u: goto label_20cdc8;
        case 0x20cddcu: goto label_20cddc;
        case 0x20cdf0u: goto label_20cdf0;
        case 0x20ce04u: goto label_20ce04;
        case 0x20ce18u: goto label_20ce18;
        case 0x20ce2cu: goto label_20ce2c;
        case 0x20ce40u: goto label_20ce40;
        case 0x20ce54u: goto label_20ce54;
        case 0x20ce6cu: goto label_20ce6c;
        case 0x20ce80u: goto label_20ce80;
        case 0x20ce98u: goto label_20ce98;
        case 0x20ceacu: goto label_20ceac;
        case 0x20cec4u: goto label_20cec4;
        case 0x20cee0u: goto label_20cee0;
        case 0x20cef0u: goto label_20cef0;
        case 0x20cf04u: goto label_20cf04;
        default: break;
    }

    ctx->pc = 0x20c800u;

    // 0x20c800: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x20c800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x20c804: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20c804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20c808: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x20c808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x20c80c: 0x24a510f8  addiu       $a1, $a1, 0x10F8
    ctx->pc = 0x20c80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4344));
    // 0x20c810: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20c810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c814: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x20c814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x20c818: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x20c818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x20c81c: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x20c81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x20c820: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x20c820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x20c824: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20C824u;
    SET_GPR_U32(ctx, 31, 0x20C82Cu);
    ctx->pc = 0x20C828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C824u;
    // 0x20c828: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20C824u, 0x20C82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C82Cu;
label_20c82c:
    // 0x20c82c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20c82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20c830: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20C830u;
    {
        const bool branch_taken_0x20c830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C830u;
        // 0x20c834: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c830) {
            ctx->pc = 0x20C84Cu;
            goto label_20c84c;
        }
    }
    ctx->pc = 0x20C838u;
    // 0x20c838: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20C838u;
    SET_GPR_U32(ctx, 31, 0x20C840u);
    ctx->pc = 0x20C83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C838u;
    // 0x20c83c: 0x240401a0  addiu       $a0, $zero, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20C838u, 0x20C840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C840u;
label_20c840:
    // 0x20c840: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20c840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c844: 0x100001ad  b           . + 4 + (0x1AD << 2)
    ctx->pc = 0x20C844u;
    {
        const bool branch_taken_0x20c844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C844u;
        // 0x20c848: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c844) {
            ctx->pc = 0x20CEFCu;
            goto label_20cefc;
        }
    }
    ctx->pc = 0x20C84Cu;
label_20c84c:
    // 0x20c84c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20c84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c850: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20C850u;
    SET_GPR_U32(ctx, 31, 0x20C858u);
    ctx->pc = 0x20C854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C850u;
    // 0x20c854: 0x24a51108  addiu       $a1, $a1, 0x1108 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20C850u, 0x20C858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C858u;
label_20c858:
    // 0x20c858: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20c858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20c85c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20C85Cu;
    {
        const bool branch_taken_0x20c85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C85Cu;
        // 0x20c860: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c85c) {
            ctx->pc = 0x20C87Cu;
            goto label_20c87c;
        }
    }
    ctx->pc = 0x20C864u;
    // 0x20c864: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20C864u;
    SET_GPR_U32(ctx, 31, 0x20C86Cu);
    ctx->pc = 0x20C868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C864u;
    // 0x20c868: 0x240415b0  addiu       $a0, $zero, 0x15B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20C864u, 0x20C86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C86Cu;
label_20c86c:
    // 0x20c86c: 0xc087a8c  jal         func_21EA30
    ctx->pc = 0x20C86Cu;
    SET_GPR_U32(ctx, 31, 0x20C874u);
    ctx->pc = 0x20C870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C86Cu;
    // 0x20c870: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EA30u, 0x20C86Cu, 0x20C874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C874u;
label_20c874:
    // 0x20c874: 0x100001a4  b           . + 4 + (0x1A4 << 2)
    ctx->pc = 0x20C874u;
    {
        const bool branch_taken_0x20c874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C874u;
        // 0x20c878: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c874) {
            ctx->pc = 0x20CF08u;
            goto label_20cf08;
        }
    }
    ctx->pc = 0x20C87Cu;
label_20c87c:
    // 0x20c87c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20c87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c880: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20C880u;
    SET_GPR_U32(ctx, 31, 0x20C888u);
    ctx->pc = 0x20C884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C880u;
    // 0x20c884: 0x24a51118  addiu       $a1, $a1, 0x1118 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20C880u, 0x20C888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C888u;
label_20c888:
    // 0x20c888: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20c888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20c88c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20C88Cu;
    {
        const bool branch_taken_0x20c88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C88Cu;
        // 0x20c890: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c88c) {
            ctx->pc = 0x20C8B0u;
            goto label_20c8b0;
        }
    }
    ctx->pc = 0x20C894u;
    // 0x20c894: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20C894u;
    SET_GPR_U32(ctx, 31, 0x20C89Cu);
    ctx->pc = 0x20C898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C894u;
    // 0x20c898: 0x24041410  addiu       $a0, $zero, 0x1410 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20C894u, 0x20C89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C89Cu;
label_20c89c:
    // 0x20c89c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x20c89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x20c8a0: 0xc087e84  jal         func_21FA10
    ctx->pc = 0x20C8A0u;
    SET_GPR_U32(ctx, 31, 0x20C8A8u);
    ctx->pc = 0x20C8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C8A0u;
    // 0x20c8a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FA10u, 0x20C8A0u, 0x20C8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C8A8u;
label_20c8a8:
    // 0x20c8a8: 0x10000197  b           . + 4 + (0x197 << 2)
    ctx->pc = 0x20C8A8u;
    {
        const bool branch_taken_0x20c8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C8A8u;
        // 0x20c8ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c8a8) {
            ctx->pc = 0x20CF08u;
            goto label_20cf08;
        }
    }
    ctx->pc = 0x20C8B0u;
label_20c8b0:
    // 0x20c8b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20c8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c8b4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20C8B4u;
    SET_GPR_U32(ctx, 31, 0x20C8BCu);
    ctx->pc = 0x20C8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C8B4u;
    // 0x20c8b8: 0x24a51120  addiu       $a1, $a1, 0x1120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20C8B4u, 0x20C8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C8BCu;
label_20c8bc:
    // 0x20c8bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20c8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20c8c0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20C8C0u;
    {
        const bool branch_taken_0x20c8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C8C0u;
        // 0x20c8c4: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c8c0) {
            ctx->pc = 0x20C8E4u;
            goto label_20c8e4;
        }
    }
    ctx->pc = 0x20C8C8u;
    // 0x20c8c8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20C8C8u;
    SET_GPR_U32(ctx, 31, 0x20C8D0u);
    ctx->pc = 0x20C8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C8C8u;
    // 0x20c8cc: 0x24041440  addiu       $a0, $zero, 0x1440 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20C8C8u, 0x20C8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C8D0u;
label_20c8d0:
    // 0x20c8d0: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x20c8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x20c8d4: 0xc088152  jal         func_220548
    ctx->pc = 0x20C8D4u;
    SET_GPR_U32(ctx, 31, 0x20C8DCu);
    ctx->pc = 0x20C8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C8D4u;
    // 0x20c8d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220548u, 0x20C8D4u, 0x20C8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C8DCu;
label_20c8dc:
    // 0x20c8dc: 0x1000018a  b           . + 4 + (0x18A << 2)
    ctx->pc = 0x20C8DCu;
    {
        const bool branch_taken_0x20c8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C8DCu;
        // 0x20c8e0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c8dc) {
            ctx->pc = 0x20CF08u;
            goto label_20cf08;
        }
    }
    ctx->pc = 0x20C8E4u;
label_20c8e4:
    // 0x20c8e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20c8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c8e8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20C8E8u;
    SET_GPR_U32(ctx, 31, 0x20C8F0u);
    ctx->pc = 0x20C8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C8E8u;
    // 0x20c8ec: 0x24a51130  addiu       $a1, $a1, 0x1130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20C8E8u, 0x20C8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C8F0u;
label_20c8f0:
    // 0x20c8f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20c8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20c8f4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20C8F4u;
    {
        const bool branch_taken_0x20c8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C8F4u;
        // 0x20c8f8: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c8f4) {
            ctx->pc = 0x20C928u;
            goto label_20c928;
        }
    }
    ctx->pc = 0x20C8FCu;
    // 0x20c8fc: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20C8FCu;
    SET_GPR_U32(ctx, 31, 0x20C904u);
    ctx->pc = 0x20C900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C8FCu;
    // 0x20c900: 0x24041440  addiu       $a0, $zero, 0x1440 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20C8FCu, 0x20C904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C904u;
label_20c904:
    // 0x20c904: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20c904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c908: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x20c908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x20c90c: 0xc088152  jal         func_220548
    ctx->pc = 0x20C90Cu;
    SET_GPR_U32(ctx, 31, 0x20C914u);
    ctx->pc = 0x20C910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C90Cu;
    // 0x20c910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220548u, 0x20C90Cu, 0x20C914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C914u;
label_20c914:
    // 0x20c914: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x20c914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x20c918: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20c918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c91c: 0x246318c8  addiu       $v1, $v1, 0x18C8
    ctx->pc = 0x20c91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6344));
    // 0x20c920: 0x10000179  b           . + 4 + (0x179 << 2)
    ctx->pc = 0x20C920u;
    {
        const bool branch_taken_0x20c920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C920u;
        // 0x20c924: 0xae030190  sw          $v1, 0x190($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c920) {
            ctx->pc = 0x20CF08u;
            goto label_20cf08;
        }
    }
    ctx->pc = 0x20C928u;
label_20c928:
    // 0x20c928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20c928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c92c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20C92Cu;
    SET_GPR_U32(ctx, 31, 0x20C934u);
    ctx->pc = 0x20C930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C92Cu;
    // 0x20c930: 0x24a51140  addiu       $a1, $a1, 0x1140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20C92Cu, 0x20C934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C934u;
label_20c934:
    // 0x20c934: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20c934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20c938: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x20C938u;
    {
        const bool branch_taken_0x20c938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C938u;
        // 0x20c93c: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c938) {
            ctx->pc = 0x20C994u;
            goto label_20c994;
        }
    }
    ctx->pc = 0x20C940u;
    // 0x20c940: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20C940u;
    SET_GPR_U32(ctx, 31, 0x20C948u);
    ctx->pc = 0x20C944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C940u;
    // 0x20c944: 0x240401c0  addiu       $a0, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20C940u, 0x20C948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C948u;
label_20c948:
    // 0x20c948: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20c948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c94c: 0x24050401  addiu       $a1, $zero, 0x401
    ctx->pc = 0x20c94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
    // 0x20c950: 0xc087380  jal         func_21CE00
    ctx->pc = 0x20C950u;
    SET_GPR_U32(ctx, 31, 0x20C958u);
    ctx->pc = 0x20C954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C950u;
    // 0x20c954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CE00u, 0x20C950u, 0x20C958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C958u;
label_20c958:
    // 0x20c958: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x20c958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x20c95c: 0xae0001a0  sw          $zero, 0x1A0($s0)
    ctx->pc = 0x20c95cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 0));
    // 0x20c960: 0x246319a8  addiu       $v1, $v1, 0x19A8
    ctx->pc = 0x20c960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6568));
    // 0x20c964: 0x260201a0  addiu       $v0, $s0, 0x1A0
    ctx->pc = 0x20c964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x20c968: 0xae030190  sw          $v1, 0x190($s0)
    ctx->pc = 0x20c968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 3));
    // 0x20c96c: 0x260401b0  addiu       $a0, $s0, 0x1B0
    ctx->pc = 0x20c96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    // 0x20c970: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x20c970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x20c974: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20c974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c978: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x20c978u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x20c97c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x20c97cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x20c980: 0xae0001b0  sw          $zero, 0x1B0($s0)
    ctx->pc = 0x20c980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 0));
    // 0x20c984: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x20c984u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x20c988: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x20c988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x20c98c: 0x1000015e  b           . + 4 + (0x15E << 2)
    ctx->pc = 0x20C98Cu;
    {
        const bool branch_taken_0x20c98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C98Cu;
        // 0x20c990: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c98c) {
            ctx->pc = 0x20CF08u;
            goto label_20cf08;
        }
    }
    ctx->pc = 0x20C994u;
label_20c994:
    // 0x20c994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20c994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c998: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20C998u;
    SET_GPR_U32(ctx, 31, 0x20C9A0u);
    ctx->pc = 0x20C99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C998u;
    // 0x20c99c: 0x24a51150  addiu       $a1, $a1, 0x1150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20C998u, 0x20C9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C9A0u;
label_20c9a0:
    // 0x20c9a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20c9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20c9a4: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x20C9A4u;
    {
        const bool branch_taken_0x20c9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C9A4u;
        // 0x20c9a8: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c9a4) {
            ctx->pc = 0x20CAECu;
            goto label_20caec;
        }
    }
    ctx->pc = 0x20C9ACu;
    // 0x20c9ac: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20C9ACu;
    SET_GPR_U32(ctx, 31, 0x20C9B4u);
    ctx->pc = 0x20C9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C9ACu;
    // 0x20c9b0: 0x24040340  addiu       $a0, $zero, 0x340 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20C9ACu, 0x20C9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C9B4u;
label_20c9b4:
    // 0x20c9b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20c9b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c9b8: 0x24051001  addiu       $a1, $zero, 0x1001
    ctx->pc = 0x20c9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x20c9bc: 0xc08897a  jal         func_2225E8
    ctx->pc = 0x20C9BCu;
    SET_GPR_U32(ctx, 31, 0x20C9C4u);
    ctx->pc = 0x20C9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C9BCu;
    // 0x20c9c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2225E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2225E8u, 0x20C9BCu, 0x20C9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C9C4u;
label_20c9c4:
    // 0x20c9c4: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x20c9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x20c9c8: 0x26040228  addiu       $a0, $s0, 0x228
    ctx->pc = 0x20c9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 552));
    // 0x20c9cc: 0x24631888  addiu       $v1, $v1, 0x1888
    ctx->pc = 0x20c9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6280));
    // 0x20c9d0: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x20c9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
    // 0x20c9d4: 0xae030190  sw          $v1, 0x190($s0)
    ctx->pc = 0x20c9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 3));
    // 0x20c9d8: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x20C9D8u;
    SET_GPR_U32(ctx, 31, 0x20C9E0u);
    ctx->pc = 0x20C9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C9D8u;
    // 0x20c9dc: 0xae000224  sw          $zero, 0x224($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x20C9D8u, 0x20C9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C9E0u;
label_20c9e0:
    // 0x20c9e0: 0x26040234  addiu       $a0, $s0, 0x234
    ctx->pc = 0x20c9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 564));
    // 0x20c9e4: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x20C9E4u;
    SET_GPR_U32(ctx, 31, 0x20C9ECu);
    ctx->pc = 0x20C9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C9E4u;
    // 0x20c9e8: 0xae000230  sw          $zero, 0x230($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x20C9E4u, 0x20C9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C9ECu;
label_20c9ec:
    // 0x20c9ec: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x20C9ECu;
    SET_GPR_U32(ctx, 31, 0x20C9F4u);
    ctx->pc = 0x20C9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C9ECu;
    // 0x20c9f0: 0x2604023c  addiu       $a0, $s0, 0x23C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 572));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x20C9ECu, 0x20C9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C9F4u;
label_20c9f4:
    // 0x20c9f4: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x20c9f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x20c9f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20c9f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20c9fc: 0x26040254  addiu       $a0, $s0, 0x254
    ctx->pc = 0x20c9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 596));
    // 0x20ca00: 0xae000244  sw          $zero, 0x244($s0)
    ctx->pc = 0x20ca00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 0));
    // 0x20ca04: 0xe6000250  swc1        $f0, 0x250($s0)
    ctx->pc = 0x20ca04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 592), bits); }
    // 0x20ca08: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x20CA08u;
    SET_GPR_U32(ctx, 31, 0x20CA10u);
    ctx->pc = 0x20CA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CA08u;
    // 0x20ca0c: 0xae000248  sw          $zero, 0x248($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 584), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x20CA08u, 0x20CA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CA10u;
label_20ca10:
    // 0x20ca10: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x20ca10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x20ca14: 0x26020260  addiu       $v0, $s0, 0x260
    ctx->pc = 0x20ca14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    // 0x20ca18: 0xc4635af0  lwc1        $f3, 0x5AF0($v1)
    ctx->pc = 0x20ca18u;
    { uint32_t bits = FAST_READ32(0x575AF0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20ca1c: 0x26040270  addiu       $a0, $s0, 0x270
    ctx->pc = 0x20ca1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
    // 0x20ca20: 0x24635af0  addiu       $v1, $v1, 0x5AF0
    ctx->pc = 0x20ca20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23280));
    // 0x20ca24: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x20ca24u;
    { uint32_t bits = FAST_READ32(0x575AF4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ca28: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x20ca28u;
    { uint32_t bits = FAST_READ32(0x575AFCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20ca2c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x20ca2cu;
    { uint32_t bits = FAST_READ32(0x575AF8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20ca30: 0xe6030260  swc1        $f3, 0x260($s0)
    ctx->pc = 0x20ca30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x20ca34: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x20ca34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x20ca38: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x20ca38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x20ca3c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x20CA3Cu;
    SET_GPR_U32(ctx, 31, 0x20CA44u);
    ctx->pc = 0x20CA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CA3Cu;
    // 0x20ca40: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x20CA3Cu, 0x20CA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CA44u;
label_20ca44:
    // 0x20ca44: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x20ca44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x20ca48: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x20ca48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20ca4c: 0xc454129c  lwc1        $f20, 0x129C($v0)
    ctx->pc = 0x20ca4cu;
    { uint32_t bits = FAST_READ32(0x46129Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20ca50: 0x26040280  addiu       $a0, $s0, 0x280
    ctx->pc = 0x20ca50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
    // 0x20ca54: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x20ca54u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x20ca58: 0x46006bc6  mov.s       $f15, $f13
    ctx->pc = 0x20ca58u;
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
    // 0x20ca5c: 0xc0b187c  jal         func_2C61F0
    ctx->pc = 0x20CA5Cu;
    SET_GPR_U32(ctx, 31, 0x20CA64u);
    ctx->pc = 0x20CA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CA5Cu;
    // 0x20ca60: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C61F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C61F0u, 0x20CA5Cu, 0x20CA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CA64u;
label_20ca64:
    // 0x20ca64: 0x26020290  addiu       $v0, $s0, 0x290
    ctx->pc = 0x20ca64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    // 0x20ca68: 0xe6140290  swc1        $f20, 0x290($s0)
    ctx->pc = 0x20ca68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 656), bits); }
    // 0x20ca6c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x20ca6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x20ca70: 0x260402b0  addiu       $a0, $s0, 0x2B0
    ctx->pc = 0x20ca70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
    // 0x20ca74: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x20ca74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x20ca78: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x20CA78u;
    SET_GPR_U32(ctx, 31, 0x20CA80u);
    ctx->pc = 0x20CA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CA78u;
    // 0x20ca7c: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x20CA78u, 0x20CA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CA80u;
label_20ca80:
    // 0x20ca80: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x20CA80u;
    SET_GPR_U32(ctx, 31, 0x20CA88u);
    ctx->pc = 0x20CA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CA80u;
    // 0x20ca84: 0x260402d0  addiu       $a0, $s0, 0x2D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x20CA80u, 0x20CA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CA88u;
label_20ca88:
    // 0x20ca88: 0x260402e4  addiu       $a0, $s0, 0x2E4
    ctx->pc = 0x20ca88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 740));
    // 0x20ca8c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x20CA8Cu;
    SET_GPR_U32(ctx, 31, 0x20CA94u);
    ctx->pc = 0x20CA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CA8Cu;
    // 0x20ca90: 0xae0002e0  sw          $zero, 0x2E0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x20CA8Cu, 0x20CA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CA94u;
label_20ca94:
    // 0x20ca94: 0x260402f0  addiu       $a0, $s0, 0x2F0
    ctx->pc = 0x20ca94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    // 0x20ca98: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x20CA98u;
    SET_GPR_U32(ctx, 31, 0x20CAA0u);
    ctx->pc = 0x20CA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CA98u;
    // 0x20ca9c: 0xae0002ec  sw          $zero, 0x2EC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 748), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x20CA98u, 0x20CAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CAA0u;
label_20caa0:
    // 0x20caa0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x20CAA0u;
    SET_GPR_U32(ctx, 31, 0x20CAA8u);
    ctx->pc = 0x20CAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CAA0u;
    // 0x20caa4: 0x26040300  addiu       $a0, $s0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x20CAA0u, 0x20CAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CAA8u;
label_20caa8:
    // 0x20caa8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20caa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20caac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20caacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20cab0: 0x26040314  addiu       $a0, $s0, 0x314
    ctx->pc = 0x20cab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 788));
    // 0x20cab4: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x20CAB4u;
    SET_GPR_U32(ctx, 31, 0x20CABCu);
    ctx->pc = 0x20CAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CAB4u;
    // 0x20cab8: 0xe6000310  swc1        $f0, 0x310($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 784), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x20CAB4u, 0x20CABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CABCu;
label_20cabc:
    // 0x20cabc: 0xae000320  sw          $zero, 0x320($s0)
    ctx->pc = 0x20cabcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 800), GPR_U32(ctx, 0));
    // 0x20cac0: 0x26020320  addiu       $v0, $s0, 0x320
    ctx->pc = 0x20cac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
    // 0x20cac4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x20cac4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x20cac8: 0x26030330  addiu       $v1, $s0, 0x330
    ctx->pc = 0x20cac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
    // 0x20cacc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x20caccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x20cad0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20cad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cad4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x20cad4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x20cad8: 0xae000330  sw          $zero, 0x330($s0)
    ctx->pc = 0x20cad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 0));
    // 0x20cadc: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x20cadcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x20cae0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20cae0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x20cae4: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x20CAE4u;
    {
        const bool branch_taken_0x20cae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CAE4u;
        // 0x20cae8: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cae4) {
            ctx->pc = 0x20CF08u;
            goto label_20cf08;
        }
    }
    ctx->pc = 0x20CAECu;
label_20caec:
    // 0x20caec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20caecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20caf0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20CAF0u;
    SET_GPR_U32(ctx, 31, 0x20CAF8u);
    ctx->pc = 0x20CAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CAF0u;
    // 0x20caf4: 0x24a51160  addiu       $a1, $a1, 0x1160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20CAF0u, 0x20CAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CAF8u;
label_20caf8:
    // 0x20caf8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20caf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20cafc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20CAFCu;
    {
        const bool branch_taken_0x20cafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CAFCu;
        // 0x20cb00: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cafc) {
            ctx->pc = 0x20CB20u;
            goto label_20cb20;
        }
    }
    ctx->pc = 0x20CB04u;
    // 0x20cb04: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20CB04u;
    SET_GPR_U32(ctx, 31, 0x20CB0Cu);
    ctx->pc = 0x20CB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CB04u;
    // 0x20cb08: 0x240406b0  addiu       $a0, $zero, 0x6B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20CB04u, 0x20CB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CB0Cu;
label_20cb0c:
    // 0x20cb0c: 0x24053001  addiu       $a1, $zero, 0x3001
    ctx->pc = 0x20cb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
    // 0x20cb10: 0xc0883c8  jal         func_220F20
    ctx->pc = 0x20CB10u;
    SET_GPR_U32(ctx, 31, 0x20CB18u);
    ctx->pc = 0x20CB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CB10u;
    // 0x20cb14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220F20u, 0x20CB10u, 0x20CB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CB18u;
label_20cb18:
    // 0x20cb18: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x20CB18u;
    {
        const bool branch_taken_0x20cb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB18u;
        // 0x20cb1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cb18) {
            ctx->pc = 0x20CF08u;
            goto label_20cf08;
        }
    }
    ctx->pc = 0x20CB20u;
label_20cb20:
    // 0x20cb20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20cb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cb24: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20CB24u;
    SET_GPR_U32(ctx, 31, 0x20CB2Cu);
    ctx->pc = 0x20CB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CB24u;
    // 0x20cb28: 0x24a51170  addiu       $a1, $a1, 0x1170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20CB24u, 0x20CB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CB2Cu;
label_20cb2c:
    // 0x20cb2c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20cb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20cb30: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20CB30u;
    {
        const bool branch_taken_0x20cb30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB30u;
        // 0x20cb34: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cb30) {
            ctx->pc = 0x20CB54u;
            goto label_20cb54;
        }
    }
    ctx->pc = 0x20CB38u;
    // 0x20cb38: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20CB38u;
    SET_GPR_U32(ctx, 31, 0x20CB40u);
    ctx->pc = 0x20CB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CB38u;
    // 0x20cb3c: 0x240406b0  addiu       $a0, $zero, 0x6B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20CB38u, 0x20CB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CB40u;
label_20cb40:
    // 0x20cb40: 0x24057001  addiu       $a1, $zero, 0x7001
    ctx->pc = 0x20cb40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28673));
    // 0x20cb44: 0xc0883c8  jal         func_220F20
    ctx->pc = 0x20CB44u;
    SET_GPR_U32(ctx, 31, 0x20CB4Cu);
    ctx->pc = 0x20CB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CB44u;
    // 0x20cb48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220F20u, 0x20CB44u, 0x20CB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CB4Cu;
label_20cb4c:
    // 0x20cb4c: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x20CB4Cu;
    {
        const bool branch_taken_0x20cb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB4Cu;
        // 0x20cb50: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cb4c) {
            ctx->pc = 0x20CF08u;
            goto label_20cf08;
        }
    }
    ctx->pc = 0x20CB54u;
label_20cb54:
    // 0x20cb54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20cb54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cb58: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20CB58u;
    SET_GPR_U32(ctx, 31, 0x20CB60u);
    ctx->pc = 0x20CB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CB58u;
    // 0x20cb5c: 0x24a51180  addiu       $a1, $a1, 0x1180 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20CB58u, 0x20CB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CB60u;
label_20cb60:
    // 0x20cb60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20cb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20cb64: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20CB64u;
    {
        const bool branch_taken_0x20cb64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB64u;
        // 0x20cb68: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cb64) {
            ctx->pc = 0x20CB98u;
            goto label_20cb98;
        }
    }
    ctx->pc = 0x20CB6Cu;
    // 0x20cb6c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20CB6Cu;
    SET_GPR_U32(ctx, 31, 0x20CB74u);
    ctx->pc = 0x20CB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CB6Cu;
    // 0x20cb70: 0x240401a0  addiu       $a0, $zero, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20CB6Cu, 0x20CB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CB74u;
label_20cb74:
    // 0x20cb74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20cb74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cb78: 0x34058001  ori         $a1, $zero, 0x8001
    ctx->pc = 0x20cb78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x20cb7c: 0xc087380  jal         func_21CE00
    ctx->pc = 0x20CB7Cu;
    SET_GPR_U32(ctx, 31, 0x20CB84u);
    ctx->pc = 0x20CB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CB7Cu;
    // 0x20cb80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CE00u, 0x20CB7Cu, 0x20CB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CB84u;
label_20cb84:
    // 0x20cb84: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x20cb84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x20cb88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20cb88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cb8c: 0x24631848  addiu       $v1, $v1, 0x1848
    ctx->pc = 0x20cb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6216));
    // 0x20cb90: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x20CB90u;
    {
        const bool branch_taken_0x20cb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB90u;
        // 0x20cb94: 0xae030190  sw          $v1, 0x190($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cb90) {
            ctx->pc = 0x20CF08u;
            goto label_20cf08;
        }
    }
    ctx->pc = 0x20CB98u;
label_20cb98:
    // 0x20cb98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20cb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cb9c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20CB9Cu;
    SET_GPR_U32(ctx, 31, 0x20CBA4u);
    ctx->pc = 0x20CBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CB9Cu;
    // 0x20cba0: 0x24a51188  addiu       $a1, $a1, 0x1188 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20CB9Cu, 0x20CBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CBA4u;
label_20cba4:
    // 0x20cba4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20cba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20cba8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20CBA8u;
    {
        const bool branch_taken_0x20cba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CBA8u;
        // 0x20cbac: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cba8) {
            ctx->pc = 0x20CBC0u;
            goto label_20cbc0;
        }
    }
    ctx->pc = 0x20CBB0u;
    // 0x20cbb0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20CBB0u;
    SET_GPR_U32(ctx, 31, 0x20CBB8u);
    ctx->pc = 0x20CBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CBB0u;
    // 0x20cbb4: 0x240401a0  addiu       $a0, $zero, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20CBB0u, 0x20CBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CBB8u;
label_20cbb8:
    // 0x20cbb8: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x20CBB8u;
    {
        const bool branch_taken_0x20cbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CBB8u;
        // 0x20cbbc: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cbb8) {
            ctx->pc = 0x20CEF4u;
            goto label_20cef4;
        }
    }
    ctx->pc = 0x20CBC0u;
label_20cbc0:
    // 0x20cbc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20cbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cbc4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20CBC4u;
    SET_GPR_U32(ctx, 31, 0x20CBCCu);
    ctx->pc = 0x20CBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CBC4u;
    // 0x20cbc8: 0x24a51190  addiu       $a1, $a1, 0x1190 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20CBC4u, 0x20CBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CBCCu;
label_20cbcc:
    // 0x20cbcc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20cbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20cbd0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x20CBD0u;
    {
        const bool branch_taken_0x20cbd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cbd0) {
            ctx->pc = 0x20CBD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20CBD0u;
            // 0x20cbd4: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CBF8u;
            goto label_20cbf8;
        }
    }
    ctx->pc = 0x20CBD8u;
    // 0x20cbd8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20CBD8u;
    SET_GPR_U32(ctx, 31, 0x20CBE0u);
    ctx->pc = 0x20CBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CBD8u;
    // 0x20cbdc: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20CBD8u, 0x20CBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CBE0u;
label_20cbe0:
    // 0x20cbe0: 0x3c050006  lui         $a1, 0x6
    ctx->pc = 0x20cbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)6 << 16));
    // 0x20cbe4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20cbe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cbe8: 0xc08897a  jal         func_2225E8
    ctx->pc = 0x20CBE8u;
    SET_GPR_U32(ctx, 31, 0x20CBF0u);
    ctx->pc = 0x20CBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CBE8u;
    // 0x20cbec: 0x34a50001  ori         $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2225E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2225E8u, 0x20CBE8u, 0x20CBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CBF0u;
label_20cbf0:
    // 0x20cbf0: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x20CBF0u;
    {
        const bool branch_taken_0x20cbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CBF0u;
        // 0x20cbf4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cbf0) {
            ctx->pc = 0x20CF08u;
            goto label_20cf08;
        }
    }
    ctx->pc = 0x20CBF8u;
label_20cbf8:
    // 0x20cbf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20cbf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cbfc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20CBFCu;
    SET_GPR_U32(ctx, 31, 0x20CC04u);
    ctx->pc = 0x20CC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CBFCu;
    // 0x20cc00: 0x24a51198  addiu       $a1, $a1, 0x1198 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20CBFCu, 0x20CC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CC04u;
label_20cc04:
    // 0x20cc04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20cc04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20cc08: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x20CC08u;
    {
        const bool branch_taken_0x20cc08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC08u;
        // 0x20cc0c: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cc08) {
            ctx->pc = 0x20CC50u;
            goto label_20cc50;
        }
    }
    ctx->pc = 0x20CC10u;
    // 0x20cc10: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20CC10u;
    SET_GPR_U32(ctx, 31, 0x20CC18u);
    ctx->pc = 0x20CC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CC10u;
    // 0x20cc14: 0x240401b0  addiu       $a0, $zero, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20CC10u, 0x20CC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CC18u;
label_20cc18:
    // 0x20cc18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20cc18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cc1c: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x20cc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x20cc20: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x20cc20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x20cc24: 0xc087380  jal         func_21CE00
    ctx->pc = 0x20CC24u;
    SET_GPR_U32(ctx, 31, 0x20CC2Cu);
    ctx->pc = 0x20CC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CC24u;
    // 0x20cc28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CE00u, 0x20CC24u, 0x20CC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CC2Cu;
label_20cc2c:
    // 0x20cc2c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x20cc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x20cc30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20cc30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20cc34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20cc34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20cc38: 0x24631988  addiu       $v1, $v1, 0x1988
    ctx->pc = 0x20cc38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6536));
    // 0x20cc3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20cc3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cc40: 0xae030190  sw          $v1, 0x190($s0)
    ctx->pc = 0x20cc40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 3));
    // 0x20cc44: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x20cc44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x20cc48: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x20CC48u;
    {
        const bool branch_taken_0x20cc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC48u;
        // 0x20cc4c: 0xae0001a0  sw          $zero, 0x1A0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cc48) {
            ctx->pc = 0x20CF08u;
            goto label_20cf08;
        }
    }
    ctx->pc = 0x20CC50u;
label_20cc50:
    // 0x20cc50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20cc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cc54: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20CC54u;
    SET_GPR_U32(ctx, 31, 0x20CC5Cu);
    ctx->pc = 0x20CC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CC54u;
    // 0x20cc58: 0x24a511a8  addiu       $a1, $a1, 0x11A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20CC54u, 0x20CC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CC5Cu;
label_20cc5c:
    // 0x20cc5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20cc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20cc60: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x20CC60u;
    {
        const bool branch_taken_0x20cc60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cc60) {
            ctx->pc = 0x20CC64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20CC60u;
            // 0x20cc64: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CC88u;
            goto label_20cc88;
        }
    }
    ctx->pc = 0x20CC68u;
    // 0x20cc68: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20CC68u;
    SET_GPR_U32(ctx, 31, 0x20CC70u);
    ctx->pc = 0x20CC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CC68u;
    // 0x20cc6c: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20CC68u, 0x20CC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CC70u;
label_20cc70:
    // 0x20cc70: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x20cc70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x20cc74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20cc74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cc78: 0xc08897a  jal         func_2225E8
    ctx->pc = 0x20CC78u;
    SET_GPR_U32(ctx, 31, 0x20CC80u);
    ctx->pc = 0x20CC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CC78u;
    // 0x20cc7c: 0x34a50001  ori         $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2225E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2225E8u, 0x20CC78u, 0x20CC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CC80u;
label_20cc80:
    // 0x20cc80: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x20CC80u;
    {
        const bool branch_taken_0x20cc80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC80u;
        // 0x20cc84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cc80) {
            ctx->pc = 0x20CF08u;
            goto label_20cf08;
        }
    }
    ctx->pc = 0x20CC88u;
label_20cc88:
    // 0x20cc88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20cc88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cc8c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20CC8Cu;
    SET_GPR_U32(ctx, 31, 0x20CC94u);
    ctx->pc = 0x20CC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CC8Cu;
    // 0x20cc90: 0x24a511b8  addiu       $a1, $a1, 0x11B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20CC8Cu, 0x20CC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CC94u;
label_20cc94:
    // 0x20cc94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20cc94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20cc98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20CC98u;
    {
        const bool branch_taken_0x20cc98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC98u;
        // 0x20cc9c: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cc98) {
            ctx->pc = 0x20CCB0u;
            goto label_20ccb0;
        }
    }
    ctx->pc = 0x20CCA0u;
    // 0x20cca0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20CCA0u;
    SET_GPR_U32(ctx, 31, 0x20CCA8u);
    ctx->pc = 0x20CCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CCA0u;
    // 0x20cca4: 0x240401a0  addiu       $a0, $zero, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20CCA0u, 0x20CCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CCA8u;
label_20cca8:
    // 0x20cca8: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x20CCA8u;
    {
        const bool branch_taken_0x20cca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CCA8u;
        // 0x20ccac: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cca8) {
            ctx->pc = 0x20CEF4u;
            goto label_20cef4;
        }
    }
    ctx->pc = 0x20CCB0u;
label_20ccb0:
    // 0x20ccb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20ccb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ccb4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20CCB4u;
    SET_GPR_U32(ctx, 31, 0x20CCBCu);
    ctx->pc = 0x20CCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CCB4u;
    // 0x20ccb8: 0x24a511c8  addiu       $a1, $a1, 0x11C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20CCB4u, 0x20CCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CCBCu;
label_20ccbc:
    // 0x20ccbc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20ccbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20ccc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20CCC0u;
    {
        const bool branch_taken_0x20ccc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CCC0u;
        // 0x20ccc4: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ccc0) {
            ctx->pc = 0x20CCD8u;
            goto label_20ccd8;
        }
    }
    ctx->pc = 0x20CCC8u;
    // 0x20ccc8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20CCC8u;
    SET_GPR_U32(ctx, 31, 0x20CCD0u);
    ctx->pc = 0x20CCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CCC8u;
    // 0x20cccc: 0x240401a0  addiu       $a0, $zero, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20CCC8u, 0x20CCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CCD0u;
label_20ccd0:
    // 0x20ccd0: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x20CCD0u;
    {
        const bool branch_taken_0x20ccd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CCD0u;
        // 0x20ccd4: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ccd0) {
            ctx->pc = 0x20CEF4u;
            goto label_20cef4;
        }
    }
    ctx->pc = 0x20CCD8u;
label_20ccd8:
    // 0x20ccd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20ccd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ccdc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20CCDCu;
    SET_GPR_U32(ctx, 31, 0x20CCE4u);
    ctx->pc = 0x20CCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CCDCu;
    // 0x20cce0: 0x24a511d8  addiu       $a1, $a1, 0x11D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20CCDCu, 0x20CCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CCE4u;
label_20cce4:
    // 0x20cce4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20cce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20cce8: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x20CCE8u;
    {
        const bool branch_taken_0x20cce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CCE8u;
        // 0x20ccec: 0x24040210  addiu       $a0, $zero, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cce8) {
            ctx->pc = 0x20CD80u;
            goto label_20cd80;
        }
    }
    ctx->pc = 0x20CCF0u;
    // 0x20ccf0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20CCF0u;
    SET_GPR_U32(ctx, 31, 0x20CCF8u);
    ctx->pc = 0x20CCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CCF0u;
    // 0x20ccf4: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20CCF0u, 0x20CCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CCF8u;
label_20ccf8:
    // 0x20ccf8: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x20ccf8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20ccfc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20ccfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cd00: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x20cd00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x20cd04: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x20cd04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x20cd08: 0xc087380  jal         func_21CE00
    ctx->pc = 0x20CD08u;
    SET_GPR_U32(ctx, 31, 0x20CD10u);
    ctx->pc = 0x20CD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CD08u;
    // 0x20cd0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CE00u, 0x20CD08u, 0x20CD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CD10u;
label_20cd10:
    // 0x20cd10: 0x261101d8  addiu       $s1, $s0, 0x1D8
    ctx->pc = 0x20cd10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 472));
    // 0x20cd14: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x20cd14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x20cd18: 0x260401a0  addiu       $a0, $s0, 0x1A0
    ctx->pc = 0x20cd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x20cd1c: 0x24421928  addiu       $v0, $v0, 0x1928
    ctx->pc = 0x20cd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6440));
    // 0x20cd20: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x20CD20u;
    SET_GPR_U32(ctx, 31, 0x20CD28u);
    ctx->pc = 0x20CD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CD20u;
    // 0x20cd24: 0xae020190  sw          $v0, 0x190($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x20CD20u, 0x20CD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CD28u;
label_20cd28:
    // 0x20cd28: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x20CD28u;
    SET_GPR_U32(ctx, 31, 0x20CD30u);
    ctx->pc = 0x20CD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CD28u;
    // 0x20cd2c: 0x260401a8  addiu       $a0, $s0, 0x1A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x20CD28u, 0x20CD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CD30u;
label_20cd30:
    // 0x20cd30: 0x260401b8  addiu       $a0, $s0, 0x1B8
    ctx->pc = 0x20cd30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 440));
    // 0x20cd34: 0xae0001b0  sw          $zero, 0x1B0($s0)
    ctx->pc = 0x20cd34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 0));
    // 0x20cd38: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x20CD38u;
    SET_GPR_U32(ctx, 31, 0x20CD40u);
    ctx->pc = 0x20CD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CD38u;
    // 0x20cd3c: 0xae0001b4  sw          $zero, 0x1B4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x20CD38u, 0x20CD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CD40u;
label_20cd40:
    // 0x20cd40: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x20CD40u;
    SET_GPR_U32(ctx, 31, 0x20CD48u);
    ctx->pc = 0x20CD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CD40u;
    // 0x20cd44: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x20CD40u, 0x20CD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CD48u;
label_20cd48:
    // 0x20cd48: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x20CD48u;
    SET_GPR_U32(ctx, 31, 0x20CD50u);
    ctx->pc = 0x20CD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CD48u;
    // 0x20cd4c: 0x260401c8  addiu       $a0, $s0, 0x1C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x20CD48u, 0x20CD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CD50u;
label_20cd50:
    // 0x20cd50: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x20CD50u;
    SET_GPR_U32(ctx, 31, 0x20CD58u);
    ctx->pc = 0x20CD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CD50u;
    // 0x20cd54: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x20CD50u, 0x20CD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CD58u;
label_20cd58:
    // 0x20cd58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20cd58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cd5c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x20CD5Cu;
    SET_GPR_U32(ctx, 31, 0x20CD64u);
    ctx->pc = 0x20CD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CD5Cu;
    // 0x20cd60: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x20CD5Cu, 0x20CD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CD64u;
label_20cd64:
    // 0x20cd64: 0x0  nop
    ctx->pc = 0x20cd64u;
    // NOP
    // 0x20cd68: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x20CD68u;
    {
        const bool branch_taken_0x20cd68 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x20CD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CD68u;
        // 0x20cd6c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cd68) {
            ctx->pc = 0x20CD58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20cd58;
        }
    }
    ctx->pc = 0x20CD70u;
    // 0x20cd70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20cd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20cd74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20cd74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cd78: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x20CD78u;
    {
        const bool branch_taken_0x20cd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CD78u;
        // 0x20cd7c: 0xae020200  sw          $v0, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cd78) {
            ctx->pc = 0x20CF08u;
            goto label_20cf08;
        }
    }
    ctx->pc = 0x20CD80u;
label_20cd80:
    // 0x20cd80: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20cd80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20cd84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20cd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cd88: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20CD88u;
    SET_GPR_U32(ctx, 31, 0x20CD90u);
    ctx->pc = 0x20CD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CD88u;
    // 0x20cd8c: 0x24a511e8  addiu       $a1, $a1, 0x11E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20CD88u, 0x20CD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CD90u;
label_20cd90:
    // 0x20cd90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20cd90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20cd94: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x20CD94u;
    {
        const bool branch_taken_0x20cd94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cd94) {
            ctx->pc = 0x20CD98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20CD94u;
            // 0x20cd98: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CDBCu;
            goto label_20cdbc;
        }
    }
    ctx->pc = 0x20CD9Cu;
    // 0x20cd9c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20CD9Cu;
    SET_GPR_U32(ctx, 31, 0x20CDA4u);
    ctx->pc = 0x20CDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CD9Cu;
    // 0x20cda0: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20CD9Cu, 0x20CDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CDA4u;
label_20cda4:
    // 0x20cda4: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x20cda4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x20cda8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20cda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cdac: 0xc08897a  jal         func_2225E8
    ctx->pc = 0x20CDACu;
    SET_GPR_U32(ctx, 31, 0x20CDB4u);
    ctx->pc = 0x20CDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CDACu;
    // 0x20cdb0: 0x34a50001  ori         $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2225E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2225E8u, 0x20CDACu, 0x20CDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CDB4u;
label_20cdb4:
    // 0x20cdb4: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x20CDB4u;
    {
        const bool branch_taken_0x20cdb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CDB4u;
        // 0x20cdb8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cdb4) {
            ctx->pc = 0x20CF08u;
            goto label_20cf08;
        }
    }
    ctx->pc = 0x20CDBCu;
label_20cdbc:
    // 0x20cdbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20cdbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cdc0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20CDC0u;
    SET_GPR_U32(ctx, 31, 0x20CDC8u);
    ctx->pc = 0x20CDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CDC0u;
    // 0x20cdc4: 0x24a511f8  addiu       $a1, $a1, 0x11F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20CDC0u, 0x20CDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CDC8u;
label_20cdc8:
    // 0x20cdc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20cdc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20cdcc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20CDCCu;
    {
        const bool branch_taken_0x20cdcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CDCCu;
        // 0x20cdd0: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cdcc) {
            ctx->pc = 0x20CDE4u;
            goto label_20cde4;
        }
    }
    ctx->pc = 0x20CDD4u;
    // 0x20cdd4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20CDD4u;
    SET_GPR_U32(ctx, 31, 0x20CDDCu);
    ctx->pc = 0x20CDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CDD4u;
    // 0x20cdd8: 0x240401a0  addiu       $a0, $zero, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20CDD4u, 0x20CDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CDDCu;
label_20cddc:
    // 0x20cddc: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x20CDDCu;
    {
        const bool branch_taken_0x20cddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CDDCu;
        // 0x20cde0: 0x3c050200  lui         $a1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cddc) {
            ctx->pc = 0x20CEF4u;
            goto label_20cef4;
        }
    }
    ctx->pc = 0x20CDE4u;
label_20cde4:
    // 0x20cde4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20cde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cde8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20CDE8u;
    SET_GPR_U32(ctx, 31, 0x20CDF0u);
    ctx->pc = 0x20CDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CDE8u;
    // 0x20cdec: 0x24a51208  addiu       $a1, $a1, 0x1208 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20CDE8u, 0x20CDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CDF0u;
label_20cdf0:
    // 0x20cdf0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20cdf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20cdf4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20CDF4u;
    {
        const bool branch_taken_0x20cdf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CDF4u;
        // 0x20cdf8: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cdf4) {
            ctx->pc = 0x20CE0Cu;
            goto label_20ce0c;
        }
    }
    ctx->pc = 0x20CDFCu;
    // 0x20cdfc: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20CDFCu;
    SET_GPR_U32(ctx, 31, 0x20CE04u);
    ctx->pc = 0x20CE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CDFCu;
    // 0x20ce00: 0x240401a0  addiu       $a0, $zero, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20CDFCu, 0x20CE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CE04u;
label_20ce04:
    // 0x20ce04: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x20CE04u;
    {
        const bool branch_taken_0x20ce04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE04u;
        // 0x20ce08: 0x3c050400  lui         $a1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ce04) {
            ctx->pc = 0x20CEF4u;
            goto label_20cef4;
        }
    }
    ctx->pc = 0x20CE0Cu;
label_20ce0c:
    // 0x20ce0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20ce0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ce10: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20CE10u;
    SET_GPR_U32(ctx, 31, 0x20CE18u);
    ctx->pc = 0x20CE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CE10u;
    // 0x20ce14: 0x24a51218  addiu       $a1, $a1, 0x1218 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20CE10u, 0x20CE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CE18u;
label_20ce18:
    // 0x20ce18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20ce18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20ce1c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20CE1Cu;
    {
        const bool branch_taken_0x20ce1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE1Cu;
        // 0x20ce20: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ce1c) {
            ctx->pc = 0x20CE34u;
            goto label_20ce34;
        }
    }
    ctx->pc = 0x20CE24u;
    // 0x20ce24: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20CE24u;
    SET_GPR_U32(ctx, 31, 0x20CE2Cu);
    ctx->pc = 0x20CE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CE24u;
    // 0x20ce28: 0x240401a0  addiu       $a0, $zero, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20CE24u, 0x20CE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CE2Cu;
label_20ce2c:
    // 0x20ce2c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x20CE2Cu;
    {
        const bool branch_taken_0x20ce2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE2Cu;
        // 0x20ce30: 0x3c054000  lui         $a1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ce2c) {
            ctx->pc = 0x20CEF4u;
            goto label_20cef4;
        }
    }
    ctx->pc = 0x20CE34u;
label_20ce34:
    // 0x20ce34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20ce34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ce38: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20CE38u;
    SET_GPR_U32(ctx, 31, 0x20CE40u);
    ctx->pc = 0x20CE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CE38u;
    // 0x20ce3c: 0x24a51228  addiu       $a1, $a1, 0x1228 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20CE38u, 0x20CE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CE40u;
label_20ce40:
    // 0x20ce40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20ce40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20ce44: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20CE44u;
    {
        const bool branch_taken_0x20ce44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE44u;
        // 0x20ce48: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ce44) {
            ctx->pc = 0x20CE60u;
            goto label_20ce60;
        }
    }
    ctx->pc = 0x20CE4Cu;
    // 0x20ce4c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20CE4Cu;
    SET_GPR_U32(ctx, 31, 0x20CE54u);
    ctx->pc = 0x20CE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CE4Cu;
    // 0x20ce50: 0x240401a0  addiu       $a0, $zero, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20CE4Cu, 0x20CE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CE54u;
label_20ce54:
    // 0x20ce54: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x20ce54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x20ce58: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x20CE58u;
    {
        const bool branch_taken_0x20ce58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE58u;
        // 0x20ce5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ce58) {
            ctx->pc = 0x20CEF8u;
            goto label_20cef8;
        }
    }
    ctx->pc = 0x20CE60u;
label_20ce60:
    // 0x20ce60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20ce60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ce64: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20CE64u;
    SET_GPR_U32(ctx, 31, 0x20CE6Cu);
    ctx->pc = 0x20CE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CE64u;
    // 0x20ce68: 0x24a51248  addiu       $a1, $a1, 0x1248 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20CE64u, 0x20CE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CE6Cu;
label_20ce6c:
    // 0x20ce6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20ce6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20ce70: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20CE70u;
    {
        const bool branch_taken_0x20ce70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE70u;
        // 0x20ce74: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ce70) {
            ctx->pc = 0x20CE8Cu;
            goto label_20ce8c;
        }
    }
    ctx->pc = 0x20CE78u;
    // 0x20ce78: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20CE78u;
    SET_GPR_U32(ctx, 31, 0x20CE80u);
    ctx->pc = 0x20CE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CE78u;
    // 0x20ce7c: 0x240401a0  addiu       $a0, $zero, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20CE78u, 0x20CE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CE80u;
label_20ce80:
    // 0x20ce80: 0x24050081  addiu       $a1, $zero, 0x81
    ctx->pc = 0x20ce80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x20ce84: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x20CE84u;
    {
        const bool branch_taken_0x20ce84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE84u;
        // 0x20ce88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ce84) {
            ctx->pc = 0x20CEFCu;
            goto label_20cefc;
        }
    }
    ctx->pc = 0x20CE8Cu;
label_20ce8c:
    // 0x20ce8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20ce8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ce90: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20CE90u;
    SET_GPR_U32(ctx, 31, 0x20CE98u);
    ctx->pc = 0x20CE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CE90u;
    // 0x20ce94: 0x24a51258  addiu       $a1, $a1, 0x1258 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20CE90u, 0x20CE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CE98u;
label_20ce98:
    // 0x20ce98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20ce98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20ce9c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20CE9Cu;
    {
        const bool branch_taken_0x20ce9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE9Cu;
        // 0x20cea0: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ce9c) {
            ctx->pc = 0x20CEB8u;
            goto label_20ceb8;
        }
    }
    ctx->pc = 0x20CEA4u;
    // 0x20cea4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20CEA4u;
    SET_GPR_U32(ctx, 31, 0x20CEACu);
    ctx->pc = 0x20CEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CEA4u;
    // 0x20cea8: 0x240401a0  addiu       $a0, $zero, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20CEA4u, 0x20CEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CEACu;
label_20ceac:
    // 0x20ceac: 0x24050181  addiu       $a1, $zero, 0x181
    ctx->pc = 0x20ceacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 385));
    // 0x20ceb0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x20CEB0u;
    {
        const bool branch_taken_0x20ceb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CEB0u;
        // 0x20ceb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ceb0) {
            ctx->pc = 0x20CEFCu;
            goto label_20cefc;
        }
    }
    ctx->pc = 0x20CEB8u;
label_20ceb8:
    // 0x20ceb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20ceb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cebc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20CEBCu;
    SET_GPR_U32(ctx, 31, 0x20CEC4u);
    ctx->pc = 0x20CEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CEBCu;
    // 0x20cec0: 0x24a51268  addiu       $a1, $a1, 0x1268 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20CEBCu, 0x20CEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CEC4u;
label_20cec4:
    // 0x20cec4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20cec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20cec8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20CEC8u;
    {
        const bool branch_taken_0x20cec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CEC8u;
        // 0x20cecc: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cec8) {
            ctx->pc = 0x20CEE8u;
            goto label_20cee8;
        }
    }
    ctx->pc = 0x20CED0u;
    // 0x20ced0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x20ced0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20ced4: 0x24a51278  addiu       $a1, $a1, 0x1278
    ctx->pc = 0x20ced4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4728));
    // 0x20ced8: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x20CED8u;
    SET_GPR_U32(ctx, 31, 0x20CEE0u);
    ctx->pc = 0x20CEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CED8u;
    // 0x20cedc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x20CED8u, 0x20CEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CEE0u;
label_20cee0:
    // 0x20cee0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x20CEE0u;
    {
        const bool branch_taken_0x20cee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CEE0u;
        // 0x20cee4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cee0) {
            ctx->pc = 0x20CF0Cu;
            goto label_20cf0c;
        }
    }
    ctx->pc = 0x20CEE8u;
label_20cee8:
    // 0x20cee8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20CEE8u;
    SET_GPR_U32(ctx, 31, 0x20CEF0u);
    ctx->pc = 0x20CEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CEE8u;
    // 0x20ceec: 0x240401a0  addiu       $a0, $zero, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20CEE8u, 0x20CEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CEF0u;
label_20cef0:
    // 0x20cef0: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x20cef0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
label_20cef4:
    // 0x20cef4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20cef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20cef8:
    // 0x20cef8: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x20cef8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
label_20cefc:
    // 0x20cefc: 0xc087380  jal         func_21CE00
    ctx->pc = 0x20CEFCu;
    SET_GPR_U32(ctx, 31, 0x20CF04u);
    ctx->pc = 0x21CE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CE00u, 0x20CEFCu, 0x20CF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CF04u;
label_20cf04:
    // 0x20cf04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20cf04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20cf08:
    // 0x20cf08: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x20cf08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20cf0c:
    // 0x20cf0c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x20cf0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20cf10: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x20cf10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20cf14: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x20cf14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20cf18: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x20cf18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20cf1c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x20cf1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20cf20: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x20cf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20cf24: 0x3e00008  jr          $ra
    ctx->pc = 0x20CF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF24u;
        // 0x20cf28: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CF24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20CF2Cu;
    // 0x20cf2c: 0x0  nop
    ctx->pc = 0x20cf2cu;
    // NOP
    ctx->pc = 0x20cf30u;
}
