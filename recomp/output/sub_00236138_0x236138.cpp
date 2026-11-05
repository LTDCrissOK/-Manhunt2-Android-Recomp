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

// Function: sub_00236138
// Address: 0x236138 - 0x236510
void sub_00236138_0x236138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236138_0x236138");
#endif

    switch (ctx->pc) {
        case 0x236138u: goto label_236138;
        case 0x23613cu: goto label_23613c;
        case 0x236140u: goto label_236140;
        case 0x236144u: goto label_236144;
        case 0x236148u: goto label_236148;
        case 0x23614cu: goto label_23614c;
        case 0x236150u: goto label_236150;
        case 0x236154u: goto label_236154;
        case 0x236158u: goto label_236158;
        case 0x23615cu: goto label_23615c;
        case 0x236160u: goto label_236160;
        case 0x236164u: goto label_236164;
        case 0x236168u: goto label_236168;
        case 0x23616cu: goto label_23616c;
        case 0x236170u: goto label_236170;
        case 0x236174u: goto label_236174;
        case 0x236178u: goto label_236178;
        case 0x23617cu: goto label_23617c;
        case 0x236180u: goto label_236180;
        case 0x236184u: goto label_236184;
        case 0x236188u: goto label_236188;
        case 0x23618cu: goto label_23618c;
        case 0x236190u: goto label_236190;
        case 0x236194u: goto label_236194;
        case 0x236198u: goto label_236198;
        case 0x23619cu: goto label_23619c;
        case 0x2361a0u: goto label_2361a0;
        case 0x2361a4u: goto label_2361a4;
        case 0x2361a8u: goto label_2361a8;
        case 0x2361acu: goto label_2361ac;
        case 0x2361b0u: goto label_2361b0;
        case 0x2361b4u: goto label_2361b4;
        case 0x2361b8u: goto label_2361b8;
        case 0x2361bcu: goto label_2361bc;
        case 0x2361c0u: goto label_2361c0;
        case 0x2361c4u: goto label_2361c4;
        case 0x2361c8u: goto label_2361c8;
        case 0x2361ccu: goto label_2361cc;
        case 0x2361d0u: goto label_2361d0;
        case 0x2361d4u: goto label_2361d4;
        case 0x2361d8u: goto label_2361d8;
        case 0x2361dcu: goto label_2361dc;
        case 0x2361e0u: goto label_2361e0;
        case 0x2361e4u: goto label_2361e4;
        case 0x2361e8u: goto label_2361e8;
        case 0x2361ecu: goto label_2361ec;
        case 0x2361f0u: goto label_2361f0;
        case 0x2361f4u: goto label_2361f4;
        case 0x2361f8u: goto label_2361f8;
        case 0x2361fcu: goto label_2361fc;
        case 0x236200u: goto label_236200;
        case 0x236204u: goto label_236204;
        case 0x236208u: goto label_236208;
        case 0x23620cu: goto label_23620c;
        case 0x236210u: goto label_236210;
        case 0x236214u: goto label_236214;
        case 0x236218u: goto label_236218;
        case 0x23621cu: goto label_23621c;
        case 0x236220u: goto label_236220;
        case 0x236224u: goto label_236224;
        case 0x236228u: goto label_236228;
        case 0x23622cu: goto label_23622c;
        case 0x236230u: goto label_236230;
        case 0x236234u: goto label_236234;
        case 0x236238u: goto label_236238;
        case 0x23623cu: goto label_23623c;
        case 0x236240u: goto label_236240;
        case 0x236244u: goto label_236244;
        case 0x236248u: goto label_236248;
        case 0x23624cu: goto label_23624c;
        case 0x236250u: goto label_236250;
        case 0x236254u: goto label_236254;
        case 0x236258u: goto label_236258;
        case 0x23625cu: goto label_23625c;
        case 0x236260u: goto label_236260;
        case 0x236264u: goto label_236264;
        case 0x236268u: goto label_236268;
        case 0x23626cu: goto label_23626c;
        case 0x236270u: goto label_236270;
        case 0x236274u: goto label_236274;
        case 0x236278u: goto label_236278;
        case 0x23627cu: goto label_23627c;
        case 0x236280u: goto label_236280;
        case 0x236284u: goto label_236284;
        case 0x236288u: goto label_236288;
        case 0x23628cu: goto label_23628c;
        case 0x236290u: goto label_236290;
        case 0x236294u: goto label_236294;
        case 0x236298u: goto label_236298;
        case 0x23629cu: goto label_23629c;
        case 0x2362a0u: goto label_2362a0;
        case 0x2362a4u: goto label_2362a4;
        case 0x2362a8u: goto label_2362a8;
        case 0x2362acu: goto label_2362ac;
        case 0x2362b0u: goto label_2362b0;
        case 0x2362b4u: goto label_2362b4;
        case 0x2362b8u: goto label_2362b8;
        case 0x2362bcu: goto label_2362bc;
        case 0x2362c0u: goto label_2362c0;
        case 0x2362c4u: goto label_2362c4;
        case 0x2362c8u: goto label_2362c8;
        case 0x2362ccu: goto label_2362cc;
        case 0x2362d0u: goto label_2362d0;
        case 0x2362d4u: goto label_2362d4;
        case 0x2362d8u: goto label_2362d8;
        case 0x2362dcu: goto label_2362dc;
        case 0x2362e0u: goto label_2362e0;
        case 0x2362e4u: goto label_2362e4;
        case 0x2362e8u: goto label_2362e8;
        case 0x2362ecu: goto label_2362ec;
        case 0x2362f0u: goto label_2362f0;
        case 0x2362f4u: goto label_2362f4;
        case 0x2362f8u: goto label_2362f8;
        case 0x2362fcu: goto label_2362fc;
        case 0x236300u: goto label_236300;
        case 0x236304u: goto label_236304;
        case 0x236308u: goto label_236308;
        case 0x23630cu: goto label_23630c;
        case 0x236310u: goto label_236310;
        case 0x236314u: goto label_236314;
        case 0x236318u: goto label_236318;
        case 0x23631cu: goto label_23631c;
        case 0x236320u: goto label_236320;
        case 0x236324u: goto label_236324;
        case 0x236328u: goto label_236328;
        case 0x23632cu: goto label_23632c;
        case 0x236330u: goto label_236330;
        case 0x236334u: goto label_236334;
        case 0x236338u: goto label_236338;
        case 0x23633cu: goto label_23633c;
        case 0x236340u: goto label_236340;
        case 0x236344u: goto label_236344;
        case 0x236348u: goto label_236348;
        case 0x23634cu: goto label_23634c;
        case 0x236350u: goto label_236350;
        case 0x236354u: goto label_236354;
        case 0x236358u: goto label_236358;
        case 0x23635cu: goto label_23635c;
        case 0x236360u: goto label_236360;
        case 0x236364u: goto label_236364;
        case 0x236368u: goto label_236368;
        case 0x23636cu: goto label_23636c;
        case 0x236370u: goto label_236370;
        case 0x236374u: goto label_236374;
        case 0x236378u: goto label_236378;
        case 0x23637cu: goto label_23637c;
        case 0x236380u: goto label_236380;
        case 0x236384u: goto label_236384;
        case 0x236388u: goto label_236388;
        case 0x23638cu: goto label_23638c;
        case 0x236390u: goto label_236390;
        case 0x236394u: goto label_236394;
        case 0x236398u: goto label_236398;
        case 0x23639cu: goto label_23639c;
        case 0x2363a0u: goto label_2363a0;
        case 0x2363a4u: goto label_2363a4;
        case 0x2363a8u: goto label_2363a8;
        case 0x2363acu: goto label_2363ac;
        case 0x2363b0u: goto label_2363b0;
        case 0x2363b4u: goto label_2363b4;
        case 0x2363b8u: goto label_2363b8;
        case 0x2363bcu: goto label_2363bc;
        case 0x2363c0u: goto label_2363c0;
        case 0x2363c4u: goto label_2363c4;
        case 0x2363c8u: goto label_2363c8;
        case 0x2363ccu: goto label_2363cc;
        case 0x2363d0u: goto label_2363d0;
        case 0x2363d4u: goto label_2363d4;
        case 0x2363d8u: goto label_2363d8;
        case 0x2363dcu: goto label_2363dc;
        case 0x2363e0u: goto label_2363e0;
        case 0x2363e4u: goto label_2363e4;
        case 0x2363e8u: goto label_2363e8;
        case 0x2363ecu: goto label_2363ec;
        case 0x2363f0u: goto label_2363f0;
        case 0x2363f4u: goto label_2363f4;
        case 0x2363f8u: goto label_2363f8;
        case 0x2363fcu: goto label_2363fc;
        case 0x236400u: goto label_236400;
        case 0x236404u: goto label_236404;
        case 0x236408u: goto label_236408;
        case 0x23640cu: goto label_23640c;
        case 0x236410u: goto label_236410;
        case 0x236414u: goto label_236414;
        case 0x236418u: goto label_236418;
        case 0x23641cu: goto label_23641c;
        case 0x236420u: goto label_236420;
        case 0x236424u: goto label_236424;
        case 0x236428u: goto label_236428;
        case 0x23642cu: goto label_23642c;
        case 0x236430u: goto label_236430;
        case 0x236434u: goto label_236434;
        case 0x236438u: goto label_236438;
        case 0x23643cu: goto label_23643c;
        case 0x236440u: goto label_236440;
        case 0x236444u: goto label_236444;
        case 0x236448u: goto label_236448;
        case 0x23644cu: goto label_23644c;
        case 0x236450u: goto label_236450;
        case 0x236454u: goto label_236454;
        case 0x236458u: goto label_236458;
        case 0x23645cu: goto label_23645c;
        case 0x236460u: goto label_236460;
        case 0x236464u: goto label_236464;
        case 0x236468u: goto label_236468;
        case 0x23646cu: goto label_23646c;
        case 0x236470u: goto label_236470;
        case 0x236474u: goto label_236474;
        case 0x236478u: goto label_236478;
        case 0x23647cu: goto label_23647c;
        case 0x236480u: goto label_236480;
        case 0x236484u: goto label_236484;
        case 0x236488u: goto label_236488;
        case 0x23648cu: goto label_23648c;
        case 0x236490u: goto label_236490;
        case 0x236494u: goto label_236494;
        case 0x236498u: goto label_236498;
        case 0x23649cu: goto label_23649c;
        case 0x2364a0u: goto label_2364a0;
        case 0x2364a4u: goto label_2364a4;
        case 0x2364a8u: goto label_2364a8;
        case 0x2364acu: goto label_2364ac;
        case 0x2364b0u: goto label_2364b0;
        case 0x2364b4u: goto label_2364b4;
        case 0x2364b8u: goto label_2364b8;
        case 0x2364bcu: goto label_2364bc;
        case 0x2364c0u: goto label_2364c0;
        case 0x2364c4u: goto label_2364c4;
        case 0x2364c8u: goto label_2364c8;
        case 0x2364ccu: goto label_2364cc;
        case 0x2364d0u: goto label_2364d0;
        case 0x2364d4u: goto label_2364d4;
        case 0x2364d8u: goto label_2364d8;
        case 0x2364dcu: goto label_2364dc;
        case 0x2364e0u: goto label_2364e0;
        case 0x2364e4u: goto label_2364e4;
        case 0x2364e8u: goto label_2364e8;
        case 0x2364ecu: goto label_2364ec;
        case 0x2364f0u: goto label_2364f0;
        case 0x2364f4u: goto label_2364f4;
        case 0x2364f8u: goto label_2364f8;
        case 0x2364fcu: goto label_2364fc;
        case 0x236500u: goto label_236500;
        case 0x236504u: goto label_236504;
        case 0x236508u: goto label_236508;
        case 0x23650cu: goto label_23650c;
        default: break;
    }

    ctx->pc = 0x236138u;

label_236138:
    // 0x236138: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x236138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_23613c:
    // 0x23613c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23613cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_236140:
    // 0x236140: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x236140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_236144:
    // 0x236144: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x236144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_236148:
    // 0x236148: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x236148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_23614c:
    // 0x23614c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x23614cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_236150:
    // 0x236150: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x236150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_236154:
    // 0x236154: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x236154u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236158:
    // 0x236158: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23615c:
    // 0x23615c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23615cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_236160:
    // 0x236160: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x236160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_236164:
    // 0x236164: 0x8e230338  lw          $v1, 0x338($s1)
    ctx->pc = 0x236164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_236168:
    // 0x236168: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x236168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_23616c:
    // 0x23616c: 0x2462ffeb  addiu       $v0, $v1, -0x15
    ctx->pc = 0x23616cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967275));
label_236170:
    // 0x236170: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x236170u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_236174:
    // 0x236174: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_236178:
    if (ctx->pc == 0x236178u) {
        ctx->pc = 0x236178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236174u;
        // 0x236178: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23617Cu;
        goto label_23617c;
    }
    ctx->pc = 0x236174u;
    {
        const bool branch_taken_0x236174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236174u;
        // 0x236178: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236174) {
            ctx->pc = 0x236200u;
            goto label_236200;
        }
    }
    ctx->pc = 0x23617Cu;
label_23617c:
    // 0x23617c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x23617cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_236180:
    // 0x236180: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_236184:
    if (ctx->pc == 0x236184u) {
        ctx->pc = 0x236184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236180u;
        // 0x236184: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236188u;
        goto label_236188;
    }
    ctx->pc = 0x236180u;
    {
        const bool branch_taken_0x236180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x236184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236180u;
        // 0x236184: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236180) {
            ctx->pc = 0x2361A4u;
            goto label_2361a4;
        }
    }
    ctx->pc = 0x236188u;
label_236188:
    // 0x236188: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x236188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23618c:
    // 0x23618c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_236190:
    if (ctx->pc == 0x236190u) {
        ctx->pc = 0x236190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23618Cu;
        // 0x236190: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236194u;
        goto label_236194;
    }
    ctx->pc = 0x23618Cu;
    {
        const bool branch_taken_0x23618c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x236190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23618Cu;
        // 0x236190: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23618c) {
            ctx->pc = 0x2361A4u;
            goto label_2361a4;
        }
    }
    ctx->pc = 0x236194u;
label_236194:
    // 0x236194: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_236198:
    if (ctx->pc == 0x236198u) {
        ctx->pc = 0x236198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236194u;
        // 0x236198: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23619Cu;
        goto label_23619c;
    }
    ctx->pc = 0x236194u;
    {
        const bool branch_taken_0x236194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x236198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236194u;
        // 0x236198: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236194) {
            ctx->pc = 0x2361A4u;
            goto label_2361a4;
        }
    }
    ctx->pc = 0x23619Cu;
label_23619c:
    // 0x23619c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2361a0:
    if (ctx->pc == 0x2361A0u) {
        ctx->pc = 0x2361A4u;
        goto label_2361a4;
    }
    ctx->pc = 0x23619Cu;
    {
        const bool branch_taken_0x23619c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23619c) {
            ctx->pc = 0x2361A8u;
            goto label_2361a8;
        }
    }
    ctx->pc = 0x2361A4u;
label_2361a4:
    // 0x2361a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2361a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2361a8:
    // 0x2361a8: 0x54800016  bnel        $a0, $zero, . + 4 + (0x16 << 2)
label_2361ac:
    if (ctx->pc == 0x2361ACu) {
        ctx->pc = 0x2361ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2361A8u;
        // 0x2361ac: 0x8e230418  lw          $v1, 0x418($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2361B0u;
        goto label_2361b0;
    }
    ctx->pc = 0x2361A8u;
    {
        const bool branch_taken_0x2361a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2361a8) {
            ctx->pc = 0x2361ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2361A8u;
            // 0x2361ac: 0x8e230418  lw          $v1, 0x418($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236204u;
            goto label_236204;
        }
    }
    ctx->pc = 0x2361B0u;
label_2361b0:
    // 0x2361b0: 0x8e230338  lw          $v1, 0x338($s1)
    ctx->pc = 0x2361b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_2361b4:
    // 0x2361b4: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x2361b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_2361b8:
    // 0x2361b8: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2361b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_2361bc:
    // 0x2361bc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2361bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2361c0:
    // 0x2361c0: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_2361c4:
    if (ctx->pc == 0x2361C4u) {
        ctx->pc = 0x2361C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2361C0u;
        // 0x2361c4: 0x8e230418  lw          $v1, 0x418($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2361C8u;
        goto label_2361c8;
    }
    ctx->pc = 0x2361C0u;
    {
        const bool branch_taken_0x2361c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2361c0) {
            ctx->pc = 0x2361C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2361C0u;
            // 0x2361c4: 0x8e230418  lw          $v1, 0x418($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236204u;
            goto label_236204;
        }
    }
    ctx->pc = 0x2361C8u;
label_2361c8:
    // 0x2361c8: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x2361c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2361cc:
    // 0x2361cc: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x2361ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_2361d0:
    // 0x2361d0: 0x2442ffe3  addiu       $v0, $v0, -0x1D
    ctx->pc = 0x2361d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967267));
label_2361d4:
    // 0x2361d4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2361d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2361d8:
    // 0x2361d8: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_2361dc:
    if (ctx->pc == 0x2361DCu) {
        ctx->pc = 0x2361DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2361D8u;
        // 0x2361dc: 0x8e230418  lw          $v1, 0x418($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2361E0u;
        goto label_2361e0;
    }
    ctx->pc = 0x2361D8u;
    {
        const bool branch_taken_0x2361d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2361d8) {
            ctx->pc = 0x2361DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2361D8u;
            // 0x2361dc: 0x8e230418  lw          $v1, 0x418($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236204u;
            goto label_236204;
        }
    }
    ctx->pc = 0x2361E0u;
label_2361e0:
    // 0x2361e0: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x2361e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_2361e4:
    // 0x2361e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2361e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2361e8:
    // 0x2361e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2361e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2361ec:
    // 0x2361ec: 0x8c6201e0  lw          $v0, 0x1E0($v1)
    ctx->pc = 0x2361ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 480)));
label_2361f0:
    // 0x2361f0: 0x40f809  jalr        $v0
label_2361f4:
    if (ctx->pc == 0x2361F4u) {
        ctx->pc = 0x2361F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2361F0u;
        // 0x2361f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2361F8u;
        goto label_2361f8;
    }
    ctx->pc = 0x2361F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2361F8u);
        ctx->pc = 0x2361F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2361F0u;
        // 0x2361f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2361F0u, 0x2361F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2361F8u;
label_2361f8:
    // 0x2361f8: 0x104000bc  beqz        $v0, . + 4 + (0xBC << 2)
label_2361fc:
    if (ctx->pc == 0x2361FCu) {
        ctx->pc = 0x2361FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2361F8u;
        // 0x2361fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236200u;
        goto label_236200;
    }
    ctx->pc = 0x2361F8u;
    {
        const bool branch_taken_0x2361f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2361FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2361F8u;
        // 0x2361fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2361f8) {
            ctx->pc = 0x2364ECu;
            goto label_2364ec;
        }
    }
    ctx->pc = 0x236200u;
label_236200:
    // 0x236200: 0x8e230418  lw          $v1, 0x418($s1)
    ctx->pc = 0x236200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
label_236204:
    // 0x236204: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x236204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_236208:
    // 0x236208: 0x106200b7  beq         $v1, $v0, . + 4 + (0xB7 << 2)
label_23620c:
    if (ctx->pc == 0x23620Cu) {
        ctx->pc = 0x23620Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236208u;
        // 0x23620c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236210u;
        goto label_236210;
    }
    ctx->pc = 0x236208u;
    {
        const bool branch_taken_0x236208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23620Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236208u;
        // 0x23620c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236208) {
            ctx->pc = 0x2364E8u;
            goto label_2364e8;
        }
    }
    ctx->pc = 0x236210u;
label_236210:
    // 0x236210: 0x106200b6  beq         $v1, $v0, . + 4 + (0xB6 << 2)
label_236214:
    if (ctx->pc == 0x236214u) {
        ctx->pc = 0x236214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236210u;
        // 0x236214: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236218u;
        goto label_236218;
    }
    ctx->pc = 0x236210u;
    {
        const bool branch_taken_0x236210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x236214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236210u;
        // 0x236214: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236210) {
            ctx->pc = 0x2364ECu;
            goto label_2364ec;
        }
    }
    ctx->pc = 0x236218u;
label_236218:
    // 0x236218: 0x8e230338  lw          $v1, 0x338($s1)
    ctx->pc = 0x236218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_23621c:
    // 0x23621c: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x23621cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_236220:
    // 0x236220: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x236220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_236224:
    // 0x236224: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x236224u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_236228:
    // 0x236228: 0x144000b0  bnez        $v0, . + 4 + (0xB0 << 2)
label_23622c:
    if (ctx->pc == 0x23622Cu) {
        ctx->pc = 0x23622Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236228u;
        // 0x23622c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236230u;
        goto label_236230;
    }
    ctx->pc = 0x236228u;
    {
        const bool branch_taken_0x236228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23622Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236228u;
        // 0x23622c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236228) {
            ctx->pc = 0x2364ECu;
            goto label_2364ec;
        }
    }
    ctx->pc = 0x236230u;
label_236230:
    // 0x236230: 0xc0899bc  jal         func_2266F0
label_236234:
    if (ctx->pc == 0x236234u) {
        ctx->pc = 0x236234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236230u;
        // 0x236234: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236238u;
        goto label_236238;
    }
    ctx->pc = 0x236230u;
    SET_GPR_U32(ctx, 31, 0x236238u);
    ctx->pc = 0x236234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236230u;
    // 0x236234: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x236230u, 0x236238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236238u;
label_236238:
    // 0x236238: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23623c:
    // 0x23623c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x23623cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_236240:
    // 0x236240: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x236240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_236244:
    // 0x236244: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x236244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_236248:
    // 0x236248: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
label_23624c:
    if (ctx->pc == 0x23624Cu) {
        ctx->pc = 0x236250u;
        goto label_236250;
    }
    ctx->pc = 0x236248u;
    {
        const bool branch_taken_0x236248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x236248) {
            ctx->pc = 0x236298u;
            goto label_236298;
        }
    }
    ctx->pc = 0x236250u;
label_236250:
    // 0x236250: 0x56600018  bnel        $s3, $zero, . + 4 + (0x18 << 2)
label_236254:
    if (ctx->pc == 0x236254u) {
        ctx->pc = 0x236254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236250u;
        // 0x236254: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236258u;
        goto label_236258;
    }
    ctx->pc = 0x236250u;
    {
        const bool branch_taken_0x236250 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x236250) {
            ctx->pc = 0x236254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236250u;
            // 0x236254: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2362B4u;
            goto label_2362b4;
        }
    }
    ctx->pc = 0x236258u;
label_236258:
    // 0x236258: 0x8e220370  lw          $v0, 0x370($s1)
    ctx->pc = 0x236258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
label_23625c:
    // 0x23625c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x23625cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_236260:
    // 0x236260: 0x104000a2  beqz        $v0, . + 4 + (0xA2 << 2)
label_236264:
    if (ctx->pc == 0x236264u) {
        ctx->pc = 0x236264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236260u;
        // 0x236264: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236268u;
        goto label_236268;
    }
    ctx->pc = 0x236260u;
    {
        const bool branch_taken_0x236260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236260u;
        // 0x236264: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236260) {
            ctx->pc = 0x2364ECu;
            goto label_2364ec;
        }
    }
    ctx->pc = 0x236268u;
label_236268:
    // 0x236268: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x236268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_23626c:
    // 0x23626c: 0x30423001  andi        $v0, $v0, 0x3001
    ctx->pc = 0x23626cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12289);
label_236270:
    // 0x236270: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x236270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
label_236274:
    // 0x236274: 0x14400082  bnez        $v0, . + 4 + (0x82 << 2)
label_236278:
    if (ctx->pc == 0x236278u) {
        ctx->pc = 0x236278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236274u;
        // 0x236278: 0x24140004  addiu       $s4, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23627Cu;
        goto label_23627c;
    }
    ctx->pc = 0x236274u;
    {
        const bool branch_taken_0x236274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236274u;
        // 0x236278: 0x24140004  addiu       $s4, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236274) {
            ctx->pc = 0x236480u;
            goto label_236480;
        }
    }
    ctx->pc = 0x23627Cu;
label_23627c:
    // 0x23627c: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x23627cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_236280:
    // 0x236280: 0x8e04027c  lw          $a0, 0x27C($s0)
    ctx->pc = 0x236280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 636)));
label_236284:
    // 0x236284: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x236284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_236288:
    // 0x236288: 0xc0d8e26  jal         func_363898
label_23628c:
    if (ctx->pc == 0x23628Cu) {
        ctx->pc = 0x23628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236288u;
        // 0x23628c: 0x24a50060  addiu       $a1, $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236290u;
        goto label_236290;
    }
    ctx->pc = 0x236288u;
    SET_GPR_U32(ctx, 31, 0x236290u);
    ctx->pc = 0x23628Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236288u;
    // 0x23628c: 0x24a50060  addiu       $a1, $a1, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363898u, 0x236288u, 0x236290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236290u;
label_236290:
    // 0x236290: 0x1000007b  b           . + 4 + (0x7B << 2)
label_236294:
    if (ctx->pc == 0x236294u) {
        ctx->pc = 0x236294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236290u;
        // 0x236294: 0x24140004  addiu       $s4, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236298u;
        goto label_236298;
    }
    ctx->pc = 0x236290u;
    {
        const bool branch_taken_0x236290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236290u;
        // 0x236294: 0x24140004  addiu       $s4, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236290) {
            ctx->pc = 0x236480u;
            goto label_236480;
        }
    }
    ctx->pc = 0x236298u;
label_236298:
    // 0x236298: 0x56600006  bnel        $s3, $zero, . + 4 + (0x6 << 2)
label_23629c:
    if (ctx->pc == 0x23629Cu) {
        ctx->pc = 0x23629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236298u;
        // 0x23629c: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2362A0u;
        goto label_2362a0;
    }
    ctx->pc = 0x236298u;
    {
        const bool branch_taken_0x236298 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x236298) {
            ctx->pc = 0x23629Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236298u;
            // 0x23629c: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2362B4u;
            goto label_2362b4;
        }
    }
    ctx->pc = 0x2362A0u;
label_2362a0:
    // 0x2362a0: 0xc08dab6  jal         func_236AD8
label_2362a4:
    if (ctx->pc == 0x2362A4u) {
        ctx->pc = 0x2362A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2362A0u;
        // 0x2362a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2362A8u;
        goto label_2362a8;
    }
    ctx->pc = 0x2362A0u;
    SET_GPR_U32(ctx, 31, 0x2362A8u);
    ctx->pc = 0x2362A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2362A0u;
    // 0x2362a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x2362A0u, 0x2362A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2362A8u;
label_2362a8:
    // 0x2362a8: 0x14400090  bnez        $v0, . + 4 + (0x90 << 2)
label_2362ac:
    if (ctx->pc == 0x2362ACu) {
        ctx->pc = 0x2362ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2362A8u;
        // 0x2362ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2362B0u;
        goto label_2362b0;
    }
    ctx->pc = 0x2362A8u;
    {
        const bool branch_taken_0x2362a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2362ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2362A8u;
        // 0x2362ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2362a8) {
            ctx->pc = 0x2364ECu;
            goto label_2364ec;
        }
    }
    ctx->pc = 0x2362B0u;
label_2362b0:
    // 0x2362b0: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x2362b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_2362b4:
    // 0x2362b4: 0x30423001  andi        $v0, $v0, 0x3001
    ctx->pc = 0x2362b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12289);
label_2362b8:
    // 0x2362b8: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x2362b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
label_2362bc:
    // 0x2362bc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2362c0:
    if (ctx->pc == 0x2362C0u) {
        ctx->pc = 0x2362C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2362BCu;
        // 0x2362c0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2362C4u;
        goto label_2362c4;
    }
    ctx->pc = 0x2362BCu;
    {
        const bool branch_taken_0x2362bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2362C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2362BCu;
        // 0x2362c0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2362bc) {
            ctx->pc = 0x2362C8u;
            goto label_2362c8;
        }
    }
    ctx->pc = 0x2362C4u;
label_2362c4:
    // 0x2362c4: 0x8e120278  lw          $s2, 0x278($s0)
    ctx->pc = 0x2362c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_2362c8:
    // 0x2362c8: 0x1240006d  beqz        $s2, . + 4 + (0x6D << 2)
label_2362cc:
    if (ctx->pc == 0x2362CCu) {
        ctx->pc = 0x2362D0u;
        goto label_2362d0;
    }
    ctx->pc = 0x2362C8u;
    {
        const bool branch_taken_0x2362c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2362c8) {
            ctx->pc = 0x236480u;
            goto label_236480;
        }
    }
    ctx->pc = 0x2362D0u;
label_2362d0:
    // 0x2362d0: 0x5660001b  bnel        $s3, $zero, . + 4 + (0x1B << 2)
label_2362d4:
    if (ctx->pc == 0x2362D4u) {
        ctx->pc = 0x2362D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2362D0u;
        // 0x2362d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2362D8u;
        goto label_2362d8;
    }
    ctx->pc = 0x2362D0u;
    {
        const bool branch_taken_0x2362d0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2362d0) {
            ctx->pc = 0x2362D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2362D0u;
            // 0x2362d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236340u;
            goto label_236340;
        }
    }
    ctx->pc = 0x2362D8u;
label_2362d8:
    // 0x2362d8: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x2362d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_2362dc:
    // 0x2362dc: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x2362dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_2362e0:
    // 0x2362e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2362e4:
    if (ctx->pc == 0x2362E4u) {
        ctx->pc = 0x2362E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2362E0u;
        // 0x2362e4: 0x8e230370  lw          $v1, 0x370($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2362E8u;
        goto label_2362e8;
    }
    ctx->pc = 0x2362E0u;
    {
        const bool branch_taken_0x2362e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2362E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2362E0u;
        // 0x2362e4: 0x8e230370  lw          $v1, 0x370($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2362e0) {
            ctx->pc = 0x236300u;
            goto label_236300;
        }
    }
    ctx->pc = 0x2362E8u;
label_2362e8:
    // 0x2362e8: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x2362e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_2362ec:
    // 0x2362ec: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2362ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_2362f0:
    // 0x2362f0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2362f4:
    if (ctx->pc == 0x2362F4u) {
        ctx->pc = 0x2362F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2362F0u;
        // 0x2362f4: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2362F8u;
        goto label_2362f8;
    }
    ctx->pc = 0x2362F0u;
    {
        const bool branch_taken_0x2362f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2362F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2362F0u;
        // 0x2362f4: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2362f0) {
            ctx->pc = 0x236304u;
            goto label_236304;
        }
    }
    ctx->pc = 0x2362F8u;
label_2362f8:
    // 0x2362f8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2362fc:
    if (ctx->pc == 0x2362FCu) {
        ctx->pc = 0x2362FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2362F8u;
        // 0x2362fc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236300u;
        goto label_236300;
    }
    ctx->pc = 0x2362F8u;
    {
        const bool branch_taken_0x2362f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2362FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2362F8u;
        // 0x2362fc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2362f8) {
            ctx->pc = 0x236334u;
            goto label_236334;
        }
    }
    ctx->pc = 0x236300u;
label_236300:
    // 0x236300: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x236300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_236304:
    // 0x236304: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_236308:
    if (ctx->pc == 0x236308u) {
        ctx->pc = 0x236308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236304u;
        // 0x236308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23630Cu;
        goto label_23630c;
    }
    ctx->pc = 0x236304u;
    {
        const bool branch_taken_0x236304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236304u;
        // 0x236308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236304) {
            ctx->pc = 0x236340u;
            goto label_236340;
        }
    }
    ctx->pc = 0x23630Cu;
label_23630c:
    // 0x23630c: 0x8e221004  lw          $v0, 0x1004($s1)
    ctx->pc = 0x23630cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4100)));
label_236310:
    // 0x236310: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_236314:
    if (ctx->pc == 0x236314u) {
        ctx->pc = 0x236318u;
        goto label_236318;
    }
    ctx->pc = 0x236310u;
    {
        const bool branch_taken_0x236310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236310) {
            ctx->pc = 0x236340u;
            goto label_236340;
        }
    }
    ctx->pc = 0x236318u;
label_236318:
    // 0x236318: 0x8c440334  lw          $a0, 0x334($v0)
    ctx->pc = 0x236318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
label_23631c:
    // 0x23631c: 0xc06b600  jal         func_1AD800
label_236320:
    if (ctx->pc == 0x236320u) {
        ctx->pc = 0x236324u;
        goto label_236324;
    }
    ctx->pc = 0x23631Cu;
    SET_GPR_U32(ctx, 31, 0x236324u);
    ctx->pc = 0x1AD800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD800u, 0x23631Cu, 0x236324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236324u;
label_236324:
    // 0x236324: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_236328:
    if (ctx->pc == 0x236328u) {
        ctx->pc = 0x236328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236324u;
        // 0x236328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23632Cu;
        goto label_23632c;
    }
    ctx->pc = 0x236324u;
    {
        const bool branch_taken_0x236324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236324u;
        // 0x236328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236324) {
            ctx->pc = 0x236340u;
            goto label_236340;
        }
    }
    ctx->pc = 0x23632Cu;
label_23632c:
    // 0x23632c: 0x1000006f  b           . + 4 + (0x6F << 2)
label_236330:
    if (ctx->pc == 0x236330u) {
        ctx->pc = 0x236330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23632Cu;
        // 0x236330: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236334u;
        goto label_236334;
    }
    ctx->pc = 0x23632Cu;
    {
        const bool branch_taken_0x23632c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23632Cu;
        // 0x236330: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23632c) {
            ctx->pc = 0x2364ECu;
            goto label_2364ec;
        }
    }
    ctx->pc = 0x236334u;
label_236334:
    // 0x236334: 0x8c43bd50  lw          $v1, -0x42B0($v0)
    ctx->pc = 0x236334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
label_236338:
    // 0x236338: 0x1000fff8  b           . + 4 + (-0x8 << 2)
label_23633c:
    if (ctx->pc == 0x23633Cu) {
        ctx->pc = 0x23633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236338u;
        // 0x23633c: 0x8c640334  lw          $a0, 0x334($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236340u;
        goto label_236340;
    }
    ctx->pc = 0x236338u;
    {
        const bool branch_taken_0x236338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236338u;
        // 0x23633c: 0x8c640334  lw          $a0, 0x334($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236338) {
            ctx->pc = 0x23631Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23631c;
        }
    }
    ctx->pc = 0x236340u;
label_236340:
    // 0x236340: 0xc098b14  jal         func_262C50
label_236344:
    if (ctx->pc == 0x236344u) {
        ctx->pc = 0x236344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236340u;
        // 0x236344: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236348u;
        goto label_236348;
    }
    ctx->pc = 0x236340u;
    SET_GPR_U32(ctx, 31, 0x236348u);
    ctx->pc = 0x236344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236340u;
    // 0x236344: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262C50u, 0x236340u, 0x236348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236348u;
label_236348:
    // 0x236348: 0x8e500054  lw          $s0, 0x54($s2)
    ctx->pc = 0x236348u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_23634c:
    // 0x23634c: 0x1200004c  beqz        $s0, . + 4 + (0x4C << 2)
label_236350:
    if (ctx->pc == 0x236350u) {
        ctx->pc = 0x236354u;
        goto label_236354;
    }
    ctx->pc = 0x23634Cu;
    {
        const bool branch_taken_0x23634c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x23634c) {
            ctx->pc = 0x236480u;
            goto label_236480;
        }
    }
    ctx->pc = 0x236354u;
label_236354:
    // 0x236354: 0x5660003f  bnel        $s3, $zero, . + 4 + (0x3F << 2)
label_236358:
    if (ctx->pc == 0x236358u) {
        ctx->pc = 0x236358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236354u;
        // 0x236358: 0x8e0300b8  lw          $v1, 0xB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23635Cu;
        goto label_23635c;
    }
    ctx->pc = 0x236354u;
    {
        const bool branch_taken_0x236354 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x236354) {
            ctx->pc = 0x236358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236354u;
            // 0x236358: 0x8e0300b8  lw          $v1, 0xB8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236454u;
            goto label_236454;
        }
    }
    ctx->pc = 0x23635Cu;
label_23635c:
    // 0x23635c: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x23635cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_236360:
    // 0x236360: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x236360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_236364:
    // 0x236364: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x236364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_236368:
    // 0x236368: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
label_23636c:
    if (ctx->pc == 0x23636Cu) {
        ctx->pc = 0x23636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236368u;
        // 0x23636c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236370u;
        goto label_236370;
    }
    ctx->pc = 0x236368u;
    {
        const bool branch_taken_0x236368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236368u;
        // 0x23636c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236368) {
            ctx->pc = 0x236480u;
            goto label_236480;
        }
    }
    ctx->pc = 0x236370u;
label_236370:
    // 0x236370: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x236370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_236374:
    // 0x236374: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x236374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_236378:
    // 0x236378: 0x222900a  movz        $s2, $s1, $v0
    ctx->pc = 0x236378u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 17));
label_23637c:
    // 0x23637c: 0x12400017  beqz        $s2, . + 4 + (0x17 << 2)
label_236380:
    if (ctx->pc == 0x236380u) {
        ctx->pc = 0x236384u;
        goto label_236384;
    }
    ctx->pc = 0x23637Cu;
    {
        const bool branch_taken_0x23637c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x23637c) {
            ctx->pc = 0x2363DCu;
            goto label_2363dc;
        }
    }
    ctx->pc = 0x236384u;
label_236384:
    // 0x236384: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x236384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_236388:
    // 0x236388: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x236388u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23638c:
    // 0x23638c: 0x0  nop
    ctx->pc = 0x23638cu;
    // NOP
label_236390:
    // 0x236390: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x236390u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_236394:
    // 0x236394: 0x0  nop
    ctx->pc = 0x236394u;
    // NOP
label_236398:
    // 0x236398: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_23639c:
    if (ctx->pc == 0x23639Cu) {
        ctx->pc = 0x23639Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236398u;
        // 0x23639c: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2363A0u;
        goto label_2363a0;
    }
    ctx->pc = 0x236398u;
    {
        const bool branch_taken_0x236398 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23639Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236398u;
        // 0x23639c: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236398) {
            ctx->pc = 0x2363C0u;
            goto label_2363c0;
        }
    }
    ctx->pc = 0x2363A0u;
label_2363a0:
    // 0x2363a0: 0x8e4211c0  lw          $v0, 0x11C0($s2)
    ctx->pc = 0x2363a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4544)));
label_2363a4:
    // 0x2363a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2363a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2363a8:
    // 0x2363a8: 0x10430050  beq         $v0, $v1, . + 4 + (0x50 << 2)
label_2363ac:
    if (ctx->pc == 0x2363ACu) {
        ctx->pc = 0x2363ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2363A8u;
        // 0x2363ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2363B0u;
        goto label_2363b0;
    }
    ctx->pc = 0x2363A8u;
    {
        const bool branch_taken_0x2363a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2363ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2363A8u;
        // 0x2363ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2363a8) {
            ctx->pc = 0x2364ECu;
            goto label_2364ec;
        }
    }
    ctx->pc = 0x2363B0u;
label_2363b0:
    // 0x2363b0: 0xc08dada  jal         func_236B68
label_2363b4:
    if (ctx->pc == 0x2363B4u) {
        ctx->pc = 0x2363B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2363B0u;
        // 0x2363b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2363B8u;
        goto label_2363b8;
    }
    ctx->pc = 0x2363B0u;
    SET_GPR_U32(ctx, 31, 0x2363B8u);
    ctx->pc = 0x2363B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2363B0u;
    // 0x2363b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B68u, 0x2363B0u, 0x2363B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2363B8u;
label_2363b8:
    // 0x2363b8: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
label_2363bc:
    if (ctx->pc == 0x2363BCu) {
        ctx->pc = 0x2363BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2363B8u;
        // 0x2363bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2363C0u;
        goto label_2363c0;
    }
    ctx->pc = 0x2363B8u;
    {
        const bool branch_taken_0x2363b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2363BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2363B8u;
        // 0x2363bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2363b8) {
            ctx->pc = 0x2364ECu;
            goto label_2364ec;
        }
    }
    ctx->pc = 0x2363C0u;
label_2363c0:
    // 0x2363c0: 0x8e4211c0  lw          $v0, 0x11C0($s2)
    ctx->pc = 0x2363c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4544)));
label_2363c4:
    // 0x2363c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2363c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2363c8:
    // 0x2363c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2363cc:
    if (ctx->pc == 0x2363CCu) {
        ctx->pc = 0x2363D0u;
        goto label_2363d0;
    }
    ctx->pc = 0x2363C8u;
    {
        const bool branch_taken_0x2363c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2363c8) {
            ctx->pc = 0x2363DCu;
            goto label_2363dc;
        }
    }
    ctx->pc = 0x2363D0u;
label_2363d0:
    // 0x2363d0: 0x8e42121c  lw          $v0, 0x121C($s2)
    ctx->pc = 0x2363d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4636)));
label_2363d4:
    // 0x2363d4: 0x16020045  bne         $s0, $v0, . + 4 + (0x45 << 2)
label_2363d8:
    if (ctx->pc == 0x2363D8u) {
        ctx->pc = 0x2363D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2363D4u;
        // 0x2363d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2363DCu;
        goto label_2363dc;
    }
    ctx->pc = 0x2363D4u;
    {
        const bool branch_taken_0x2363d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2363D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2363D4u;
        // 0x2363d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2363d4) {
            ctx->pc = 0x2364ECu;
            goto label_2364ec;
        }
    }
    ctx->pc = 0x2363DCu;
label_2363dc:
    // 0x2363dc: 0xc06b600  jal         func_1AD800
label_2363e0:
    if (ctx->pc == 0x2363E0u) {
        ctx->pc = 0x2363E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2363DCu;
        // 0x2363e0: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2363E4u;
        goto label_2363e4;
    }
    ctx->pc = 0x2363DCu;
    SET_GPR_U32(ctx, 31, 0x2363E4u);
    ctx->pc = 0x2363E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2363DCu;
    // 0x2363e0: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD800u, 0x2363DCu, 0x2363E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2363E4u;
label_2363e4:
    // 0x2363e4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_2363e8:
    if (ctx->pc == 0x2363E8u) {
        ctx->pc = 0x2363ECu;
        goto label_2363ec;
    }
    ctx->pc = 0x2363E4u;
    {
        const bool branch_taken_0x2363e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2363e4) {
            ctx->pc = 0x236480u;
            goto label_236480;
        }
    }
    ctx->pc = 0x2363ECu;
label_2363ec:
    // 0x2363ec: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
label_2363f0:
    if (ctx->pc == 0x2363F0u) {
        ctx->pc = 0x2363F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2363ECu;
        // 0x2363f0: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2363F4u;
        goto label_2363f4;
    }
    ctx->pc = 0x2363ECu;
    {
        const bool branch_taken_0x2363ec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2363F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2363ECu;
        // 0x2363f0: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2363ec) {
            ctx->pc = 0x236404u;
            goto label_236404;
        }
    }
    ctx->pc = 0x2363F4u;
label_2363f4:
    // 0x2363f4: 0x8e220370  lw          $v0, 0x370($s1)
    ctx->pc = 0x2363f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
label_2363f8:
    // 0x2363f8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2363f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_2363fc:
    // 0x2363fc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_236400:
    if (ctx->pc == 0x236400u) {
        ctx->pc = 0x236404u;
        goto label_236404;
    }
    ctx->pc = 0x2363FCu;
    {
        const bool branch_taken_0x2363fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2363fc) {
            ctx->pc = 0x236438u;
            goto label_236438;
        }
    }
    ctx->pc = 0x236404u;
label_236404:
    // 0x236404: 0x9202047d  lbu         $v0, 0x47D($s0)
    ctx->pc = 0x236404u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1149)));
label_236408:
    // 0x236408: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_23640c:
    if (ctx->pc == 0x23640Cu) {
        ctx->pc = 0x23640Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236408u;
        // 0x23640c: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236410u;
        goto label_236410;
    }
    ctx->pc = 0x236408u;
    {
        const bool branch_taken_0x236408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23640Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236408u;
        // 0x23640c: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236408) {
            ctx->pc = 0x236438u;
            goto label_236438;
        }
    }
    ctx->pc = 0x236410u;
label_236410:
    // 0x236410: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x236410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_236414:
    // 0x236414: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_236418:
    if (ctx->pc == 0x236418u) {
        ctx->pc = 0x236418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236414u;
        // 0x236418: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23641Cu;
        goto label_23641c;
    }
    ctx->pc = 0x236414u;
    {
        const bool branch_taken_0x236414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x236418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236414u;
        // 0x236418: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236414) {
            ctx->pc = 0x236430u;
            goto label_236430;
        }
    }
    ctx->pc = 0x23641Cu;
label_23641c:
    // 0x23641c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_236420:
    if (ctx->pc == 0x236420u) {
        ctx->pc = 0x236420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23641Cu;
        // 0x236420: 0x240205a2  addiu       $v0, $zero, 0x5A2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1442));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236424u;
        goto label_236424;
    }
    ctx->pc = 0x23641Cu;
    {
        const bool branch_taken_0x23641c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x236420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23641Cu;
        // 0x236420: 0x240205a2  addiu       $v0, $zero, 0x5A2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1442));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23641c) {
            ctx->pc = 0x236438u;
            goto label_236438;
        }
    }
    ctx->pc = 0x236424u;
label_236424:
    // 0x236424: 0x8c8300ac  lw          $v1, 0xAC($a0)
    ctx->pc = 0x236424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
label_236428:
    // 0x236428: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_23642c:
    if (ctx->pc == 0x23642Cu) {
        ctx->pc = 0x236430u;
        goto label_236430;
    }
    ctx->pc = 0x236428u;
    {
        const bool branch_taken_0x236428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x236428) {
            ctx->pc = 0x236438u;
            goto label_236438;
        }
    }
    ctx->pc = 0x236430u;
label_236430:
    // 0x236430: 0x10000013  b           . + 4 + (0x13 << 2)
label_236434:
    if (ctx->pc == 0x236434u) {
        ctx->pc = 0x236434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236430u;
        // 0x236434: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236438u;
        goto label_236438;
    }
    ctx->pc = 0x236430u;
    {
        const bool branch_taken_0x236430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236430u;
        // 0x236434: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236430) {
            ctx->pc = 0x236480u;
            goto label_236480;
        }
    }
    ctx->pc = 0x236438u;
label_236438:
    // 0x236438: 0x16400011  bnez        $s2, . + 4 + (0x11 << 2)
label_23643c:
    if (ctx->pc == 0x23643Cu) {
        ctx->pc = 0x23643Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236438u;
        // 0x23643c: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236440u;
        goto label_236440;
    }
    ctx->pc = 0x236438u;
    {
        const bool branch_taken_0x236438 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x23643Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236438u;
        // 0x23643c: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236438) {
            ctx->pc = 0x236480u;
            goto label_236480;
        }
    }
    ctx->pc = 0x236440u;
label_236440:
    // 0x236440: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x236440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236444:
    // 0x236444: 0xc0b1260  jal         func_2C4980
label_236448:
    if (ctx->pc == 0x236448u) {
        ctx->pc = 0x236448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236444u;
        // 0x236448: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23644Cu;
        goto label_23644c;
    }
    ctx->pc = 0x236444u;
    SET_GPR_U32(ctx, 31, 0x23644Cu);
    ctx->pc = 0x236448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236444u;
    // 0x236448: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4980u, 0x236444u, 0x23644Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23644Cu;
label_23644c:
    // 0x23644c: 0x1000000c  b           . + 4 + (0xC << 2)
label_236450:
    if (ctx->pc == 0x236450u) {
        ctx->pc = 0x236450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23644Cu;
        // 0x236450: 0x24540002  addiu       $s4, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236454u;
        goto label_236454;
    }
    ctx->pc = 0x23644Cu;
    {
        const bool branch_taken_0x23644c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23644Cu;
        // 0x236450: 0x24540002  addiu       $s4, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23644c) {
            ctx->pc = 0x236480u;
            goto label_236480;
        }
    }
    ctx->pc = 0x236454u;
label_236454:
    // 0x236454: 0x906200b0  lbu         $v0, 0xB0($v1)
    ctx->pc = 0x236454u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 176)));
label_236458:
    // 0x236458: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x236458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
label_23645c:
    // 0x23645c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_236460:
    if (ctx->pc == 0x236460u) {
        ctx->pc = 0x236464u;
        goto label_236464;
    }
    ctx->pc = 0x23645Cu;
    {
        const bool branch_taken_0x23645c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23645c) {
            ctx->pc = 0x236480u;
            goto label_236480;
        }
    }
    ctx->pc = 0x236464u;
label_236464:
    // 0x236464: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x236464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_236468:
    // 0x236468: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_23646c:
    if (ctx->pc == 0x23646Cu) {
        ctx->pc = 0x23646Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236468u;
        // 0x23646c: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236470u;
        goto label_236470;
    }
    ctx->pc = 0x236468u;
    {
        const bool branch_taken_0x236468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236468) {
            ctx->pc = 0x23646Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236468u;
            // 0x23646c: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236480u;
            goto label_236480;
        }
    }
    ctx->pc = 0x236470u;
label_236470:
    // 0x236470: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x236470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_236474:
    // 0x236474: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x236474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_236478:
    // 0x236478: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_23647c:
    if (ctx->pc == 0x23647Cu) {
        ctx->pc = 0x23647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236478u;
        // 0x23647c: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236480u;
        goto label_236480;
    }
    ctx->pc = 0x236478u;
    {
        const bool branch_taken_0x236478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x236478) {
            ctx->pc = 0x23647Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236478u;
            // 0x23647c: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236480u;
            goto label_236480;
        }
    }
    ctx->pc = 0x236480u;
label_236480:
    // 0x236480: 0x5280000b  beql        $s4, $zero, . + 4 + (0xB << 2)
label_236484:
    if (ctx->pc == 0x236484u) {
        ctx->pc = 0x236484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236480u;
        // 0x236484: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236488u;
        goto label_236488;
    }
    ctx->pc = 0x236480u;
    {
        const bool branch_taken_0x236480 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x236480) {
            ctx->pc = 0x236484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236480u;
            // 0x236484: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2364B0u;
            goto label_2364b0;
        }
    }
    ctx->pc = 0x236488u;
label_236488:
    // 0x236488: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
label_23648c:
    if (ctx->pc == 0x23648Cu) {
        ctx->pc = 0x23648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236488u;
        // 0x23648c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236490u;
        goto label_236490;
    }
    ctx->pc = 0x236488u;
    {
        const bool branch_taken_0x236488 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x23648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236488u;
        // 0x23648c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236488) {
            ctx->pc = 0x2364A8u;
            goto label_2364a8;
        }
    }
    ctx->pc = 0x236490u;
label_236490:
    // 0x236490: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x236490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_236494:
    // 0x236494: 0x8c6201d4  lw          $v0, 0x1D4($v1)
    ctx->pc = 0x236494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 468)));
label_236498:
    // 0x236498: 0x40f809  jalr        $v0
label_23649c:
    if (ctx->pc == 0x23649Cu) {
        ctx->pc = 0x23649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236498u;
        // 0x23649c: 0x328500ff  andi        $a1, $s4, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2364A0u;
        goto label_2364a0;
    }
    ctx->pc = 0x236498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2364A0u);
        ctx->pc = 0x23649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236498u;
        // 0x23649c: 0x328500ff  andi        $a1, $s4, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236498u, 0x2364A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2364A0u;
label_2364a0:
    // 0x2364a0: 0x10000013  b           . + 4 + (0x13 << 2)
label_2364a4:
    if (ctx->pc == 0x2364A4u) {
        ctx->pc = 0x2364A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364A0u;
        // 0x2364a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2364A8u;
        goto label_2364a8;
    }
    ctx->pc = 0x2364A0u;
    {
        const bool branch_taken_0x2364a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2364A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364A0u;
        // 0x2364a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2364a0) {
            ctx->pc = 0x2364F0u;
            goto label_2364f0;
        }
    }
    ctx->pc = 0x2364A8u;
label_2364a8:
    // 0x2364a8: 0x10000010  b           . + 4 + (0x10 << 2)
label_2364ac:
    if (ctx->pc == 0x2364ACu) {
        ctx->pc = 0x2364ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364A8u;
        // 0x2364ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2364B0u;
        goto label_2364b0;
    }
    ctx->pc = 0x2364A8u;
    {
        const bool branch_taken_0x2364a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2364ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364A8u;
        // 0x2364ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2364a8) {
            ctx->pc = 0x2364ECu;
            goto label_2364ec;
        }
    }
    ctx->pc = 0x2364B0u;
label_2364b0:
    // 0x2364b0: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x2364b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_2364b4:
    // 0x2364b4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2364b8:
    if (ctx->pc == 0x2364B8u) {
        ctx->pc = 0x2364B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364B4u;
        // 0x2364b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2364BCu;
        goto label_2364bc;
    }
    ctx->pc = 0x2364B4u;
    {
        const bool branch_taken_0x2364b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2364B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364B4u;
        // 0x2364b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2364b4) {
            ctx->pc = 0x2364ECu;
            goto label_2364ec;
        }
    }
    ctx->pc = 0x2364BCu;
label_2364bc:
    // 0x2364bc: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x2364bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_2364c0:
    // 0x2364c0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2364c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_2364c4:
    // 0x2364c4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2364c8:
    if (ctx->pc == 0x2364C8u) {
        ctx->pc = 0x2364C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364C4u;
        // 0x2364c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2364CCu;
        goto label_2364cc;
    }
    ctx->pc = 0x2364C4u;
    {
        const bool branch_taken_0x2364c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2364c4) {
            ctx->pc = 0x2364C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2364C4u;
            // 0x2364c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2364ECu;
            goto label_2364ec;
        }
    }
    ctx->pc = 0x2364CCu;
label_2364cc:
    // 0x2364cc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2364ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2364d0:
    // 0x2364d0: 0x8c43bd50  lw          $v1, -0x42B0($v0)
    ctx->pc = 0x2364d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
label_2364d4:
    // 0x2364d4: 0xc06b600  jal         func_1AD800
label_2364d8:
    if (ctx->pc == 0x2364D8u) {
        ctx->pc = 0x2364D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364D4u;
        // 0x2364d8: 0x8c640334  lw          $a0, 0x334($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2364DCu;
        goto label_2364dc;
    }
    ctx->pc = 0x2364D4u;
    SET_GPR_U32(ctx, 31, 0x2364DCu);
    ctx->pc = 0x2364D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2364D4u;
    // 0x2364d8: 0x8c640334  lw          $a0, 0x334($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD800u, 0x2364D4u, 0x2364DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2364DCu;
label_2364dc:
    // 0x2364dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2364dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2364e0:
    // 0x2364e0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_2364e4:
    if (ctx->pc == 0x2364E4u) {
        ctx->pc = 0x2364E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364E0u;
        // 0x2364e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2364E8u;
        goto label_2364e8;
    }
    ctx->pc = 0x2364E0u;
    {
        const bool branch_taken_0x2364e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2364E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364E0u;
        // 0x2364e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2364e0) {
            ctx->pc = 0x2364ECu;
            goto label_2364ec;
        }
    }
    ctx->pc = 0x2364E8u;
label_2364e8:
    // 0x2364e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2364e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2364ec:
    // 0x2364ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2364ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2364f0:
    // 0x2364f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2364f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2364f4:
    // 0x2364f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2364f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2364f8:
    // 0x2364f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2364f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2364fc:
    // 0x2364fc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2364fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_236500:
    // 0x236500: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x236500u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_236504:
    // 0x236504: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x236504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_236508:
    // 0x236508: 0x3e00008  jr          $ra
label_23650c:
    if (ctx->pc == 0x23650Cu) {
        ctx->pc = 0x23650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236508u;
        // 0x23650c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236510u;
        goto label_fallthrough_0x236508;
    }
    ctx->pc = 0x236508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236508u;
        // 0x23650c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x236508:
    ctx->pc = 0x236510u;
}
