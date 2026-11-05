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

// Function: sub_002282A0
// Address: 0x2282a0 - 0x228568
void sub_002282A0_0x2282a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002282A0_0x2282a0");
#endif

    switch (ctx->pc) {
        case 0x2282a0u: goto label_2282a0;
        case 0x2282a4u: goto label_2282a4;
        case 0x2282a8u: goto label_2282a8;
        case 0x2282acu: goto label_2282ac;
        case 0x2282b0u: goto label_2282b0;
        case 0x2282b4u: goto label_2282b4;
        case 0x2282b8u: goto label_2282b8;
        case 0x2282bcu: goto label_2282bc;
        case 0x2282c0u: goto label_2282c0;
        case 0x2282c4u: goto label_2282c4;
        case 0x2282c8u: goto label_2282c8;
        case 0x2282ccu: goto label_2282cc;
        case 0x2282d0u: goto label_2282d0;
        case 0x2282d4u: goto label_2282d4;
        case 0x2282d8u: goto label_2282d8;
        case 0x2282dcu: goto label_2282dc;
        case 0x2282e0u: goto label_2282e0;
        case 0x2282e4u: goto label_2282e4;
        case 0x2282e8u: goto label_2282e8;
        case 0x2282ecu: goto label_2282ec;
        case 0x2282f0u: goto label_2282f0;
        case 0x2282f4u: goto label_2282f4;
        case 0x2282f8u: goto label_2282f8;
        case 0x2282fcu: goto label_2282fc;
        case 0x228300u: goto label_228300;
        case 0x228304u: goto label_228304;
        case 0x228308u: goto label_228308;
        case 0x22830cu: goto label_22830c;
        case 0x228310u: goto label_228310;
        case 0x228314u: goto label_228314;
        case 0x228318u: goto label_228318;
        case 0x22831cu: goto label_22831c;
        case 0x228320u: goto label_228320;
        case 0x228324u: goto label_228324;
        case 0x228328u: goto label_228328;
        case 0x22832cu: goto label_22832c;
        case 0x228330u: goto label_228330;
        case 0x228334u: goto label_228334;
        case 0x228338u: goto label_228338;
        case 0x22833cu: goto label_22833c;
        case 0x228340u: goto label_228340;
        case 0x228344u: goto label_228344;
        case 0x228348u: goto label_228348;
        case 0x22834cu: goto label_22834c;
        case 0x228350u: goto label_228350;
        case 0x228354u: goto label_228354;
        case 0x228358u: goto label_228358;
        case 0x22835cu: goto label_22835c;
        case 0x228360u: goto label_228360;
        case 0x228364u: goto label_228364;
        case 0x228368u: goto label_228368;
        case 0x22836cu: goto label_22836c;
        case 0x228370u: goto label_228370;
        case 0x228374u: goto label_228374;
        case 0x228378u: goto label_228378;
        case 0x22837cu: goto label_22837c;
        case 0x228380u: goto label_228380;
        case 0x228384u: goto label_228384;
        case 0x228388u: goto label_228388;
        case 0x22838cu: goto label_22838c;
        case 0x228390u: goto label_228390;
        case 0x228394u: goto label_228394;
        case 0x228398u: goto label_228398;
        case 0x22839cu: goto label_22839c;
        case 0x2283a0u: goto label_2283a0;
        case 0x2283a4u: goto label_2283a4;
        case 0x2283a8u: goto label_2283a8;
        case 0x2283acu: goto label_2283ac;
        case 0x2283b0u: goto label_2283b0;
        case 0x2283b4u: goto label_2283b4;
        case 0x2283b8u: goto label_2283b8;
        case 0x2283bcu: goto label_2283bc;
        case 0x2283c0u: goto label_2283c0;
        case 0x2283c4u: goto label_2283c4;
        case 0x2283c8u: goto label_2283c8;
        case 0x2283ccu: goto label_2283cc;
        case 0x2283d0u: goto label_2283d0;
        case 0x2283d4u: goto label_2283d4;
        case 0x2283d8u: goto label_2283d8;
        case 0x2283dcu: goto label_2283dc;
        case 0x2283e0u: goto label_2283e0;
        case 0x2283e4u: goto label_2283e4;
        case 0x2283e8u: goto label_2283e8;
        case 0x2283ecu: goto label_2283ec;
        case 0x2283f0u: goto label_2283f0;
        case 0x2283f4u: goto label_2283f4;
        case 0x2283f8u: goto label_2283f8;
        case 0x2283fcu: goto label_2283fc;
        case 0x228400u: goto label_228400;
        case 0x228404u: goto label_228404;
        case 0x228408u: goto label_228408;
        case 0x22840cu: goto label_22840c;
        case 0x228410u: goto label_228410;
        case 0x228414u: goto label_228414;
        case 0x228418u: goto label_228418;
        case 0x22841cu: goto label_22841c;
        case 0x228420u: goto label_228420;
        case 0x228424u: goto label_228424;
        case 0x228428u: goto label_228428;
        case 0x22842cu: goto label_22842c;
        case 0x228430u: goto label_228430;
        case 0x228434u: goto label_228434;
        case 0x228438u: goto label_228438;
        case 0x22843cu: goto label_22843c;
        case 0x228440u: goto label_228440;
        case 0x228444u: goto label_228444;
        case 0x228448u: goto label_228448;
        case 0x22844cu: goto label_22844c;
        case 0x228450u: goto label_228450;
        case 0x228454u: goto label_228454;
        case 0x228458u: goto label_228458;
        case 0x22845cu: goto label_22845c;
        case 0x228460u: goto label_228460;
        case 0x228464u: goto label_228464;
        case 0x228468u: goto label_228468;
        case 0x22846cu: goto label_22846c;
        case 0x228470u: goto label_228470;
        case 0x228474u: goto label_228474;
        case 0x228478u: goto label_228478;
        case 0x22847cu: goto label_22847c;
        case 0x228480u: goto label_228480;
        case 0x228484u: goto label_228484;
        case 0x228488u: goto label_228488;
        case 0x22848cu: goto label_22848c;
        case 0x228490u: goto label_228490;
        case 0x228494u: goto label_228494;
        case 0x228498u: goto label_228498;
        case 0x22849cu: goto label_22849c;
        case 0x2284a0u: goto label_2284a0;
        case 0x2284a4u: goto label_2284a4;
        case 0x2284a8u: goto label_2284a8;
        case 0x2284acu: goto label_2284ac;
        case 0x2284b0u: goto label_2284b0;
        case 0x2284b4u: goto label_2284b4;
        case 0x2284b8u: goto label_2284b8;
        case 0x2284bcu: goto label_2284bc;
        case 0x2284c0u: goto label_2284c0;
        case 0x2284c4u: goto label_2284c4;
        case 0x2284c8u: goto label_2284c8;
        case 0x2284ccu: goto label_2284cc;
        case 0x2284d0u: goto label_2284d0;
        case 0x2284d4u: goto label_2284d4;
        case 0x2284d8u: goto label_2284d8;
        case 0x2284dcu: goto label_2284dc;
        case 0x2284e0u: goto label_2284e0;
        case 0x2284e4u: goto label_2284e4;
        case 0x2284e8u: goto label_2284e8;
        case 0x2284ecu: goto label_2284ec;
        case 0x2284f0u: goto label_2284f0;
        case 0x2284f4u: goto label_2284f4;
        case 0x2284f8u: goto label_2284f8;
        case 0x2284fcu: goto label_2284fc;
        case 0x228500u: goto label_228500;
        case 0x228504u: goto label_228504;
        case 0x228508u: goto label_228508;
        case 0x22850cu: goto label_22850c;
        case 0x228510u: goto label_228510;
        case 0x228514u: goto label_228514;
        case 0x228518u: goto label_228518;
        case 0x22851cu: goto label_22851c;
        case 0x228520u: goto label_228520;
        case 0x228524u: goto label_228524;
        case 0x228528u: goto label_228528;
        case 0x22852cu: goto label_22852c;
        case 0x228530u: goto label_228530;
        case 0x228534u: goto label_228534;
        case 0x228538u: goto label_228538;
        case 0x22853cu: goto label_22853c;
        case 0x228540u: goto label_228540;
        case 0x228544u: goto label_228544;
        case 0x228548u: goto label_228548;
        case 0x22854cu: goto label_22854c;
        case 0x228550u: goto label_228550;
        case 0x228554u: goto label_228554;
        case 0x228558u: goto label_228558;
        case 0x22855cu: goto label_22855c;
        case 0x228560u: goto label_228560;
        case 0x228564u: goto label_228564;
        default: break;
    }

    ctx->pc = 0x2282a0u;

label_2282a0:
    // 0x2282a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2282a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2282a4:
    // 0x2282a4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2282a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_2282a8:
    // 0x2282a8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2282a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_2282ac:
    // 0x2282ac: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2282acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2282b0:
    // 0x2282b0: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2282b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_2282b4:
    // 0x2282b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2282b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2282b8:
    // 0x2282b8: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2282b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_2282bc:
    // 0x2282bc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2282bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2282c0:
    // 0x2282c0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2282c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_2282c4:
    // 0x2282c4: 0x12000032  beqz        $s0, . + 4 + (0x32 << 2)
label_2282c8:
    if (ctx->pc == 0x2282C8u) {
        ctx->pc = 0x2282C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2282C4u;
        // 0x2282c8: 0xffbf0058  sd          $ra, 0x58($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2282CCu;
        goto label_2282cc;
    }
    ctx->pc = 0x2282C4u;
    {
        const bool branch_taken_0x2282c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2282C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2282C4u;
        // 0x2282c8: 0xffbf0058  sd          $ra, 0x58($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2282c4) {
            ctx->pc = 0x228390u;
            goto label_228390;
        }
    }
    ctx->pc = 0x2282CCu;
label_2282cc:
    // 0x2282cc: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x2282ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_2282d0:
    // 0x2282d0: 0x30423001  andi        $v0, $v0, 0x3001
    ctx->pc = 0x2282d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12289);
label_2282d4:
    // 0x2282d4: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x2282d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
label_2282d8:
    // 0x2282d8: 0x5440009b  bnel        $v0, $zero, . + 4 + (0x9B << 2)
label_2282dc:
    if (ctx->pc == 0x2282DCu) {
        ctx->pc = 0x2282DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2282D8u;
        // 0x2282dc: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2282E0u;
        goto label_2282e0;
    }
    ctx->pc = 0x2282D8u;
    {
        const bool branch_taken_0x2282d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2282d8) {
            ctx->pc = 0x2282DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2282D8u;
            // 0x2282dc: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228548u;
            goto label_228548;
        }
    }
    ctx->pc = 0x2282E0u;
label_2282e0:
    // 0x2282e0: 0x8e020274  lw          $v0, 0x274($s0)
    ctx->pc = 0x2282e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
label_2282e4:
    // 0x2282e4: 0x50400098  beql        $v0, $zero, . + 4 + (0x98 << 2)
label_2282e8:
    if (ctx->pc == 0x2282E8u) {
        ctx->pc = 0x2282E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2282E4u;
        // 0x2282e8: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2282ECu;
        goto label_2282ec;
    }
    ctx->pc = 0x2282E4u;
    {
        const bool branch_taken_0x2282e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2282e4) {
            ctx->pc = 0x2282E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2282E4u;
            // 0x2282e8: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228548u;
            goto label_228548;
        }
    }
    ctx->pc = 0x2282ECu;
label_2282ec:
    // 0x2282ec: 0xc097f26  jal         func_25FC98
label_2282f0:
    if (ctx->pc == 0x2282F0u) {
        ctx->pc = 0x2282F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2282ECu;
        // 0x2282f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2282F4u;
        goto label_2282f4;
    }
    ctx->pc = 0x2282ECu;
    SET_GPR_U32(ctx, 31, 0x2282F4u);
    ctx->pc = 0x2282F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2282ECu;
    // 0x2282f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x2282ECu, 0x2282F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2282F4u;
label_2282f4:
    // 0x2282f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2282f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2282f8:
    // 0x2282f8: 0x24020089  addiu       $v0, $zero, 0x89
    ctx->pc = 0x2282f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
label_2282fc:
    // 0x2282fc: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_228300:
    if (ctx->pc == 0x228300u) {
        ctx->pc = 0x228300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2282FCu;
        // 0x228300: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228304u;
        goto label_228304;
    }
    ctx->pc = 0x2282FCu;
    {
        const bool branch_taken_0x2282fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x228300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2282FCu;
        // 0x228300: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2282fc) {
            ctx->pc = 0x228330u;
            goto label_228330;
        }
    }
    ctx->pc = 0x228304u;
label_228304:
    // 0x228304: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_228308:
    if (ctx->pc == 0x228308u) {
        ctx->pc = 0x228308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228304u;
        // 0x228308: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22830Cu;
        goto label_22830c;
    }
    ctx->pc = 0x228304u;
    {
        const bool branch_taken_0x228304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x228308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228304u;
        // 0x228308: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228304) {
            ctx->pc = 0x228330u;
            goto label_228330;
        }
    }
    ctx->pc = 0x22830Cu;
label_22830c:
    // 0x22830c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_228310:
    if (ctx->pc == 0x228310u) {
        ctx->pc = 0x228310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22830Cu;
        // 0x228310: 0x2402008a  addiu       $v0, $zero, 0x8A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228314u;
        goto label_228314;
    }
    ctx->pc = 0x22830Cu;
    {
        const bool branch_taken_0x22830c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x228310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22830Cu;
        // 0x228310: 0x2402008a  addiu       $v0, $zero, 0x8A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22830c) {
            ctx->pc = 0x228330u;
            goto label_228330;
        }
    }
    ctx->pc = 0x228314u;
label_228314:
    // 0x228314: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_228318:
    if (ctx->pc == 0x228318u) {
        ctx->pc = 0x228318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228314u;
        // 0x228318: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22831Cu;
        goto label_22831c;
    }
    ctx->pc = 0x228314u;
    {
        const bool branch_taken_0x228314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x228318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228314u;
        // 0x228318: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228314) {
            ctx->pc = 0x228334u;
            goto label_228334;
        }
    }
    ctx->pc = 0x22831Cu;
label_22831c:
    // 0x22831c: 0xc0d8de2  jal         func_363788
label_228320:
    if (ctx->pc == 0x228320u) {
        ctx->pc = 0x228320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22831Cu;
        // 0x228320: 0x8e040274  lw          $a0, 0x274($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228324u;
        goto label_228324;
    }
    ctx->pc = 0x22831Cu;
    SET_GPR_U32(ctx, 31, 0x228324u);
    ctx->pc = 0x228320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22831Cu;
    // 0x228320: 0x8e040274  lw          $a0, 0x274($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x22831Cu, 0x228324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228324u;
label_228324:
    // 0x228324: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x228324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_228328:
    // 0x228328: 0x14400087  bnez        $v0, . + 4 + (0x87 << 2)
label_22832c:
    if (ctx->pc == 0x22832Cu) {
        ctx->pc = 0x22832Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228328u;
        // 0x22832c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228330u;
        goto label_228330;
    }
    ctx->pc = 0x228328u;
    {
        const bool branch_taken_0x228328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22832Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228328u;
        // 0x22832c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228328) {
            ctx->pc = 0x228548u;
            goto label_228548;
        }
    }
    ctx->pc = 0x228330u;
label_228330:
    // 0x228330: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x228330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_228334:
    // 0x228334: 0xc075e34  jal         func_1D78D0
label_228338:
    if (ctx->pc == 0x228338u) {
        ctx->pc = 0x228338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228334u;
        // 0x228338: 0x248444c8  addiu       $a0, $a0, 0x44C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22833Cu;
        goto label_22833c;
    }
    ctx->pc = 0x228334u;
    SET_GPR_U32(ctx, 31, 0x22833Cu);
    ctx->pc = 0x228338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228334u;
    // 0x228338: 0x248444c8  addiu       $a0, $a0, 0x44C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D78D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D78D0u, 0x228334u, 0x22833Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22833Cu;
label_22833c:
    // 0x22833c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x22833cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_228340:
    // 0x228340: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x228340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_228344:
    // 0x228344: 0xc075e34  jal         func_1D78D0
label_228348:
    if (ctx->pc == 0x228348u) {
        ctx->pc = 0x228348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228344u;
        // 0x228348: 0x248444e0  addiu       $a0, $a0, 0x44E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17632));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22834Cu;
        goto label_22834c;
    }
    ctx->pc = 0x228344u;
    SET_GPR_U32(ctx, 31, 0x22834Cu);
    ctx->pc = 0x228348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228344u;
    // 0x228348: 0x248444e0  addiu       $a0, $a0, 0x44E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D78D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D78D0u, 0x228344u, 0x22834Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22834Cu;
label_22834c:
    // 0x22834c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22834cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_228350:
    // 0x228350: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x228350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_228354:
    // 0x228354: 0x8c449160  lw          $a0, -0x6EA0($v0)
    ctx->pc = 0x228354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938976)));
label_228358:
    // 0x228358: 0x1490000b  bne         $a0, $s0, . + 4 + (0xB << 2)
label_22835c:
    if (ctx->pc == 0x22835Cu) {
        ctx->pc = 0x228360u;
        goto label_228360;
    }
    ctx->pc = 0x228358u;
    {
        const bool branch_taken_0x228358 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        if (branch_taken_0x228358) {
            ctx->pc = 0x228388u;
            goto label_228388;
        }
    }
    ctx->pc = 0x228360u;
label_228360:
    // 0x228360: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x228360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_228364:
    // 0x228364: 0x3c01c096  lui         $at, 0xC096
    ctx->pc = 0x228364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49302 << 16));
label_228368:
    // 0x228368: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x228368u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_22836c:
    // 0x22836c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22836cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_228370:
    // 0x228370: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x228370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_228374:
    // 0x228374: 0xc4400074  lwc1        $f0, 0x74($v0)
    ctx->pc = 0x228374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228378:
    // 0x228378: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x228378u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22837c:
    // 0x22837c: 0x0  nop
    ctx->pc = 0x22837cu;
    // NOP
label_228380:
    // 0x228380: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_228384:
    if (ctx->pc == 0x228384u) {
        ctx->pc = 0x228384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228380u;
        // 0x228384: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228388u;
        goto label_228388;
    }
    ctx->pc = 0x228380u;
    {
        const bool branch_taken_0x228380 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x228380) {
            ctx->pc = 0x228384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228380u;
            // 0x228384: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228394u;
            goto label_228394;
        }
    }
    ctx->pc = 0x228388u;
label_228388:
    // 0x228388: 0x1485006f  bne         $a0, $a1, . + 4 + (0x6F << 2)
label_22838c:
    if (ctx->pc == 0x22838Cu) {
        ctx->pc = 0x22838Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228388u;
        // 0x22838c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228390u;
        goto label_228390;
    }
    ctx->pc = 0x228388u;
    {
        const bool branch_taken_0x228388 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x22838Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228388u;
        // 0x22838c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228388) {
            ctx->pc = 0x228548u;
            goto label_228548;
        }
    }
    ctx->pc = 0x228390u;
label_228390:
    // 0x228390: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x228390u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_228394:
    // 0x228394: 0xc085d2a  jal         func_2174A8
label_228398:
    if (ctx->pc == 0x228398u) {
        ctx->pc = 0x228398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228394u;
        // 0x228398: 0x248444f8  addiu       $a0, $a0, 0x44F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22839Cu;
        goto label_22839c;
    }
    ctx->pc = 0x228394u;
    SET_GPR_U32(ctx, 31, 0x22839Cu);
    ctx->pc = 0x228398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228394u;
    // 0x228398: 0x248444f8  addiu       $a0, $a0, 0x44F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2174A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2174A8u, 0x228394u, 0x22839Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22839Cu;
label_22839c:
    // 0x22839c: 0x8e44032c  lw          $a0, 0x32C($s2)
    ctx->pc = 0x22839cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 812)));
label_2283a0:
    // 0x2283a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2283a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2283a4:
    // 0x2283a4: 0xc0844c0  jal         func_211300
label_2283a8:
    if (ctx->pc == 0x2283A8u) {
        ctx->pc = 0x2283A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2283A4u;
        // 0x2283a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2283ACu;
        goto label_2283ac;
    }
    ctx->pc = 0x2283A4u;
    SET_GPR_U32(ctx, 31, 0x2283ACu);
    ctx->pc = 0x2283A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2283A4u;
    // 0x2283a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211300u, 0x2283A4u, 0x2283ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2283ACu;
label_2283ac:
    // 0x2283ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2283acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2283b0:
    // 0x2283b0: 0xc083072  jal         func_20C1C8
label_2283b4:
    if (ctx->pc == 0x2283B4u) {
        ctx->pc = 0x2283B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2283B0u;
        // 0x2283b4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2283B8u;
        goto label_2283b8;
    }
    ctx->pc = 0x2283B0u;
    SET_GPR_U32(ctx, 31, 0x2283B8u);
    ctx->pc = 0x2283B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2283B0u;
    // 0x2283b4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C1C8u, 0x2283B0u, 0x2283B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2283B8u;
label_2283b8:
    // 0x2283b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2283b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2283bc:
    // 0x2283bc: 0x8e43032c  lw          $v1, 0x32C($s2)
    ctx->pc = 0x2283bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 812)));
label_2283c0:
    // 0x2283c0: 0x8e260218  lw          $a2, 0x218($s1)
    ctx->pc = 0x2283c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_2283c4:
    // 0x2283c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2283c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2283c8:
    // 0x2283c8: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x2283c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_2283cc:
    // 0x2283cc: 0x40f809  jalr        $v0
label_2283d0:
    if (ctx->pc == 0x2283D0u) {
        ctx->pc = 0x2283D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2283CCu;
        // 0x2283d0: 0x8c650104  lw          $a1, 0x104($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2283D4u;
        goto label_2283d4;
    }
    ctx->pc = 0x2283CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2283D4u);
        ctx->pc = 0x2283D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2283CCu;
        // 0x2283d0: 0x8c650104  lw          $a1, 0x104($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2283CCu, 0x2283D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2283D4u;
label_2283d4:
    // 0x2283d4: 0x8e44032c  lw          $a0, 0x32C($s2)
    ctx->pc = 0x2283d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 812)));
label_2283d8:
    // 0x2283d8: 0x8c830230  lw          $v1, 0x230($a0)
    ctx->pc = 0x2283d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 560)));
label_2283dc:
    // 0x2283dc: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x2283dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_2283e0:
    // 0x2283e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2283e4:
    if (ctx->pc == 0x2283E4u) {
        ctx->pc = 0x2283E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2283E0u;
        // 0x2283e4: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2283E8u;
        goto label_2283e8;
    }
    ctx->pc = 0x2283E0u;
    {
        const bool branch_taken_0x2283e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2283E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2283E0u;
        // 0x2283e4: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2283e0) {
            ctx->pc = 0x2283F4u;
            goto label_2283f4;
        }
    }
    ctx->pc = 0x2283E8u;
label_2283e8:
    // 0x2283e8: 0x8c8200b8  lw          $v0, 0xB8($a0)
    ctx->pc = 0x2283e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
label_2283ec:
    // 0x2283ec: 0x10000002  b           . + 4 + (0x2 << 2)
label_2283f0:
    if (ctx->pc == 0x2283F0u) {
        ctx->pc = 0x2283F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2283ECu;
        // 0x2283f0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2283F4u;
        goto label_2283f4;
    }
    ctx->pc = 0x2283ECu;
    {
        const bool branch_taken_0x2283ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2283F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2283ECu;
        // 0x2283f0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2283ec) {
            ctx->pc = 0x2283F8u;
            goto label_2283f8;
        }
    }
    ctx->pc = 0x2283F4u;
label_2283f4:
    // 0x2283f4: 0x8c8200b8  lw          $v0, 0xB8($a0)
    ctx->pc = 0x2283f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
label_2283f8:
    // 0x2283f8: 0x8c4201f0  lw          $v0, 0x1F0($v0)
    ctx->pc = 0x2283f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 496)));
label_2283fc:
    // 0x2283fc: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x2283fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
label_228400:
    // 0x228400: 0x265000f8  addiu       $s0, $s2, 0xF8
    ctx->pc = 0x228400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 248));
label_228404:
    // 0x228404: 0xc0efc2e  jal         func_3BF0B8
label_228408:
    if (ctx->pc == 0x228408u) {
        ctx->pc = 0x228408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228404u;
        // 0x228408: 0x8e4400f8  lw          $a0, 0xF8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22840Cu;
        goto label_22840c;
    }
    ctx->pc = 0x228404u;
    SET_GPR_U32(ctx, 31, 0x22840Cu);
    ctx->pc = 0x228408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228404u;
    // 0x228408: 0x8e4400f8  lw          $a0, 0xF8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x228404u, 0x22840Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22840Cu;
label_22840c:
    // 0x22840c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22840cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_228410:
    // 0x228410: 0xc0d7384  jal         func_35CE10
label_228414:
    if (ctx->pc == 0x228414u) {
        ctx->pc = 0x228414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228410u;
        // 0x228414: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228418u;
        goto label_228418;
    }
    ctx->pc = 0x228410u;
    SET_GPR_U32(ctx, 31, 0x228418u);
    ctx->pc = 0x228414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228410u;
    // 0x228414: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x228410u, 0x228418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228418u;
label_228418:
    // 0x228418: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x228418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22841c:
    // 0x22841c: 0xc0d745c  jal         func_35D170
label_228420:
    if (ctx->pc == 0x228420u) {
        ctx->pc = 0x228420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22841Cu;
        // 0x228420: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228424u;
        goto label_228424;
    }
    ctx->pc = 0x22841Cu;
    SET_GPR_U32(ctx, 31, 0x228424u);
    ctx->pc = 0x228420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22841Cu;
    // 0x228420: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x22841Cu, 0x228424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228424u;
label_228424:
    // 0x228424: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x228424u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_228428:
    // 0x228428: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x228428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22842c:
    // 0x22842c: 0xc0d754c  jal         func_35D530
label_228430:
    if (ctx->pc == 0x228430u) {
        ctx->pc = 0x228430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22842Cu;
        // 0x228430: 0x24a54510  addiu       $a1, $a1, 0x4510 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228434u;
        goto label_228434;
    }
    ctx->pc = 0x22842Cu;
    SET_GPR_U32(ctx, 31, 0x228434u);
    ctx->pc = 0x228430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22842Cu;
    // 0x228430: 0x24a54510  addiu       $a1, $a1, 0x4510 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D530u, 0x22842Cu, 0x228434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228434u;
label_228434:
    // 0x228434: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x228434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_228438:
    // 0x228438: 0xc083942  jal         func_20E508
label_22843c:
    if (ctx->pc == 0x22843Cu) {
        ctx->pc = 0x22843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228438u;
        // 0x22843c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228440u;
        goto label_228440;
    }
    ctx->pc = 0x228438u;
    SET_GPR_U32(ctx, 31, 0x228440u);
    ctx->pc = 0x22843Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228438u;
    // 0x22843c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E508u, 0x228438u, 0x228440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228440u;
label_228440:
    // 0x228440: 0xc08442a  jal         func_2110A8
label_228444:
    if (ctx->pc == 0x228444u) {
        ctx->pc = 0x228444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228440u;
        // 0x228444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228448u;
        goto label_228448;
    }
    ctx->pc = 0x228440u;
    SET_GPR_U32(ctx, 31, 0x228448u);
    ctx->pc = 0x228444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228440u;
    // 0x228444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2110A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2110A8u, 0x228440u, 0x228448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228448u;
label_228448:
    // 0x228448: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_22844c:
    if (ctx->pc == 0x22844Cu) {
        ctx->pc = 0x22844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228448u;
        // 0x22844c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228450u;
        goto label_228450;
    }
    ctx->pc = 0x228448u;
    {
        const bool branch_taken_0x228448 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x22844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228448u;
        // 0x22844c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228448) {
            ctx->pc = 0x228458u;
            goto label_228458;
        }
    }
    ctx->pc = 0x228450u;
label_228450:
    // 0x228450: 0xc084492  jal         func_211248
label_228454:
    if (ctx->pc == 0x228454u) {
        ctx->pc = 0x228454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228450u;
        // 0x228454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228458u;
        goto label_228458;
    }
    ctx->pc = 0x228450u;
    SET_GPR_U32(ctx, 31, 0x228458u);
    ctx->pc = 0x228454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228450u;
    // 0x228454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211248u, 0x228450u, 0x228458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228458u;
label_228458:
    // 0x228458: 0xc0857b4  jal         func_215ED0
label_22845c:
    if (ctx->pc == 0x22845Cu) {
        ctx->pc = 0x22845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228458u;
        // 0x22845c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228460u;
        goto label_228460;
    }
    ctx->pc = 0x228458u;
    SET_GPR_U32(ctx, 31, 0x228460u);
    ctx->pc = 0x22845Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228458u;
    // 0x22845c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215ED0u, 0x228458u, 0x228460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228460u;
label_228460:
    // 0x228460: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x228460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228464:
    // 0x228464: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x228464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_228468:
    // 0x228468: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x228468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_22846c:
    // 0x22846c: 0xc663000c  lwc1        $f3, 0xC($s3)
    ctx->pc = 0x22846cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_228470:
    // 0x228470: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x228470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_228474:
    // 0x228474: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x228474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_228478:
    // 0x228478: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x228478u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_22847c:
    // 0x22847c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x22847cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_228480:
    // 0x228480: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x228480u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_228484:
    // 0x228484: 0x8e44032c  lw          $a0, 0x32C($s2)
    ctx->pc = 0x228484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 812)));
label_228488:
    // 0x228488: 0x8e450334  lw          $a1, 0x334($s2)
    ctx->pc = 0x228488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_22848c:
    // 0x22848c: 0x8c820104  lw          $v0, 0x104($a0)
    ctx->pc = 0x22848cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
label_228490:
    // 0x228490: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x228490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_228494:
    // 0x228494: 0xc4610070  lwc1        $f1, 0x70($v1)
    ctx->pc = 0x228494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_228498:
    // 0x228498: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x228498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_22849c:
    // 0x22849c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x22849cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2284a0:
    // 0x2284a0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2284a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2284a4:
    // 0x2284a4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2284a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2284a8:
    // 0x2284a8: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2284a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2284ac:
    // 0x2284ac: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x2284acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2284b0:
    // 0x2284b0: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2284b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2284b4:
    // 0x2284b4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2284b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_2284b8:
    // 0x2284b8: 0x8ca30150  lw          $v1, 0x150($a1)
    ctx->pc = 0x2284b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
label_2284bc:
    // 0x2284bc: 0x10660006  beq         $v1, $a2, . + 4 + (0x6 << 2)
label_2284c0:
    if (ctx->pc == 0x2284C0u) {
        ctx->pc = 0x2284C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2284BCu;
        // 0x2284c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2284C4u;
        goto label_2284c4;
    }
    ctx->pc = 0x2284BCu;
    {
        const bool branch_taken_0x2284bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x2284C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2284BCu;
        // 0x2284c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2284bc) {
            ctx->pc = 0x2284D8u;
            goto label_2284d8;
        }
    }
    ctx->pc = 0x2284C4u;
label_2284c4:
    // 0x2284c4: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2284c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_2284c8:
    // 0x2284c8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2284cc:
    if (ctx->pc == 0x2284CCu) {
        ctx->pc = 0x2284CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2284C8u;
        // 0x2284cc: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2284D0u;
        goto label_2284d0;
    }
    ctx->pc = 0x2284C8u;
    {
        const bool branch_taken_0x2284c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2284CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2284C8u;
        // 0x2284cc: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2284c8) {
            ctx->pc = 0x2284D8u;
            goto label_2284d8;
        }
    }
    ctx->pc = 0x2284D0u;
label_2284d0:
    // 0x2284d0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2284d4:
    if (ctx->pc == 0x2284D4u) {
        ctx->pc = 0x2284D8u;
        goto label_2284d8;
    }
    ctx->pc = 0x2284D0u;
    {
        const bool branch_taken_0x2284d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2284d0) {
            ctx->pc = 0x2284DCu;
            goto label_2284dc;
        }
    }
    ctx->pc = 0x2284D8u;
label_2284d8:
    // 0x2284d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2284d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2284dc:
    // 0x2284dc: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
label_2284e0:
    if (ctx->pc == 0x2284E0u) {
        ctx->pc = 0x2284E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2284DCu;
        // 0x2284e0: 0xc7a00024  lwc1        $f0, 0x24($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2284E4u;
        goto label_2284e4;
    }
    ctx->pc = 0x2284DCu;
    {
        const bool branch_taken_0x2284dc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2284E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2284DCu;
        // 0x2284e0: 0xc7a00024  lwc1        $f0, 0x24($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2284dc) {
            ctx->pc = 0x2284FCu;
            goto label_2284fc;
        }
    }
    ctx->pc = 0x2284E4u;
label_2284e4:
    // 0x2284e4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2284e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2284e8:
    // 0x2284e8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2284e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2284ec:
    // 0x2284ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2284ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2284f0:
    // 0x2284f0: 0x0  nop
    ctx->pc = 0x2284f0u;
    // NOP
label_2284f4:
    // 0x2284f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2284f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2284f8:
    // 0x2284f8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2284f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2284fc:
    // 0x2284fc: 0x8e240274  lw          $a0, 0x274($s1)
    ctx->pc = 0x2284fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
label_228500:
    // 0x228500: 0xc0d8e20  jal         func_363880
label_228504:
    if (ctx->pc == 0x228504u) {
        ctx->pc = 0x228504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228500u;
        // 0x228504: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228508u;
        goto label_228508;
    }
    ctx->pc = 0x228500u;
    SET_GPR_U32(ctx, 31, 0x228508u);
    ctx->pc = 0x228504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228500u;
    // 0x228504: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363880u, 0x228500u, 0x228508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228508u;
label_228508:
    // 0x228508: 0x8e240274  lw          $a0, 0x274($s1)
    ctx->pc = 0x228508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
label_22850c:
    // 0x22850c: 0xc0d8ffa  jal         func_363FE8
label_228510:
    if (ctx->pc == 0x228510u) {
        ctx->pc = 0x228510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22850Cu;
        // 0x228510: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228514u;
        goto label_228514;
    }
    ctx->pc = 0x22850Cu;
    SET_GPR_U32(ctx, 31, 0x228514u);
    ctx->pc = 0x228510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22850Cu;
    // 0x228510: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363FE8u, 0x22850Cu, 0x228514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228514u;
label_228514:
    // 0x228514: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x228514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_228518:
    // 0x228518: 0xc0989a0  jal         func_262680
label_22851c:
    if (ctx->pc == 0x22851Cu) {
        ctx->pc = 0x22851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228518u;
        // 0x22851c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228520u;
        goto label_228520;
    }
    ctx->pc = 0x228518u;
    SET_GPR_U32(ctx, 31, 0x228520u);
    ctx->pc = 0x22851Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228518u;
    // 0x22851c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262680u, 0x228518u, 0x228520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228520u;
label_228520:
    // 0x228520: 0xc0d8f80  jal         func_363E00
label_228524:
    if (ctx->pc == 0x228524u) {
        ctx->pc = 0x228524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228520u;
        // 0x228524: 0x8e240274  lw          $a0, 0x274($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228528u;
        goto label_228528;
    }
    ctx->pc = 0x228520u;
    SET_GPR_U32(ctx, 31, 0x228528u);
    ctx->pc = 0x228524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228520u;
    // 0x228524: 0x8e240274  lw          $a0, 0x274($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363E00u, 0x228520u, 0x228528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228528u;
label_228528:
    // 0x228528: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x228528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22852c:
    // 0x22852c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22852cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_228530:
    // 0x228530: 0xc089f18  jal         func_227C60
label_228534:
    if (ctx->pc == 0x228534u) {
        ctx->pc = 0x228534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228530u;
        // 0x228534: 0xac43024c  sw          $v1, 0x24C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 588), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228538u;
        goto label_228538;
    }
    ctx->pc = 0x228530u;
    SET_GPR_U32(ctx, 31, 0x228538u);
    ctx->pc = 0x228534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228530u;
    // 0x228534: 0xac43024c  sw          $v1, 0x24C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 588), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C60u, 0x228530u, 0x228538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228538u;
label_228538:
    // 0x228538: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x228538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22853c:
    // 0x22853c: 0xc0d7412  jal         func_35D048
label_228540:
    if (ctx->pc == 0x228540u) {
        ctx->pc = 0x228540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22853Cu;
        // 0x228540: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228544u;
        goto label_228544;
    }
    ctx->pc = 0x22853Cu;
    SET_GPR_U32(ctx, 31, 0x228544u);
    ctx->pc = 0x228540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22853Cu;
    // 0x228540: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x22853Cu, 0x228544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228544u;
label_228544:
    // 0x228544: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x228544u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_228548:
    // 0x228548: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x228548u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_22854c:
    // 0x22854c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x22854cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_228550:
    // 0x228550: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x228550u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_228554:
    // 0x228554: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x228554u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_228558:
    // 0x228558: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x228558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_22855c:
    // 0x22855c: 0x3e00008  jr          $ra
label_228560:
    if (ctx->pc == 0x228560u) {
        ctx->pc = 0x228560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22855Cu;
        // 0x228560: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228564u;
        goto label_228564;
    }
    ctx->pc = 0x22855Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22855Cu;
        // 0x228560: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22855Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228564u;
label_228564:
    // 0x228564: 0x0  nop
    ctx->pc = 0x228564u;
    // NOP
    ctx->pc = 0x228568u;
}
