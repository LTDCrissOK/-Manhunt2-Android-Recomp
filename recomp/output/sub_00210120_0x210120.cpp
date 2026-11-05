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

// Function: sub_00210120
// Address: 0x210120 - 0x2105c8
void sub_00210120_0x210120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210120_0x210120");
#endif

    switch (ctx->pc) {
        case 0x210120u: goto label_210120;
        case 0x210124u: goto label_210124;
        case 0x210128u: goto label_210128;
        case 0x21012cu: goto label_21012c;
        case 0x210130u: goto label_210130;
        case 0x210134u: goto label_210134;
        case 0x210138u: goto label_210138;
        case 0x21013cu: goto label_21013c;
        case 0x210140u: goto label_210140;
        case 0x210144u: goto label_210144;
        case 0x210148u: goto label_210148;
        case 0x21014cu: goto label_21014c;
        case 0x210150u: goto label_210150;
        case 0x210154u: goto label_210154;
        case 0x210158u: goto label_210158;
        case 0x21015cu: goto label_21015c;
        case 0x210160u: goto label_210160;
        case 0x210164u: goto label_210164;
        case 0x210168u: goto label_210168;
        case 0x21016cu: goto label_21016c;
        case 0x210170u: goto label_210170;
        case 0x210174u: goto label_210174;
        case 0x210178u: goto label_210178;
        case 0x21017cu: goto label_21017c;
        case 0x210180u: goto label_210180;
        case 0x210184u: goto label_210184;
        case 0x210188u: goto label_210188;
        case 0x21018cu: goto label_21018c;
        case 0x210190u: goto label_210190;
        case 0x210194u: goto label_210194;
        case 0x210198u: goto label_210198;
        case 0x21019cu: goto label_21019c;
        case 0x2101a0u: goto label_2101a0;
        case 0x2101a4u: goto label_2101a4;
        case 0x2101a8u: goto label_2101a8;
        case 0x2101acu: goto label_2101ac;
        case 0x2101b0u: goto label_2101b0;
        case 0x2101b4u: goto label_2101b4;
        case 0x2101b8u: goto label_2101b8;
        case 0x2101bcu: goto label_2101bc;
        case 0x2101c0u: goto label_2101c0;
        case 0x2101c4u: goto label_2101c4;
        case 0x2101c8u: goto label_2101c8;
        case 0x2101ccu: goto label_2101cc;
        case 0x2101d0u: goto label_2101d0;
        case 0x2101d4u: goto label_2101d4;
        case 0x2101d8u: goto label_2101d8;
        case 0x2101dcu: goto label_2101dc;
        case 0x2101e0u: goto label_2101e0;
        case 0x2101e4u: goto label_2101e4;
        case 0x2101e8u: goto label_2101e8;
        case 0x2101ecu: goto label_2101ec;
        case 0x2101f0u: goto label_2101f0;
        case 0x2101f4u: goto label_2101f4;
        case 0x2101f8u: goto label_2101f8;
        case 0x2101fcu: goto label_2101fc;
        case 0x210200u: goto label_210200;
        case 0x210204u: goto label_210204;
        case 0x210208u: goto label_210208;
        case 0x21020cu: goto label_21020c;
        case 0x210210u: goto label_210210;
        case 0x210214u: goto label_210214;
        case 0x210218u: goto label_210218;
        case 0x21021cu: goto label_21021c;
        case 0x210220u: goto label_210220;
        case 0x210224u: goto label_210224;
        case 0x210228u: goto label_210228;
        case 0x21022cu: goto label_21022c;
        case 0x210230u: goto label_210230;
        case 0x210234u: goto label_210234;
        case 0x210238u: goto label_210238;
        case 0x21023cu: goto label_21023c;
        case 0x210240u: goto label_210240;
        case 0x210244u: goto label_210244;
        case 0x210248u: goto label_210248;
        case 0x21024cu: goto label_21024c;
        case 0x210250u: goto label_210250;
        case 0x210254u: goto label_210254;
        case 0x210258u: goto label_210258;
        case 0x21025cu: goto label_21025c;
        case 0x210260u: goto label_210260;
        case 0x210264u: goto label_210264;
        case 0x210268u: goto label_210268;
        case 0x21026cu: goto label_21026c;
        case 0x210270u: goto label_210270;
        case 0x210274u: goto label_210274;
        case 0x210278u: goto label_210278;
        case 0x21027cu: goto label_21027c;
        case 0x210280u: goto label_210280;
        case 0x210284u: goto label_210284;
        case 0x210288u: goto label_210288;
        case 0x21028cu: goto label_21028c;
        case 0x210290u: goto label_210290;
        case 0x210294u: goto label_210294;
        case 0x210298u: goto label_210298;
        case 0x21029cu: goto label_21029c;
        case 0x2102a0u: goto label_2102a0;
        case 0x2102a4u: goto label_2102a4;
        case 0x2102a8u: goto label_2102a8;
        case 0x2102acu: goto label_2102ac;
        case 0x2102b0u: goto label_2102b0;
        case 0x2102b4u: goto label_2102b4;
        case 0x2102b8u: goto label_2102b8;
        case 0x2102bcu: goto label_2102bc;
        case 0x2102c0u: goto label_2102c0;
        case 0x2102c4u: goto label_2102c4;
        case 0x2102c8u: goto label_2102c8;
        case 0x2102ccu: goto label_2102cc;
        case 0x2102d0u: goto label_2102d0;
        case 0x2102d4u: goto label_2102d4;
        case 0x2102d8u: goto label_2102d8;
        case 0x2102dcu: goto label_2102dc;
        case 0x2102e0u: goto label_2102e0;
        case 0x2102e4u: goto label_2102e4;
        case 0x2102e8u: goto label_2102e8;
        case 0x2102ecu: goto label_2102ec;
        case 0x2102f0u: goto label_2102f0;
        case 0x2102f4u: goto label_2102f4;
        case 0x2102f8u: goto label_2102f8;
        case 0x2102fcu: goto label_2102fc;
        case 0x210300u: goto label_210300;
        case 0x210304u: goto label_210304;
        case 0x210308u: goto label_210308;
        case 0x21030cu: goto label_21030c;
        case 0x210310u: goto label_210310;
        case 0x210314u: goto label_210314;
        case 0x210318u: goto label_210318;
        case 0x21031cu: goto label_21031c;
        case 0x210320u: goto label_210320;
        case 0x210324u: goto label_210324;
        case 0x210328u: goto label_210328;
        case 0x21032cu: goto label_21032c;
        case 0x210330u: goto label_210330;
        case 0x210334u: goto label_210334;
        case 0x210338u: goto label_210338;
        case 0x21033cu: goto label_21033c;
        case 0x210340u: goto label_210340;
        case 0x210344u: goto label_210344;
        case 0x210348u: goto label_210348;
        case 0x21034cu: goto label_21034c;
        case 0x210350u: goto label_210350;
        case 0x210354u: goto label_210354;
        case 0x210358u: goto label_210358;
        case 0x21035cu: goto label_21035c;
        case 0x210360u: goto label_210360;
        case 0x210364u: goto label_210364;
        case 0x210368u: goto label_210368;
        case 0x21036cu: goto label_21036c;
        case 0x210370u: goto label_210370;
        case 0x210374u: goto label_210374;
        case 0x210378u: goto label_210378;
        case 0x21037cu: goto label_21037c;
        case 0x210380u: goto label_210380;
        case 0x210384u: goto label_210384;
        case 0x210388u: goto label_210388;
        case 0x21038cu: goto label_21038c;
        case 0x210390u: goto label_210390;
        case 0x210394u: goto label_210394;
        case 0x210398u: goto label_210398;
        case 0x21039cu: goto label_21039c;
        case 0x2103a0u: goto label_2103a0;
        case 0x2103a4u: goto label_2103a4;
        case 0x2103a8u: goto label_2103a8;
        case 0x2103acu: goto label_2103ac;
        case 0x2103b0u: goto label_2103b0;
        case 0x2103b4u: goto label_2103b4;
        case 0x2103b8u: goto label_2103b8;
        case 0x2103bcu: goto label_2103bc;
        case 0x2103c0u: goto label_2103c0;
        case 0x2103c4u: goto label_2103c4;
        case 0x2103c8u: goto label_2103c8;
        case 0x2103ccu: goto label_2103cc;
        case 0x2103d0u: goto label_2103d0;
        case 0x2103d4u: goto label_2103d4;
        case 0x2103d8u: goto label_2103d8;
        case 0x2103dcu: goto label_2103dc;
        case 0x2103e0u: goto label_2103e0;
        case 0x2103e4u: goto label_2103e4;
        case 0x2103e8u: goto label_2103e8;
        case 0x2103ecu: goto label_2103ec;
        case 0x2103f0u: goto label_2103f0;
        case 0x2103f4u: goto label_2103f4;
        case 0x2103f8u: goto label_2103f8;
        case 0x2103fcu: goto label_2103fc;
        case 0x210400u: goto label_210400;
        case 0x210404u: goto label_210404;
        case 0x210408u: goto label_210408;
        case 0x21040cu: goto label_21040c;
        case 0x210410u: goto label_210410;
        case 0x210414u: goto label_210414;
        case 0x210418u: goto label_210418;
        case 0x21041cu: goto label_21041c;
        case 0x210420u: goto label_210420;
        case 0x210424u: goto label_210424;
        case 0x210428u: goto label_210428;
        case 0x21042cu: goto label_21042c;
        case 0x210430u: goto label_210430;
        case 0x210434u: goto label_210434;
        case 0x210438u: goto label_210438;
        case 0x21043cu: goto label_21043c;
        case 0x210440u: goto label_210440;
        case 0x210444u: goto label_210444;
        case 0x210448u: goto label_210448;
        case 0x21044cu: goto label_21044c;
        case 0x210450u: goto label_210450;
        case 0x210454u: goto label_210454;
        case 0x210458u: goto label_210458;
        case 0x21045cu: goto label_21045c;
        case 0x210460u: goto label_210460;
        case 0x210464u: goto label_210464;
        case 0x210468u: goto label_210468;
        case 0x21046cu: goto label_21046c;
        case 0x210470u: goto label_210470;
        case 0x210474u: goto label_210474;
        case 0x210478u: goto label_210478;
        case 0x21047cu: goto label_21047c;
        case 0x210480u: goto label_210480;
        case 0x210484u: goto label_210484;
        case 0x210488u: goto label_210488;
        case 0x21048cu: goto label_21048c;
        case 0x210490u: goto label_210490;
        case 0x210494u: goto label_210494;
        case 0x210498u: goto label_210498;
        case 0x21049cu: goto label_21049c;
        case 0x2104a0u: goto label_2104a0;
        case 0x2104a4u: goto label_2104a4;
        case 0x2104a8u: goto label_2104a8;
        case 0x2104acu: goto label_2104ac;
        case 0x2104b0u: goto label_2104b0;
        case 0x2104b4u: goto label_2104b4;
        case 0x2104b8u: goto label_2104b8;
        case 0x2104bcu: goto label_2104bc;
        case 0x2104c0u: goto label_2104c0;
        case 0x2104c4u: goto label_2104c4;
        case 0x2104c8u: goto label_2104c8;
        case 0x2104ccu: goto label_2104cc;
        case 0x2104d0u: goto label_2104d0;
        case 0x2104d4u: goto label_2104d4;
        case 0x2104d8u: goto label_2104d8;
        case 0x2104dcu: goto label_2104dc;
        case 0x2104e0u: goto label_2104e0;
        case 0x2104e4u: goto label_2104e4;
        case 0x2104e8u: goto label_2104e8;
        case 0x2104ecu: goto label_2104ec;
        case 0x2104f0u: goto label_2104f0;
        case 0x2104f4u: goto label_2104f4;
        case 0x2104f8u: goto label_2104f8;
        case 0x2104fcu: goto label_2104fc;
        case 0x210500u: goto label_210500;
        case 0x210504u: goto label_210504;
        case 0x210508u: goto label_210508;
        case 0x21050cu: goto label_21050c;
        case 0x210510u: goto label_210510;
        case 0x210514u: goto label_210514;
        case 0x210518u: goto label_210518;
        case 0x21051cu: goto label_21051c;
        case 0x210520u: goto label_210520;
        case 0x210524u: goto label_210524;
        case 0x210528u: goto label_210528;
        case 0x21052cu: goto label_21052c;
        case 0x210530u: goto label_210530;
        case 0x210534u: goto label_210534;
        case 0x210538u: goto label_210538;
        case 0x21053cu: goto label_21053c;
        case 0x210540u: goto label_210540;
        case 0x210544u: goto label_210544;
        case 0x210548u: goto label_210548;
        case 0x21054cu: goto label_21054c;
        case 0x210550u: goto label_210550;
        case 0x210554u: goto label_210554;
        case 0x210558u: goto label_210558;
        case 0x21055cu: goto label_21055c;
        case 0x210560u: goto label_210560;
        case 0x210564u: goto label_210564;
        case 0x210568u: goto label_210568;
        case 0x21056cu: goto label_21056c;
        case 0x210570u: goto label_210570;
        case 0x210574u: goto label_210574;
        case 0x210578u: goto label_210578;
        case 0x21057cu: goto label_21057c;
        case 0x210580u: goto label_210580;
        case 0x210584u: goto label_210584;
        case 0x210588u: goto label_210588;
        case 0x21058cu: goto label_21058c;
        case 0x210590u: goto label_210590;
        case 0x210594u: goto label_210594;
        case 0x210598u: goto label_210598;
        case 0x21059cu: goto label_21059c;
        case 0x2105a0u: goto label_2105a0;
        case 0x2105a4u: goto label_2105a4;
        case 0x2105a8u: goto label_2105a8;
        case 0x2105acu: goto label_2105ac;
        case 0x2105b0u: goto label_2105b0;
        case 0x2105b4u: goto label_2105b4;
        case 0x2105b8u: goto label_2105b8;
        case 0x2105bcu: goto label_2105bc;
        case 0x2105c0u: goto label_2105c0;
        case 0x2105c4u: goto label_2105c4;
        default: break;
    }

    ctx->pc = 0x210120u;

label_210120:
    // 0x210120: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x210120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_210124:
    // 0x210124: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x210124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
label_210128:
    // 0x210128: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x210128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
label_21012c:
    // 0x21012c: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x21012cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
label_210130:
    // 0x210130: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x210130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
label_210134:
    // 0x210134: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x210134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
label_210138:
    // 0x210138: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x210138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
label_21013c:
    // 0x21013c: 0xc083fdc  jal         func_20FF70
label_210140:
    if (ctx->pc == 0x210140u) {
        ctx->pc = 0x210140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21013Cu;
        // 0x210140: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210144u;
        goto label_210144;
    }
    ctx->pc = 0x21013Cu;
    SET_GPR_U32(ctx, 31, 0x210144u);
    ctx->pc = 0x210140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21013Cu;
    // 0x210140: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FF70u, 0x21013Cu, 0x210144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210144u;
label_210144:
    // 0x210144: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x210144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_210148:
    // 0x210148: 0x9043bd24  lbu         $v1, -0x42DC($v0)
    ctx->pc = 0x210148u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950180)));
label_21014c:
    // 0x21014c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_210150:
    if (ctx->pc == 0x210150u) {
        ctx->pc = 0x210150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21014Cu;
        // 0x210150: 0x8e05010c  lw          $a1, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210154u;
        goto label_210154;
    }
    ctx->pc = 0x21014Cu;
    {
        const bool branch_taken_0x21014c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21014c) {
            ctx->pc = 0x210150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21014Cu;
            // 0x210150: 0x8e05010c  lw          $a1, 0x10C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210160u;
            goto label_210160;
        }
    }
    ctx->pc = 0x210154u;
label_210154:
    // 0x210154: 0xc0843aa  jal         func_210EA8
label_210158:
    if (ctx->pc == 0x210158u) {
        ctx->pc = 0x210158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210154u;
        // 0x210158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21015Cu;
        goto label_21015c;
    }
    ctx->pc = 0x210154u;
    SET_GPR_U32(ctx, 31, 0x21015Cu);
    ctx->pc = 0x210158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210154u;
    // 0x210158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210EA8u, 0x210154u, 0x21015Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21015Cu;
label_21015c:
    // 0x21015c: 0x8e05010c  lw          $a1, 0x10C($s0)
    ctx->pc = 0x21015cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_210160:
    // 0x210160: 0x10a0003d  beqz        $a1, . + 4 + (0x3D << 2)
label_210164:
    if (ctx->pc == 0x210164u) {
        ctx->pc = 0x210164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210160u;
        // 0x210164: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210168u;
        goto label_210168;
    }
    ctx->pc = 0x210160u;
    {
        const bool branch_taken_0x210160 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x210164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210160u;
        // 0x210164: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210160) {
            ctx->pc = 0x210258u;
            goto label_210258;
        }
    }
    ctx->pc = 0x210168u;
label_210168:
    // 0x210168: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x210168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_21016c:
    // 0x21016c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21016cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_210170:
    // 0x210170: 0x5464003a  bnel        $v1, $a0, . + 4 + (0x3A << 2)
label_210174:
    if (ctx->pc == 0x210174u) {
        ctx->pc = 0x210174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210170u;
        // 0x210174: 0x8e0400c0  lw          $a0, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210178u;
        goto label_210178;
    }
    ctx->pc = 0x210170u;
    {
        const bool branch_taken_0x210170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x210170) {
            ctx->pc = 0x210174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210170u;
            // 0x210174: 0x8e0400c0  lw          $a0, 0xC0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21025Cu;
            goto label_21025c;
        }
    }
    ctx->pc = 0x210178u;
label_210178:
    // 0x210178: 0x8ca20108  lw          $v0, 0x108($a1)
    ctx->pc = 0x210178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 264)));
label_21017c:
    // 0x21017c: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_210180:
    if (ctx->pc == 0x210180u) {
        ctx->pc = 0x210180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21017Cu;
        // 0x210180: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210184u;
        goto label_210184;
    }
    ctx->pc = 0x21017Cu;
    {
        const bool branch_taken_0x21017c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21017Cu;
        // 0x210180: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21017c) {
            ctx->pc = 0x210258u;
            goto label_210258;
        }
    }
    ctx->pc = 0x210184u;
label_210184:
    // 0x210184: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x210184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
label_210188:
    // 0x210188: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x210188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_21018c:
    // 0x21018c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_210190:
    if (ctx->pc == 0x210190u) {
        ctx->pc = 0x210190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21018Cu;
        // 0x210190: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210194u;
        goto label_210194;
    }
    ctx->pc = 0x21018Cu;
    {
        const bool branch_taken_0x21018c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21018Cu;
        // 0x210190: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21018c) {
            ctx->pc = 0x210210u;
            goto label_210210;
        }
    }
    ctx->pc = 0x210194u;
label_210194:
    // 0x210194: 0xc0bb5de  jal         func_2ED778
label_210198:
    if (ctx->pc == 0x210198u) {
        ctx->pc = 0x210198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210194u;
        // 0x210198: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21019Cu;
        goto label_21019c;
    }
    ctx->pc = 0x210194u;
    SET_GPR_U32(ctx, 31, 0x21019Cu);
    ctx->pc = 0x210198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210194u;
    // 0x210198: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED778u, 0x210194u, 0x21019Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21019Cu;
label_21019c:
    // 0x21019c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_2101a0:
    if (ctx->pc == 0x2101A0u) {
        ctx->pc = 0x2101A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21019Cu;
        // 0x2101a0: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2101A4u;
        goto label_2101a4;
    }
    ctx->pc = 0x21019Cu;
    {
        const bool branch_taken_0x21019c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2101A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21019Cu;
        // 0x2101a0: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21019c) {
            ctx->pc = 0x210210u;
            goto label_210210;
        }
    }
    ctx->pc = 0x2101A4u;
label_2101a4:
    // 0x2101a4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2101a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2101a8:
    // 0x2101a8: 0x8c62bd50  lw          $v0, -0x42B0($v1)
    ctx->pc = 0x2101a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950224)));
label_2101ac:
    // 0x2101ac: 0xc44000d0  lwc1        $f0, 0xD0($v0)
    ctx->pc = 0x2101acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2101b0:
    // 0x2101b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2101b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2101b4:
    // 0x2101b4: 0x0  nop
    ctx->pc = 0x2101b4u;
    // NOP
label_2101b8:
    // 0x2101b8: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_2101bc:
    if (ctx->pc == 0x2101BCu) {
        ctx->pc = 0x2101BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101B8u;
        // 0x2101bc: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2101C0u;
        goto label_2101c0;
    }
    ctx->pc = 0x2101B8u;
    {
        const bool branch_taken_0x2101b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2101BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101B8u;
        // 0x2101bc: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2101b8) {
            ctx->pc = 0x210210u;
            goto label_210210;
        }
    }
    ctx->pc = 0x2101C0u;
label_2101c0:
    // 0x2101c0: 0x8e0400c0  lw          $a0, 0xC0($s0)
    ctx->pc = 0x2101c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_2101c4:
    // 0x2101c4: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x2101c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2101c8:
    // 0x2101c8: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_2101cc:
    if (ctx->pc == 0x2101CCu) {
        ctx->pc = 0x2101CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101C8u;
        // 0x2101cc: 0x831025  or          $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2101D0u;
        goto label_2101d0;
    }
    ctx->pc = 0x2101C8u;
    {
        const bool branch_taken_0x2101c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2101CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101C8u;
        // 0x2101cc: 0x831025  or          $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2101c8) {
            ctx->pc = 0x2101DCu;
            goto label_2101dc;
        }
    }
    ctx->pc = 0x2101D0u;
label_2101d0:
    // 0x2101d0: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x2101d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
label_2101d4:
    // 0x2101d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2101d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2101d8:
    // 0x2101d8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2101d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_2101dc:
    // 0x2101dc: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x2101dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
label_2101e0:
    // 0x2101e0: 0x8e0400c0  lw          $a0, 0xC0($s0)
    ctx->pc = 0x2101e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_2101e4:
    // 0x2101e4: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x2101e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_2101e8:
    // 0x2101e8: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x2101e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2101ec:
    // 0x2101ec: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_2101f0:
    if (ctx->pc == 0x2101F0u) {
        ctx->pc = 0x2101F4u;
        goto label_2101f4;
    }
    ctx->pc = 0x2101ECu;
    {
        const bool branch_taken_0x2101ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2101ec) {
            ctx->pc = 0x210200u;
            goto label_210200;
        }
    }
    ctx->pc = 0x2101F4u;
label_2101f4:
    // 0x2101f4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2101f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_2101f8:
    // 0x2101f8: 0x10000022  b           . + 4 + (0x22 << 2)
label_2101fc:
    if (ctx->pc == 0x2101FCu) {
        ctx->pc = 0x2101FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101F8u;
        // 0x2101fc: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210200u;
        goto label_210200;
    }
    ctx->pc = 0x2101F8u;
    {
        const bool branch_taken_0x2101f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2101FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101F8u;
        // 0x2101fc: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2101f8) {
            ctx->pc = 0x210284u;
            goto label_210284;
        }
    }
    ctx->pc = 0x210200u;
label_210200:
    // 0x210200: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x210200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_210204:
    // 0x210204: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x210204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_210208:
    // 0x210208: 0x1000001e  b           . + 4 + (0x1E << 2)
label_21020c:
    if (ctx->pc == 0x21020Cu) {
        ctx->pc = 0x21020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210208u;
        // 0x21020c: 0x821024  and         $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210210u;
        goto label_210210;
    }
    ctx->pc = 0x210208u;
    {
        const bool branch_taken_0x210208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210208u;
        // 0x21020c: 0x821024  and         $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210208) {
            ctx->pc = 0x210284u;
            goto label_210284;
        }
    }
    ctx->pc = 0x210210u;
label_210210:
    // 0x210210: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x210210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_210214:
    // 0x210214: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x210214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_210218:
    // 0x210218: 0x8c830108  lw          $v1, 0x108($a0)
    ctx->pc = 0x210218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
label_21021c:
    // 0x21021c: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x21021cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_210220:
    // 0x210220: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x210220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_210224:
    // 0x210224: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_210228:
    if (ctx->pc == 0x210228u) {
        ctx->pc = 0x210228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210224u;
        // 0x210228: 0x8e0200c0  lw          $v0, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21022Cu;
        goto label_21022c;
    }
    ctx->pc = 0x210224u;
    {
        const bool branch_taken_0x210224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x210224) {
            ctx->pc = 0x210228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210224u;
            // 0x210228: 0x8e0200c0  lw          $v0, 0xC0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21028Cu;
            goto label_21028c;
        }
    }
    ctx->pc = 0x21022Cu;
label_21022c:
    // 0x21022c: 0x8e0400c0  lw          $a0, 0xC0($s0)
    ctx->pc = 0x21022cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_210230:
    // 0x210230: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x210230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_210234:
    // 0x210234: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x210234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_210238:
    // 0x210238: 0x54430014  bnel        $v0, $v1, . + 4 + (0x14 << 2)
label_21023c:
    if (ctx->pc == 0x21023Cu) {
        ctx->pc = 0x21023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210238u;
        // 0x21023c: 0x8e0200c0  lw          $v0, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210240u;
        goto label_210240;
    }
    ctx->pc = 0x210238u;
    {
        const bool branch_taken_0x210238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x210238) {
            ctx->pc = 0x21023Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210238u;
            // 0x21023c: 0x8e0200c0  lw          $v0, 0xC0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21028Cu;
            goto label_21028c;
        }
    }
    ctx->pc = 0x210240u;
label_210240:
    // 0x210240: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x210240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
label_210244:
    // 0x210244: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x210244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_210248:
    // 0x210248: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x210248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_21024c:
    // 0x21024c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x21024cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_210250:
    // 0x210250: 0x1000000c  b           . + 4 + (0xC << 2)
label_210254:
    if (ctx->pc == 0x210254u) {
        ctx->pc = 0x210254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210250u;
        // 0x210254: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210258u;
        goto label_210258;
    }
    ctx->pc = 0x210250u;
    {
        const bool branch_taken_0x210250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210250u;
        // 0x210254: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210250) {
            ctx->pc = 0x210284u;
            goto label_210284;
        }
    }
    ctx->pc = 0x210258u;
label_210258:
    // 0x210258: 0x8e0400c0  lw          $a0, 0xC0($s0)
    ctx->pc = 0x210258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_21025c:
    // 0x21025c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x21025cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_210260:
    // 0x210260: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x210260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_210264:
    // 0x210264: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
label_210268:
    if (ctx->pc == 0x210268u) {
        ctx->pc = 0x210268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210264u;
        // 0x210268: 0x8e0200c0  lw          $v0, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21026Cu;
        goto label_21026c;
    }
    ctx->pc = 0x210264u;
    {
        const bool branch_taken_0x210264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x210264) {
            ctx->pc = 0x210268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210264u;
            // 0x210268: 0x8e0200c0  lw          $v0, 0xC0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21028Cu;
            goto label_21028c;
        }
    }
    ctx->pc = 0x21026Cu;
label_21026c:
    // 0x21026c: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x21026cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
label_210270:
    // 0x210270: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x210270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
label_210274:
    // 0x210274: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x210274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_210278:
    // 0x210278: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x210278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_21027c:
    // 0x21027c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x21027cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_210280:
    // 0x210280: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x210280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_210284:
    // 0x210284: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x210284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
label_210288:
    // 0x210288: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x210288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_21028c:
    // 0x21028c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x21028cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_210290:
    // 0x210290: 0x544000c5  bnel        $v0, $zero, . + 4 + (0xC5 << 2)
label_210294:
    if (ctx->pc == 0x210294u) {
        ctx->pc = 0x210294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210290u;
        // 0x210294: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210298u;
        goto label_210298;
    }
    ctx->pc = 0x210290u;
    {
        const bool branch_taken_0x210290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x210290) {
            ctx->pc = 0x210294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210290u;
            // 0x210294: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2105A8u;
            goto label_2105a8;
        }
    }
    ctx->pc = 0x210298u;
label_210298:
    // 0x210298: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x210298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_21029c:
    // 0x21029c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_2102a0:
    if (ctx->pc == 0x2102A0u) {
        ctx->pc = 0x2102A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21029Cu;
        // 0x2102a0: 0x8e04010c  lw          $a0, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2102A4u;
        goto label_2102a4;
    }
    ctx->pc = 0x21029Cu;
    {
        const bool branch_taken_0x21029c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21029c) {
            ctx->pc = 0x2102A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21029Cu;
            // 0x2102a0: 0x8e04010c  lw          $a0, 0x10C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2102B0u;
            goto label_2102b0;
        }
    }
    ctx->pc = 0x2102A4u;
label_2102a4:
    // 0x2102a4: 0xc0757d2  jal         func_1D5F48
label_2102a8:
    if (ctx->pc == 0x2102A8u) {
        ctx->pc = 0x2102A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2102A4u;
        // 0x2102a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2102ACu;
        goto label_2102ac;
    }
    ctx->pc = 0x2102A4u;
    SET_GPR_U32(ctx, 31, 0x2102ACu);
    ctx->pc = 0x2102A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2102A4u;
    // 0x2102a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F48u, 0x2102A4u, 0x2102ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2102ACu;
label_2102ac:
    // 0x2102ac: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x2102acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_2102b0:
    // 0x2102b0: 0x108000a0  beqz        $a0, . + 4 + (0xA0 << 2)
label_2102b4:
    if (ctx->pc == 0x2102B4u) {
        ctx->pc = 0x2102B8u;
        goto label_2102b8;
    }
    ctx->pc = 0x2102B0u;
    {
        const bool branch_taken_0x2102b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2102b0) {
            ctx->pc = 0x210534u;
            goto label_210534;
        }
    }
    ctx->pc = 0x2102B8u;
label_2102b8:
    // 0x2102b8: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x2102b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_2102bc:
    // 0x2102bc: 0x1040009d  beqz        $v0, . + 4 + (0x9D << 2)
label_2102c0:
    if (ctx->pc == 0x2102C0u) {
        ctx->pc = 0x2102C4u;
        goto label_2102c4;
    }
    ctx->pc = 0x2102BCu;
    {
        const bool branch_taken_0x2102bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2102bc) {
            ctx->pc = 0x210534u;
            goto label_210534;
        }
    }
    ctx->pc = 0x2102C4u;
label_2102c4:
    // 0x2102c4: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2102c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2102c8:
    // 0x2102c8: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x2102c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_2102cc:
    // 0x2102cc: 0x40f809  jalr        $v0
label_2102d0:
    if (ctx->pc == 0x2102D0u) {
        ctx->pc = 0x2102D4u;
        goto label_2102d4;
    }
    ctx->pc = 0x2102CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2102D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2102CCu, 0x2102D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2102D4u;
label_2102d4:
    // 0x2102d4: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x2102d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_2102d8:
    // 0x2102d8: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x2102d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2102dc:
    // 0x2102dc: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2102dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2102e0:
    // 0x2102e0: 0x60f809  jalr        $v1
label_2102e4:
    if (ctx->pc == 0x2102E4u) {
        ctx->pc = 0x2102E8u;
        goto label_2102e8;
    }
    ctx->pc = 0x2102E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2102E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2102E0u, 0x2102E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2102E8u;
label_2102e8:
    // 0x2102e8: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x2102e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_2102ec:
    // 0x2102ec: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2102ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2102f0:
    // 0x2102f0: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2102f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_2102f4:
    // 0x2102f4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_2102f8:
    if (ctx->pc == 0x2102F8u) {
        ctx->pc = 0x2102F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2102F4u;
        // 0x2102f8: 0x8e110334  lw          $s1, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2102FCu;
        goto label_2102fc;
    }
    ctx->pc = 0x2102F4u;
    {
        const bool branch_taken_0x2102f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2102f4) {
            ctx->pc = 0x2102F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2102F4u;
            // 0x2102f8: 0x8e110334  lw          $s1, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210318u;
            goto label_210318;
        }
    }
    ctx->pc = 0x2102FCu;
label_2102fc:
    // 0x2102fc: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x2102fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_210300:
    // 0x210300: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x210300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_210304:
    // 0x210304: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x210304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_210308:
    // 0x210308: 0x40f809  jalr        $v0
label_21030c:
    if (ctx->pc == 0x21030Cu) {
        ctx->pc = 0x210310u;
        goto label_210310;
    }
    ctx->pc = 0x210308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x210310u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210308u, 0x210310u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210310u;
label_210310:
    // 0x210310: 0x10000088  b           . + 4 + (0x88 << 2)
label_210314:
    if (ctx->pc == 0x210314u) {
        ctx->pc = 0x210318u;
        goto label_210318;
    }
    ctx->pc = 0x210310u;
    {
        const bool branch_taken_0x210310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x210310) {
            ctx->pc = 0x210534u;
            goto label_210534;
        }
    }
    ctx->pc = 0x210318u;
label_210318:
    // 0x210318: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x210318u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21031c:
    // 0x21031c: 0x8e14010c  lw          $s4, 0x10C($s0)
    ctx->pc = 0x21031cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_210320:
    // 0x210320: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x210320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_210324:
    // 0x210324: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x210324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
label_210328:
    // 0x210328: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x210328u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_21032c:
    // 0x21032c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_210330:
    if (ctx->pc == 0x210330u) {
        ctx->pc = 0x210330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21032Cu;
        // 0x210330: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210334u;
        goto label_210334;
    }
    ctx->pc = 0x21032Cu;
    {
        const bool branch_taken_0x21032c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21032Cu;
        // 0x210330: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21032c) {
            ctx->pc = 0x210368u;
            goto label_210368;
        }
    }
    ctx->pc = 0x210334u;
label_210334:
    // 0x210334: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x210334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_210338:
    // 0x210338: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
label_21033c:
    if (ctx->pc == 0x21033Cu) {
        ctx->pc = 0x21033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210338u;
        // 0x21033c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210340u;
        goto label_210340;
    }
    ctx->pc = 0x210338u;
    {
        const bool branch_taken_0x210338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x210338) {
            ctx->pc = 0x21033Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210338u;
            // 0x21033c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21036Cu;
            goto label_21036c;
        }
    }
    ctx->pc = 0x210340u;
label_210340:
    // 0x210340: 0xc0924a8  jal         func_2492A0
label_210344:
    if (ctx->pc == 0x210344u) {
        ctx->pc = 0x210344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210340u;
        // 0x210344: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210348u;
        goto label_210348;
    }
    ctx->pc = 0x210340u;
    SET_GPR_U32(ctx, 31, 0x210348u);
    ctx->pc = 0x210344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210340u;
    // 0x210344: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x210340u, 0x210348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210348u;
label_210348:
    // 0x210348: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_21034c:
    if (ctx->pc == 0x21034Cu) {
        ctx->pc = 0x21034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210348u;
        // 0x21034c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210350u;
        goto label_210350;
    }
    ctx->pc = 0x210348u;
    {
        const bool branch_taken_0x210348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x210348) {
            ctx->pc = 0x21034Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210348u;
            // 0x21034c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21036Cu;
            goto label_21036c;
        }
    }
    ctx->pc = 0x210350u;
label_210350:
    // 0x210350: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x210350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_210354:
    // 0x210354: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x210354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_210358:
    // 0x210358: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_21035c:
    if (ctx->pc == 0x21035Cu) {
        ctx->pc = 0x21035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210358u;
        // 0x21035c: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210360u;
        goto label_210360;
    }
    ctx->pc = 0x210358u;
    {
        const bool branch_taken_0x210358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210358u;
        // 0x21035c: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210358) {
            ctx->pc = 0x210368u;
            goto label_210368;
        }
    }
    ctx->pc = 0x210360u;
label_210360:
    // 0x210360: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_210364:
    if (ctx->pc == 0x210364u) {
        ctx->pc = 0x210368u;
        goto label_210368;
    }
    ctx->pc = 0x210360u;
    {
        const bool branch_taken_0x210360 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x210360) {
            ctx->pc = 0x21036Cu;
            goto label_21036c;
        }
    }
    ctx->pc = 0x210368u;
label_210368:
    // 0x210368: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x210368u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21036c:
    // 0x21036c: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_210370:
    if (ctx->pc == 0x210370u) {
        ctx->pc = 0x210374u;
        goto label_210374;
    }
    ctx->pc = 0x21036Cu;
    {
        const bool branch_taken_0x21036c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x21036c) {
            ctx->pc = 0x21038Cu;
            goto label_21038c;
        }
    }
    ctx->pc = 0x210374u;
label_210374:
    // 0x210374: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x210374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_210378:
    // 0x210378: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x210378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_21037c:
    // 0x21037c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x21037cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_210380:
    // 0x210380: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x210380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_210384:
    // 0x210384: 0x38630041  xori        $v1, $v1, 0x41
    ctx->pc = 0x210384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)65);
label_210388:
    // 0x210388: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x210388u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_21038c:
    // 0x21038c: 0x12600069  beqz        $s3, . + 4 + (0x69 << 2)
label_210390:
    if (ctx->pc == 0x210390u) {
        ctx->pc = 0x210394u;
        goto label_210394;
    }
    ctx->pc = 0x21038Cu;
    {
        const bool branch_taken_0x21038c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x21038c) {
            ctx->pc = 0x210534u;
            goto label_210534;
        }
    }
    ctx->pc = 0x210394u;
label_210394:
    // 0x210394: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x210394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_210398:
    // 0x210398: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x210398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_21039c:
    // 0x21039c: 0x14400065  bnez        $v0, . + 4 + (0x65 << 2)
label_2103a0:
    if (ctx->pc == 0x2103A0u) {
        ctx->pc = 0x2103A4u;
        goto label_2103a4;
    }
    ctx->pc = 0x21039Cu;
    {
        const bool branch_taken_0x21039c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21039c) {
            ctx->pc = 0x210534u;
            goto label_210534;
        }
    }
    ctx->pc = 0x2103A4u;
label_2103a4:
    // 0x2103a4: 0x8e820098  lw          $v0, 0x98($s4)
    ctx->pc = 0x2103a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 152)));
label_2103a8:
    // 0x2103a8: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
label_2103ac:
    if (ctx->pc == 0x2103ACu) {
        ctx->pc = 0x2103B0u;
        goto label_2103b0;
    }
    ctx->pc = 0x2103A8u;
    {
        const bool branch_taken_0x2103a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2103a8) {
            ctx->pc = 0x210534u;
            goto label_210534;
        }
    }
    ctx->pc = 0x2103B0u;
label_2103b0:
    // 0x2103b0: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x2103b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_2103b4:
    // 0x2103b4: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2103b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2103b8:
    // 0x2103b8: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x2103b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2103bc:
    // 0x2103bc: 0x1080005d  beqz        $a0, . + 4 + (0x5D << 2)
label_2103c0:
    if (ctx->pc == 0x2103C0u) {
        ctx->pc = 0x2103C4u;
        goto label_2103c4;
    }
    ctx->pc = 0x2103BCu;
    {
        const bool branch_taken_0x2103bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2103bc) {
            ctx->pc = 0x210534u;
            goto label_210534;
        }
    }
    ctx->pc = 0x2103C4u;
label_2103c4:
    // 0x2103c4: 0xc07957c  jal         func_1E55F0
label_2103c8:
    if (ctx->pc == 0x2103C8u) {
        ctx->pc = 0x2103C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2103C4u;
        // 0x2103c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2103CCu;
        goto label_2103cc;
    }
    ctx->pc = 0x2103C4u;
    SET_GPR_U32(ctx, 31, 0x2103CCu);
    ctx->pc = 0x2103C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2103C4u;
    // 0x2103c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E55F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E55F0u, 0x2103C4u, 0x2103CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2103CCu;
label_2103cc:
    // 0x2103cc: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x2103ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_2103d0:
    // 0x2103d0: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x2103d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_2103d4:
    // 0x2103d4: 0x27ab0030  addiu       $t3, $sp, 0x30
    ctx->pc = 0x2103d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2103d8:
    // 0x2103d8: 0x24460040  addiu       $a2, $v0, 0x40
    ctx->pc = 0x2103d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_2103dc:
    // 0x2103dc: 0xa3a30060  sb          $v1, 0x60($sp)
    ctx->pc = 0x2103dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 3));
label_2103e0:
    // 0x2103e0: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2103e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2103e4:
    // 0x2103e4: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x2103e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2103e8:
    // 0x2103e8: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x2103e8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
label_2103ec:
    // 0x2103ec: 0x78440010  lq          $a0, 0x10($v0)
    ctx->pc = 0x2103ecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_2103f0:
    // 0x2103f0: 0x27aa0010  addiu       $t2, $sp, 0x10
    ctx->pc = 0x2103f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2103f4:
    // 0x2103f4: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x2103f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
label_2103f8:
    // 0x2103f8: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x2103f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2103fc:
    // 0x2103fc: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2103fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_210400:
    // 0x210400: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x210400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_210404:
    // 0x210404: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x210404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_210408:
    // 0x210408: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x210408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21040c:
    // 0x21040c: 0xe5610004  swc1        $f1, 0x4($t3)
    ctx->pc = 0x21040cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
label_210410:
    // 0x210410: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x210410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_210414:
    // 0x210414: 0xe5600008  swc1        $f0, 0x8($t3)
    ctx->pc = 0x210414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
label_210418:
    // 0x210418: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x210418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21041c:
    // 0x21041c: 0xe561000c  swc1        $f1, 0xC($t3)
    ctx->pc = 0x21041cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 12), bits); }
label_210420:
    // 0x210420: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x210420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_210424:
    // 0x210424: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x210424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_210428:
    // 0x210428: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x210428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21042c:
    // 0x21042c: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x21042cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_210430:
    // 0x210430: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x210430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_210434:
    // 0x210434: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x210434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_210438:
    // 0x210438: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x210438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21043c:
    // 0x21043c: 0xe4e1000c  swc1        $f1, 0xC($a3)
    ctx->pc = 0x21043cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_210440:
    // 0x210440: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x210440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_210444:
    // 0x210444: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x210444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_210448:
    // 0x210448: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x210448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_21044c:
    // 0x21044c: 0xc4410054  lwc1        $f1, 0x54($v0)
    ctx->pc = 0x21044cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_210450:
    // 0x210450: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x210450u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_210454:
    // 0x210454: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x210454u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_210458:
    // 0x210458: 0xc5020004  lwc1        $f2, 0x4($t0)
    ctx->pc = 0x210458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_21045c:
    // 0x21045c: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x21045cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_210460:
    // 0x210460: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x210460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_210464:
    // 0x210464: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x210464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_210468:
    // 0x210468: 0xc501000c  lwc1        $f1, 0xC($t0)
    ctx->pc = 0x210468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21046c:
    // 0x21046c: 0xe7a1007c  swc1        $f1, 0x7C($sp)
    ctx->pc = 0x21046cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_210470:
    // 0x210470: 0xc52096a4  lwc1        $f0, -0x695C($t1)
    ctx->pc = 0x210470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294940324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_210474:
    // 0x210474: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x210474u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_210478:
    // 0x210478: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x210478u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_21047c:
    // 0x21047c: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x21047cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_210480:
    // 0x210480: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x210480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_210484:
    // 0x210484: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x210484u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_210488:
    // 0x210488: 0xd9420000  lqc2        $vf2, 0x0($t2)
    ctx->pc = 0x210488u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_21048c:
    // 0x21048c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x21048cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_210490:
    // 0x210490: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x210490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_210494:
    // 0x210494: 0xc5620000  lwc1        $f2, 0x0($t3)
    ctx->pc = 0x210494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_210498:
    // 0x210498: 0xc5630004  lwc1        $f3, 0x4($t3)
    ctx->pc = 0x210498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_21049c:
    // 0x21049c: 0xc5640008  lwc1        $f4, 0x8($t3)
    ctx->pc = 0x21049cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2104a0:
    // 0x2104a0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2104a0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2104a4:
    // 0x2104a4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2104a4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2104a8:
    // 0x2104a8: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2104a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2104ac:
    // 0x2104ac: 0x0  nop
    ctx->pc = 0x2104acu;
    // NOP
label_2104b0:
    // 0x2104b0: 0x0  nop
    ctx->pc = 0x2104b0u;
    // NOP
label_2104b4:
    // 0x2104b4: 0x46010084  c1          0x10084
    ctx->pc = 0x2104b4u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
label_2104b8:
    // 0x2104b8: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x2104b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_2104bc:
    // 0x2104bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2104bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2104c0:
    // 0x2104c0: 0x0  nop
    ctx->pc = 0x2104c0u;
    // NOP
label_2104c4:
    // 0x2104c4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2104c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2104c8:
    // 0x2104c8: 0x0  nop
    ctx->pc = 0x2104c8u;
    // NOP
label_2104cc:
    // 0x2104cc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_2104d0:
    if (ctx->pc == 0x2104D0u) {
        ctx->pc = 0x2104D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2104CCu;
        // 0x2104d0: 0xe7a20050  swc1        $f2, 0x50($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2104D4u;
        goto label_2104d4;
    }
    ctx->pc = 0x2104CCu;
    {
        const bool branch_taken_0x2104cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2104D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2104CCu;
        // 0x2104d0: 0xe7a20050  swc1        $f2, 0x50($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2104cc) {
            ctx->pc = 0x2104F8u;
            goto label_2104f8;
        }
    }
    ctx->pc = 0x2104D4u;
label_2104d4:
    // 0x2104d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2104d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2104d8:
    // 0x2104d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2104d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2104dc:
    // 0x2104dc: 0x0  nop
    ctx->pc = 0x2104dcu;
    // NOP
label_2104e0:
    // 0x2104e0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2104e0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_2104e4:
    // 0x2104e4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2104e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2104e8:
    // 0x2104e8: 0xd9610000  lqc2        $vf1, 0x0($t3)
    ctx->pc = 0x2104e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
label_2104ec:
    // 0x2104ec: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2104ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2104f0:
    // 0x2104f0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2104f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2104f4:
    // 0x2104f4: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2104f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2104f8:
    // 0x2104f8: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x2104f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2104fc:
    // 0x2104fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2104fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_210500:
    // 0x210500: 0xc076e46  jal         func_1DB918
label_210504:
    if (ctx->pc == 0x210504u) {
        ctx->pc = 0x210504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210500u;
        // 0x210504: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210508u;
        goto label_210508;
    }
    ctx->pc = 0x210500u;
    SET_GPR_U32(ctx, 31, 0x210508u);
    ctx->pc = 0x210504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210500u;
    // 0x210504: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x210500u, 0x210508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210508u;
label_210508:
    // 0x210508: 0x3c05fbff  lui         $a1, 0xFBFF
    ctx->pc = 0x210508u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64511 << 16));
label_21050c:
    // 0x21050c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21050cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_210510:
    // 0x210510: 0xc07788a  jal         func_1DE228
label_210514:
    if (ctx->pc == 0x210514u) {
        ctx->pc = 0x210514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210510u;
        // 0x210514: 0x34a5fffe  ori         $a1, $a1, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        ctx->pc = 0x210518u;
        goto label_210518;
    }
    ctx->pc = 0x210510u;
    SET_GPR_U32(ctx, 31, 0x210518u);
    ctx->pc = 0x210514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210510u;
    // 0x210514: 0x34a5fffe  ori         $a1, $a1, 0xFFFE (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE228u, 0x210510u, 0x210518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210518u;
label_210518:
    // 0x210518: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_21051c:
    if (ctx->pc == 0x21051Cu) {
        ctx->pc = 0x21051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210518u;
        // 0x21051c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210520u;
        goto label_210520;
    }
    ctx->pc = 0x210518u;
    {
        const bool branch_taken_0x210518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x210518) {
            ctx->pc = 0x21051Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210518u;
            // 0x21051c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21052Cu;
            goto label_21052c;
        }
    }
    ctx->pc = 0x210520u;
label_210520:
    // 0x210520: 0xc0b8138  jal         func_2E04E0
label_210524:
    if (ctx->pc == 0x210524u) {
        ctx->pc = 0x210524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210520u;
        // 0x210524: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210528u;
        goto label_210528;
    }
    ctx->pc = 0x210520u;
    SET_GPR_U32(ctx, 31, 0x210528u);
    ctx->pc = 0x210524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210520u;
    // 0x210524: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E04E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E04E0u, 0x210520u, 0x210528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210528u;
label_210528:
    // 0x210528: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x210528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21052c:
    // 0x21052c: 0xc076e38  jal         func_1DB8E0
label_210530:
    if (ctx->pc == 0x210530u) {
        ctx->pc = 0x210530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21052Cu;
        // 0x210530: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210534u;
        goto label_210534;
    }
    ctx->pc = 0x21052Cu;
    SET_GPR_U32(ctx, 31, 0x210534u);
    ctx->pc = 0x210530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21052Cu;
    // 0x210530: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x21052Cu, 0x210534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210534u;
label_210534:
    // 0x210534: 0xc083faa  jal         func_20FEA8
label_210538:
    if (ctx->pc == 0x210538u) {
        ctx->pc = 0x210538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210534u;
        // 0x210538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21053Cu;
        goto label_21053c;
    }
    ctx->pc = 0x210534u;
    SET_GPR_U32(ctx, 31, 0x21053Cu);
    ctx->pc = 0x210538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210534u;
    // 0x210538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FEA8u, 0x210534u, 0x21053Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21053Cu;
label_21053c:
    // 0x21053c: 0x8e0500c0  lw          $a1, 0xC0($s0)
    ctx->pc = 0x21053cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_210540:
    // 0x210540: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x210540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_210544:
    // 0x210544: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x210544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_210548:
    // 0x210548: 0x3c03fffd  lui         $v1, 0xFFFD
    ctx->pc = 0x210548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65533 << 16));
label_21054c:
    // 0x21054c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x21054cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_210550:
    // 0x210550: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x210550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_210554:
    // 0x210554: 0x3c04fffb  lui         $a0, 0xFFFB
    ctx->pc = 0x210554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65531 << 16));
label_210558:
    // 0x210558: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x210558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_21055c:
    // 0x21055c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x21055cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_210560:
    // 0x210560: 0x30a50200  andi        $a1, $a1, 0x200
    ctx->pc = 0x210560u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)512);
label_210564:
    // 0x210564: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x210564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_210568:
    // 0x210568: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
label_21056c:
    if (ctx->pc == 0x21056Cu) {
        ctx->pc = 0x21056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210568u;
        // 0x21056c: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210570u;
        goto label_210570;
    }
    ctx->pc = 0x210568u;
    {
        const bool branch_taken_0x210568 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210568u;
        // 0x21056c: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210568) {
            ctx->pc = 0x2105A4u;
            goto label_2105a4;
        }
    }
    ctx->pc = 0x210570u;
label_210570:
    // 0x210570: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x210570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_210574:
    // 0x210574: 0xc085d4e  jal         func_217538
label_210578:
    if (ctx->pc == 0x210578u) {
        ctx->pc = 0x210578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210574u;
        // 0x210578: 0x8c44017c  lw          $a0, 0x17C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21057Cu;
        goto label_21057c;
    }
    ctx->pc = 0x210574u;
    SET_GPR_U32(ctx, 31, 0x21057Cu);
    ctx->pc = 0x210578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210574u;
    // 0x210578: 0x8c44017c  lw          $a0, 0x17C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 380)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217538u, 0x210574u, 0x21057Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21057Cu;
label_21057c:
    // 0x21057c: 0xae0201b0  sw          $v0, 0x1B0($s0)
    ctx->pc = 0x21057cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 2));
label_210580:
    // 0x210580: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x210580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_210584:
    // 0x210584: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x210584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_210588:
    // 0x210588: 0xc0c2e94  jal         func_30BA50
label_21058c:
    if (ctx->pc == 0x21058Cu) {
        ctx->pc = 0x21058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210588u;
        // 0x21058c: 0x8c450184  lw          $a1, 0x184($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210590u;
        goto label_210590;
    }
    ctx->pc = 0x210588u;
    SET_GPR_U32(ctx, 31, 0x210590u);
    ctx->pc = 0x21058Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210588u;
    // 0x21058c: 0x8c450184  lw          $a1, 0x184($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BA50u, 0x210588u, 0x210590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210590u;
label_210590:
    // 0x210590: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x210590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_210594:
    // 0x210594: 0x2404fdff  addiu       $a0, $zero, -0x201
    ctx->pc = 0x210594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
label_210598:
    // 0x210598: 0xae0201b4  sw          $v0, 0x1B4($s0)
    ctx->pc = 0x210598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 2));
label_21059c:
    // 0x21059c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x21059cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_2105a0:
    // 0x2105a0: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x2105a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
label_2105a4:
    // 0x2105a4: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x2105a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2105a8:
    // 0x2105a8: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x2105a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_2105ac:
    // 0x2105ac: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x2105acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2105b0:
    // 0x2105b0: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x2105b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_2105b4:
    // 0x2105b4: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x2105b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2105b8:
    // 0x2105b8: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x2105b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_2105bc:
    // 0x2105bc: 0x3e00008  jr          $ra
label_2105c0:
    if (ctx->pc == 0x2105C0u) {
        ctx->pc = 0x2105C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2105BCu;
        // 0x2105c0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2105C4u;
        goto label_2105c4;
    }
    ctx->pc = 0x2105BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2105C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2105BCu;
        // 0x2105c0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2105BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2105C4u;
label_2105c4:
    // 0x2105c4: 0x0  nop
    ctx->pc = 0x2105c4u;
    // NOP
    ctx->pc = 0x2105c8u;
}
