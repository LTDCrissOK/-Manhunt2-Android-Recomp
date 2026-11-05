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

// Function: sub_0025E110
// Address: 0x25e110 - 0x25f048
void sub_0025E110_0x25e110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E110_0x25e110");
#endif

    switch (ctx->pc) {
        case 0x25e12cu: goto label_25e12c;
        case 0x25e148u: goto label_25e148;
        case 0x25e164u: goto label_25e164;
        case 0x25e180u: goto label_25e180;
        case 0x25e19cu: goto label_25e19c;
        case 0x25e1b8u: goto label_25e1b8;
        case 0x25e1d4u: goto label_25e1d4;
        case 0x25e1f0u: goto label_25e1f0;
        case 0x25e20cu: goto label_25e20c;
        case 0x25e228u: goto label_25e228;
        case 0x25e244u: goto label_25e244;
        case 0x25e260u: goto label_25e260;
        case 0x25e27cu: goto label_25e27c;
        case 0x25e298u: goto label_25e298;
        case 0x25e2b4u: goto label_25e2b4;
        case 0x25e2d0u: goto label_25e2d0;
        case 0x25e2ecu: goto label_25e2ec;
        case 0x25e308u: goto label_25e308;
        case 0x25e324u: goto label_25e324;
        case 0x25e340u: goto label_25e340;
        case 0x25e35cu: goto label_25e35c;
        case 0x25e378u: goto label_25e378;
        case 0x25e394u: goto label_25e394;
        case 0x25e3b0u: goto label_25e3b0;
        case 0x25e3ccu: goto label_25e3cc;
        case 0x25e3e8u: goto label_25e3e8;
        case 0x25e404u: goto label_25e404;
        case 0x25e420u: goto label_25e420;
        case 0x25e43cu: goto label_25e43c;
        case 0x25e458u: goto label_25e458;
        case 0x25e474u: goto label_25e474;
        case 0x25e490u: goto label_25e490;
        case 0x25e4acu: goto label_25e4ac;
        case 0x25e4c8u: goto label_25e4c8;
        case 0x25e4e4u: goto label_25e4e4;
        case 0x25e500u: goto label_25e500;
        case 0x25e51cu: goto label_25e51c;
        case 0x25e538u: goto label_25e538;
        case 0x25e554u: goto label_25e554;
        case 0x25e570u: goto label_25e570;
        case 0x25e58cu: goto label_25e58c;
        case 0x25e5a8u: goto label_25e5a8;
        case 0x25e5c4u: goto label_25e5c4;
        case 0x25e5e0u: goto label_25e5e0;
        case 0x25e5fcu: goto label_25e5fc;
        case 0x25e618u: goto label_25e618;
        case 0x25e634u: goto label_25e634;
        case 0x25e650u: goto label_25e650;
        case 0x25e66cu: goto label_25e66c;
        case 0x25e688u: goto label_25e688;
        case 0x25e6a4u: goto label_25e6a4;
        case 0x25e6c0u: goto label_25e6c0;
        case 0x25e6dcu: goto label_25e6dc;
        case 0x25e6f8u: goto label_25e6f8;
        case 0x25e714u: goto label_25e714;
        case 0x25e730u: goto label_25e730;
        case 0x25e74cu: goto label_25e74c;
        case 0x25e768u: goto label_25e768;
        case 0x25e784u: goto label_25e784;
        case 0x25e7a0u: goto label_25e7a0;
        case 0x25e7bcu: goto label_25e7bc;
        case 0x25e7d8u: goto label_25e7d8;
        case 0x25e7f4u: goto label_25e7f4;
        case 0x25e810u: goto label_25e810;
        case 0x25e82cu: goto label_25e82c;
        case 0x25e848u: goto label_25e848;
        case 0x25e864u: goto label_25e864;
        case 0x25e880u: goto label_25e880;
        case 0x25e89cu: goto label_25e89c;
        case 0x25e8b8u: goto label_25e8b8;
        case 0x25e8d4u: goto label_25e8d4;
        case 0x25e8f0u: goto label_25e8f0;
        case 0x25e90cu: goto label_25e90c;
        case 0x25e928u: goto label_25e928;
        case 0x25e944u: goto label_25e944;
        case 0x25e960u: goto label_25e960;
        case 0x25e97cu: goto label_25e97c;
        case 0x25e998u: goto label_25e998;
        case 0x25e9b4u: goto label_25e9b4;
        case 0x25e9d0u: goto label_25e9d0;
        case 0x25e9ecu: goto label_25e9ec;
        case 0x25ea08u: goto label_25ea08;
        case 0x25ea24u: goto label_25ea24;
        case 0x25ea40u: goto label_25ea40;
        case 0x25ea5cu: goto label_25ea5c;
        case 0x25ea78u: goto label_25ea78;
        case 0x25ea94u: goto label_25ea94;
        case 0x25eab0u: goto label_25eab0;
        case 0x25eaccu: goto label_25eacc;
        case 0x25eae8u: goto label_25eae8;
        case 0x25eb04u: goto label_25eb04;
        case 0x25eb20u: goto label_25eb20;
        case 0x25eb3cu: goto label_25eb3c;
        case 0x25eb58u: goto label_25eb58;
        case 0x25eb74u: goto label_25eb74;
        case 0x25eb90u: goto label_25eb90;
        case 0x25ebacu: goto label_25ebac;
        case 0x25ebc8u: goto label_25ebc8;
        case 0x25ebe4u: goto label_25ebe4;
        case 0x25ec00u: goto label_25ec00;
        case 0x25ec1cu: goto label_25ec1c;
        case 0x25ec38u: goto label_25ec38;
        case 0x25ec54u: goto label_25ec54;
        case 0x25ec70u: goto label_25ec70;
        case 0x25ec8cu: goto label_25ec8c;
        case 0x25eca8u: goto label_25eca8;
        case 0x25ecc4u: goto label_25ecc4;
        case 0x25ece0u: goto label_25ece0;
        case 0x25ecfcu: goto label_25ecfc;
        case 0x25ed18u: goto label_25ed18;
        case 0x25ed34u: goto label_25ed34;
        case 0x25ed50u: goto label_25ed50;
        case 0x25ed6cu: goto label_25ed6c;
        case 0x25ed88u: goto label_25ed88;
        case 0x25eda4u: goto label_25eda4;
        case 0x25edc0u: goto label_25edc0;
        case 0x25eddcu: goto label_25eddc;
        case 0x25edf8u: goto label_25edf8;
        case 0x25ee14u: goto label_25ee14;
        case 0x25ee30u: goto label_25ee30;
        case 0x25ee4cu: goto label_25ee4c;
        case 0x25ee68u: goto label_25ee68;
        case 0x25ee84u: goto label_25ee84;
        case 0x25eea0u: goto label_25eea0;
        case 0x25eebcu: goto label_25eebc;
        case 0x25eed8u: goto label_25eed8;
        case 0x25eef4u: goto label_25eef4;
        case 0x25ef10u: goto label_25ef10;
        case 0x25ef2cu: goto label_25ef2c;
        case 0x25ef48u: goto label_25ef48;
        case 0x25ef64u: goto label_25ef64;
        case 0x25ef80u: goto label_25ef80;
        case 0x25ef9cu: goto label_25ef9c;
        case 0x25efb8u: goto label_25efb8;
        case 0x25efd4u: goto label_25efd4;
        case 0x25eff0u: goto label_25eff0;
        case 0x25f00cu: goto label_25f00c;
        case 0x25f028u: goto label_25f028;
        default: break;
    }

    ctx->pc = 0x25e110u;

    // 0x25e110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25e110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25e114: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e114u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e118: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25e118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25e11c: 0x24a55f88  addiu       $a1, $a1, 0x5F88
    ctx->pc = 0x25e11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24456));
    // 0x25e120: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x25e120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x25e124: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E124u;
    SET_GPR_U32(ctx, 31, 0x25E12Cu);
    ctx->pc = 0x25E128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E124u;
    // 0x25e128: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E124u, 0x25E12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E12Cu;
label_25e12c:
    // 0x25e12c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e130: 0x144003c1  bnez        $v0, . + 4 + (0x3C1 << 2)
    ctx->pc = 0x25E130u;
    {
        const bool branch_taken_0x25e130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E130u;
        // 0x25e134: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e130) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E138u;
    // 0x25e138: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e138u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e13c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e140: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E140u;
    SET_GPR_U32(ctx, 31, 0x25E148u);
    ctx->pc = 0x25E144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E140u;
    // 0x25e144: 0x24a55f98  addiu       $a1, $a1, 0x5F98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E140u, 0x25E148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E148u;
label_25e148:
    // 0x25e148: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e14c: 0x144003ba  bnez        $v0, . + 4 + (0x3BA << 2)
    ctx->pc = 0x25E14Cu;
    {
        const bool branch_taken_0x25e14c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E14Cu;
        // 0x25e150: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e14c) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E154u;
    // 0x25e154: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e154u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e15c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E15Cu;
    SET_GPR_U32(ctx, 31, 0x25E164u);
    ctx->pc = 0x25E160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E15Cu;
    // 0x25e160: 0x24a55fa8  addiu       $a1, $a1, 0x5FA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E15Cu, 0x25E164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E164u;
label_25e164:
    // 0x25e164: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e168: 0x144003b3  bnez        $v0, . + 4 + (0x3B3 << 2)
    ctx->pc = 0x25E168u;
    {
        const bool branch_taken_0x25e168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E168u;
        // 0x25e16c: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e168) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E170u;
    // 0x25e170: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e170u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e178: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E178u;
    SET_GPR_U32(ctx, 31, 0x25E180u);
    ctx->pc = 0x25E17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E178u;
    // 0x25e17c: 0x24a55fb8  addiu       $a1, $a1, 0x5FB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E178u, 0x25E180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E180u;
label_25e180:
    // 0x25e180: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e184: 0x144003ac  bnez        $v0, . + 4 + (0x3AC << 2)
    ctx->pc = 0x25E184u;
    {
        const bool branch_taken_0x25e184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E184u;
        // 0x25e188: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e184) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E18Cu;
    // 0x25e18c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e18cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e194: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E194u;
    SET_GPR_U32(ctx, 31, 0x25E19Cu);
    ctx->pc = 0x25E198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E194u;
    // 0x25e198: 0x24a55fd0  addiu       $a1, $a1, 0x5FD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E194u, 0x25E19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E19Cu;
label_25e19c:
    // 0x25e19c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e1a0: 0x144003a5  bnez        $v0, . + 4 + (0x3A5 << 2)
    ctx->pc = 0x25E1A0u;
    {
        const bool branch_taken_0x25e1a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E1A0u;
        // 0x25e1a4: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e1a0) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E1A8u;
    // 0x25e1a8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e1ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e1b0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E1B0u;
    SET_GPR_U32(ctx, 31, 0x25E1B8u);
    ctx->pc = 0x25E1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E1B0u;
    // 0x25e1b4: 0x24a55fe0  addiu       $a1, $a1, 0x5FE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E1B0u, 0x25E1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E1B8u;
label_25e1b8:
    // 0x25e1b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e1bc: 0x1440039e  bnez        $v0, . + 4 + (0x39E << 2)
    ctx->pc = 0x25E1BCu;
    {
        const bool branch_taken_0x25e1bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E1BCu;
        // 0x25e1c0: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e1bc) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E1C4u;
    // 0x25e1c4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e1c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e1cc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E1CCu;
    SET_GPR_U32(ctx, 31, 0x25E1D4u);
    ctx->pc = 0x25E1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E1CCu;
    // 0x25e1d0: 0x24a55fe8  addiu       $a1, $a1, 0x5FE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E1CCu, 0x25E1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E1D4u;
label_25e1d4:
    // 0x25e1d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e1d8: 0x14400397  bnez        $v0, . + 4 + (0x397 << 2)
    ctx->pc = 0x25E1D8u;
    {
        const bool branch_taken_0x25e1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E1D8u;
        // 0x25e1dc: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e1d8) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E1E0u;
    // 0x25e1e0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e1e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e1e8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E1E8u;
    SET_GPR_U32(ctx, 31, 0x25E1F0u);
    ctx->pc = 0x25E1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E1E8u;
    // 0x25e1ec: 0x24a55ff8  addiu       $a1, $a1, 0x5FF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E1E8u, 0x25E1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E1F0u;
label_25e1f0:
    // 0x25e1f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e1f4: 0x14400390  bnez        $v0, . + 4 + (0x390 << 2)
    ctx->pc = 0x25E1F4u;
    {
        const bool branch_taken_0x25e1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E1F4u;
        // 0x25e1f8: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e1f4) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E1FCu;
    // 0x25e1fc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e204: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E204u;
    SET_GPR_U32(ctx, 31, 0x25E20Cu);
    ctx->pc = 0x25E208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E204u;
    // 0x25e208: 0x24a56008  addiu       $a1, $a1, 0x6008 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E204u, 0x25E20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E20Cu;
label_25e20c:
    // 0x25e20c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e210: 0x14400389  bnez        $v0, . + 4 + (0x389 << 2)
    ctx->pc = 0x25E210u;
    {
        const bool branch_taken_0x25e210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E210u;
        // 0x25e214: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e210) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E218u;
    // 0x25e218: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e218u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e21c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e220: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E220u;
    SET_GPR_U32(ctx, 31, 0x25E228u);
    ctx->pc = 0x25E224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E220u;
    // 0x25e224: 0x24a56018  addiu       $a1, $a1, 0x6018 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E220u, 0x25E228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E228u;
label_25e228:
    // 0x25e228: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e22c: 0x14400382  bnez        $v0, . + 4 + (0x382 << 2)
    ctx->pc = 0x25E22Cu;
    {
        const bool branch_taken_0x25e22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E22Cu;
        // 0x25e230: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e22c) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E234u;
    // 0x25e234: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e234u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e238: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e23c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E23Cu;
    SET_GPR_U32(ctx, 31, 0x25E244u);
    ctx->pc = 0x25E240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E23Cu;
    // 0x25e240: 0x24a56028  addiu       $a1, $a1, 0x6028 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E23Cu, 0x25E244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E244u;
label_25e244:
    // 0x25e244: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e248: 0x1440037b  bnez        $v0, . + 4 + (0x37B << 2)
    ctx->pc = 0x25E248u;
    {
        const bool branch_taken_0x25e248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E248u;
        // 0x25e24c: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e248) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E250u;
    // 0x25e250: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e250u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e254: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e258: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E258u;
    SET_GPR_U32(ctx, 31, 0x25E260u);
    ctx->pc = 0x25E25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E258u;
    // 0x25e25c: 0x24a56030  addiu       $a1, $a1, 0x6030 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E258u, 0x25E260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E260u;
label_25e260:
    // 0x25e260: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e264: 0x14400374  bnez        $v0, . + 4 + (0x374 << 2)
    ctx->pc = 0x25E264u;
    {
        const bool branch_taken_0x25e264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E264u;
        // 0x25e268: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e264) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E26Cu;
    // 0x25e26c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e26cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e274: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E274u;
    SET_GPR_U32(ctx, 31, 0x25E27Cu);
    ctx->pc = 0x25E278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E274u;
    // 0x25e278: 0x24a56040  addiu       $a1, $a1, 0x6040 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E274u, 0x25E27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E27Cu;
label_25e27c:
    // 0x25e27c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e280: 0x1440036d  bnez        $v0, . + 4 + (0x36D << 2)
    ctx->pc = 0x25E280u;
    {
        const bool branch_taken_0x25e280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E280u;
        // 0x25e284: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e280) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E288u;
    // 0x25e288: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e288u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e28c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e290: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E290u;
    SET_GPR_U32(ctx, 31, 0x25E298u);
    ctx->pc = 0x25E294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E290u;
    // 0x25e294: 0x24a56050  addiu       $a1, $a1, 0x6050 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E290u, 0x25E298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E298u;
label_25e298:
    // 0x25e298: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e29c: 0x14400366  bnez        $v0, . + 4 + (0x366 << 2)
    ctx->pc = 0x25E29Cu;
    {
        const bool branch_taken_0x25e29c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E29Cu;
        // 0x25e2a0: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e29c) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E2A4u;
    // 0x25e2a4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e2a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e2ac: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E2ACu;
    SET_GPR_U32(ctx, 31, 0x25E2B4u);
    ctx->pc = 0x25E2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E2ACu;
    // 0x25e2b0: 0x24a56060  addiu       $a1, $a1, 0x6060 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E2ACu, 0x25E2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E2B4u;
label_25e2b4:
    // 0x25e2b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e2b8: 0x1440035f  bnez        $v0, . + 4 + (0x35F << 2)
    ctx->pc = 0x25E2B8u;
    {
        const bool branch_taken_0x25e2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E2B8u;
        // 0x25e2bc: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e2b8) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E2C0u;
    // 0x25e2c0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e2c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e2c8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E2C8u;
    SET_GPR_U32(ctx, 31, 0x25E2D0u);
    ctx->pc = 0x25E2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E2C8u;
    // 0x25e2cc: 0x24a56070  addiu       $a1, $a1, 0x6070 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E2C8u, 0x25E2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E2D0u;
label_25e2d0:
    // 0x25e2d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e2d4: 0x14400358  bnez        $v0, . + 4 + (0x358 << 2)
    ctx->pc = 0x25E2D4u;
    {
        const bool branch_taken_0x25e2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E2D4u;
        // 0x25e2d8: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e2d4) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E2DCu;
    // 0x25e2dc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e2e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e2e4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E2E4u;
    SET_GPR_U32(ctx, 31, 0x25E2ECu);
    ctx->pc = 0x25E2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E2E4u;
    // 0x25e2e8: 0x24a56080  addiu       $a1, $a1, 0x6080 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E2E4u, 0x25E2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E2ECu;
label_25e2ec:
    // 0x25e2ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e2f0: 0x14400351  bnez        $v0, . + 4 + (0x351 << 2)
    ctx->pc = 0x25E2F0u;
    {
        const bool branch_taken_0x25e2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E2F0u;
        // 0x25e2f4: 0x24020072  addiu       $v0, $zero, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e2f0) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E2F8u;
    // 0x25e2f8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e2fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e300: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E300u;
    SET_GPR_U32(ctx, 31, 0x25E308u);
    ctx->pc = 0x25E304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E300u;
    // 0x25e304: 0x24a56090  addiu       $a1, $a1, 0x6090 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E300u, 0x25E308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E308u;
label_25e308:
    // 0x25e308: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e30c: 0x1440034a  bnez        $v0, . + 4 + (0x34A << 2)
    ctx->pc = 0x25E30Cu;
    {
        const bool branch_taken_0x25e30c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E30Cu;
        // 0x25e310: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e30c) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E314u;
    // 0x25e314: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e31c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E31Cu;
    SET_GPR_U32(ctx, 31, 0x25E324u);
    ctx->pc = 0x25E320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E31Cu;
    // 0x25e320: 0x24a560a8  addiu       $a1, $a1, 0x60A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E31Cu, 0x25E324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E324u;
label_25e324:
    // 0x25e324: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e328: 0x14400343  bnez        $v0, . + 4 + (0x343 << 2)
    ctx->pc = 0x25E328u;
    {
        const bool branch_taken_0x25e328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E328u;
        // 0x25e32c: 0x24020027  addiu       $v0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e328) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E330u;
    // 0x25e330: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e330u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e338: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E338u;
    SET_GPR_U32(ctx, 31, 0x25E340u);
    ctx->pc = 0x25E33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E338u;
    // 0x25e33c: 0x24a560c0  addiu       $a1, $a1, 0x60C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E338u, 0x25E340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E340u;
label_25e340:
    // 0x25e340: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e344: 0x1440033c  bnez        $v0, . + 4 + (0x33C << 2)
    ctx->pc = 0x25E344u;
    {
        const bool branch_taken_0x25e344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E344u;
        // 0x25e348: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e344) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E34Cu;
    // 0x25e34c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e34cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e354: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E354u;
    SET_GPR_U32(ctx, 31, 0x25E35Cu);
    ctx->pc = 0x25E358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E354u;
    // 0x25e358: 0x24a560d0  addiu       $a1, $a1, 0x60D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E354u, 0x25E35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E35Cu;
label_25e35c:
    // 0x25e35c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e360: 0x14400335  bnez        $v0, . + 4 + (0x335 << 2)
    ctx->pc = 0x25E360u;
    {
        const bool branch_taken_0x25e360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E360u;
        // 0x25e364: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e360) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E368u;
    // 0x25e368: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e368u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e36c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e370: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E370u;
    SET_GPR_U32(ctx, 31, 0x25E378u);
    ctx->pc = 0x25E374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E370u;
    // 0x25e374: 0x24a560e0  addiu       $a1, $a1, 0x60E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E370u, 0x25E378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E378u;
label_25e378:
    // 0x25e378: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e37c: 0x1440032e  bnez        $v0, . + 4 + (0x32E << 2)
    ctx->pc = 0x25E37Cu;
    {
        const bool branch_taken_0x25e37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E37Cu;
        // 0x25e380: 0x2402005b  addiu       $v0, $zero, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e37c) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E384u;
    // 0x25e384: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e384u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e388: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e38c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E38Cu;
    SET_GPR_U32(ctx, 31, 0x25E394u);
    ctx->pc = 0x25E390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E38Cu;
    // 0x25e390: 0x24a560f0  addiu       $a1, $a1, 0x60F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E38Cu, 0x25E394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E394u;
label_25e394:
    // 0x25e394: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e398: 0x14400327  bnez        $v0, . + 4 + (0x327 << 2)
    ctx->pc = 0x25E398u;
    {
        const bool branch_taken_0x25e398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E398u;
        // 0x25e39c: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e398) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E3A0u;
    // 0x25e3a0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e3a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e3a8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E3A8u;
    SET_GPR_U32(ctx, 31, 0x25E3B0u);
    ctx->pc = 0x25E3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E3A8u;
    // 0x25e3ac: 0x24a56100  addiu       $a1, $a1, 0x6100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E3A8u, 0x25E3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E3B0u;
label_25e3b0:
    // 0x25e3b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e3b4: 0x14400320  bnez        $v0, . + 4 + (0x320 << 2)
    ctx->pc = 0x25E3B4u;
    {
        const bool branch_taken_0x25e3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E3B4u;
        // 0x25e3b8: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e3b4) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E3BCu;
    // 0x25e3bc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e3c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e3c4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E3C4u;
    SET_GPR_U32(ctx, 31, 0x25E3CCu);
    ctx->pc = 0x25E3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E3C4u;
    // 0x25e3c8: 0x24a56110  addiu       $a1, $a1, 0x6110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E3C4u, 0x25E3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E3CCu;
label_25e3cc:
    // 0x25e3cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e3d0: 0x14400319  bnez        $v0, . + 4 + (0x319 << 2)
    ctx->pc = 0x25E3D0u;
    {
        const bool branch_taken_0x25e3d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E3D0u;
        // 0x25e3d4: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e3d0) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E3D8u;
    // 0x25e3d8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e3dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e3e0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E3E0u;
    SET_GPR_U32(ctx, 31, 0x25E3E8u);
    ctx->pc = 0x25E3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E3E0u;
    // 0x25e3e4: 0x24a56128  addiu       $a1, $a1, 0x6128 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E3E0u, 0x25E3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E3E8u;
label_25e3e8:
    // 0x25e3e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e3ec: 0x14400312  bnez        $v0, . + 4 + (0x312 << 2)
    ctx->pc = 0x25E3ECu;
    {
        const bool branch_taken_0x25e3ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E3ECu;
        // 0x25e3f0: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e3ec) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E3F4u;
    // 0x25e3f4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e3f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e3fc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E3FCu;
    SET_GPR_U32(ctx, 31, 0x25E404u);
    ctx->pc = 0x25E400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E3FCu;
    // 0x25e400: 0x24a56138  addiu       $a1, $a1, 0x6138 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E3FCu, 0x25E404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E404u;
label_25e404:
    // 0x25e404: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e408: 0x1440030b  bnez        $v0, . + 4 + (0x30B << 2)
    ctx->pc = 0x25E408u;
    {
        const bool branch_taken_0x25e408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E408u;
        // 0x25e40c: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e408) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E410u;
    // 0x25e410: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e418: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E418u;
    SET_GPR_U32(ctx, 31, 0x25E420u);
    ctx->pc = 0x25E41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E418u;
    // 0x25e41c: 0x24a56140  addiu       $a1, $a1, 0x6140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E418u, 0x25E420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E420u;
label_25e420:
    // 0x25e420: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e424: 0x14400304  bnez        $v0, . + 4 + (0x304 << 2)
    ctx->pc = 0x25E424u;
    {
        const bool branch_taken_0x25e424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E424u;
        // 0x25e428: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e424) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E42Cu;
    // 0x25e42c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e42cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e434: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E434u;
    SET_GPR_U32(ctx, 31, 0x25E43Cu);
    ctx->pc = 0x25E438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E434u;
    // 0x25e438: 0x24a56150  addiu       $a1, $a1, 0x6150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E434u, 0x25E43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E43Cu;
label_25e43c:
    // 0x25e43c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e440: 0x144002fd  bnez        $v0, . + 4 + (0x2FD << 2)
    ctx->pc = 0x25E440u;
    {
        const bool branch_taken_0x25e440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E440u;
        // 0x25e444: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e440) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E448u;
    // 0x25e448: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e448u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e44c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e450: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E450u;
    SET_GPR_U32(ctx, 31, 0x25E458u);
    ctx->pc = 0x25E454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E450u;
    // 0x25e454: 0x24a56160  addiu       $a1, $a1, 0x6160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E450u, 0x25E458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E458u;
label_25e458:
    // 0x25e458: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e45c: 0x144002f6  bnez        $v0, . + 4 + (0x2F6 << 2)
    ctx->pc = 0x25E45Cu;
    {
        const bool branch_taken_0x25e45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E45Cu;
        // 0x25e460: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e45c) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E464u;
    // 0x25e464: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e464u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e46c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E46Cu;
    SET_GPR_U32(ctx, 31, 0x25E474u);
    ctx->pc = 0x25E470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E46Cu;
    // 0x25e470: 0x24a56178  addiu       $a1, $a1, 0x6178 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E46Cu, 0x25E474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E474u;
label_25e474:
    // 0x25e474: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e478: 0x144002ef  bnez        $v0, . + 4 + (0x2EF << 2)
    ctx->pc = 0x25E478u;
    {
        const bool branch_taken_0x25e478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E478u;
        // 0x25e47c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e478) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E480u;
    // 0x25e480: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e480u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e488: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E488u;
    SET_GPR_U32(ctx, 31, 0x25E490u);
    ctx->pc = 0x25E48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E488u;
    // 0x25e48c: 0x24a56188  addiu       $a1, $a1, 0x6188 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E488u, 0x25E490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E490u;
label_25e490:
    // 0x25e490: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e494: 0x144002e8  bnez        $v0, . + 4 + (0x2E8 << 2)
    ctx->pc = 0x25E494u;
    {
        const bool branch_taken_0x25e494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E494u;
        // 0x25e498: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e494) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E49Cu;
    // 0x25e49c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e49cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e4a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e4a4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E4A4u;
    SET_GPR_U32(ctx, 31, 0x25E4ACu);
    ctx->pc = 0x25E4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E4A4u;
    // 0x25e4a8: 0x24a56198  addiu       $a1, $a1, 0x6198 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E4A4u, 0x25E4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E4ACu;
label_25e4ac:
    // 0x25e4ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e4b0: 0x144002e1  bnez        $v0, . + 4 + (0x2E1 << 2)
    ctx->pc = 0x25E4B0u;
    {
        const bool branch_taken_0x25e4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E4B0u;
        // 0x25e4b4: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e4b0) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E4B8u;
    // 0x25e4b8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e4bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e4c0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E4C0u;
    SET_GPR_U32(ctx, 31, 0x25E4C8u);
    ctx->pc = 0x25E4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E4C0u;
    // 0x25e4c4: 0x24a561b8  addiu       $a1, $a1, 0x61B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E4C0u, 0x25E4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E4C8u;
label_25e4c8:
    // 0x25e4c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e4cc: 0x144002da  bnez        $v0, . + 4 + (0x2DA << 2)
    ctx->pc = 0x25E4CCu;
    {
        const bool branch_taken_0x25e4cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E4CCu;
        // 0x25e4d0: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e4cc) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E4D4u;
    // 0x25e4d4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e4d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e4dc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E4DCu;
    SET_GPR_U32(ctx, 31, 0x25E4E4u);
    ctx->pc = 0x25E4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E4DCu;
    // 0x25e4e0: 0x24a561c8  addiu       $a1, $a1, 0x61C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E4DCu, 0x25E4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E4E4u;
label_25e4e4:
    // 0x25e4e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e4e8: 0x144002d3  bnez        $v0, . + 4 + (0x2D3 << 2)
    ctx->pc = 0x25E4E8u;
    {
        const bool branch_taken_0x25e4e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E4E8u;
        // 0x25e4ec: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e4e8) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E4F0u;
    // 0x25e4f0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e4f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e4f8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E4F8u;
    SET_GPR_U32(ctx, 31, 0x25E500u);
    ctx->pc = 0x25E4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E4F8u;
    // 0x25e4fc: 0x24a561d8  addiu       $a1, $a1, 0x61D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E4F8u, 0x25E500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E500u;
label_25e500:
    // 0x25e500: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e504: 0x144002cc  bnez        $v0, . + 4 + (0x2CC << 2)
    ctx->pc = 0x25E504u;
    {
        const bool branch_taken_0x25e504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E504u;
        // 0x25e508: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e504) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E50Cu;
    // 0x25e50c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e50cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e514: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E514u;
    SET_GPR_U32(ctx, 31, 0x25E51Cu);
    ctx->pc = 0x25E518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E514u;
    // 0x25e518: 0x24a561f0  addiu       $a1, $a1, 0x61F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E514u, 0x25E51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E51Cu;
label_25e51c:
    // 0x25e51c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e520: 0x144002c5  bnez        $v0, . + 4 + (0x2C5 << 2)
    ctx->pc = 0x25E520u;
    {
        const bool branch_taken_0x25e520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E520u;
        // 0x25e524: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e520) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E528u;
    // 0x25e528: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e528u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e52c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e530: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E530u;
    SET_GPR_U32(ctx, 31, 0x25E538u);
    ctx->pc = 0x25E534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E530u;
    // 0x25e534: 0x24a56200  addiu       $a1, $a1, 0x6200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E530u, 0x25E538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E538u;
label_25e538:
    // 0x25e538: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e53c: 0x144002be  bnez        $v0, . + 4 + (0x2BE << 2)
    ctx->pc = 0x25E53Cu;
    {
        const bool branch_taken_0x25e53c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E53Cu;
        // 0x25e540: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e53c) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E544u;
    // 0x25e544: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e544u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e54c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E54Cu;
    SET_GPR_U32(ctx, 31, 0x25E554u);
    ctx->pc = 0x25E550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E54Cu;
    // 0x25e550: 0x24a56210  addiu       $a1, $a1, 0x6210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E54Cu, 0x25E554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E554u;
label_25e554:
    // 0x25e554: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e558: 0x144002b7  bnez        $v0, . + 4 + (0x2B7 << 2)
    ctx->pc = 0x25E558u;
    {
        const bool branch_taken_0x25e558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E558u;
        // 0x25e55c: 0x24020038  addiu       $v0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e558) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E560u;
    // 0x25e560: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e564: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e568: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E568u;
    SET_GPR_U32(ctx, 31, 0x25E570u);
    ctx->pc = 0x25E56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E568u;
    // 0x25e56c: 0x24a56220  addiu       $a1, $a1, 0x6220 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E568u, 0x25E570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E570u;
label_25e570:
    // 0x25e570: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e574: 0x144002b0  bnez        $v0, . + 4 + (0x2B0 << 2)
    ctx->pc = 0x25E574u;
    {
        const bool branch_taken_0x25e574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E574u;
        // 0x25e578: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e574) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E57Cu;
    // 0x25e57c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e57cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e584: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E584u;
    SET_GPR_U32(ctx, 31, 0x25E58Cu);
    ctx->pc = 0x25E588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E584u;
    // 0x25e588: 0x24a56230  addiu       $a1, $a1, 0x6230 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E584u, 0x25E58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E58Cu;
label_25e58c:
    // 0x25e58c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e590: 0x144002a9  bnez        $v0, . + 4 + (0x2A9 << 2)
    ctx->pc = 0x25E590u;
    {
        const bool branch_taken_0x25e590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E590u;
        // 0x25e594: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e590) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E598u;
    // 0x25e598: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e598u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e59c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e5a0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E5A0u;
    SET_GPR_U32(ctx, 31, 0x25E5A8u);
    ctx->pc = 0x25E5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E5A0u;
    // 0x25e5a4: 0x24a56240  addiu       $a1, $a1, 0x6240 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E5A0u, 0x25E5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E5A8u;
label_25e5a8:
    // 0x25e5a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e5ac: 0x144002a2  bnez        $v0, . + 4 + (0x2A2 << 2)
    ctx->pc = 0x25E5ACu;
    {
        const bool branch_taken_0x25e5ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E5ACu;
        // 0x25e5b0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e5ac) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E5B4u;
    // 0x25e5b4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e5b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e5bc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E5BCu;
    SET_GPR_U32(ctx, 31, 0x25E5C4u);
    ctx->pc = 0x25E5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E5BCu;
    // 0x25e5c0: 0x24a56250  addiu       $a1, $a1, 0x6250 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E5BCu, 0x25E5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E5C4u;
label_25e5c4:
    // 0x25e5c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e5c8: 0x1440029b  bnez        $v0, . + 4 + (0x29B << 2)
    ctx->pc = 0x25E5C8u;
    {
        const bool branch_taken_0x25e5c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E5C8u;
        // 0x25e5cc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e5c8) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E5D0u;
    // 0x25e5d0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e5d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e5d8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E5D8u;
    SET_GPR_U32(ctx, 31, 0x25E5E0u);
    ctx->pc = 0x25E5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E5D8u;
    // 0x25e5dc: 0x24a56260  addiu       $a1, $a1, 0x6260 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E5D8u, 0x25E5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E5E0u;
label_25e5e0:
    // 0x25e5e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e5e4: 0x14400294  bnez        $v0, . + 4 + (0x294 << 2)
    ctx->pc = 0x25E5E4u;
    {
        const bool branch_taken_0x25e5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E5E4u;
        // 0x25e5e8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e5e4) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E5ECu;
    // 0x25e5ec: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e5f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e5f4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E5F4u;
    SET_GPR_U32(ctx, 31, 0x25E5FCu);
    ctx->pc = 0x25E5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E5F4u;
    // 0x25e5f8: 0x24a56270  addiu       $a1, $a1, 0x6270 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E5F4u, 0x25E5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E5FCu;
label_25e5fc:
    // 0x25e5fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e600: 0x1440028d  bnez        $v0, . + 4 + (0x28D << 2)
    ctx->pc = 0x25E600u;
    {
        const bool branch_taken_0x25e600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E600u;
        // 0x25e604: 0x24020036  addiu       $v0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e600) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E608u;
    // 0x25e608: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e608u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e60c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e610: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E610u;
    SET_GPR_U32(ctx, 31, 0x25E618u);
    ctx->pc = 0x25E614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E610u;
    // 0x25e614: 0x24a56280  addiu       $a1, $a1, 0x6280 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E610u, 0x25E618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E618u;
label_25e618:
    // 0x25e618: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e61c: 0x14400286  bnez        $v0, . + 4 + (0x286 << 2)
    ctx->pc = 0x25E61Cu;
    {
        const bool branch_taken_0x25e61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E61Cu;
        // 0x25e620: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e61c) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E624u;
    // 0x25e624: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e624u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e62c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E62Cu;
    SET_GPR_U32(ctx, 31, 0x25E634u);
    ctx->pc = 0x25E630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E62Cu;
    // 0x25e630: 0x24a56290  addiu       $a1, $a1, 0x6290 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E62Cu, 0x25E634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E634u;
label_25e634:
    // 0x25e634: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e638: 0x1440027f  bnez        $v0, . + 4 + (0x27F << 2)
    ctx->pc = 0x25E638u;
    {
        const bool branch_taken_0x25e638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E638u;
        // 0x25e63c: 0x2402003b  addiu       $v0, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e638) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E640u;
    // 0x25e640: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e640u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e644: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e648: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E648u;
    SET_GPR_U32(ctx, 31, 0x25E650u);
    ctx->pc = 0x25E64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E648u;
    // 0x25e64c: 0x24a562a0  addiu       $a1, $a1, 0x62A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E648u, 0x25E650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E650u;
label_25e650:
    // 0x25e650: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e654: 0x14400278  bnez        $v0, . + 4 + (0x278 << 2)
    ctx->pc = 0x25E654u;
    {
        const bool branch_taken_0x25e654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E654u;
        // 0x25e658: 0x2402003a  addiu       $v0, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e654) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E65Cu;
    // 0x25e65c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e65cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e664: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E664u;
    SET_GPR_U32(ctx, 31, 0x25E66Cu);
    ctx->pc = 0x25E668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E664u;
    // 0x25e668: 0x24a562b0  addiu       $a1, $a1, 0x62B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E664u, 0x25E66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E66Cu;
label_25e66c:
    // 0x25e66c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e670: 0x14400271  bnez        $v0, . + 4 + (0x271 << 2)
    ctx->pc = 0x25E670u;
    {
        const bool branch_taken_0x25e670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E670u;
        // 0x25e674: 0x2402005d  addiu       $v0, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e670) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E678u;
    // 0x25e678: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e67c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e680: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E680u;
    SET_GPR_U32(ctx, 31, 0x25E688u);
    ctx->pc = 0x25E684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E680u;
    // 0x25e684: 0x24a562b8  addiu       $a1, $a1, 0x62B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E680u, 0x25E688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E688u;
label_25e688:
    // 0x25e688: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e68c: 0x1440026a  bnez        $v0, . + 4 + (0x26A << 2)
    ctx->pc = 0x25E68Cu;
    {
        const bool branch_taken_0x25e68c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E68Cu;
        // 0x25e690: 0x2402003d  addiu       $v0, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e68c) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E694u;
    // 0x25e694: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e698: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e69c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E69Cu;
    SET_GPR_U32(ctx, 31, 0x25E6A4u);
    ctx->pc = 0x25E6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E69Cu;
    // 0x25e6a0: 0x24a562c0  addiu       $a1, $a1, 0x62C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E69Cu, 0x25E6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E6A4u;
label_25e6a4:
    // 0x25e6a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e6a8: 0x14400263  bnez        $v0, . + 4 + (0x263 << 2)
    ctx->pc = 0x25E6A8u;
    {
        const bool branch_taken_0x25e6a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E6A8u;
        // 0x25e6ac: 0x2402003e  addiu       $v0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e6a8) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E6B0u;
    // 0x25e6b0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e6b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e6b8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E6B8u;
    SET_GPR_U32(ctx, 31, 0x25E6C0u);
    ctx->pc = 0x25E6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E6B8u;
    // 0x25e6bc: 0x24a562d0  addiu       $a1, $a1, 0x62D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E6B8u, 0x25E6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E6C0u;
label_25e6c0:
    // 0x25e6c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e6c4: 0x1440025c  bnez        $v0, . + 4 + (0x25C << 2)
    ctx->pc = 0x25E6C4u;
    {
        const bool branch_taken_0x25e6c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E6C4u;
        // 0x25e6c8: 0x2402003f  addiu       $v0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e6c4) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E6CCu;
    // 0x25e6cc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e6d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e6d4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E6D4u;
    SET_GPR_U32(ctx, 31, 0x25E6DCu);
    ctx->pc = 0x25E6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E6D4u;
    // 0x25e6d8: 0x24a562e0  addiu       $a1, $a1, 0x62E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E6D4u, 0x25E6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E6DCu;
label_25e6dc:
    // 0x25e6dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e6e0: 0x14400255  bnez        $v0, . + 4 + (0x255 << 2)
    ctx->pc = 0x25E6E0u;
    {
        const bool branch_taken_0x25e6e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E6E0u;
        // 0x25e6e4: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e6e0) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E6E8u;
    // 0x25e6e8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e6ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e6f0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E6F0u;
    SET_GPR_U32(ctx, 31, 0x25E6F8u);
    ctx->pc = 0x25E6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E6F0u;
    // 0x25e6f4: 0x24a562e8  addiu       $a1, $a1, 0x62E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E6F0u, 0x25E6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E6F8u;
label_25e6f8:
    // 0x25e6f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e6fc: 0x1440024e  bnez        $v0, . + 4 + (0x24E << 2)
    ctx->pc = 0x25E6FCu;
    {
        const bool branch_taken_0x25e6fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E6FCu;
        // 0x25e700: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e6fc) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E704u;
    // 0x25e704: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e704u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e70c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E70Cu;
    SET_GPR_U32(ctx, 31, 0x25E714u);
    ctx->pc = 0x25E710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E70Cu;
    // 0x25e710: 0x24a562f0  addiu       $a1, $a1, 0x62F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E70Cu, 0x25E714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E714u;
label_25e714:
    // 0x25e714: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e718: 0x14400247  bnez        $v0, . + 4 + (0x247 << 2)
    ctx->pc = 0x25E718u;
    {
        const bool branch_taken_0x25e718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E718u;
        // 0x25e71c: 0x24020041  addiu       $v0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e718) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E720u;
    // 0x25e720: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e728: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E728u;
    SET_GPR_U32(ctx, 31, 0x25E730u);
    ctx->pc = 0x25E72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E728u;
    // 0x25e72c: 0x24a56300  addiu       $a1, $a1, 0x6300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E728u, 0x25E730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E730u;
label_25e730:
    // 0x25e730: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e734: 0x14400240  bnez        $v0, . + 4 + (0x240 << 2)
    ctx->pc = 0x25E734u;
    {
        const bool branch_taken_0x25e734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E734u;
        // 0x25e738: 0x24020042  addiu       $v0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e734) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E73Cu;
    // 0x25e73c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e73cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e740: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e744: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E744u;
    SET_GPR_U32(ctx, 31, 0x25E74Cu);
    ctx->pc = 0x25E748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E744u;
    // 0x25e748: 0x24a56318  addiu       $a1, $a1, 0x6318 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E744u, 0x25E74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E74Cu;
label_25e74c:
    // 0x25e74c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e750: 0x14400239  bnez        $v0, . + 4 + (0x239 << 2)
    ctx->pc = 0x25E750u;
    {
        const bool branch_taken_0x25e750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E750u;
        // 0x25e754: 0x24020043  addiu       $v0, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e750) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E758u;
    // 0x25e758: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e758u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e75c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e760: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E760u;
    SET_GPR_U32(ctx, 31, 0x25E768u);
    ctx->pc = 0x25E764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E760u;
    // 0x25e764: 0x24a56328  addiu       $a1, $a1, 0x6328 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E760u, 0x25E768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E768u;
label_25e768:
    // 0x25e768: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e76c: 0x14400232  bnez        $v0, . + 4 + (0x232 << 2)
    ctx->pc = 0x25E76Cu;
    {
        const bool branch_taken_0x25e76c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E76Cu;
        // 0x25e770: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e76c) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E774u;
    // 0x25e774: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e774u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e77c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E77Cu;
    SET_GPR_U32(ctx, 31, 0x25E784u);
    ctx->pc = 0x25E780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E77Cu;
    // 0x25e780: 0x24a56338  addiu       $a1, $a1, 0x6338 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E77Cu, 0x25E784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E784u;
label_25e784:
    // 0x25e784: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e788: 0x1440022b  bnez        $v0, . + 4 + (0x22B << 2)
    ctx->pc = 0x25E788u;
    {
        const bool branch_taken_0x25e788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E788u;
        // 0x25e78c: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e788) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E790u;
    // 0x25e790: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e794: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e798: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E798u;
    SET_GPR_U32(ctx, 31, 0x25E7A0u);
    ctx->pc = 0x25E79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E798u;
    // 0x25e79c: 0x24a56340  addiu       $a1, $a1, 0x6340 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E798u, 0x25E7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E7A0u;
label_25e7a0:
    // 0x25e7a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e7a4: 0x14400224  bnez        $v0, . + 4 + (0x224 << 2)
    ctx->pc = 0x25E7A4u;
    {
        const bool branch_taken_0x25e7a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E7A4u;
        // 0x25e7a8: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e7a4) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E7ACu;
    // 0x25e7ac: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e7acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e7b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e7b4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E7B4u;
    SET_GPR_U32(ctx, 31, 0x25E7BCu);
    ctx->pc = 0x25E7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E7B4u;
    // 0x25e7b8: 0x24a56350  addiu       $a1, $a1, 0x6350 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E7B4u, 0x25E7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E7BCu;
label_25e7bc:
    // 0x25e7bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e7c0: 0x1440021d  bnez        $v0, . + 4 + (0x21D << 2)
    ctx->pc = 0x25E7C0u;
    {
        const bool branch_taken_0x25e7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E7C0u;
        // 0x25e7c4: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e7c0) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E7C8u;
    // 0x25e7c8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e7cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e7d0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E7D0u;
    SET_GPR_U32(ctx, 31, 0x25E7D8u);
    ctx->pc = 0x25E7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E7D0u;
    // 0x25e7d4: 0x24a56360  addiu       $a1, $a1, 0x6360 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E7D0u, 0x25E7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E7D8u;
label_25e7d8:
    // 0x25e7d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e7dc: 0x14400216  bnez        $v0, . + 4 + (0x216 << 2)
    ctx->pc = 0x25E7DCu;
    {
        const bool branch_taken_0x25e7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E7DCu;
        // 0x25e7e0: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e7dc) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E7E4u;
    // 0x25e7e4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e7e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e7ec: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E7ECu;
    SET_GPR_U32(ctx, 31, 0x25E7F4u);
    ctx->pc = 0x25E7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E7ECu;
    // 0x25e7f0: 0x24a56370  addiu       $a1, $a1, 0x6370 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E7ECu, 0x25E7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E7F4u;
label_25e7f4:
    // 0x25e7f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e7f8: 0x1440020f  bnez        $v0, . + 4 + (0x20F << 2)
    ctx->pc = 0x25E7F8u;
    {
        const bool branch_taken_0x25e7f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E7F8u;
        // 0x25e7fc: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e7f8) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E800u;
    // 0x25e800: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e804: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e808: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E808u;
    SET_GPR_U32(ctx, 31, 0x25E810u);
    ctx->pc = 0x25E80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E808u;
    // 0x25e80c: 0x24a56380  addiu       $a1, $a1, 0x6380 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E808u, 0x25E810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E810u;
label_25e810:
    // 0x25e810: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e814: 0x14400208  bnez        $v0, . + 4 + (0x208 << 2)
    ctx->pc = 0x25E814u;
    {
        const bool branch_taken_0x25e814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E814u;
        // 0x25e818: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e814) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E81Cu;
    // 0x25e81c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e81cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e824: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E824u;
    SET_GPR_U32(ctx, 31, 0x25E82Cu);
    ctx->pc = 0x25E828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E824u;
    // 0x25e828: 0x24a56390  addiu       $a1, $a1, 0x6390 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E824u, 0x25E82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E82Cu;
label_25e82c:
    // 0x25e82c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e830: 0x14400201  bnez        $v0, . + 4 + (0x201 << 2)
    ctx->pc = 0x25E830u;
    {
        const bool branch_taken_0x25e830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E830u;
        // 0x25e834: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e830) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E838u;
    // 0x25e838: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e83c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e840: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E840u;
    SET_GPR_U32(ctx, 31, 0x25E848u);
    ctx->pc = 0x25E844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E840u;
    // 0x25e844: 0x24a563a0  addiu       $a1, $a1, 0x63A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E840u, 0x25E848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E848u;
label_25e848:
    // 0x25e848: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e84c: 0x144001fa  bnez        $v0, . + 4 + (0x1FA << 2)
    ctx->pc = 0x25E84Cu;
    {
        const bool branch_taken_0x25e84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E84Cu;
        // 0x25e850: 0x24020049  addiu       $v0, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e84c) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E854u;
    // 0x25e854: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e854u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e85c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E85Cu;
    SET_GPR_U32(ctx, 31, 0x25E864u);
    ctx->pc = 0x25E860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E85Cu;
    // 0x25e860: 0x24a563b0  addiu       $a1, $a1, 0x63B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E85Cu, 0x25E864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E864u;
label_25e864:
    // 0x25e864: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e868: 0x144001f3  bnez        $v0, . + 4 + (0x1F3 << 2)
    ctx->pc = 0x25E868u;
    {
        const bool branch_taken_0x25e868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E868u;
        // 0x25e86c: 0x2402004a  addiu       $v0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e868) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E870u;
    // 0x25e870: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e870u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e874: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e878: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E878u;
    SET_GPR_U32(ctx, 31, 0x25E880u);
    ctx->pc = 0x25E87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E878u;
    // 0x25e87c: 0x24a563c0  addiu       $a1, $a1, 0x63C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E878u, 0x25E880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E880u;
label_25e880:
    // 0x25e880: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e884: 0x144001ec  bnez        $v0, . + 4 + (0x1EC << 2)
    ctx->pc = 0x25E884u;
    {
        const bool branch_taken_0x25e884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E884u;
        // 0x25e888: 0x2402004b  addiu       $v0, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e884) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E88Cu;
    // 0x25e88c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e88cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e890: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e894: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E894u;
    SET_GPR_U32(ctx, 31, 0x25E89Cu);
    ctx->pc = 0x25E898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E894u;
    // 0x25e898: 0x24a563d0  addiu       $a1, $a1, 0x63D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E894u, 0x25E89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E89Cu;
label_25e89c:
    // 0x25e89c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e8a0: 0x144001e5  bnez        $v0, . + 4 + (0x1E5 << 2)
    ctx->pc = 0x25E8A0u;
    {
        const bool branch_taken_0x25e8a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E8A0u;
        // 0x25e8a4: 0x2402004c  addiu       $v0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e8a0) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E8A8u;
    // 0x25e8a8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e8ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e8b0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E8B0u;
    SET_GPR_U32(ctx, 31, 0x25E8B8u);
    ctx->pc = 0x25E8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E8B0u;
    // 0x25e8b4: 0x24a563e0  addiu       $a1, $a1, 0x63E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E8B0u, 0x25E8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E8B8u;
label_25e8b8:
    // 0x25e8b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e8bc: 0x144001de  bnez        $v0, . + 4 + (0x1DE << 2)
    ctx->pc = 0x25E8BCu;
    {
        const bool branch_taken_0x25e8bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E8BCu;
        // 0x25e8c0: 0x2402004d  addiu       $v0, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e8bc) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E8C4u;
    // 0x25e8c4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e8c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e8cc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E8CCu;
    SET_GPR_U32(ctx, 31, 0x25E8D4u);
    ctx->pc = 0x25E8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E8CCu;
    // 0x25e8d0: 0x24a563f0  addiu       $a1, $a1, 0x63F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E8CCu, 0x25E8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E8D4u;
label_25e8d4:
    // 0x25e8d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e8d8: 0x144001d7  bnez        $v0, . + 4 + (0x1D7 << 2)
    ctx->pc = 0x25E8D8u;
    {
        const bool branch_taken_0x25e8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E8D8u;
        // 0x25e8dc: 0x2402004e  addiu       $v0, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e8d8) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E8E0u;
    // 0x25e8e0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e8e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e8e8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E8E8u;
    SET_GPR_U32(ctx, 31, 0x25E8F0u);
    ctx->pc = 0x25E8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E8E8u;
    // 0x25e8ec: 0x24a56400  addiu       $a1, $a1, 0x6400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E8E8u, 0x25E8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E8F0u;
label_25e8f0:
    // 0x25e8f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e8f4: 0x144001d0  bnez        $v0, . + 4 + (0x1D0 << 2)
    ctx->pc = 0x25E8F4u;
    {
        const bool branch_taken_0x25e8f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E8F4u;
        // 0x25e8f8: 0x2402004f  addiu       $v0, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e8f4) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E8FCu;
    // 0x25e8fc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e904: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E904u;
    SET_GPR_U32(ctx, 31, 0x25E90Cu);
    ctx->pc = 0x25E908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E904u;
    // 0x25e908: 0x24a56410  addiu       $a1, $a1, 0x6410 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E904u, 0x25E90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E90Cu;
label_25e90c:
    // 0x25e90c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e910: 0x144001c9  bnez        $v0, . + 4 + (0x1C9 << 2)
    ctx->pc = 0x25E910u;
    {
        const bool branch_taken_0x25e910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E910u;
        // 0x25e914: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e910) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E918u;
    // 0x25e918: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e91c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e920: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E920u;
    SET_GPR_U32(ctx, 31, 0x25E928u);
    ctx->pc = 0x25E924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E920u;
    // 0x25e924: 0x24a56420  addiu       $a1, $a1, 0x6420 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E920u, 0x25E928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E928u;
label_25e928:
    // 0x25e928: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e92c: 0x144001c2  bnez        $v0, . + 4 + (0x1C2 << 2)
    ctx->pc = 0x25E92Cu;
    {
        const bool branch_taken_0x25e92c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E92Cu;
        // 0x25e930: 0x24020051  addiu       $v0, $zero, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e92c) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E934u;
    // 0x25e934: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e934u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e938: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e93c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E93Cu;
    SET_GPR_U32(ctx, 31, 0x25E944u);
    ctx->pc = 0x25E940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E93Cu;
    // 0x25e940: 0x24a56430  addiu       $a1, $a1, 0x6430 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E93Cu, 0x25E944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E944u;
label_25e944:
    // 0x25e944: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e948: 0x144001bb  bnez        $v0, . + 4 + (0x1BB << 2)
    ctx->pc = 0x25E948u;
    {
        const bool branch_taken_0x25e948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E948u;
        // 0x25e94c: 0x24020052  addiu       $v0, $zero, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e948) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E950u;
    // 0x25e950: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e958: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E958u;
    SET_GPR_U32(ctx, 31, 0x25E960u);
    ctx->pc = 0x25E95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E958u;
    // 0x25e95c: 0x24a56440  addiu       $a1, $a1, 0x6440 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E958u, 0x25E960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E960u;
label_25e960:
    // 0x25e960: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e964: 0x144001b4  bnez        $v0, . + 4 + (0x1B4 << 2)
    ctx->pc = 0x25E964u;
    {
        const bool branch_taken_0x25e964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E964u;
        // 0x25e968: 0x24020053  addiu       $v0, $zero, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e964) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E96Cu;
    // 0x25e96c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e96cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e974: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E974u;
    SET_GPR_U32(ctx, 31, 0x25E97Cu);
    ctx->pc = 0x25E978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E974u;
    // 0x25e978: 0x24a56448  addiu       $a1, $a1, 0x6448 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E974u, 0x25E97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E97Cu;
label_25e97c:
    // 0x25e97c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e980: 0x144001ad  bnez        $v0, . + 4 + (0x1AD << 2)
    ctx->pc = 0x25E980u;
    {
        const bool branch_taken_0x25e980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E980u;
        // 0x25e984: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e980) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E988u;
    // 0x25e988: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e988u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e98c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e990: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E990u;
    SET_GPR_U32(ctx, 31, 0x25E998u);
    ctx->pc = 0x25E994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E990u;
    // 0x25e994: 0x24a56458  addiu       $a1, $a1, 0x6458 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E990u, 0x25E998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E998u;
label_25e998:
    // 0x25e998: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e99c: 0x144001a6  bnez        $v0, . + 4 + (0x1A6 << 2)
    ctx->pc = 0x25E99Cu;
    {
        const bool branch_taken_0x25e99c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E99Cu;
        // 0x25e9a0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e99c) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E9A4u;
    // 0x25e9a4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e9a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e9ac: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E9ACu;
    SET_GPR_U32(ctx, 31, 0x25E9B4u);
    ctx->pc = 0x25E9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E9ACu;
    // 0x25e9b0: 0x24a56468  addiu       $a1, $a1, 0x6468 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E9ACu, 0x25E9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E9B4u;
label_25e9b4:
    // 0x25e9b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e9b8: 0x1440019f  bnez        $v0, . + 4 + (0x19F << 2)
    ctx->pc = 0x25E9B8u;
    {
        const bool branch_taken_0x25e9b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E9B8u;
        // 0x25e9bc: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e9b8) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E9C0u;
    // 0x25e9c0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e9c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e9c8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E9C8u;
    SET_GPR_U32(ctx, 31, 0x25E9D0u);
    ctx->pc = 0x25E9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E9C8u;
    // 0x25e9cc: 0x24a56478  addiu       $a1, $a1, 0x6478 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E9C8u, 0x25E9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E9D0u;
label_25e9d0:
    // 0x25e9d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e9d4: 0x14400198  bnez        $v0, . + 4 + (0x198 << 2)
    ctx->pc = 0x25E9D4u;
    {
        const bool branch_taken_0x25e9d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E9D4u;
        // 0x25e9d8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e9d4) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E9DCu;
    // 0x25e9dc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e9e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e9e4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25E9E4u;
    SET_GPR_U32(ctx, 31, 0x25E9ECu);
    ctx->pc = 0x25E9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E9E4u;
    // 0x25e9e8: 0x24a56488  addiu       $a1, $a1, 0x6488 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25E9E4u, 0x25E9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E9ECu;
label_25e9ec:
    // 0x25e9ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e9f0: 0x14400191  bnez        $v0, . + 4 + (0x191 << 2)
    ctx->pc = 0x25E9F0u;
    {
        const bool branch_taken_0x25e9f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E9F0u;
        // 0x25e9f4: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e9f0) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25E9F8u;
    // 0x25e9f8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25e9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25e9fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ea00: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EA00u;
    SET_GPR_U32(ctx, 31, 0x25EA08u);
    ctx->pc = 0x25EA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EA00u;
    // 0x25ea04: 0x24a56498  addiu       $a1, $a1, 0x6498 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EA00u, 0x25EA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EA08u;
label_25ea08:
    // 0x25ea08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25ea08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ea0c: 0x1440018a  bnez        $v0, . + 4 + (0x18A << 2)
    ctx->pc = 0x25EA0Cu;
    {
        const bool branch_taken_0x25ea0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA0Cu;
        // 0x25ea10: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ea0c) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EA14u;
    // 0x25ea14: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25ea14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25ea18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ea18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ea1c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EA1Cu;
    SET_GPR_U32(ctx, 31, 0x25EA24u);
    ctx->pc = 0x25EA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EA1Cu;
    // 0x25ea20: 0x24a564b0  addiu       $a1, $a1, 0x64B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EA1Cu, 0x25EA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EA24u;
label_25ea24:
    // 0x25ea24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25ea24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ea28: 0x14400183  bnez        $v0, . + 4 + (0x183 << 2)
    ctx->pc = 0x25EA28u;
    {
        const bool branch_taken_0x25ea28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA28u;
        // 0x25ea2c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ea28) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EA30u;
    // 0x25ea30: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25ea30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25ea34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ea34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ea38: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EA38u;
    SET_GPR_U32(ctx, 31, 0x25EA40u);
    ctx->pc = 0x25EA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EA38u;
    // 0x25ea3c: 0x24a564c8  addiu       $a1, $a1, 0x64C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EA38u, 0x25EA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EA40u;
label_25ea40:
    // 0x25ea40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25ea40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ea44: 0x1440017c  bnez        $v0, . + 4 + (0x17C << 2)
    ctx->pc = 0x25EA44u;
    {
        const bool branch_taken_0x25ea44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA44u;
        // 0x25ea48: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ea44) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EA4Cu;
    // 0x25ea4c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25ea4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25ea50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ea50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ea54: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EA54u;
    SET_GPR_U32(ctx, 31, 0x25EA5Cu);
    ctx->pc = 0x25EA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EA54u;
    // 0x25ea58: 0x24a564e0  addiu       $a1, $a1, 0x64E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EA54u, 0x25EA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EA5Cu;
label_25ea5c:
    // 0x25ea5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25ea5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ea60: 0x14400175  bnez        $v0, . + 4 + (0x175 << 2)
    ctx->pc = 0x25EA60u;
    {
        const bool branch_taken_0x25ea60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA60u;
        // 0x25ea64: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ea60) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EA68u;
    // 0x25ea68: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25ea68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25ea6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ea6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ea70: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EA70u;
    SET_GPR_U32(ctx, 31, 0x25EA78u);
    ctx->pc = 0x25EA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EA70u;
    // 0x25ea74: 0x24a564f0  addiu       $a1, $a1, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EA70u, 0x25EA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EA78u;
label_25ea78:
    // 0x25ea78: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25ea78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ea7c: 0x1440016e  bnez        $v0, . + 4 + (0x16E << 2)
    ctx->pc = 0x25EA7Cu;
    {
        const bool branch_taken_0x25ea7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA7Cu;
        // 0x25ea80: 0x24020054  addiu       $v0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ea7c) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EA84u;
    // 0x25ea84: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25ea84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25ea88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ea88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ea8c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EA8Cu;
    SET_GPR_U32(ctx, 31, 0x25EA94u);
    ctx->pc = 0x25EA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EA8Cu;
    // 0x25ea90: 0x24a56500  addiu       $a1, $a1, 0x6500 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EA8Cu, 0x25EA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EA94u;
label_25ea94:
    // 0x25ea94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25ea94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ea98: 0x14400167  bnez        $v0, . + 4 + (0x167 << 2)
    ctx->pc = 0x25EA98u;
    {
        const bool branch_taken_0x25ea98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA98u;
        // 0x25ea9c: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ea98) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EAA0u;
    // 0x25eaa0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25eaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25eaa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25eaa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eaa8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EAA8u;
    SET_GPR_U32(ctx, 31, 0x25EAB0u);
    ctx->pc = 0x25EAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EAA8u;
    // 0x25eaac: 0x24a56510  addiu       $a1, $a1, 0x6510 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EAA8u, 0x25EAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EAB0u;
label_25eab0:
    // 0x25eab0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25eab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25eab4: 0x14400160  bnez        $v0, . + 4 + (0x160 << 2)
    ctx->pc = 0x25EAB4u;
    {
        const bool branch_taken_0x25eab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EAB4u;
        // 0x25eab8: 0x24020026  addiu       $v0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eab4) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EABCu;
    // 0x25eabc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25eabcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25eac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25eac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eac4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EAC4u;
    SET_GPR_U32(ctx, 31, 0x25EACCu);
    ctx->pc = 0x25EAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EAC4u;
    // 0x25eac8: 0x24a56520  addiu       $a1, $a1, 0x6520 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EAC4u, 0x25EACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EACCu;
label_25eacc:
    // 0x25eacc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25eaccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ead0: 0x14400159  bnez        $v0, . + 4 + (0x159 << 2)
    ctx->pc = 0x25EAD0u;
    {
        const bool branch_taken_0x25ead0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EAD0u;
        // 0x25ead4: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ead0) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EAD8u;
    // 0x25ead8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25ead8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25eadc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25eadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eae0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EAE0u;
    SET_GPR_U32(ctx, 31, 0x25EAE8u);
    ctx->pc = 0x25EAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EAE0u;
    // 0x25eae4: 0x24a56528  addiu       $a1, $a1, 0x6528 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EAE0u, 0x25EAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EAE8u;
label_25eae8:
    // 0x25eae8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25eae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25eaec: 0x14400152  bnez        $v0, . + 4 + (0x152 << 2)
    ctx->pc = 0x25EAECu;
    {
        const bool branch_taken_0x25eaec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EAECu;
        // 0x25eaf0: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eaec) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EAF4u;
    // 0x25eaf4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25eaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25eaf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25eaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eafc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EAFCu;
    SET_GPR_U32(ctx, 31, 0x25EB04u);
    ctx->pc = 0x25EB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EAFCu;
    // 0x25eb00: 0x24a56530  addiu       $a1, $a1, 0x6530 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EAFCu, 0x25EB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EB04u;
label_25eb04:
    // 0x25eb04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25eb04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25eb08: 0x1440014b  bnez        $v0, . + 4 + (0x14B << 2)
    ctx->pc = 0x25EB08u;
    {
        const bool branch_taken_0x25eb08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB08u;
        // 0x25eb0c: 0x2402005e  addiu       $v0, $zero, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eb08) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EB10u;
    // 0x25eb10: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25eb10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25eb14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25eb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eb18: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EB18u;
    SET_GPR_U32(ctx, 31, 0x25EB20u);
    ctx->pc = 0x25EB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EB18u;
    // 0x25eb1c: 0x24a56540  addiu       $a1, $a1, 0x6540 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EB18u, 0x25EB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EB20u;
label_25eb20:
    // 0x25eb20: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25eb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25eb24: 0x14400144  bnez        $v0, . + 4 + (0x144 << 2)
    ctx->pc = 0x25EB24u;
    {
        const bool branch_taken_0x25eb24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB24u;
        // 0x25eb28: 0x24020061  addiu       $v0, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eb24) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EB2Cu;
    // 0x25eb2c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25eb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25eb30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25eb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eb34: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EB34u;
    SET_GPR_U32(ctx, 31, 0x25EB3Cu);
    ctx->pc = 0x25EB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EB34u;
    // 0x25eb38: 0x24a56550  addiu       $a1, $a1, 0x6550 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EB34u, 0x25EB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EB3Cu;
label_25eb3c:
    // 0x25eb3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25eb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25eb40: 0x1440013d  bnez        $v0, . + 4 + (0x13D << 2)
    ctx->pc = 0x25EB40u;
    {
        const bool branch_taken_0x25eb40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB40u;
        // 0x25eb44: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eb40) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EB48u;
    // 0x25eb48: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25eb48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25eb4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25eb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eb50: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EB50u;
    SET_GPR_U32(ctx, 31, 0x25EB58u);
    ctx->pc = 0x25EB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EB50u;
    // 0x25eb54: 0x24a56560  addiu       $a1, $a1, 0x6560 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EB50u, 0x25EB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EB58u;
label_25eb58:
    // 0x25eb58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25eb58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25eb5c: 0x14400136  bnez        $v0, . + 4 + (0x136 << 2)
    ctx->pc = 0x25EB5Cu;
    {
        const bool branch_taken_0x25eb5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB5Cu;
        // 0x25eb60: 0x24020062  addiu       $v0, $zero, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eb5c) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EB64u;
    // 0x25eb64: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25eb64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25eb68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25eb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eb6c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EB6Cu;
    SET_GPR_U32(ctx, 31, 0x25EB74u);
    ctx->pc = 0x25EB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EB6Cu;
    // 0x25eb70: 0x24a56570  addiu       $a1, $a1, 0x6570 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EB6Cu, 0x25EB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EB74u;
label_25eb74:
    // 0x25eb74: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25eb74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25eb78: 0x1440012f  bnez        $v0, . + 4 + (0x12F << 2)
    ctx->pc = 0x25EB78u;
    {
        const bool branch_taken_0x25eb78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB78u;
        // 0x25eb7c: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eb78) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EB80u;
    // 0x25eb80: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25eb80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25eb84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25eb84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eb88: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EB88u;
    SET_GPR_U32(ctx, 31, 0x25EB90u);
    ctx->pc = 0x25EB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EB88u;
    // 0x25eb8c: 0x24a56580  addiu       $a1, $a1, 0x6580 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EB88u, 0x25EB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EB90u;
label_25eb90:
    // 0x25eb90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25eb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25eb94: 0x14400128  bnez        $v0, . + 4 + (0x128 << 2)
    ctx->pc = 0x25EB94u;
    {
        const bool branch_taken_0x25eb94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB94u;
        // 0x25eb98: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eb94) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EB9Cu;
    // 0x25eb9c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25eb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25eba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25eba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eba4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EBA4u;
    SET_GPR_U32(ctx, 31, 0x25EBACu);
    ctx->pc = 0x25EBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EBA4u;
    // 0x25eba8: 0x24a56590  addiu       $a1, $a1, 0x6590 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EBA4u, 0x25EBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EBACu;
label_25ebac:
    // 0x25ebac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25ebacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ebb0: 0x14400121  bnez        $v0, . + 4 + (0x121 << 2)
    ctx->pc = 0x25EBB0u;
    {
        const bool branch_taken_0x25ebb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EBB0u;
        // 0x25ebb4: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ebb0) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EBB8u;
    // 0x25ebb8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25ebb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25ebbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ebbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ebc0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EBC0u;
    SET_GPR_U32(ctx, 31, 0x25EBC8u);
    ctx->pc = 0x25EBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EBC0u;
    // 0x25ebc4: 0x24a565a0  addiu       $a1, $a1, 0x65A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EBC0u, 0x25EBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EBC8u;
label_25ebc8:
    // 0x25ebc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25ebc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ebcc: 0x1440011a  bnez        $v0, . + 4 + (0x11A << 2)
    ctx->pc = 0x25EBCCu;
    {
        const bool branch_taken_0x25ebcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EBCCu;
        // 0x25ebd0: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ebcc) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EBD4u;
    // 0x25ebd4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25ebd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25ebd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ebd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ebdc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EBDCu;
    SET_GPR_U32(ctx, 31, 0x25EBE4u);
    ctx->pc = 0x25EBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EBDCu;
    // 0x25ebe0: 0x24a565b0  addiu       $a1, $a1, 0x65B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EBDCu, 0x25EBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EBE4u;
label_25ebe4:
    // 0x25ebe4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25ebe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ebe8: 0x14400113  bnez        $v0, . + 4 + (0x113 << 2)
    ctx->pc = 0x25EBE8u;
    {
        const bool branch_taken_0x25ebe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EBE8u;
        // 0x25ebec: 0x24020067  addiu       $v0, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ebe8) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EBF0u;
    // 0x25ebf0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25ebf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25ebf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ebf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ebf8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EBF8u;
    SET_GPR_U32(ctx, 31, 0x25EC00u);
    ctx->pc = 0x25EBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EBF8u;
    // 0x25ebfc: 0x24a565b8  addiu       $a1, $a1, 0x65B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EBF8u, 0x25EC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EC00u;
label_25ec00:
    // 0x25ec00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25ec00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ec04: 0x1440010c  bnez        $v0, . + 4 + (0x10C << 2)
    ctx->pc = 0x25EC04u;
    {
        const bool branch_taken_0x25ec04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EC04u;
        // 0x25ec08: 0x24020055  addiu       $v0, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ec04) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EC0Cu;
    // 0x25ec0c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25ec0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25ec10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ec10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ec14: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EC14u;
    SET_GPR_U32(ctx, 31, 0x25EC1Cu);
    ctx->pc = 0x25EC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EC14u;
    // 0x25ec18: 0x24a565c0  addiu       $a1, $a1, 0x65C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EC14u, 0x25EC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EC1Cu;
label_25ec1c:
    // 0x25ec1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25ec1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ec20: 0x14400105  bnez        $v0, . + 4 + (0x105 << 2)
    ctx->pc = 0x25EC20u;
    {
        const bool branch_taken_0x25ec20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EC20u;
        // 0x25ec24: 0x2402006f  addiu       $v0, $zero, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ec20) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EC28u;
    // 0x25ec28: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25ec28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25ec2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ec2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ec30: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EC30u;
    SET_GPR_U32(ctx, 31, 0x25EC38u);
    ctx->pc = 0x25EC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EC30u;
    // 0x25ec34: 0x24a565d0  addiu       $a1, $a1, 0x65D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EC30u, 0x25EC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EC38u;
label_25ec38:
    // 0x25ec38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25ec38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ec3c: 0x144000fe  bnez        $v0, . + 4 + (0xFE << 2)
    ctx->pc = 0x25EC3Cu;
    {
        const bool branch_taken_0x25ec3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EC3Cu;
        // 0x25ec40: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ec3c) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EC44u;
    // 0x25ec44: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25ec44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25ec48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ec48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ec4c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EC4Cu;
    SET_GPR_U32(ctx, 31, 0x25EC54u);
    ctx->pc = 0x25EC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EC4Cu;
    // 0x25ec50: 0x24a565e0  addiu       $a1, $a1, 0x65E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EC4Cu, 0x25EC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EC54u;
label_25ec54:
    // 0x25ec54: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25ec54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ec58: 0x144000f7  bnez        $v0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x25EC58u;
    {
        const bool branch_taken_0x25ec58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EC58u;
        // 0x25ec5c: 0x24020068  addiu       $v0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ec58) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EC60u;
    // 0x25ec60: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25ec60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25ec64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ec64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ec68: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EC68u;
    SET_GPR_U32(ctx, 31, 0x25EC70u);
    ctx->pc = 0x25EC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EC68u;
    // 0x25ec6c: 0x24a565f0  addiu       $a1, $a1, 0x65F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EC68u, 0x25EC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EC70u;
label_25ec70:
    // 0x25ec70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25ec70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ec74: 0x144000f0  bnez        $v0, . + 4 + (0xF0 << 2)
    ctx->pc = 0x25EC74u;
    {
        const bool branch_taken_0x25ec74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EC74u;
        // 0x25ec78: 0x24020069  addiu       $v0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ec74) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EC7Cu;
    // 0x25ec7c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25ec7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25ec80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ec80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ec84: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EC84u;
    SET_GPR_U32(ctx, 31, 0x25EC8Cu);
    ctx->pc = 0x25EC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EC84u;
    // 0x25ec88: 0x24a56600  addiu       $a1, $a1, 0x6600 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EC84u, 0x25EC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EC8Cu;
label_25ec8c:
    // 0x25ec8c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25ec8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ec90: 0x144000e9  bnez        $v0, . + 4 + (0xE9 << 2)
    ctx->pc = 0x25EC90u;
    {
        const bool branch_taken_0x25ec90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EC90u;
        // 0x25ec94: 0x2402006a  addiu       $v0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ec90) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EC98u;
    // 0x25ec98: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25ec98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25ec9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ec9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eca0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25ECA0u;
    SET_GPR_U32(ctx, 31, 0x25ECA8u);
    ctx->pc = 0x25ECA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ECA0u;
    // 0x25eca4: 0x24a56610  addiu       $a1, $a1, 0x6610 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25ECA0u, 0x25ECA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ECA8u;
label_25eca8:
    // 0x25eca8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25eca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ecac: 0x144000e2  bnez        $v0, . + 4 + (0xE2 << 2)
    ctx->pc = 0x25ECACu;
    {
        const bool branch_taken_0x25ecac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25ECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ECACu;
        // 0x25ecb0: 0x2402006b  addiu       $v0, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ecac) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25ECB4u;
    // 0x25ecb4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25ecb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25ecb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ecb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ecbc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25ECBCu;
    SET_GPR_U32(ctx, 31, 0x25ECC4u);
    ctx->pc = 0x25ECC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ECBCu;
    // 0x25ecc0: 0x24a56620  addiu       $a1, $a1, 0x6620 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25ECBCu, 0x25ECC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ECC4u;
label_25ecc4:
    // 0x25ecc4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25ecc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ecc8: 0x144000db  bnez        $v0, . + 4 + (0xDB << 2)
    ctx->pc = 0x25ECC8u;
    {
        const bool branch_taken_0x25ecc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25ECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ECC8u;
        // 0x25eccc: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ecc8) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25ECD0u;
    // 0x25ecd0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25ecd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25ecd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ecd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ecd8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25ECD8u;
    SET_GPR_U32(ctx, 31, 0x25ECE0u);
    ctx->pc = 0x25ECDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ECD8u;
    // 0x25ecdc: 0x24a56630  addiu       $a1, $a1, 0x6630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25ECD8u, 0x25ECE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ECE0u;
label_25ece0:
    // 0x25ece0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25ece0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ece4: 0x144000d4  bnez        $v0, . + 4 + (0xD4 << 2)
    ctx->pc = 0x25ECE4u;
    {
        const bool branch_taken_0x25ece4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25ECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ECE4u;
        // 0x25ece8: 0x2402006d  addiu       $v0, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ece4) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25ECECu;
    // 0x25ecec: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25ececu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25ecf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ecf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ecf4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25ECF4u;
    SET_GPR_U32(ctx, 31, 0x25ECFCu);
    ctx->pc = 0x25ECF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ECF4u;
    // 0x25ecf8: 0x24a56640  addiu       $a1, $a1, 0x6640 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25ECF4u, 0x25ECFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ECFCu;
label_25ecfc:
    // 0x25ecfc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25ecfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ed00: 0x144000cd  bnez        $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x25ED00u;
    {
        const bool branch_taken_0x25ed00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25ED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED00u;
        // 0x25ed04: 0x2402006e  addiu       $v0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ed00) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25ED08u;
    // 0x25ed08: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25ed08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25ed0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ed0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ed10: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25ED10u;
    SET_GPR_U32(ctx, 31, 0x25ED18u);
    ctx->pc = 0x25ED14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ED10u;
    // 0x25ed14: 0x24a56658  addiu       $a1, $a1, 0x6658 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25ED10u, 0x25ED18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ED18u;
label_25ed18:
    // 0x25ed18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25ed18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ed1c: 0x144000c6  bnez        $v0, . + 4 + (0xC6 << 2)
    ctx->pc = 0x25ED1Cu;
    {
        const bool branch_taken_0x25ed1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25ED20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED1Cu;
        // 0x25ed20: 0x24020071  addiu       $v0, $zero, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ed1c) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25ED24u;
    // 0x25ed24: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25ed24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25ed28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ed28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ed2c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25ED2Cu;
    SET_GPR_U32(ctx, 31, 0x25ED34u);
    ctx->pc = 0x25ED30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ED2Cu;
    // 0x25ed30: 0x24a56668  addiu       $a1, $a1, 0x6668 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25ED2Cu, 0x25ED34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ED34u;
label_25ed34:
    // 0x25ed34: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25ed34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ed38: 0x144000bf  bnez        $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x25ED38u;
    {
        const bool branch_taken_0x25ed38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25ED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED38u;
        // 0x25ed3c: 0x24020073  addiu       $v0, $zero, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ed38) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25ED40u;
    // 0x25ed40: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25ed40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25ed44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ed44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ed48: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25ED48u;
    SET_GPR_U32(ctx, 31, 0x25ED50u);
    ctx->pc = 0x25ED4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ED48u;
    // 0x25ed4c: 0x24a56678  addiu       $a1, $a1, 0x6678 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25ED48u, 0x25ED50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ED50u;
label_25ed50:
    // 0x25ed50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25ed50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ed54: 0x144000b8  bnez        $v0, . + 4 + (0xB8 << 2)
    ctx->pc = 0x25ED54u;
    {
        const bool branch_taken_0x25ed54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED54u;
        // 0x25ed58: 0x24020074  addiu       $v0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ed54) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25ED5Cu;
    // 0x25ed5c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25ed5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25ed60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ed60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ed64: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25ED64u;
    SET_GPR_U32(ctx, 31, 0x25ED6Cu);
    ctx->pc = 0x25ED68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ED64u;
    // 0x25ed68: 0x24a56688  addiu       $a1, $a1, 0x6688 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25ED64u, 0x25ED6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ED6Cu;
label_25ed6c:
    // 0x25ed6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25ed6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ed70: 0x144000b1  bnez        $v0, . + 4 + (0xB1 << 2)
    ctx->pc = 0x25ED70u;
    {
        const bool branch_taken_0x25ed70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED70u;
        // 0x25ed74: 0x24020075  addiu       $v0, $zero, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ed70) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25ED78u;
    // 0x25ed78: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25ed78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25ed7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ed7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ed80: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25ED80u;
    SET_GPR_U32(ctx, 31, 0x25ED88u);
    ctx->pc = 0x25ED84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ED80u;
    // 0x25ed84: 0x24a56690  addiu       $a1, $a1, 0x6690 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25ED80u, 0x25ED88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ED88u;
label_25ed88:
    // 0x25ed88: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25ed88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ed8c: 0x144000aa  bnez        $v0, . + 4 + (0xAA << 2)
    ctx->pc = 0x25ED8Cu;
    {
        const bool branch_taken_0x25ed8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25ED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED8Cu;
        // 0x25ed90: 0x24020076  addiu       $v0, $zero, 0x76 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ed8c) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25ED94u;
    // 0x25ed94: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25ed94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25ed98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ed98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ed9c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25ED9Cu;
    SET_GPR_U32(ctx, 31, 0x25EDA4u);
    ctx->pc = 0x25EDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ED9Cu;
    // 0x25eda0: 0x24a566a0  addiu       $a1, $a1, 0x66A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25ED9Cu, 0x25EDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EDA4u;
label_25eda4:
    // 0x25eda4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25eda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25eda8: 0x144000a3  bnez        $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x25EDA8u;
    {
        const bool branch_taken_0x25eda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EDA8u;
        // 0x25edac: 0x24020077  addiu       $v0, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eda8) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EDB0u;
    // 0x25edb0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25edb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25edb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25edb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25edb8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EDB8u;
    SET_GPR_U32(ctx, 31, 0x25EDC0u);
    ctx->pc = 0x25EDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EDB8u;
    // 0x25edbc: 0x24a566b0  addiu       $a1, $a1, 0x66B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EDB8u, 0x25EDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EDC0u;
label_25edc0:
    // 0x25edc0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25edc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25edc4: 0x1440009c  bnez        $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x25EDC4u;
    {
        const bool branch_taken_0x25edc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EDC4u;
        // 0x25edc8: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25edc4) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EDCCu;
    // 0x25edcc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25edccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25edd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25edd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25edd4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EDD4u;
    SET_GPR_U32(ctx, 31, 0x25EDDCu);
    ctx->pc = 0x25EDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EDD4u;
    // 0x25edd8: 0x24a566c0  addiu       $a1, $a1, 0x66C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EDD4u, 0x25EDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EDDCu;
label_25eddc:
    // 0x25eddc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25eddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ede0: 0x14400095  bnez        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x25EDE0u;
    {
        const bool branch_taken_0x25ede0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EDE0u;
        // 0x25ede4: 0x24020079  addiu       $v0, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ede0) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EDE8u;
    // 0x25ede8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25ede8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25edec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25edecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25edf0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EDF0u;
    SET_GPR_U32(ctx, 31, 0x25EDF8u);
    ctx->pc = 0x25EDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EDF0u;
    // 0x25edf4: 0x24a566d8  addiu       $a1, $a1, 0x66D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EDF0u, 0x25EDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EDF8u;
label_25edf8:
    // 0x25edf8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25edf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25edfc: 0x1440008e  bnez        $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x25EDFCu;
    {
        const bool branch_taken_0x25edfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EDFCu;
        // 0x25ee00: 0x2402007a  addiu       $v0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25edfc) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EE04u;
    // 0x25ee04: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25ee04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25ee08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ee08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ee0c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EE0Cu;
    SET_GPR_U32(ctx, 31, 0x25EE14u);
    ctx->pc = 0x25EE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EE0Cu;
    // 0x25ee10: 0x24a566e8  addiu       $a1, $a1, 0x66E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EE0Cu, 0x25EE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EE14u;
label_25ee14:
    // 0x25ee14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25ee14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ee18: 0x14400087  bnez        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x25EE18u;
    {
        const bool branch_taken_0x25ee18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EE18u;
        // 0x25ee1c: 0x2402007b  addiu       $v0, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ee18) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EE20u;
    // 0x25ee20: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25ee20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25ee24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ee24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ee28: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EE28u;
    SET_GPR_U32(ctx, 31, 0x25EE30u);
    ctx->pc = 0x25EE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EE28u;
    // 0x25ee2c: 0x24a566f0  addiu       $a1, $a1, 0x66F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EE28u, 0x25EE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EE30u;
label_25ee30:
    // 0x25ee30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25ee30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ee34: 0x14400080  bnez        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x25EE34u;
    {
        const bool branch_taken_0x25ee34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EE34u;
        // 0x25ee38: 0x2402007c  addiu       $v0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ee34) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EE3Cu;
    // 0x25ee3c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25ee3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25ee40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ee40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ee44: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EE44u;
    SET_GPR_U32(ctx, 31, 0x25EE4Cu);
    ctx->pc = 0x25EE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EE44u;
    // 0x25ee48: 0x24a56708  addiu       $a1, $a1, 0x6708 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EE44u, 0x25EE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EE4Cu;
label_25ee4c:
    // 0x25ee4c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25ee4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ee50: 0x14400079  bnez        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x25EE50u;
    {
        const bool branch_taken_0x25ee50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EE50u;
        // 0x25ee54: 0x2402007d  addiu       $v0, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ee50) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EE58u;
    // 0x25ee58: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25ee58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25ee5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ee5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ee60: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EE60u;
    SET_GPR_U32(ctx, 31, 0x25EE68u);
    ctx->pc = 0x25EE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EE60u;
    // 0x25ee64: 0x24a56718  addiu       $a1, $a1, 0x6718 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EE60u, 0x25EE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EE68u;
label_25ee68:
    // 0x25ee68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25ee68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ee6c: 0x14400072  bnez        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x25EE6Cu;
    {
        const bool branch_taken_0x25ee6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EE6Cu;
        // 0x25ee70: 0x2402007e  addiu       $v0, $zero, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ee6c) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EE74u;
    // 0x25ee74: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25ee74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25ee78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ee78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ee7c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EE7Cu;
    SET_GPR_U32(ctx, 31, 0x25EE84u);
    ctx->pc = 0x25EE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EE7Cu;
    // 0x25ee80: 0x24a56728  addiu       $a1, $a1, 0x6728 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EE7Cu, 0x25EE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EE84u;
label_25ee84:
    // 0x25ee84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25ee84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ee88: 0x1440006b  bnez        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x25EE88u;
    {
        const bool branch_taken_0x25ee88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EE88u;
        // 0x25ee8c: 0x2402008c  addiu       $v0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ee88) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EE90u;
    // 0x25ee90: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25ee90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25ee94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ee94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ee98: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EE98u;
    SET_GPR_U32(ctx, 31, 0x25EEA0u);
    ctx->pc = 0x25EE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EE98u;
    // 0x25ee9c: 0x24a56738  addiu       $a1, $a1, 0x6738 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EE98u, 0x25EEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EEA0u;
label_25eea0:
    // 0x25eea0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25eea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25eea4: 0x14400064  bnez        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x25EEA4u;
    {
        const bool branch_taken_0x25eea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EEA4u;
        // 0x25eea8: 0x2402008e  addiu       $v0, $zero, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eea4) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EEACu;
    // 0x25eeac: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25eeacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25eeb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25eeb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eeb4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EEB4u;
    SET_GPR_U32(ctx, 31, 0x25EEBCu);
    ctx->pc = 0x25EEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EEB4u;
    // 0x25eeb8: 0x24a56748  addiu       $a1, $a1, 0x6748 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EEB4u, 0x25EEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EEBCu;
label_25eebc:
    // 0x25eebc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25eebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25eec0: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x25EEC0u;
    {
        const bool branch_taken_0x25eec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EEC0u;
        // 0x25eec4: 0x24020081  addiu       $v0, $zero, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eec0) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EEC8u;
    // 0x25eec8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25eec8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25eecc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25eeccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eed0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EED0u;
    SET_GPR_U32(ctx, 31, 0x25EED8u);
    ctx->pc = 0x25EED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EED0u;
    // 0x25eed4: 0x24a56758  addiu       $a1, $a1, 0x6758 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EED0u, 0x25EED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EED8u;
label_25eed8:
    // 0x25eed8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25eed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25eedc: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x25EEDCu;
    {
        const bool branch_taken_0x25eedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EEDCu;
        // 0x25eee0: 0x24020082  addiu       $v0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eedc) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EEE4u;
    // 0x25eee4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25eee4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25eee8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25eee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eeec: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EEECu;
    SET_GPR_U32(ctx, 31, 0x25EEF4u);
    ctx->pc = 0x25EEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EEECu;
    // 0x25eef0: 0x24a56770  addiu       $a1, $a1, 0x6770 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EEECu, 0x25EEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EEF4u;
label_25eef4:
    // 0x25eef4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25eef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25eef8: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x25EEF8u;
    {
        const bool branch_taken_0x25eef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EEF8u;
        // 0x25eefc: 0x2402008d  addiu       $v0, $zero, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eef8) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EF00u;
    // 0x25ef00: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25ef00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25ef04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ef04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ef08: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EF08u;
    SET_GPR_U32(ctx, 31, 0x25EF10u);
    ctx->pc = 0x25EF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EF08u;
    // 0x25ef0c: 0x24a56778  addiu       $a1, $a1, 0x6778 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EF08u, 0x25EF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EF10u;
label_25ef10:
    // 0x25ef10: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25ef10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ef14: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x25EF14u;
    {
        const bool branch_taken_0x25ef14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF14u;
        // 0x25ef18: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ef14) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EF1Cu;
    // 0x25ef1c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25ef1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25ef20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ef20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ef24: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EF24u;
    SET_GPR_U32(ctx, 31, 0x25EF2Cu);
    ctx->pc = 0x25EF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EF24u;
    // 0x25ef28: 0x24a56788  addiu       $a1, $a1, 0x6788 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EF24u, 0x25EF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EF2Cu;
label_25ef2c:
    // 0x25ef2c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25ef2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ef30: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x25EF30u;
    {
        const bool branch_taken_0x25ef30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF30u;
        // 0x25ef34: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ef30) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EF38u;
    // 0x25ef38: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25ef38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25ef3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ef3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ef40: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EF40u;
    SET_GPR_U32(ctx, 31, 0x25EF48u);
    ctx->pc = 0x25EF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EF40u;
    // 0x25ef44: 0x24a56798  addiu       $a1, $a1, 0x6798 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EF40u, 0x25EF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EF48u;
label_25ef48:
    // 0x25ef48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25ef48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ef4c: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x25EF4Cu;
    {
        const bool branch_taken_0x25ef4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF4Cu;
        // 0x25ef50: 0x24020083  addiu       $v0, $zero, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ef4c) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EF54u;
    // 0x25ef54: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25ef54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25ef58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ef58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ef5c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EF5Cu;
    SET_GPR_U32(ctx, 31, 0x25EF64u);
    ctx->pc = 0x25EF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EF5Cu;
    // 0x25ef60: 0x24a567a8  addiu       $a1, $a1, 0x67A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EF5Cu, 0x25EF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EF64u;
label_25ef64:
    // 0x25ef64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25ef64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ef68: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x25EF68u;
    {
        const bool branch_taken_0x25ef68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF68u;
        // 0x25ef6c: 0x24020084  addiu       $v0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ef68) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EF70u;
    // 0x25ef70: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25ef70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25ef74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ef74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ef78: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EF78u;
    SET_GPR_U32(ctx, 31, 0x25EF80u);
    ctx->pc = 0x25EF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EF78u;
    // 0x25ef7c: 0x24a567c0  addiu       $a1, $a1, 0x67C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EF78u, 0x25EF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EF80u;
label_25ef80:
    // 0x25ef80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25ef80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ef84: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x25EF84u;
    {
        const bool branch_taken_0x25ef84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EF84u;
        // 0x25ef88: 0x24020085  addiu       $v0, $zero, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ef84) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EF8Cu;
    // 0x25ef8c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25ef8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25ef90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ef90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ef94: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EF94u;
    SET_GPR_U32(ctx, 31, 0x25EF9Cu);
    ctx->pc = 0x25EF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EF94u;
    // 0x25ef98: 0x24a567d0  addiu       $a1, $a1, 0x67D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EF94u, 0x25EF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EF9Cu;
label_25ef9c:
    // 0x25ef9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25ef9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25efa0: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x25EFA0u;
    {
        const bool branch_taken_0x25efa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EFA0u;
        // 0x25efa4: 0x24020086  addiu       $v0, $zero, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25efa0) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EFA8u;
    // 0x25efa8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25efa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25efac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25efacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25efb0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EFB0u;
    SET_GPR_U32(ctx, 31, 0x25EFB8u);
    ctx->pc = 0x25EFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EFB0u;
    // 0x25efb4: 0x24a567e0  addiu       $a1, $a1, 0x67E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EFB0u, 0x25EFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EFB8u;
label_25efb8:
    // 0x25efb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25efb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25efbc: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x25EFBCu;
    {
        const bool branch_taken_0x25efbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EFBCu;
        // 0x25efc0: 0x24020087  addiu       $v0, $zero, 0x87 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25efbc) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EFC4u;
    // 0x25efc4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25efc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25efc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25efc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25efcc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EFCCu;
    SET_GPR_U32(ctx, 31, 0x25EFD4u);
    ctx->pc = 0x25EFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EFCCu;
    // 0x25efd0: 0x24a567f0  addiu       $a1, $a1, 0x67F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EFCCu, 0x25EFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EFD4u;
label_25efd4:
    // 0x25efd4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25efd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25efd8: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x25EFD8u;
    {
        const bool branch_taken_0x25efd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EFD8u;
        // 0x25efdc: 0x24020088  addiu       $v0, $zero, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25efd8) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EFE0u;
    // 0x25efe0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25efe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25efe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25efe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25efe8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25EFE8u;
    SET_GPR_U32(ctx, 31, 0x25EFF0u);
    ctx->pc = 0x25EFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EFE8u;
    // 0x25efec: 0x24a56800  addiu       $a1, $a1, 0x6800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25EFE8u, 0x25EFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EFF0u;
label_25eff0:
    // 0x25eff0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25eff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25eff4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x25EFF4u;
    {
        const bool branch_taken_0x25eff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EFF4u;
        // 0x25eff8: 0x24020089  addiu       $v0, $zero, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eff4) {
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25EFFCu;
    // 0x25effc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25effcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f000: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25f000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f004: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25F004u;
    SET_GPR_U32(ctx, 31, 0x25F00Cu);
    ctx->pc = 0x25F008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F004u;
    // 0x25f008: 0x24a56810  addiu       $a1, $a1, 0x6810 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25F004u, 0x25F00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F00Cu;
label_25f00c:
    // 0x25f00c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25f00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25f010: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x25F010u;
    {
        const bool branch_taken_0x25f010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f010) {
            ctx->pc = 0x25F014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F010u;
            // 0x25f014: 0x2402008a  addiu       $v0, $zero, 0x8A (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F038u;
            goto label_25f038;
        }
    }
    ctx->pc = 0x25F018u;
    // 0x25f018: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25f018u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25f01c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25f01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f020: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x25F020u;
    SET_GPR_U32(ctx, 31, 0x25F028u);
    ctx->pc = 0x25F024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F020u;
    // 0x25f024: 0x24a56820  addiu       $a1, $a1, 0x6820 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x25F020u, 0x25F028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F028u;
label_25f028:
    // 0x25f028: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x25f028u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25f02c: 0x2403008b  addiu       $v1, $zero, 0x8B
    ctx->pc = 0x25f02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
    // 0x25f030: 0x2402008e  addiu       $v0, $zero, 0x8E
    ctx->pc = 0x25f030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x25f034: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x25f034u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_25f038:
    // 0x25f038: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25f038u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f03c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x25f03cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25f040: 0x3e00008  jr          $ra
    ctx->pc = 0x25F040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F040u;
        // 0x25f044: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F048u;
}
