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

// Function: sub_00192200
// Address: 0x192200 - 0x192640
void sub_00192200_0x192200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192200_0x192200");
#endif

    switch (ctx->pc) {
        case 0x192200u: goto label_192200;
        case 0x192204u: goto label_192204;
        case 0x192208u: goto label_192208;
        case 0x19220cu: goto label_19220c;
        case 0x192210u: goto label_192210;
        case 0x192214u: goto label_192214;
        case 0x192218u: goto label_192218;
        case 0x19221cu: goto label_19221c;
        case 0x192220u: goto label_192220;
        case 0x192224u: goto label_192224;
        case 0x192228u: goto label_192228;
        case 0x19222cu: goto label_19222c;
        case 0x192230u: goto label_192230;
        case 0x192234u: goto label_192234;
        case 0x192238u: goto label_192238;
        case 0x19223cu: goto label_19223c;
        case 0x192240u: goto label_192240;
        case 0x192244u: goto label_192244;
        case 0x192248u: goto label_192248;
        case 0x19224cu: goto label_19224c;
        case 0x192250u: goto label_192250;
        case 0x192254u: goto label_192254;
        case 0x192258u: goto label_192258;
        case 0x19225cu: goto label_19225c;
        case 0x192260u: goto label_192260;
        case 0x192264u: goto label_192264;
        case 0x192268u: goto label_192268;
        case 0x19226cu: goto label_19226c;
        case 0x192270u: goto label_192270;
        case 0x192274u: goto label_192274;
        case 0x192278u: goto label_192278;
        case 0x19227cu: goto label_19227c;
        case 0x192280u: goto label_192280;
        case 0x192284u: goto label_192284;
        case 0x192288u: goto label_192288;
        case 0x19228cu: goto label_19228c;
        case 0x192290u: goto label_192290;
        case 0x192294u: goto label_192294;
        case 0x192298u: goto label_192298;
        case 0x19229cu: goto label_19229c;
        case 0x1922a0u: goto label_1922a0;
        case 0x1922a4u: goto label_1922a4;
        case 0x1922a8u: goto label_1922a8;
        case 0x1922acu: goto label_1922ac;
        case 0x1922b0u: goto label_1922b0;
        case 0x1922b4u: goto label_1922b4;
        case 0x1922b8u: goto label_1922b8;
        case 0x1922bcu: goto label_1922bc;
        case 0x1922c0u: goto label_1922c0;
        case 0x1922c4u: goto label_1922c4;
        case 0x1922c8u: goto label_1922c8;
        case 0x1922ccu: goto label_1922cc;
        case 0x1922d0u: goto label_1922d0;
        case 0x1922d4u: goto label_1922d4;
        case 0x1922d8u: goto label_1922d8;
        case 0x1922dcu: goto label_1922dc;
        case 0x1922e0u: goto label_1922e0;
        case 0x1922e4u: goto label_1922e4;
        case 0x1922e8u: goto label_1922e8;
        case 0x1922ecu: goto label_1922ec;
        case 0x1922f0u: goto label_1922f0;
        case 0x1922f4u: goto label_1922f4;
        case 0x1922f8u: goto label_1922f8;
        case 0x1922fcu: goto label_1922fc;
        case 0x192300u: goto label_192300;
        case 0x192304u: goto label_192304;
        case 0x192308u: goto label_192308;
        case 0x19230cu: goto label_19230c;
        case 0x192310u: goto label_192310;
        case 0x192314u: goto label_192314;
        case 0x192318u: goto label_192318;
        case 0x19231cu: goto label_19231c;
        case 0x192320u: goto label_192320;
        case 0x192324u: goto label_192324;
        case 0x192328u: goto label_192328;
        case 0x19232cu: goto label_19232c;
        case 0x192330u: goto label_192330;
        case 0x192334u: goto label_192334;
        case 0x192338u: goto label_192338;
        case 0x19233cu: goto label_19233c;
        case 0x192340u: goto label_192340;
        case 0x192344u: goto label_192344;
        case 0x192348u: goto label_192348;
        case 0x19234cu: goto label_19234c;
        case 0x192350u: goto label_192350;
        case 0x192354u: goto label_192354;
        case 0x192358u: goto label_192358;
        case 0x19235cu: goto label_19235c;
        case 0x192360u: goto label_192360;
        case 0x192364u: goto label_192364;
        case 0x192368u: goto label_192368;
        case 0x19236cu: goto label_19236c;
        case 0x192370u: goto label_192370;
        case 0x192374u: goto label_192374;
        case 0x192378u: goto label_192378;
        case 0x19237cu: goto label_19237c;
        case 0x192380u: goto label_192380;
        case 0x192384u: goto label_192384;
        case 0x192388u: goto label_192388;
        case 0x19238cu: goto label_19238c;
        case 0x192390u: goto label_192390;
        case 0x192394u: goto label_192394;
        case 0x192398u: goto label_192398;
        case 0x19239cu: goto label_19239c;
        case 0x1923a0u: goto label_1923a0;
        case 0x1923a4u: goto label_1923a4;
        case 0x1923a8u: goto label_1923a8;
        case 0x1923acu: goto label_1923ac;
        case 0x1923b0u: goto label_1923b0;
        case 0x1923b4u: goto label_1923b4;
        case 0x1923b8u: goto label_1923b8;
        case 0x1923bcu: goto label_1923bc;
        case 0x1923c0u: goto label_1923c0;
        case 0x1923c4u: goto label_1923c4;
        case 0x1923c8u: goto label_1923c8;
        case 0x1923ccu: goto label_1923cc;
        case 0x1923d0u: goto label_1923d0;
        case 0x1923d4u: goto label_1923d4;
        case 0x1923d8u: goto label_1923d8;
        case 0x1923dcu: goto label_1923dc;
        case 0x1923e0u: goto label_1923e0;
        case 0x1923e4u: goto label_1923e4;
        case 0x1923e8u: goto label_1923e8;
        case 0x1923ecu: goto label_1923ec;
        case 0x1923f0u: goto label_1923f0;
        case 0x1923f4u: goto label_1923f4;
        case 0x1923f8u: goto label_1923f8;
        case 0x1923fcu: goto label_1923fc;
        case 0x192400u: goto label_192400;
        case 0x192404u: goto label_192404;
        case 0x192408u: goto label_192408;
        case 0x19240cu: goto label_19240c;
        case 0x192410u: goto label_192410;
        case 0x192414u: goto label_192414;
        case 0x192418u: goto label_192418;
        case 0x19241cu: goto label_19241c;
        case 0x192420u: goto label_192420;
        case 0x192424u: goto label_192424;
        case 0x192428u: goto label_192428;
        case 0x19242cu: goto label_19242c;
        case 0x192430u: goto label_192430;
        case 0x192434u: goto label_192434;
        case 0x192438u: goto label_192438;
        case 0x19243cu: goto label_19243c;
        case 0x192440u: goto label_192440;
        case 0x192444u: goto label_192444;
        case 0x192448u: goto label_192448;
        case 0x19244cu: goto label_19244c;
        case 0x192450u: goto label_192450;
        case 0x192454u: goto label_192454;
        case 0x192458u: goto label_192458;
        case 0x19245cu: goto label_19245c;
        case 0x192460u: goto label_192460;
        case 0x192464u: goto label_192464;
        case 0x192468u: goto label_192468;
        case 0x19246cu: goto label_19246c;
        case 0x192470u: goto label_192470;
        case 0x192474u: goto label_192474;
        case 0x192478u: goto label_192478;
        case 0x19247cu: goto label_19247c;
        case 0x192480u: goto label_192480;
        case 0x192484u: goto label_192484;
        case 0x192488u: goto label_192488;
        case 0x19248cu: goto label_19248c;
        case 0x192490u: goto label_192490;
        case 0x192494u: goto label_192494;
        case 0x192498u: goto label_192498;
        case 0x19249cu: goto label_19249c;
        case 0x1924a0u: goto label_1924a0;
        case 0x1924a4u: goto label_1924a4;
        case 0x1924a8u: goto label_1924a8;
        case 0x1924acu: goto label_1924ac;
        case 0x1924b0u: goto label_1924b0;
        case 0x1924b4u: goto label_1924b4;
        case 0x1924b8u: goto label_1924b8;
        case 0x1924bcu: goto label_1924bc;
        case 0x1924c0u: goto label_1924c0;
        case 0x1924c4u: goto label_1924c4;
        case 0x1924c8u: goto label_1924c8;
        case 0x1924ccu: goto label_1924cc;
        case 0x1924d0u: goto label_1924d0;
        case 0x1924d4u: goto label_1924d4;
        case 0x1924d8u: goto label_1924d8;
        case 0x1924dcu: goto label_1924dc;
        case 0x1924e0u: goto label_1924e0;
        case 0x1924e4u: goto label_1924e4;
        case 0x1924e8u: goto label_1924e8;
        case 0x1924ecu: goto label_1924ec;
        case 0x1924f0u: goto label_1924f0;
        case 0x1924f4u: goto label_1924f4;
        case 0x1924f8u: goto label_1924f8;
        case 0x1924fcu: goto label_1924fc;
        case 0x192500u: goto label_192500;
        case 0x192504u: goto label_192504;
        case 0x192508u: goto label_192508;
        case 0x19250cu: goto label_19250c;
        case 0x192510u: goto label_192510;
        case 0x192514u: goto label_192514;
        case 0x192518u: goto label_192518;
        case 0x19251cu: goto label_19251c;
        case 0x192520u: goto label_192520;
        case 0x192524u: goto label_192524;
        case 0x192528u: goto label_192528;
        case 0x19252cu: goto label_19252c;
        case 0x192530u: goto label_192530;
        case 0x192534u: goto label_192534;
        case 0x192538u: goto label_192538;
        case 0x19253cu: goto label_19253c;
        case 0x192540u: goto label_192540;
        case 0x192544u: goto label_192544;
        case 0x192548u: goto label_192548;
        case 0x19254cu: goto label_19254c;
        case 0x192550u: goto label_192550;
        case 0x192554u: goto label_192554;
        case 0x192558u: goto label_192558;
        case 0x19255cu: goto label_19255c;
        case 0x192560u: goto label_192560;
        case 0x192564u: goto label_192564;
        case 0x192568u: goto label_192568;
        case 0x19256cu: goto label_19256c;
        case 0x192570u: goto label_192570;
        case 0x192574u: goto label_192574;
        case 0x192578u: goto label_192578;
        case 0x19257cu: goto label_19257c;
        case 0x192580u: goto label_192580;
        case 0x192584u: goto label_192584;
        case 0x192588u: goto label_192588;
        case 0x19258cu: goto label_19258c;
        case 0x192590u: goto label_192590;
        case 0x192594u: goto label_192594;
        case 0x192598u: goto label_192598;
        case 0x19259cu: goto label_19259c;
        case 0x1925a0u: goto label_1925a0;
        case 0x1925a4u: goto label_1925a4;
        case 0x1925a8u: goto label_1925a8;
        case 0x1925acu: goto label_1925ac;
        case 0x1925b0u: goto label_1925b0;
        case 0x1925b4u: goto label_1925b4;
        case 0x1925b8u: goto label_1925b8;
        case 0x1925bcu: goto label_1925bc;
        case 0x1925c0u: goto label_1925c0;
        case 0x1925c4u: goto label_1925c4;
        case 0x1925c8u: goto label_1925c8;
        case 0x1925ccu: goto label_1925cc;
        case 0x1925d0u: goto label_1925d0;
        case 0x1925d4u: goto label_1925d4;
        case 0x1925d8u: goto label_1925d8;
        case 0x1925dcu: goto label_1925dc;
        case 0x1925e0u: goto label_1925e0;
        case 0x1925e4u: goto label_1925e4;
        case 0x1925e8u: goto label_1925e8;
        case 0x1925ecu: goto label_1925ec;
        case 0x1925f0u: goto label_1925f0;
        case 0x1925f4u: goto label_1925f4;
        case 0x1925f8u: goto label_1925f8;
        case 0x1925fcu: goto label_1925fc;
        case 0x192600u: goto label_192600;
        case 0x192604u: goto label_192604;
        case 0x192608u: goto label_192608;
        case 0x19260cu: goto label_19260c;
        case 0x192610u: goto label_192610;
        case 0x192614u: goto label_192614;
        case 0x192618u: goto label_192618;
        case 0x19261cu: goto label_19261c;
        case 0x192620u: goto label_192620;
        case 0x192624u: goto label_192624;
        case 0x192628u: goto label_192628;
        case 0x19262cu: goto label_19262c;
        case 0x192630u: goto label_192630;
        case 0x192634u: goto label_192634;
        case 0x192638u: goto label_192638;
        case 0x19263cu: goto label_19263c;
        default: break;
    }

    ctx->pc = 0x192200u;

label_192200:
    // 0x192200: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x192200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_192204:
    // 0x192204: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x192204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
label_192208:
    // 0x192208: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x192208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
label_19220c:
    // 0x19220c: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x19220cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_192210:
    // 0x192210: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x192210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_192214:
    // 0x192214: 0xc061a4c  jal         func_186930
label_192218:
    if (ctx->pc == 0x192218u) {
        ctx->pc = 0x192218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192214u;
        // 0x192218: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19221Cu;
        goto label_19221c;
    }
    ctx->pc = 0x192214u;
    SET_GPR_U32(ctx, 31, 0x19221Cu);
    ctx->pc = 0x192218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192214u;
    // 0x192218: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186930u, 0x192214u, 0x19221Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19221Cu;
label_19221c:
    // 0x19221c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x19221cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_192220:
    // 0x192220: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x192220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_192224:
    // 0x192224: 0xc061a16  jal         func_186858
label_192228:
    if (ctx->pc == 0x192228u) {
        ctx->pc = 0x192228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192224u;
        // 0x192228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19222Cu;
        goto label_19222c;
    }
    ctx->pc = 0x192224u;
    SET_GPR_U32(ctx, 31, 0x19222Cu);
    ctx->pc = 0x192228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192224u;
    // 0x192228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x192224u, 0x19222Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19222Cu;
label_19222c:
    // 0x19222c: 0xc62c0018  lwc1        $f12, 0x18($s1)
    ctx->pc = 0x19222cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_192230:
    // 0x192230: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x192230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_192234:
    // 0x192234: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_192238:
    // 0x192238: 0xc06ee7e  jal         func_1BB9F8
label_19223c:
    if (ctx->pc == 0x19223Cu) {
        ctx->pc = 0x19223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192238u;
        // 0x19223c: 0x46146301  sub.s       $f12, $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x192240u;
        goto label_192240;
    }
    ctx->pc = 0x192238u;
    SET_GPR_U32(ctx, 31, 0x192240u);
    ctx->pc = 0x19223Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192238u;
    // 0x19223c: 0x46146301  sub.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB9F8u, 0x192238u, 0x192240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192240u;
label_192240:
    // 0x192240: 0xc061a16  jal         func_186858
label_192244:
    if (ctx->pc == 0x192244u) {
        ctx->pc = 0x192244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192240u;
        // 0x192244: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192248u;
        goto label_192248;
    }
    ctx->pc = 0x192240u;
    SET_GPR_U32(ctx, 31, 0x192248u);
    ctx->pc = 0x192244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192240u;
    // 0x192244: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x192240u, 0x192248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192248u;
label_192248:
    // 0x192248: 0xc62c0014  lwc1        $f12, 0x14($s1)
    ctx->pc = 0x192248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19224c:
    // 0x19224c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19224cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_192250:
    // 0x192250: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_192254:
    // 0x192254: 0xc06eed6  jal         func_1BBB58
label_192258:
    if (ctx->pc == 0x192258u) {
        ctx->pc = 0x192258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192254u;
        // 0x192258: 0x46146300  add.s       $f12, $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19225Cu;
        goto label_19225c;
    }
    ctx->pc = 0x192254u;
    SET_GPR_U32(ctx, 31, 0x19225Cu);
    ctx->pc = 0x192258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192254u;
    // 0x192258: 0x46146300  add.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBB58u, 0x192254u, 0x19225Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19225Cu;
label_19225c:
    // 0x19225c: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x19225cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_192260:
    // 0x192260: 0xc06faee  jal         func_1BEBB8
label_192264:
    if (ctx->pc == 0x192264u) {
        ctx->pc = 0x192264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192260u;
        // 0x192264: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192268u;
        goto label_192268;
    }
    ctx->pc = 0x192260u;
    SET_GPR_U32(ctx, 31, 0x192268u);
    ctx->pc = 0x192264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192260u;
    // 0x192264: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEBB8u, 0x192260u, 0x192268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192268u;
label_192268:
    // 0x192268: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x192268u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_19226c:
    // 0x19226c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x19226cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_192270:
    // 0x192270: 0xc06faee  jal         func_1BEBB8
label_192274:
    if (ctx->pc == 0x192274u) {
        ctx->pc = 0x192274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192270u;
        // 0x192274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192278u;
        goto label_192278;
    }
    ctx->pc = 0x192270u;
    SET_GPR_U32(ctx, 31, 0x192278u);
    ctx->pc = 0x192274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192270u;
    // 0x192274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEBB8u, 0x192270u, 0x192278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192278u;
label_192278:
    // 0x192278: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x192278u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19227c:
    // 0x19227c: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x19227cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_192280:
    // 0x192280: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x192280u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_192284:
    // 0x192284: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x192284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_192288:
    // 0x192288: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x192288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19228c:
    // 0x19228c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x19228cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_192290:
    // 0x192290: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x192290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_192294:
    // 0x192294: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x192294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_192298:
    // 0x192298: 0xc7a5005c  lwc1        $f5, 0x5C($sp)
    ctx->pc = 0x192298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_19229c:
    // 0x19229c: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x19229cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1922a0:
    // 0x1922a0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1922a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1922a4:
    // 0x1922a4: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x1922a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1922a8:
    // 0x1922a8: 0xe7a5004c  swc1        $f5, 0x4C($sp)
    ctx->pc = 0x1922a8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_1922ac:
    // 0x1922ac: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1922acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1922b0:
    // 0x1922b0: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1922b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1922b4:
    // 0x1922b4: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x1922b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1922b8:
    // 0x1922b8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1922b8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_1922bc:
    // 0x1922bc: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1922bcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_1922c0:
    // 0x1922c0: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1922c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_1922c4:
    // 0x1922c4: 0x46000004  c1          0x4
    ctx->pc = 0x1922c4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_1922c8:
    // 0x1922c8: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x1922c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1922cc:
    // 0x1922cc: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x1922ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_1922d0:
    // 0x1922d0: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x1922d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
label_1922d4:
    // 0x1922d4: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1922d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_1922d8:
    // 0x1922d8: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x1922d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
label_1922dc:
    // 0x1922dc: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_1922e0:
    if (ctx->pc == 0x1922E0u) {
        ctx->pc = 0x1922E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1922DCu;
        // 0x1922e0: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1922E4u;
        goto label_1922e4;
    }
    ctx->pc = 0x1922DCu;
    {
        const bool branch_taken_0x1922dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1922dc) {
            ctx->pc = 0x1922E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1922DCu;
            // 0x1922e0: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19230Cu;
            goto label_19230c;
        }
    }
    ctx->pc = 0x1922E4u;
label_1922e4:
    // 0x1922e4: 0x8ca51004  lw          $a1, 0x1004($a1)
    ctx->pc = 0x1922e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4100)));
label_1922e8:
    // 0x1922e8: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
label_1922ec:
    if (ctx->pc == 0x1922ECu) {
        ctx->pc = 0x1922ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1922E8u;
        // 0x1922ec: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1922F0u;
        goto label_1922f0;
    }
    ctx->pc = 0x1922E8u;
    {
        const bool branch_taken_0x1922e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1922e8) {
            ctx->pc = 0x1922ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1922E8u;
            // 0x1922ec: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19230Cu;
            goto label_19230c;
        }
    }
    ctx->pc = 0x1922F0u;
label_1922f0:
    // 0x1922f0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1922f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1922f4:
    // 0x1922f4: 0x8c821004  lw          $v0, 0x1004($a0)
    ctx->pc = 0x1922f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4100)));
label_1922f8:
    // 0x1922f8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_1922fc:
    if (ctx->pc == 0x1922FCu) {
        ctx->pc = 0x1922FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1922F8u;
        // 0x1922fc: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192300u;
        goto label_192300;
    }
    ctx->pc = 0x1922F8u;
    {
        const bool branch_taken_0x1922f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1922f8) {
            ctx->pc = 0x1922FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1922F8u;
            // 0x1922fc: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19230Cu;
            goto label_19230c;
        }
    }
    ctx->pc = 0x192300u;
label_192300:
    // 0x192300: 0xc0944da  jal         func_251368
label_192304:
    if (ctx->pc == 0x192304u) {
        ctx->pc = 0x192308u;
        goto label_192308;
    }
    ctx->pc = 0x192300u;
    SET_GPR_U32(ctx, 31, 0x192308u);
    ctx->pc = 0x251368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251368u, 0x192300u, 0x192308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192308u;
label_192308:
    // 0x192308: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x192308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_19230c:
    // 0x19230c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19230cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_192310:
    // 0x192310: 0x10620080  beq         $v1, $v0, . + 4 + (0x80 << 2)
label_192314:
    if (ctx->pc == 0x192314u) {
        ctx->pc = 0x192314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192310u;
        // 0x192314: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x192318u;
        goto label_192318;
    }
    ctx->pc = 0x192310u;
    {
        const bool branch_taken_0x192310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x192314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192310u;
        // 0x192314: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x192310) {
            ctx->pc = 0x192514u;
            goto label_192514;
        }
    }
    ctx->pc = 0x192318u;
label_192318:
    // 0x192318: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19231c:
    if (ctx->pc == 0x19231Cu) {
        ctx->pc = 0x19231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192318u;
        // 0x19231c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192320u;
        goto label_192320;
    }
    ctx->pc = 0x192318u;
    {
        const bool branch_taken_0x192318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192318u;
        // 0x19231c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192318) {
            ctx->pc = 0x192330u;
            goto label_192330;
        }
    }
    ctx->pc = 0x192320u;
label_192320:
    // 0x192320: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_192324:
    if (ctx->pc == 0x192324u) {
        ctx->pc = 0x192328u;
        goto label_192328;
    }
    ctx->pc = 0x192320u;
    {
        const bool branch_taken_0x192320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x192320) {
            ctx->pc = 0x192340u;
            goto label_192340;
        }
    }
    ctx->pc = 0x192328u;
label_192328:
    // 0x192328: 0x100000a9  b           . + 4 + (0xA9 << 2)
label_19232c:
    if (ctx->pc == 0x19232Cu) {
        ctx->pc = 0x192330u;
        goto label_192330;
    }
    ctx->pc = 0x192328u;
    {
        const bool branch_taken_0x192328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192328) {
            ctx->pc = 0x1925D0u;
            goto label_1925d0;
        }
    }
    ctx->pc = 0x192330u;
label_192330:
    // 0x192330: 0x10620053  beq         $v1, $v0, . + 4 + (0x53 << 2)
label_192334:
    if (ctx->pc == 0x192334u) {
        ctx->pc = 0x192338u;
        goto label_192338;
    }
    ctx->pc = 0x192330u;
    {
        const bool branch_taken_0x192330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x192330) {
            ctx->pc = 0x192480u;
            goto label_192480;
        }
    }
    ctx->pc = 0x192338u;
label_192338:
    // 0x192338: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_19233c:
    if (ctx->pc == 0x19233Cu) {
        ctx->pc = 0x192340u;
        goto label_192340;
    }
    ctx->pc = 0x192338u;
    {
        const bool branch_taken_0x192338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192338) {
            ctx->pc = 0x1925D0u;
            goto label_1925d0;
        }
    }
    ctx->pc = 0x192340u;
label_192340:
    // 0x192340: 0xc061a16  jal         func_186858
label_192344:
    if (ctx->pc == 0x192344u) {
        ctx->pc = 0x192344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192340u;
        // 0x192344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192348u;
        goto label_192348;
    }
    ctx->pc = 0x192340u;
    SET_GPR_U32(ctx, 31, 0x192348u);
    ctx->pc = 0x192344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192340u;
    // 0x192344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x192340u, 0x192348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192348u;
label_192348:
    // 0x192348: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x192348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_19234c:
    // 0x19234c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19234cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_192350:
    // 0x192350: 0x0  nop
    ctx->pc = 0x192350u;
    // NOP
label_192354:
    // 0x192354: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x192354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_192358:
    // 0x192358: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x192358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19235c:
    // 0x19235c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x19235cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_192360:
    // 0x192360: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x192360u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_192364:
    // 0x192364: 0x0  nop
    ctx->pc = 0x192364u;
    // NOP
label_192368:
    // 0x192368: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_19236c:
    if (ctx->pc == 0x19236Cu) {
        ctx->pc = 0x19236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192368u;
        // 0x19236c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192370u;
        goto label_192370;
    }
    ctx->pc = 0x192368u;
    {
        const bool branch_taken_0x192368 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192368u;
        // 0x19236c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192368) {
            ctx->pc = 0x1923D8u;
            goto label_1923d8;
        }
    }
    ctx->pc = 0x192370u;
label_192370:
    // 0x192370: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x192370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_192374:
    // 0x192374: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_192378:
    if (ctx->pc == 0x192378u) {
        ctx->pc = 0x192378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192374u;
        // 0x192378: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19237Cu;
        goto label_19237c;
    }
    ctx->pc = 0x192374u;
    {
        const bool branch_taken_0x192374 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x192378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192374u;
        // 0x192378: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192374) {
            ctx->pc = 0x19238Cu;
            goto label_19238c;
        }
    }
    ctx->pc = 0x19237Cu;
label_19237c:
    // 0x19237c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x19237cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_192380:
    // 0x192380: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x192380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_192384:
    // 0x192384: 0x40f809  jalr        $v0
label_192388:
    if (ctx->pc == 0x192388u) {
        ctx->pc = 0x19238Cu;
        goto label_19238c;
    }
    ctx->pc = 0x192384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19238Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192384u, 0x19238Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19238Cu;
label_19238c:
    // 0x19238c: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x19238cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_192390:
    // 0x192390: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x192390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_192394:
    // 0x192394: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x192394u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_192398:
    // 0x192398: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x192398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_19239c:
    // 0x19239c: 0x8c660024  lw          $a2, 0x24($v1)
    ctx->pc = 0x19239cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1923a0:
    // 0x1923a0: 0xc0f809  jalr        $a2
label_1923a4:
    if (ctx->pc == 0x1923A4u) {
        ctx->pc = 0x1923A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1923A0u;
        // 0x1923a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1923A8u;
        goto label_1923a8;
    }
    ctx->pc = 0x1923A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1923A8u);
        ctx->pc = 0x1923A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1923A0u;
        // 0x1923a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1923A0u, 0x1923A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1923A8u;
label_1923a8:
    // 0x1923a8: 0xc061a16  jal         func_186858
label_1923ac:
    if (ctx->pc == 0x1923ACu) {
        ctx->pc = 0x1923ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1923A8u;
        // 0x1923ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1923B0u;
        goto label_1923b0;
    }
    ctx->pc = 0x1923A8u;
    SET_GPR_U32(ctx, 31, 0x1923B0u);
    ctx->pc = 0x1923ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1923A8u;
    // 0x1923ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1923A8u, 0x1923B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1923B0u;
label_1923b0:
    // 0x1923b0: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1923b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1923b4:
    // 0x1923b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1923b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1923b8:
    // 0x1923b8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1923b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1923bc:
    // 0x1923bc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1923bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1923c0:
    // 0x1923c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1923c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1923c4:
    // 0x1923c4: 0xc06ee7e  jal         func_1BB9F8
label_1923c8:
    if (ctx->pc == 0x1923C8u) {
        ctx->pc = 0x1923C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1923C4u;
        // 0x1923c8: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1923CCu;
        goto label_1923cc;
    }
    ctx->pc = 0x1923C4u;
    SET_GPR_U32(ctx, 31, 0x1923CCu);
    ctx->pc = 0x1923C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1923C4u;
    // 0x1923c8: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB9F8u, 0x1923C4u, 0x1923CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1923CCu;
label_1923cc:
    // 0x1923cc: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x1923ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1923d0:
    // 0x1923d0: 0x1000007f  b           . + 4 + (0x7F << 2)
label_1923d4:
    if (ctx->pc == 0x1923D4u) {
        ctx->pc = 0x1923D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1923D0u;
        // 0x1923d4: 0xac400074  sw          $zero, 0x74($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1923D8u;
        goto label_1923d8;
    }
    ctx->pc = 0x1923D0u;
    {
        const bool branch_taken_0x1923d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1923D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1923D0u;
        // 0x1923d4: 0xac400074  sw          $zero, 0x74($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1923d0) {
            ctx->pc = 0x1925D0u;
            goto label_1925d0;
        }
    }
    ctx->pc = 0x1923D8u;
label_1923d8:
    // 0x1923d8: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1923d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1923dc:
    // 0x1923dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1923dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1923e0:
    // 0x1923e0: 0x0  nop
    ctx->pc = 0x1923e0u;
    // NOP
label_1923e4:
    // 0x1923e4: 0x4500007a  bc1f        . + 4 + (0x7A << 2)
label_1923e8:
    if (ctx->pc == 0x1923E8u) {
        ctx->pc = 0x1923ECu;
        goto label_1923ec;
    }
    ctx->pc = 0x1923E4u;
    {
        const bool branch_taken_0x1923e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1923e4) {
            ctx->pc = 0x1925D0u;
            goto label_1925d0;
        }
    }
    ctx->pc = 0x1923ECu;
label_1923ec:
    // 0x1923ec: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1923ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1923f0:
    // 0x1923f0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1923f4:
    if (ctx->pc == 0x1923F4u) {
        ctx->pc = 0x1923F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1923F0u;
        // 0x1923f4: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1923F8u;
        goto label_1923f8;
    }
    ctx->pc = 0x1923F0u;
    {
        const bool branch_taken_0x1923f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1923F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1923F0u;
        // 0x1923f4: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1923f0) {
            ctx->pc = 0x19243Cu;
            goto label_19243c;
        }
    }
    ctx->pc = 0x1923F8u;
label_1923f8:
    // 0x1923f8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_1923fc:
    if (ctx->pc == 0x1923FCu) {
        ctx->pc = 0x1923FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1923F8u;
        // 0x1923fc: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192400u;
        goto label_192400;
    }
    ctx->pc = 0x1923F8u;
    {
        const bool branch_taken_0x1923f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1923f8) {
            ctx->pc = 0x1923FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1923F8u;
            // 0x1923fc: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x192414u;
            goto label_192414;
        }
    }
    ctx->pc = 0x192400u;
label_192400:
    // 0x192400: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x192400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_192404:
    // 0x192404: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x192404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_192408:
    // 0x192408: 0x40f809  jalr        $v0
label_19240c:
    if (ctx->pc == 0x19240Cu) {
        ctx->pc = 0x192410u;
        goto label_192410;
    }
    ctx->pc = 0x192408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x192410u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192408u, 0x192410u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x192410u;
label_192410:
    // 0x192410: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x192410u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_192414:
    // 0x192414: 0xc061a12  jal         func_186848
label_192418:
    if (ctx->pc == 0x192418u) {
        ctx->pc = 0x192418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192414u;
        // 0x192418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19241Cu;
        goto label_19241c;
    }
    ctx->pc = 0x192414u;
    SET_GPR_U32(ctx, 31, 0x19241Cu);
    ctx->pc = 0x192418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192414u;
    // 0x192418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x192414u, 0x19241Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19241Cu;
label_19241c:
    // 0x19241c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x19241cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_192420:
    // 0x192420: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x192420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_192424:
    // 0x192424: 0xc62c0014  lwc1        $f12, 0x14($s1)
    ctx->pc = 0x192424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_192428:
    // 0x192428: 0x8c650fe8  lw          $a1, 0xFE8($v1)
    ctx->pc = 0x192428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4072)));
label_19242c:
    // 0x19242c: 0xc07072c  jal         func_1C1CB0
label_192430:
    if (ctx->pc == 0x192430u) {
        ctx->pc = 0x192430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19242Cu;
        // 0x192430: 0x24a501e0  addiu       $a1, $a1, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192434u;
        goto label_192434;
    }
    ctx->pc = 0x19242Cu;
    SET_GPR_U32(ctx, 31, 0x192434u);
    ctx->pc = 0x192430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19242Cu;
    // 0x192430: 0x24a501e0  addiu       $a1, $a1, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1CB0u, 0x19242Cu, 0x192434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192434u;
label_192434:
    // 0x192434: 0x10000010  b           . + 4 + (0x10 << 2)
label_192438:
    if (ctx->pc == 0x192438u) {
        ctx->pc = 0x192438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192434u;
        // 0x192438: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19243Cu;
        goto label_19243c;
    }
    ctx->pc = 0x192434u;
    {
        const bool branch_taken_0x192434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192434u;
        // 0x192438: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192434) {
            ctx->pc = 0x192478u;
            goto label_192478;
        }
    }
    ctx->pc = 0x19243Cu;
label_19243c:
    // 0x19243c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_192440:
    if (ctx->pc == 0x192440u) {
        ctx->pc = 0x192440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19243Cu;
        // 0x192440: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192444u;
        goto label_192444;
    }
    ctx->pc = 0x19243Cu;
    {
        const bool branch_taken_0x19243c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19243c) {
            ctx->pc = 0x192440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19243Cu;
            // 0x192440: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x192458u;
            goto label_192458;
        }
    }
    ctx->pc = 0x192444u;
label_192444:
    // 0x192444: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x192444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_192448:
    // 0x192448: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x192448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_19244c:
    // 0x19244c: 0x40f809  jalr        $v0
label_192450:
    if (ctx->pc == 0x192450u) {
        ctx->pc = 0x192454u;
        goto label_192454;
    }
    ctx->pc = 0x19244Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x192454u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19244Cu, 0x192454u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x192454u;
label_192454:
    // 0x192454: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x192454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_192458:
    // 0x192458: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x192458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_19245c:
    // 0x19245c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x19245cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_192460:
    // 0x192460: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x192460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_192464:
    // 0x192464: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x192464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_192468:
    // 0x192468: 0x8c66002c  lw          $a2, 0x2C($v1)
    ctx->pc = 0x192468u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_19246c:
    // 0x19246c: 0xc0f809  jalr        $a2
label_192470:
    if (ctx->pc == 0x192470u) {
        ctx->pc = 0x192470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19246Cu;
        // 0x192470: 0xc62c0014  lwc1        $f12, 0x14($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x192474u;
        goto label_192474;
    }
    ctx->pc = 0x19246Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x192474u);
        ctx->pc = 0x192470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19246Cu;
        // 0x192470: 0xc62c0014  lwc1        $f12, 0x14($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19246Cu, 0x192474u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x192474u;
label_192474:
    // 0x192474: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x192474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_192478:
    // 0x192478: 0x10000055  b           . + 4 + (0x55 << 2)
label_19247c:
    if (ctx->pc == 0x19247Cu) {
        ctx->pc = 0x19247Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192478u;
        // 0x19247c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192480u;
        goto label_192480;
    }
    ctx->pc = 0x192478u;
    {
        const bool branch_taken_0x192478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19247Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192478u;
        // 0x19247c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192478) {
            ctx->pc = 0x1925D0u;
            goto label_1925d0;
        }
    }
    ctx->pc = 0x192480u;
label_192480:
    // 0x192480: 0xc061a12  jal         func_186848
label_192484:
    if (ctx->pc == 0x192484u) {
        ctx->pc = 0x192484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192480u;
        // 0x192484: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192488u;
        goto label_192488;
    }
    ctx->pc = 0x192480u;
    SET_GPR_U32(ctx, 31, 0x192488u);
    ctx->pc = 0x192484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192480u;
    // 0x192484: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x192480u, 0x192488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192488u;
label_192488:
    // 0x192488: 0xc4410290  lwc1        $f1, 0x290($v0)
    ctx->pc = 0x192488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19248c:
    // 0x19248c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x19248cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_192490:
    // 0x192490: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x192490u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_192494:
    // 0x192494: 0x0  nop
    ctx->pc = 0x192494u;
    // NOP
label_192498:
    // 0x192498: 0x45000018  bc1f        . + 4 + (0x18 << 2)
label_19249c:
    if (ctx->pc == 0x19249Cu) {
        ctx->pc = 0x1924A0u;
        goto label_1924a0;
    }
    ctx->pc = 0x192498u;
    {
        const bool branch_taken_0x192498 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x192498) {
            ctx->pc = 0x1924FCu;
            goto label_1924fc;
        }
    }
    ctx->pc = 0x1924A0u;
label_1924a0:
    // 0x1924a0: 0xc061a12  jal         func_186848
label_1924a4:
    if (ctx->pc == 0x1924A4u) {
        ctx->pc = 0x1924A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1924A0u;
        // 0x1924a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1924A8u;
        goto label_1924a8;
    }
    ctx->pc = 0x1924A0u;
    SET_GPR_U32(ctx, 31, 0x1924A8u);
    ctx->pc = 0x1924A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1924A0u;
    // 0x1924a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1924A0u, 0x1924A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1924A8u;
label_1924a8:
    // 0x1924a8: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1924a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1924ac:
    // 0x1924ac: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1924acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_1924b0:
    // 0x1924b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1924b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1924b4:
    // 0x1924b4: 0xc4420290  lwc1        $f2, 0x290($v0)
    ctx->pc = 0x1924b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1924b8:
    // 0x1924b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1924b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1924bc:
    // 0x1924bc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1924bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1924c0:
    // 0x1924c0: 0x0  nop
    ctx->pc = 0x1924c0u;
    // NOP
label_1924c4:
    // 0x1924c4: 0x45020042  bc1fl       . + 4 + (0x42 << 2)
label_1924c8:
    if (ctx->pc == 0x1924C8u) {
        ctx->pc = 0x1924C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1924C4u;
        // 0x1924c8: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1924CCu;
        goto label_1924cc;
    }
    ctx->pc = 0x1924C4u;
    {
        const bool branch_taken_0x1924c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1924c4) {
            ctx->pc = 0x1924C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1924C4u;
            // 0x1924c8: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1925D0u;
            goto label_1925d0;
        }
    }
    ctx->pc = 0x1924CCu;
label_1924cc:
    // 0x1924cc: 0xc061a1e  jal         func_186878
label_1924d0:
    if (ctx->pc == 0x1924D0u) {
        ctx->pc = 0x1924D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1924CCu;
        // 0x1924d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1924D4u;
        goto label_1924d4;
    }
    ctx->pc = 0x1924CCu;
    SET_GPR_U32(ctx, 31, 0x1924D4u);
    ctx->pc = 0x1924D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1924CCu;
    // 0x1924d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1924CCu, 0x1924D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1924D4u;
label_1924d4:
    // 0x1924d4: 0xc06e0fa  jal         func_1B83E8
label_1924d8:
    if (ctx->pc == 0x1924D8u) {
        ctx->pc = 0x1924D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1924D4u;
        // 0x1924d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1924DCu;
        goto label_1924dc;
    }
    ctx->pc = 0x1924D4u;
    SET_GPR_U32(ctx, 31, 0x1924DCu);
    ctx->pc = 0x1924D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1924D4u;
    // 0x1924d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83E8u, 0x1924D4u, 0x1924DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1924DCu;
label_1924dc:
    // 0x1924dc: 0x5040003c  beql        $v0, $zero, . + 4 + (0x3C << 2)
label_1924e0:
    if (ctx->pc == 0x1924E0u) {
        ctx->pc = 0x1924E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1924DCu;
        // 0x1924e0: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1924E4u;
        goto label_1924e4;
    }
    ctx->pc = 0x1924DCu;
    {
        const bool branch_taken_0x1924dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1924dc) {
            ctx->pc = 0x1924E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1924DCu;
            // 0x1924e0: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1925D0u;
            goto label_1925d0;
        }
    }
    ctx->pc = 0x1924E4u;
label_1924e4:
    // 0x1924e4: 0xc061a16  jal         func_186858
label_1924e8:
    if (ctx->pc == 0x1924E8u) {
        ctx->pc = 0x1924E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1924E4u;
        // 0x1924e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1924ECu;
        goto label_1924ec;
    }
    ctx->pc = 0x1924E4u;
    SET_GPR_U32(ctx, 31, 0x1924ECu);
    ctx->pc = 0x1924E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1924E4u;
    // 0x1924e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1924E4u, 0x1924ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1924ECu;
label_1924ec:
    // 0x1924ec: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1924ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1924f0:
    // 0x1924f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1924f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1924f4:
    // 0x1924f4: 0x10000036  b           . + 4 + (0x36 << 2)
label_1924f8:
    if (ctx->pc == 0x1924F8u) {
        ctx->pc = 0x1924F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1924F4u;
        // 0x1924f8: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1924FCu;
        goto label_1924fc;
    }
    ctx->pc = 0x1924F4u;
    {
        const bool branch_taken_0x1924f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1924F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1924F4u;
        // 0x1924f8: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1924f4) {
            ctx->pc = 0x1925D0u;
            goto label_1925d0;
        }
    }
    ctx->pc = 0x1924FCu;
label_1924fc:
    // 0x1924fc: 0xc061a16  jal         func_186858
label_192500:
    if (ctx->pc == 0x192500u) {
        ctx->pc = 0x192500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1924FCu;
        // 0x192500: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192504u;
        goto label_192504;
    }
    ctx->pc = 0x1924FCu;
    SET_GPR_U32(ctx, 31, 0x192504u);
    ctx->pc = 0x192500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1924FCu;
    // 0x192500: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1924FCu, 0x192504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192504u;
label_192504:
    // 0x192504: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x192504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_192508:
    // 0x192508: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x192508u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19250c:
    // 0x19250c: 0x10000030  b           . + 4 + (0x30 << 2)
label_192510:
    if (ctx->pc == 0x192510u) {
        ctx->pc = 0x192510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19250Cu;
        // 0x192510: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x192514u;
        goto label_192514;
    }
    ctx->pc = 0x19250Cu;
    {
        const bool branch_taken_0x19250c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19250Cu;
        // 0x192510: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19250c) {
            ctx->pc = 0x1925D0u;
            goto label_1925d0;
        }
    }
    ctx->pc = 0x192514u;
label_192514:
    // 0x192514: 0xc061a1e  jal         func_186878
label_192518:
    if (ctx->pc == 0x192518u) {
        ctx->pc = 0x192518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192514u;
        // 0x192518: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19251Cu;
        goto label_19251c;
    }
    ctx->pc = 0x192514u;
    SET_GPR_U32(ctx, 31, 0x19251Cu);
    ctx->pc = 0x192518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192514u;
    // 0x192518: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x192514u, 0x19251Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19251Cu;
label_19251c:
    // 0x19251c: 0xc06e0fa  jal         func_1B83E8
label_192520:
    if (ctx->pc == 0x192520u) {
        ctx->pc = 0x192520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19251Cu;
        // 0x192520: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192524u;
        goto label_192524;
    }
    ctx->pc = 0x19251Cu;
    SET_GPR_U32(ctx, 31, 0x192524u);
    ctx->pc = 0x192520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19251Cu;
    // 0x192520: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83E8u, 0x19251Cu, 0x192524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192524u;
label_192524:
    // 0x192524: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_192528:
    if (ctx->pc == 0x192528u) {
        ctx->pc = 0x192528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192524u;
        // 0x192528: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19252Cu;
        goto label_19252c;
    }
    ctx->pc = 0x192524u;
    {
        const bool branch_taken_0x192524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192524) {
            ctx->pc = 0x192528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x192524u;
            // 0x192528: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x192548u;
            goto label_192548;
        }
    }
    ctx->pc = 0x19252Cu;
label_19252c:
    // 0x19252c: 0xc061a16  jal         func_186858
label_192530:
    if (ctx->pc == 0x192530u) {
        ctx->pc = 0x192530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19252Cu;
        // 0x192530: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192534u;
        goto label_192534;
    }
    ctx->pc = 0x19252Cu;
    SET_GPR_U32(ctx, 31, 0x192534u);
    ctx->pc = 0x192530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19252Cu;
    // 0x192530: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19252Cu, 0x192534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192534u;
label_192534:
    // 0x192534: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x192534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_192538:
    // 0x192538: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x192538u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19253c:
    // 0x19253c: 0x0  nop
    ctx->pc = 0x19253cu;
    // NOP
label_192540:
    // 0x192540: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x192540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_192544:
    // 0x192544: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x192544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_192548:
    // 0x192548: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_19254c:
    if (ctx->pc == 0x19254Cu) {
        ctx->pc = 0x19254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192548u;
        // 0x19254c: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192550u;
        goto label_192550;
    }
    ctx->pc = 0x192548u;
    {
        const bool branch_taken_0x192548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192548) {
            ctx->pc = 0x19254Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x192548u;
            // 0x19254c: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1925B8u;
            goto label_1925b8;
        }
    }
    ctx->pc = 0x192550u;
label_192550:
    // 0x192550: 0xc061a12  jal         func_186848
label_192554:
    if (ctx->pc == 0x192554u) {
        ctx->pc = 0x192554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192550u;
        // 0x192554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192558u;
        goto label_192558;
    }
    ctx->pc = 0x192550u;
    SET_GPR_U32(ctx, 31, 0x192558u);
    ctx->pc = 0x192554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192550u;
    // 0x192554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x192550u, 0x192558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192558u;
label_192558:
    // 0x192558: 0x8c4304d0  lw          $v1, 0x4D0($v0)
    ctx->pc = 0x192558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1232)));
label_19255c:
    // 0x19255c: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
label_192560:
    if (ctx->pc == 0x192560u) {
        ctx->pc = 0x192560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19255Cu;
        // 0x192560: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192564u;
        goto label_192564;
    }
    ctx->pc = 0x19255Cu;
    {
        const bool branch_taken_0x19255c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19255c) {
            ctx->pc = 0x192560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19255Cu;
            // 0x192560: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x192588u;
            goto label_192588;
        }
    }
    ctx->pc = 0x192564u;
label_192564:
    // 0x192564: 0xc061a12  jal         func_186848
label_192568:
    if (ctx->pc == 0x192568u) {
        ctx->pc = 0x192568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192564u;
        // 0x192568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19256Cu;
        goto label_19256c;
    }
    ctx->pc = 0x192564u;
    SET_GPR_U32(ctx, 31, 0x19256Cu);
    ctx->pc = 0x192568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192564u;
    // 0x192568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x192564u, 0x19256Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19256Cu;
label_19256c:
    // 0x19256c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x19256cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_192570:
    // 0x192570: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x192570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_192574:
    // 0x192574: 0xc62c0014  lwc1        $f12, 0x14($s1)
    ctx->pc = 0x192574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_192578:
    // 0x192578: 0x8c650fe8  lw          $a1, 0xFE8($v1)
    ctx->pc = 0x192578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4072)));
label_19257c:
    // 0x19257c: 0xc07072c  jal         func_1C1CB0
label_192580:
    if (ctx->pc == 0x192580u) {
        ctx->pc = 0x192580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19257Cu;
        // 0x192580: 0x24a501e0  addiu       $a1, $a1, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192584u;
        goto label_192584;
    }
    ctx->pc = 0x19257Cu;
    SET_GPR_U32(ctx, 31, 0x192584u);
    ctx->pc = 0x192580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19257Cu;
    // 0x192580: 0x24a501e0  addiu       $a1, $a1, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1CB0u, 0x19257Cu, 0x192584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192584u;
label_192584:
    // 0x192584: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x192584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_192588:
    // 0x192588: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_19258c:
    if (ctx->pc == 0x19258Cu) {
        ctx->pc = 0x19258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192588u;
        // 0x19258c: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192590u;
        goto label_192590;
    }
    ctx->pc = 0x192588u;
    {
        const bool branch_taken_0x192588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192588) {
            ctx->pc = 0x19258Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x192588u;
            // 0x19258c: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1925B8u;
            goto label_1925b8;
        }
    }
    ctx->pc = 0x192590u;
label_192590:
    // 0x192590: 0xc061a12  jal         func_186848
label_192594:
    if (ctx->pc == 0x192594u) {
        ctx->pc = 0x192594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192590u;
        // 0x192594: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192598u;
        goto label_192598;
    }
    ctx->pc = 0x192590u;
    SET_GPR_U32(ctx, 31, 0x192598u);
    ctx->pc = 0x192594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192590u;
    // 0x192594: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x192590u, 0x192598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192598u;
label_192598:
    // 0x192598: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x192598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_19259c:
    // 0x19259c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19259cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1925a0:
    // 0x1925a0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1925a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1925a4:
    // 0x1925a4: 0x40f809  jalr        $v0
label_1925a8:
    if (ctx->pc == 0x1925A8u) {
        ctx->pc = 0x1925ACu;
        goto label_1925ac;
    }
    ctx->pc = 0x1925A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1925ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1925A4u, 0x1925ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1925ACu;
label_1925ac:
    // 0x1925ac: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_1925b0:
    if (ctx->pc == 0x1925B0u) {
        ctx->pc = 0x1925B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1925ACu;
        // 0x1925b0: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1925B4u;
        goto label_1925b4;
    }
    ctx->pc = 0x1925ACu;
    {
        const bool branch_taken_0x1925ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1925ac) {
            ctx->pc = 0x1925B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1925ACu;
            // 0x1925b0: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1925D0u;
            goto label_1925d0;
        }
    }
    ctx->pc = 0x1925B4u;
label_1925b4:
    // 0x1925b4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1925b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1925b8:
    // 0x1925b8: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1925b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1925bc:
    // 0x1925bc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1925c0:
    if (ctx->pc == 0x1925C0u) {
        ctx->pc = 0x1925C4u;
        goto label_1925c4;
    }
    ctx->pc = 0x1925BCu;
    {
        const bool branch_taken_0x1925bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1925bc) {
            ctx->pc = 0x1925D0u;
            goto label_1925d0;
        }
    }
    ctx->pc = 0x1925C4u;
label_1925c4:
    // 0x1925c4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1925c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1925c8:
    // 0x1925c8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1925cc:
    if (ctx->pc == 0x1925CCu) {
        ctx->pc = 0x1925CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1925C8u;
        // 0x1925cc: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1925D0u;
        goto label_1925d0;
    }
    ctx->pc = 0x1925C8u;
    {
        const bool branch_taken_0x1925c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1925c8) {
            ctx->pc = 0x1925CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1925C8u;
            // 0x1925cc: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1925D0u;
            goto label_1925d0;
        }
    }
    ctx->pc = 0x1925D0u;
label_1925d0:
    // 0x1925d0: 0xc061a1e  jal         func_186878
label_1925d4:
    if (ctx->pc == 0x1925D4u) {
        ctx->pc = 0x1925D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1925D0u;
        // 0x1925d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1925D8u;
        goto label_1925d8;
    }
    ctx->pc = 0x1925D0u;
    SET_GPR_U32(ctx, 31, 0x1925D8u);
    ctx->pc = 0x1925D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1925D0u;
    // 0x1925d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1925D0u, 0x1925D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1925D8u;
label_1925d8:
    // 0x1925d8: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x1925d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1925dc:
    // 0x1925dc: 0xc06cdda  jal         func_1B3768
label_1925e0:
    if (ctx->pc == 0x1925E0u) {
        ctx->pc = 0x1925E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1925DCu;
        // 0x1925e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1925E4u;
        goto label_1925e4;
    }
    ctx->pc = 0x1925DCu;
    SET_GPR_U32(ctx, 31, 0x1925E4u);
    ctx->pc = 0x1925E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1925DCu;
    // 0x1925e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3768u, 0x1925DCu, 0x1925E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1925E4u;
label_1925e4:
    // 0x1925e4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1925e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_1925e8:
    // 0x1925e8: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x1925e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1925ec:
    // 0x1925ec: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x1925ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
label_1925f0:
    // 0x1925f0: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x1925f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_1925f4:
    // 0x1925f4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1925f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1925f8:
    // 0x1925f8: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1925f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1925fc:
    // 0x1925fc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1925fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_192600:
    // 0x192600: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x192600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_192604:
    // 0x192604: 0x3e00008  jr          $ra
label_192608:
    if (ctx->pc == 0x192608u) {
        ctx->pc = 0x192608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192604u;
        // 0x192608: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19260Cu;
        goto label_19260c;
    }
    ctx->pc = 0x192604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192604u;
        // 0x192608: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19260Cu;
label_19260c:
    // 0x19260c: 0x0  nop
    ctx->pc = 0x19260cu;
    // NOP
label_192610:
    // 0x192610: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x192610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_192614:
    // 0x192614: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x192614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_192618:
    // 0x192618: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x192618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_19261c:
    // 0x19261c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_192620:
    if (ctx->pc == 0x192620u) {
        ctx->pc = 0x192620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19261Cu;
        // 0x192620: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192624u;
        goto label_192624;
    }
    ctx->pc = 0x19261Cu;
    {
        const bool branch_taken_0x19261c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x192620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19261Cu;
        // 0x192620: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19261c) {
            ctx->pc = 0x192638u;
            goto label_192638;
        }
    }
    ctx->pc = 0x192624u;
label_192624:
    // 0x192624: 0x8ca40034  lw          $a0, 0x34($a1)
    ctx->pc = 0x192624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_192628:
    // 0x192628: 0x8cc30034  lw          $v1, 0x34($a2)
    ctx->pc = 0x192628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_19262c:
    // 0x19262c: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
label_192630:
    if (ctx->pc == 0x192630u) {
        ctx->pc = 0x192630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19262Cu;
        // 0x192630: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192634u;
        goto label_192634;
    }
    ctx->pc = 0x19262Cu;
    {
        const bool branch_taken_0x19262c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x192630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19262Cu;
        // 0x192630: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19262c) {
            ctx->pc = 0x192638u;
            goto label_192638;
        }
    }
    ctx->pc = 0x192634u;
label_192634:
    // 0x192634: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x192634u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_192638:
    // 0x192638: 0x3e00008  jr          $ra
label_19263c:
    if (ctx->pc == 0x19263Cu) {
        ctx->pc = 0x192640u;
        goto label_fallthrough_0x192638;
    }
    ctx->pc = 0x192638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x192638:
    ctx->pc = 0x192640u;
}
