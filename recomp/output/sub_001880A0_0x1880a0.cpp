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

// Function: sub_001880A0
// Address: 0x1880a0 - 0x1884d0
void sub_001880A0_0x1880a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001880A0_0x1880a0");
#endif

    switch (ctx->pc) {
        case 0x1880a0u: goto label_1880a0;
        case 0x1880a4u: goto label_1880a4;
        case 0x1880a8u: goto label_1880a8;
        case 0x1880acu: goto label_1880ac;
        case 0x1880b0u: goto label_1880b0;
        case 0x1880b4u: goto label_1880b4;
        case 0x1880b8u: goto label_1880b8;
        case 0x1880bcu: goto label_1880bc;
        case 0x1880c0u: goto label_1880c0;
        case 0x1880c4u: goto label_1880c4;
        case 0x1880c8u: goto label_1880c8;
        case 0x1880ccu: goto label_1880cc;
        case 0x1880d0u: goto label_1880d0;
        case 0x1880d4u: goto label_1880d4;
        case 0x1880d8u: goto label_1880d8;
        case 0x1880dcu: goto label_1880dc;
        case 0x1880e0u: goto label_1880e0;
        case 0x1880e4u: goto label_1880e4;
        case 0x1880e8u: goto label_1880e8;
        case 0x1880ecu: goto label_1880ec;
        case 0x1880f0u: goto label_1880f0;
        case 0x1880f4u: goto label_1880f4;
        case 0x1880f8u: goto label_1880f8;
        case 0x1880fcu: goto label_1880fc;
        case 0x188100u: goto label_188100;
        case 0x188104u: goto label_188104;
        case 0x188108u: goto label_188108;
        case 0x18810cu: goto label_18810c;
        case 0x188110u: goto label_188110;
        case 0x188114u: goto label_188114;
        case 0x188118u: goto label_188118;
        case 0x18811cu: goto label_18811c;
        case 0x188120u: goto label_188120;
        case 0x188124u: goto label_188124;
        case 0x188128u: goto label_188128;
        case 0x18812cu: goto label_18812c;
        case 0x188130u: goto label_188130;
        case 0x188134u: goto label_188134;
        case 0x188138u: goto label_188138;
        case 0x18813cu: goto label_18813c;
        case 0x188140u: goto label_188140;
        case 0x188144u: goto label_188144;
        case 0x188148u: goto label_188148;
        case 0x18814cu: goto label_18814c;
        case 0x188150u: goto label_188150;
        case 0x188154u: goto label_188154;
        case 0x188158u: goto label_188158;
        case 0x18815cu: goto label_18815c;
        case 0x188160u: goto label_188160;
        case 0x188164u: goto label_188164;
        case 0x188168u: goto label_188168;
        case 0x18816cu: goto label_18816c;
        case 0x188170u: goto label_188170;
        case 0x188174u: goto label_188174;
        case 0x188178u: goto label_188178;
        case 0x18817cu: goto label_18817c;
        case 0x188180u: goto label_188180;
        case 0x188184u: goto label_188184;
        case 0x188188u: goto label_188188;
        case 0x18818cu: goto label_18818c;
        case 0x188190u: goto label_188190;
        case 0x188194u: goto label_188194;
        case 0x188198u: goto label_188198;
        case 0x18819cu: goto label_18819c;
        case 0x1881a0u: goto label_1881a0;
        case 0x1881a4u: goto label_1881a4;
        case 0x1881a8u: goto label_1881a8;
        case 0x1881acu: goto label_1881ac;
        case 0x1881b0u: goto label_1881b0;
        case 0x1881b4u: goto label_1881b4;
        case 0x1881b8u: goto label_1881b8;
        case 0x1881bcu: goto label_1881bc;
        case 0x1881c0u: goto label_1881c0;
        case 0x1881c4u: goto label_1881c4;
        case 0x1881c8u: goto label_1881c8;
        case 0x1881ccu: goto label_1881cc;
        case 0x1881d0u: goto label_1881d0;
        case 0x1881d4u: goto label_1881d4;
        case 0x1881d8u: goto label_1881d8;
        case 0x1881dcu: goto label_1881dc;
        case 0x1881e0u: goto label_1881e0;
        case 0x1881e4u: goto label_1881e4;
        case 0x1881e8u: goto label_1881e8;
        case 0x1881ecu: goto label_1881ec;
        case 0x1881f0u: goto label_1881f0;
        case 0x1881f4u: goto label_1881f4;
        case 0x1881f8u: goto label_1881f8;
        case 0x1881fcu: goto label_1881fc;
        case 0x188200u: goto label_188200;
        case 0x188204u: goto label_188204;
        case 0x188208u: goto label_188208;
        case 0x18820cu: goto label_18820c;
        case 0x188210u: goto label_188210;
        case 0x188214u: goto label_188214;
        case 0x188218u: goto label_188218;
        case 0x18821cu: goto label_18821c;
        case 0x188220u: goto label_188220;
        case 0x188224u: goto label_188224;
        case 0x188228u: goto label_188228;
        case 0x18822cu: goto label_18822c;
        case 0x188230u: goto label_188230;
        case 0x188234u: goto label_188234;
        case 0x188238u: goto label_188238;
        case 0x18823cu: goto label_18823c;
        case 0x188240u: goto label_188240;
        case 0x188244u: goto label_188244;
        case 0x188248u: goto label_188248;
        case 0x18824cu: goto label_18824c;
        case 0x188250u: goto label_188250;
        case 0x188254u: goto label_188254;
        case 0x188258u: goto label_188258;
        case 0x18825cu: goto label_18825c;
        case 0x188260u: goto label_188260;
        case 0x188264u: goto label_188264;
        case 0x188268u: goto label_188268;
        case 0x18826cu: goto label_18826c;
        case 0x188270u: goto label_188270;
        case 0x188274u: goto label_188274;
        case 0x188278u: goto label_188278;
        case 0x18827cu: goto label_18827c;
        case 0x188280u: goto label_188280;
        case 0x188284u: goto label_188284;
        case 0x188288u: goto label_188288;
        case 0x18828cu: goto label_18828c;
        case 0x188290u: goto label_188290;
        case 0x188294u: goto label_188294;
        case 0x188298u: goto label_188298;
        case 0x18829cu: goto label_18829c;
        case 0x1882a0u: goto label_1882a0;
        case 0x1882a4u: goto label_1882a4;
        case 0x1882a8u: goto label_1882a8;
        case 0x1882acu: goto label_1882ac;
        case 0x1882b0u: goto label_1882b0;
        case 0x1882b4u: goto label_1882b4;
        case 0x1882b8u: goto label_1882b8;
        case 0x1882bcu: goto label_1882bc;
        case 0x1882c0u: goto label_1882c0;
        case 0x1882c4u: goto label_1882c4;
        case 0x1882c8u: goto label_1882c8;
        case 0x1882ccu: goto label_1882cc;
        case 0x1882d0u: goto label_1882d0;
        case 0x1882d4u: goto label_1882d4;
        case 0x1882d8u: goto label_1882d8;
        case 0x1882dcu: goto label_1882dc;
        case 0x1882e0u: goto label_1882e0;
        case 0x1882e4u: goto label_1882e4;
        case 0x1882e8u: goto label_1882e8;
        case 0x1882ecu: goto label_1882ec;
        case 0x1882f0u: goto label_1882f0;
        case 0x1882f4u: goto label_1882f4;
        case 0x1882f8u: goto label_1882f8;
        case 0x1882fcu: goto label_1882fc;
        case 0x188300u: goto label_188300;
        case 0x188304u: goto label_188304;
        case 0x188308u: goto label_188308;
        case 0x18830cu: goto label_18830c;
        case 0x188310u: goto label_188310;
        case 0x188314u: goto label_188314;
        case 0x188318u: goto label_188318;
        case 0x18831cu: goto label_18831c;
        case 0x188320u: goto label_188320;
        case 0x188324u: goto label_188324;
        case 0x188328u: goto label_188328;
        case 0x18832cu: goto label_18832c;
        case 0x188330u: goto label_188330;
        case 0x188334u: goto label_188334;
        case 0x188338u: goto label_188338;
        case 0x18833cu: goto label_18833c;
        case 0x188340u: goto label_188340;
        case 0x188344u: goto label_188344;
        case 0x188348u: goto label_188348;
        case 0x18834cu: goto label_18834c;
        case 0x188350u: goto label_188350;
        case 0x188354u: goto label_188354;
        case 0x188358u: goto label_188358;
        case 0x18835cu: goto label_18835c;
        case 0x188360u: goto label_188360;
        case 0x188364u: goto label_188364;
        case 0x188368u: goto label_188368;
        case 0x18836cu: goto label_18836c;
        case 0x188370u: goto label_188370;
        case 0x188374u: goto label_188374;
        case 0x188378u: goto label_188378;
        case 0x18837cu: goto label_18837c;
        case 0x188380u: goto label_188380;
        case 0x188384u: goto label_188384;
        case 0x188388u: goto label_188388;
        case 0x18838cu: goto label_18838c;
        case 0x188390u: goto label_188390;
        case 0x188394u: goto label_188394;
        case 0x188398u: goto label_188398;
        case 0x18839cu: goto label_18839c;
        case 0x1883a0u: goto label_1883a0;
        case 0x1883a4u: goto label_1883a4;
        case 0x1883a8u: goto label_1883a8;
        case 0x1883acu: goto label_1883ac;
        case 0x1883b0u: goto label_1883b0;
        case 0x1883b4u: goto label_1883b4;
        case 0x1883b8u: goto label_1883b8;
        case 0x1883bcu: goto label_1883bc;
        case 0x1883c0u: goto label_1883c0;
        case 0x1883c4u: goto label_1883c4;
        case 0x1883c8u: goto label_1883c8;
        case 0x1883ccu: goto label_1883cc;
        case 0x1883d0u: goto label_1883d0;
        case 0x1883d4u: goto label_1883d4;
        case 0x1883d8u: goto label_1883d8;
        case 0x1883dcu: goto label_1883dc;
        case 0x1883e0u: goto label_1883e0;
        case 0x1883e4u: goto label_1883e4;
        case 0x1883e8u: goto label_1883e8;
        case 0x1883ecu: goto label_1883ec;
        case 0x1883f0u: goto label_1883f0;
        case 0x1883f4u: goto label_1883f4;
        case 0x1883f8u: goto label_1883f8;
        case 0x1883fcu: goto label_1883fc;
        case 0x188400u: goto label_188400;
        case 0x188404u: goto label_188404;
        case 0x188408u: goto label_188408;
        case 0x18840cu: goto label_18840c;
        case 0x188410u: goto label_188410;
        case 0x188414u: goto label_188414;
        case 0x188418u: goto label_188418;
        case 0x18841cu: goto label_18841c;
        case 0x188420u: goto label_188420;
        case 0x188424u: goto label_188424;
        case 0x188428u: goto label_188428;
        case 0x18842cu: goto label_18842c;
        case 0x188430u: goto label_188430;
        case 0x188434u: goto label_188434;
        case 0x188438u: goto label_188438;
        case 0x18843cu: goto label_18843c;
        case 0x188440u: goto label_188440;
        case 0x188444u: goto label_188444;
        case 0x188448u: goto label_188448;
        case 0x18844cu: goto label_18844c;
        case 0x188450u: goto label_188450;
        case 0x188454u: goto label_188454;
        case 0x188458u: goto label_188458;
        case 0x18845cu: goto label_18845c;
        case 0x188460u: goto label_188460;
        case 0x188464u: goto label_188464;
        case 0x188468u: goto label_188468;
        case 0x18846cu: goto label_18846c;
        case 0x188470u: goto label_188470;
        case 0x188474u: goto label_188474;
        case 0x188478u: goto label_188478;
        case 0x18847cu: goto label_18847c;
        case 0x188480u: goto label_188480;
        case 0x188484u: goto label_188484;
        case 0x188488u: goto label_188488;
        case 0x18848cu: goto label_18848c;
        case 0x188490u: goto label_188490;
        case 0x188494u: goto label_188494;
        case 0x188498u: goto label_188498;
        case 0x18849cu: goto label_18849c;
        case 0x1884a0u: goto label_1884a0;
        case 0x1884a4u: goto label_1884a4;
        case 0x1884a8u: goto label_1884a8;
        case 0x1884acu: goto label_1884ac;
        case 0x1884b0u: goto label_1884b0;
        case 0x1884b4u: goto label_1884b4;
        case 0x1884b8u: goto label_1884b8;
        case 0x1884bcu: goto label_1884bc;
        case 0x1884c0u: goto label_1884c0;
        case 0x1884c4u: goto label_1884c4;
        case 0x1884c8u: goto label_1884c8;
        case 0x1884ccu: goto label_1884cc;
        default: break;
    }

    ctx->pc = 0x1880a0u;

label_1880a0:
    // 0x1880a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1880a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1880a4:
    // 0x1880a4: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1880a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_1880a8:
    // 0x1880a8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1880a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_1880ac:
    // 0x1880ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1880acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1880b0:
    // 0x1880b0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1880b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1880b4:
    // 0x1880b4: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x1880b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1880b8:
    // 0x1880b8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1880b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1880bc:
    // 0x1880bc: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x1880bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_1880c0:
    // 0x1880c0: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x1880c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_1880c4:
    // 0x1880c4: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x1880c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_1880c8:
    // 0x1880c8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_1880cc:
    if (ctx->pc == 0x1880CCu) {
        ctx->pc = 0x1880CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880C8u;
        // 0x1880cc: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1880D0u;
        goto label_1880d0;
    }
    ctx->pc = 0x1880C8u;
    {
        const bool branch_taken_0x1880c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1880c8) {
            ctx->pc = 0x1880CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1880C8u;
            // 0x1880cc: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1880ECu;
            goto label_1880ec;
        }
    }
    ctx->pc = 0x1880D0u;
label_1880d0:
    // 0x1880d0: 0x8c620ff8  lw          $v0, 0xFF8($v1)
    ctx->pc = 0x1880d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4088)));
label_1880d4:
    // 0x1880d4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1880d8:
    if (ctx->pc == 0x1880D8u) {
        ctx->pc = 0x1880D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880D4u;
        // 0x1880d8: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1880DCu;
        goto label_1880dc;
    }
    ctx->pc = 0x1880D4u;
    {
        const bool branch_taken_0x1880d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1880d4) {
            ctx->pc = 0x1880D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1880D4u;
            // 0x1880d8: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1880ECu;
            goto label_1880ec;
        }
    }
    ctx->pc = 0x1880DCu;
label_1880dc:
    // 0x1880dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1880dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1880e0:
    // 0x1880e0: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
label_1880e4:
    if (ctx->pc == 0x1880E4u) {
        ctx->pc = 0x1880E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880E0u;
        // 0x1880e4: 0x8c700fe8  lw          $s0, 0xFE8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4072)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1880E8u;
        goto label_1880e8;
    }
    ctx->pc = 0x1880E0u;
    {
        const bool branch_taken_0x1880e0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1880e0) {
            ctx->pc = 0x1880E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1880E0u;
            // 0x1880e4: 0x8c700fe8  lw          $s0, 0xFE8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4072)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188104u;
            goto label_188104;
        }
    }
    ctx->pc = 0x1880E8u;
label_1880e8:
    // 0x1880e8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1880e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1880ec:
    // 0x1880ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1880ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1880f0:
    // 0x1880f0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1880f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1880f4:
    // 0x1880f4: 0x40f809  jalr        $v0
label_1880f8:
    if (ctx->pc == 0x1880F8u) {
        ctx->pc = 0x1880F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880F4u;
        // 0x1880f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1880FCu;
        goto label_1880fc;
    }
    ctx->pc = 0x1880F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1880FCu);
        ctx->pc = 0x1880F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880F4u;
        // 0x1880f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1880F4u, 0x1880FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1880FCu;
label_1880fc:
    // 0x1880fc: 0x100000ed  b           . + 4 + (0xED << 2)
label_188100:
    if (ctx->pc == 0x188100u) {
        ctx->pc = 0x188100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880FCu;
        // 0x188100: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188104u;
        goto label_188104;
    }
    ctx->pc = 0x1880FCu;
    {
        const bool branch_taken_0x1880fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880FCu;
        // 0x188100: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1880fc) {
            ctx->pc = 0x1884B4u;
            goto label_1884b4;
        }
    }
    ctx->pc = 0x188104u;
label_188104:
    // 0x188104: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x188104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_188108:
    // 0x188108: 0xc061a12  jal         func_186848
label_18810c:
    if (ctx->pc == 0x18810Cu) {
        ctx->pc = 0x18810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188108u;
        // 0x18810c: 0x261001e0  addiu       $s0, $s0, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188110u;
        goto label_188110;
    }
    ctx->pc = 0x188108u;
    SET_GPR_U32(ctx, 31, 0x188110u);
    ctx->pc = 0x18810Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188108u;
    // 0x18810c: 0x261001e0  addiu       $s0, $s0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x188108u, 0x188110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188110u;
label_188110:
    // 0x188110: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x188110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
label_188114:
    // 0x188114: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x188114u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_188118:
    // 0x188118: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x188118u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_18811c:
    // 0x18811c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x18811cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_188120:
    // 0x188120: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x188120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_188124:
    // 0x188124: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x188124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_188128:
    // 0x188128: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x188128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18812c:
    // 0x18812c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x18812cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_188130:
    // 0x188130: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x188130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_188134:
    // 0x188134: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x188134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_188138:
    // 0x188138: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x188138u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_18813c:
    // 0x18813c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x18813cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_188140:
    // 0x188140: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x188140u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_188144:
    // 0x188144: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x188144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_188148:
    // 0x188148: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x188148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_18814c:
    // 0x18814c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x18814cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_188150:
    // 0x188150: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x188150u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_188154:
    // 0x188154: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x188154u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_188158:
    // 0x188158: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x188158u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_18815c:
    // 0x18815c: 0x46140504  c1          0x140504
    ctx->pc = 0x18815cu;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
label_188160:
    // 0x188160: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x188160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_188164:
    // 0x188164: 0x8c430fe4  lw          $v1, 0xFE4($v0)
    ctx->pc = 0x188164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4068)));
label_188168:
    // 0x188168: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x188168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_18816c:
    // 0x18816c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_188170:
    if (ctx->pc == 0x188170u) {
        ctx->pc = 0x188174u;
        goto label_188174;
    }
    ctx->pc = 0x18816Cu;
    {
        const bool branch_taken_0x18816c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18816c) {
            ctx->pc = 0x188184u;
            goto label_188184;
        }
    }
    ctx->pc = 0x188174u;
label_188174:
    // 0x188174: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x188174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_188178:
    // 0x188178: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x188178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_18817c:
    // 0x18817c: 0x40f809  jalr        $v0
label_188180:
    if (ctx->pc == 0x188180u) {
        ctx->pc = 0x188184u;
        goto label_188184;
    }
    ctx->pc = 0x18817Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x188184u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18817Cu, 0x188184u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x188184u;
label_188184:
    // 0x188184: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x188184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_188188:
    // 0x188188: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x188188u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_18818c:
    // 0x18818c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18818cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_188190:
    // 0x188190: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x188190u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_188194:
    // 0x188194: 0x0  nop
    ctx->pc = 0x188194u;
    // NOP
label_188198:
    // 0x188198: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_18819c:
    if (ctx->pc == 0x18819Cu) {
        ctx->pc = 0x18819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188198u;
        // 0x18819c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1881A0u;
        goto label_1881a0;
    }
    ctx->pc = 0x188198u;
    {
        const bool branch_taken_0x188198 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188198u;
        // 0x18819c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188198) {
            ctx->pc = 0x18820Cu;
            goto label_18820c;
        }
    }
    ctx->pc = 0x1881A0u;
label_1881a0:
    // 0x1881a0: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x1881a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_1881a4:
    // 0x1881a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1881a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1881a8:
    // 0x1881a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1881a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1881ac:
    // 0x1881ac: 0x8c641060  lw          $a0, 0x1060($v1)
    ctx->pc = 0x1881acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4192)));
label_1881b0:
    // 0x1881b0: 0x5482000d  bnel        $a0, $v0, . + 4 + (0xD << 2)
label_1881b4:
    if (ctx->pc == 0x1881B4u) {
        ctx->pc = 0x1881B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1881B0u;
        // 0x1881b4: 0x8e25004c  lw          $a1, 0x4C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1881B8u;
        goto label_1881b8;
    }
    ctx->pc = 0x1881B0u;
    {
        const bool branch_taken_0x1881b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1881b0) {
            ctx->pc = 0x1881B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1881B0u;
            // 0x1881b4: 0x8e25004c  lw          $a1, 0x4C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1881E8u;
            goto label_1881e8;
        }
    }
    ctx->pc = 0x1881B8u;
label_1881b8:
    // 0x1881b8: 0xc061a12  jal         func_186848
label_1881bc:
    if (ctx->pc == 0x1881BCu) {
        ctx->pc = 0x1881BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1881B8u;
        // 0x1881bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1881C0u;
        goto label_1881c0;
    }
    ctx->pc = 0x1881B8u;
    SET_GPR_U32(ctx, 31, 0x1881C0u);
    ctx->pc = 0x1881BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1881B8u;
    // 0x1881bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1881B8u, 0x1881C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1881C0u;
label_1881c0:
    // 0x1881c0: 0x8c430120  lw          $v1, 0x120($v0)
    ctx->pc = 0x1881c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
label_1881c4:
    // 0x1881c4: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
label_1881c8:
    if (ctx->pc == 0x1881C8u) {
        ctx->pc = 0x1881C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1881C4u;
        // 0x1881c8: 0x8e25004c  lw          $a1, 0x4C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1881CCu;
        goto label_1881cc;
    }
    ctx->pc = 0x1881C4u;
    {
        const bool branch_taken_0x1881c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1881c4) {
            ctx->pc = 0x1881C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1881C4u;
            // 0x1881c8: 0x8e25004c  lw          $a1, 0x4C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1881E8u;
            goto label_1881e8;
        }
    }
    ctx->pc = 0x1881CCu;
label_1881cc:
    // 0x1881cc: 0xc061a12  jal         func_186848
label_1881d0:
    if (ctx->pc == 0x1881D0u) {
        ctx->pc = 0x1881D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1881CCu;
        // 0x1881d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1881D4u;
        goto label_1881d4;
    }
    ctx->pc = 0x1881CCu;
    SET_GPR_U32(ctx, 31, 0x1881D4u);
    ctx->pc = 0x1881D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1881CCu;
    // 0x1881d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1881CCu, 0x1881D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1881D4u;
label_1881d4:
    // 0x1881d4: 0x8c430124  lw          $v1, 0x124($v0)
    ctx->pc = 0x1881d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
label_1881d8:
    // 0x1881d8: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x1881d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_1881dc:
    // 0x1881dc: 0x506200af  beql        $v1, $v0, . + 4 + (0xAF << 2)
label_1881e0:
    if (ctx->pc == 0x1881E0u) {
        ctx->pc = 0x1881E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1881DCu;
        // 0x1881e0: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1881E4u;
        goto label_1881e4;
    }
    ctx->pc = 0x1881DCu;
    {
        const bool branch_taken_0x1881dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1881dc) {
            ctx->pc = 0x1881E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1881DCu;
            // 0x1881e0: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18849Cu;
            goto label_18849c;
        }
    }
    ctx->pc = 0x1881E4u;
label_1881e4:
    // 0x1881e4: 0x8e25004c  lw          $a1, 0x4C($s1)
    ctx->pc = 0x1881e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_1881e8:
    // 0x1881e8: 0xc094f06  jal         func_253C18
label_1881ec:
    if (ctx->pc == 0x1881ECu) {
        ctx->pc = 0x1881ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1881E8u;
        // 0x1881ec: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1881F0u;
        goto label_1881f0;
    }
    ctx->pc = 0x1881E8u;
    SET_GPR_U32(ctx, 31, 0x1881F0u);
    ctx->pc = 0x1881ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1881E8u;
    // 0x1881ec: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253C18u, 0x1881E8u, 0x1881F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1881F0u;
label_1881f0:
    // 0x1881f0: 0xc061a16  jal         func_186858
label_1881f4:
    if (ctx->pc == 0x1881F4u) {
        ctx->pc = 0x1881F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1881F0u;
        // 0x1881f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1881F8u;
        goto label_1881f8;
    }
    ctx->pc = 0x1881F0u;
    SET_GPR_U32(ctx, 31, 0x1881F8u);
    ctx->pc = 0x1881F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1881F0u;
    // 0x1881f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1881F0u, 0x1881F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1881F8u;
label_1881f8:
    // 0x1881f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1881f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1881fc:
    // 0x1881fc: 0xc06ee30  jal         func_1BB8C0
label_188200:
    if (ctx->pc == 0x188200u) {
        ctx->pc = 0x188200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1881FCu;
        // 0x188200: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188204u;
        goto label_188204;
    }
    ctx->pc = 0x1881FCu;
    SET_GPR_U32(ctx, 31, 0x188204u);
    ctx->pc = 0x188200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1881FCu;
    // 0x188200: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB8C0u, 0x1881FCu, 0x188204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188204u;
label_188204:
    // 0x188204: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_188208:
    if (ctx->pc == 0x188208u) {
        ctx->pc = 0x188208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188204u;
        // 0x188208: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18820Cu;
        goto label_18820c;
    }
    ctx->pc = 0x188204u;
    {
        const bool branch_taken_0x188204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188204u;
        // 0x188208: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188204) {
            ctx->pc = 0x18849Cu;
            goto label_18849c;
        }
    }
    ctx->pc = 0x18820Cu;
label_18820c:
    // 0x18820c: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x18820cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_188210:
    // 0x188210: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x188210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_188214:
    // 0x188214: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x188214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_188218:
    // 0x188218: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x188218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
label_18821c:
    // 0x18821c: 0x5440003e  bnel        $v0, $zero, . + 4 + (0x3E << 2)
label_188220:
    if (ctx->pc == 0x188220u) {
        ctx->pc = 0x188220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18821Cu;
        // 0x188220: 0x8e25004c  lw          $a1, 0x4C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188224u;
        goto label_188224;
    }
    ctx->pc = 0x18821Cu;
    {
        const bool branch_taken_0x18821c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18821c) {
            ctx->pc = 0x188220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18821Cu;
            // 0x188220: 0x8e25004c  lw          $a1, 0x4C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188318u;
            goto label_188318;
        }
    }
    ctx->pc = 0x188224u;
label_188224:
    // 0x188224: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x188224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_188228:
    // 0x188228: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_18822c:
    if (ctx->pc == 0x18822Cu) {
        ctx->pc = 0x188230u;
        goto label_188230;
    }
    ctx->pc = 0x188228u;
    {
        const bool branch_taken_0x188228 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x188228) {
            ctx->pc = 0x188258u;
            goto label_188258;
        }
    }
    ctx->pc = 0x188230u;
label_188230:
    // 0x188230: 0x8c620fe4  lw          $v0, 0xFE4($v1)
    ctx->pc = 0x188230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4068)));
label_188234:
    // 0x188234: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x188234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_188238:
    // 0x188238: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_18823c:
    if (ctx->pc == 0x18823Cu) {
        ctx->pc = 0x188240u;
        goto label_188240;
    }
    ctx->pc = 0x188238u;
    {
        const bool branch_taken_0x188238 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x188238) {
            ctx->pc = 0x188258u;
            goto label_188258;
        }
    }
    ctx->pc = 0x188240u;
label_188240:
    // 0x188240: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x188240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_188244:
    // 0x188244: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x188244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_188248:
    // 0x188248: 0x40f809  jalr        $v0
label_18824c:
    if (ctx->pc == 0x18824Cu) {
        ctx->pc = 0x188250u;
        goto label_188250;
    }
    ctx->pc = 0x188248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x188250u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188248u, 0x188250u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x188250u;
label_188250:
    // 0x188250: 0x54400031  bnel        $v0, $zero, . + 4 + (0x31 << 2)
label_188254:
    if (ctx->pc == 0x188254u) {
        ctx->pc = 0x188254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188250u;
        // 0x188254: 0x8e25004c  lw          $a1, 0x4C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188258u;
        goto label_188258;
    }
    ctx->pc = 0x188250u;
    {
        const bool branch_taken_0x188250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188250) {
            ctx->pc = 0x188254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188250u;
            // 0x188254: 0x8e25004c  lw          $a1, 0x4C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188318u;
            goto label_188318;
        }
    }
    ctx->pc = 0x188258u;
label_188258:
    // 0x188258: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x188258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_18825c:
    // 0x18825c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18825cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_188260:
    // 0x188260: 0x0  nop
    ctx->pc = 0x188260u;
    // NOP
label_188264:
    // 0x188264: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x188264u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_188268:
    // 0x188268: 0x0  nop
    ctx->pc = 0x188268u;
    // NOP
label_18826c:
    // 0x18826c: 0x4502008b  bc1fl       . + 4 + (0x8B << 2)
label_188270:
    if (ctx->pc == 0x188270u) {
        ctx->pc = 0x188270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18826Cu;
        // 0x188270: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188274u;
        goto label_188274;
    }
    ctx->pc = 0x18826Cu;
    {
        const bool branch_taken_0x18826c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18826c) {
            ctx->pc = 0x188270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18826Cu;
            // 0x188270: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18849Cu;
            goto label_18849c;
        }
    }
    ctx->pc = 0x188274u;
label_188274:
    // 0x188274: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x188274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_188278:
    // 0x188278: 0x8c430fe4  lw          $v1, 0xFE4($v0)
    ctx->pc = 0x188278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4068)));
label_18827c:
    // 0x18827c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x18827cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_188280:
    // 0x188280: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
label_188284:
    if (ctx->pc == 0x188284u) {
        ctx->pc = 0x188288u;
        goto label_188288;
    }
    ctx->pc = 0x188280u;
    {
        const bool branch_taken_0x188280 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x188280) {
            ctx->pc = 0x188308u;
            goto label_188308;
        }
    }
    ctx->pc = 0x188288u;
label_188288:
    // 0x188288: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x188288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18828c:
    // 0x18828c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x18828cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_188290:
    // 0x188290: 0x40f809  jalr        $v0
label_188294:
    if (ctx->pc == 0x188294u) {
        ctx->pc = 0x188294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188290u;
        // 0x188294: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188298u;
        goto label_188298;
    }
    ctx->pc = 0x188290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x188298u);
        ctx->pc = 0x188294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188290u;
        // 0x188294: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188290u, 0x188298u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x188298u;
label_188298:
    // 0x188298: 0xc061a16  jal         func_186858
label_18829c:
    if (ctx->pc == 0x18829Cu) {
        ctx->pc = 0x18829Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188298u;
        // 0x18829c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1882A0u;
        goto label_1882a0;
    }
    ctx->pc = 0x188298u;
    SET_GPR_U32(ctx, 31, 0x1882A0u);
    ctx->pc = 0x18829Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188298u;
    // 0x18829c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x188298u, 0x1882A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1882A0u;
label_1882a0:
    // 0x1882a0: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x1882a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_1882a4:
    // 0x1882a4: 0x8c640fec  lw          $a0, 0xFEC($v1)
    ctx->pc = 0x1882a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4076)));
label_1882a8:
    // 0x1882a8: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x1882a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1882ac:
    // 0x1882ac: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1882acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_1882b0:
    // 0x1882b0: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x1882b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_1882b4:
    // 0x1882b4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1882b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1882b8:
    // 0x1882b8: 0xc0944da  jal         func_251368
label_1882bc:
    if (ctx->pc == 0x1882BCu) {
        ctx->pc = 0x1882BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1882B8u;
        // 0x1882bc: 0x8c451004  lw          $a1, 0x1004($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1882C0u;
        goto label_1882c0;
    }
    ctx->pc = 0x1882B8u;
    SET_GPR_U32(ctx, 31, 0x1882C0u);
    ctx->pc = 0x1882BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1882B8u;
    // 0x1882bc: 0x8c451004  lw          $a1, 0x1004($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251368u, 0x1882B8u, 0x1882C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1882C0u;
label_1882c0:
    // 0x1882c0: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x1882c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_1882c4:
    // 0x1882c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1882c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1882c8:
    // 0x1882c8: 0x8c440fec  lw          $a0, 0xFEC($v0)
    ctx->pc = 0x1882c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4076)));
label_1882cc:
    // 0x1882cc: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x1882ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_1882d0:
    // 0x1882d0: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
label_1882d4:
    if (ctx->pc == 0x1882D4u) {
        ctx->pc = 0x1882D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1882D0u;
        // 0x1882d4: 0x8c820040  lw          $v0, 0x40($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1882D8u;
        goto label_1882d8;
    }
    ctx->pc = 0x1882D0u;
    {
        const bool branch_taken_0x1882d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1882d0) {
            ctx->pc = 0x1882D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1882D0u;
            // 0x1882d4: 0x8c820040  lw          $v0, 0x40($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1882D8u;
            goto label_1882d8;
        }
    }
    ctx->pc = 0x1882D8u;
label_1882d8:
    // 0x1882d8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1882d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1882dc:
    // 0x1882dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1882e0:
    if (ctx->pc == 0x1882E0u) {
        ctx->pc = 0x1882E4u;
        goto label_1882e4;
    }
    ctx->pc = 0x1882DCu;
    {
        const bool branch_taken_0x1882dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1882dc) {
            ctx->pc = 0x1882F4u;
            goto label_1882f4;
        }
    }
    ctx->pc = 0x1882E4u;
label_1882e4:
    // 0x1882e4: 0xc061a16  jal         func_186858
label_1882e8:
    if (ctx->pc == 0x1882E8u) {
        ctx->pc = 0x1882E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1882E4u;
        // 0x1882e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1882ECu;
        goto label_1882ec;
    }
    ctx->pc = 0x1882E4u;
    SET_GPR_U32(ctx, 31, 0x1882ECu);
    ctx->pc = 0x1882E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1882E4u;
    // 0x1882e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1882E4u, 0x1882ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1882ECu;
label_1882ec:
    // 0x1882ec: 0x1000006a  b           . + 4 + (0x6A << 2)
label_1882f0:
    if (ctx->pc == 0x1882F0u) {
        ctx->pc = 0x1882F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1882ECu;
        // 0x1882f0: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1882F4u;
        goto label_1882f4;
    }
    ctx->pc = 0x1882ECu;
    {
        const bool branch_taken_0x1882ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1882F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1882ECu;
        // 0x1882f0: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1882ec) {
            ctx->pc = 0x188498u;
            goto label_188498;
        }
    }
    ctx->pc = 0x1882F4u;
label_1882f4:
    // 0x1882f4: 0xc061a16  jal         func_186858
label_1882f8:
    if (ctx->pc == 0x1882F8u) {
        ctx->pc = 0x1882F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1882F4u;
        // 0x1882f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1882FCu;
        goto label_1882fc;
    }
    ctx->pc = 0x1882F4u;
    SET_GPR_U32(ctx, 31, 0x1882FCu);
    ctx->pc = 0x1882F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1882F4u;
    // 0x1882f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1882F4u, 0x1882FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1882FCu;
label_1882fc:
    // 0x1882fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1882fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_188300:
    // 0x188300: 0x10000065  b           . + 4 + (0x65 << 2)
label_188304:
    if (ctx->pc == 0x188304u) {
        ctx->pc = 0x188304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188300u;
        // 0x188304: 0xac430040  sw          $v1, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188308u;
        goto label_188308;
    }
    ctx->pc = 0x188300u;
    {
        const bool branch_taken_0x188300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188300u;
        // 0x188304: 0xac430040  sw          $v1, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188300) {
            ctx->pc = 0x188498u;
            goto label_188498;
        }
    }
    ctx->pc = 0x188308u;
label_188308:
    // 0x188308: 0xc094ed4  jal         func_253B50
label_18830c:
    if (ctx->pc == 0x18830Cu) {
        ctx->pc = 0x18830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188308u;
        // 0x18830c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188310u;
        goto label_188310;
    }
    ctx->pc = 0x188308u;
    SET_GPR_U32(ctx, 31, 0x188310u);
    ctx->pc = 0x18830Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188308u;
    // 0x18830c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253B50u, 0x188308u, 0x188310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188310u;
label_188310:
    // 0x188310: 0x10000062  b           . + 4 + (0x62 << 2)
label_188314:
    if (ctx->pc == 0x188314u) {
        ctx->pc = 0x188314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188310u;
        // 0x188314: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188318u;
        goto label_188318;
    }
    ctx->pc = 0x188310u;
    {
        const bool branch_taken_0x188310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188310u;
        // 0x188314: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188310) {
            ctx->pc = 0x18849Cu;
            goto label_18849c;
        }
    }
    ctx->pc = 0x188318u;
label_188318:
    // 0x188318: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x188318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
label_18831c:
    // 0x18831c: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x18831cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
label_188320:
    // 0x188320: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x188320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_188324:
    // 0x188324: 0x5440005d  bnel        $v0, $zero, . + 4 + (0x5D << 2)
label_188328:
    if (ctx->pc == 0x188328u) {
        ctx->pc = 0x188328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188324u;
        // 0x188328: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18832Cu;
        goto label_18832c;
    }
    ctx->pc = 0x188324u;
    {
        const bool branch_taken_0x188324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188324) {
            ctx->pc = 0x188328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188324u;
            // 0x188328: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18849Cu;
            goto label_18849c;
        }
    }
    ctx->pc = 0x18832Cu;
label_18832c:
    // 0x18832c: 0x8ca21004  lw          $v0, 0x1004($a1)
    ctx->pc = 0x18832cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4100)));
label_188330:
    // 0x188330: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
label_188334:
    if (ctx->pc == 0x188334u) {
        ctx->pc = 0x188338u;
        goto label_188338;
    }
    ctx->pc = 0x188330u;
    {
        const bool branch_taken_0x188330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188330) {
            ctx->pc = 0x188490u;
            goto label_188490;
        }
    }
    ctx->pc = 0x188338u;
label_188338:
    // 0x188338: 0x8c430fe8  lw          $v1, 0xFE8($v0)
    ctx->pc = 0x188338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4072)));
label_18833c:
    // 0x18833c: 0x8ca20fe8  lw          $v0, 0xFE8($a1)
    ctx->pc = 0x18833cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4072)));
label_188340:
    // 0x188340: 0x246301e0  addiu       $v1, $v1, 0x1E0
    ctx->pc = 0x188340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 480));
label_188344:
    // 0x188344: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x188344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
label_188348:
    // 0x188348: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x188348u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_18834c:
    // 0x18834c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x18834cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_188350:
    // 0x188350: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x188350u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_188354:
    // 0x188354: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x188354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_188358:
    // 0x188358: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x188358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_18835c:
    // 0x18835c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x18835cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_188360:
    // 0x188360: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x188360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_188364:
    // 0x188364: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x188364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_188368:
    // 0x188368: 0xc7a5002c  lwc1        $f5, 0x2C($sp)
    ctx->pc = 0x188368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_18836c:
    // 0x18836c: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x18836cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_188370:
    // 0x188370: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x188370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_188374:
    // 0x188374: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x188374u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_188378:
    // 0x188378: 0xe7a5001c  swc1        $f5, 0x1C($sp)
    ctx->pc = 0x188378u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_18837c:
    // 0x18837c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x18837cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_188380:
    // 0x188380: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x188380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_188384:
    // 0x188384: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x188384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_188388:
    // 0x188388: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x188388u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_18838c:
    // 0x18838c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x18838cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_188390:
    // 0x188390: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x188390u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_188394:
    // 0x188394: 0x46010044  c1          0x10044
    ctx->pc = 0x188394u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_188398:
    // 0x188398: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x188398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_18839c:
    // 0x18839c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18839cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1883a0:
    // 0x1883a0: 0x0  nop
    ctx->pc = 0x1883a0u;
    // NOP
label_1883a4:
    // 0x1883a4: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x1883a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_1883a8:
    // 0x1883a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1883a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1883ac:
    // 0x1883ac: 0x0  nop
    ctx->pc = 0x1883acu;
    // NOP
label_1883b0:
    // 0x1883b0: 0x45000024  bc1f        . + 4 + (0x24 << 2)
label_1883b4:
    if (ctx->pc == 0x1883B4u) {
        ctx->pc = 0x1883B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1883B0u;
        // 0x1883b4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1883B8u;
        goto label_1883b8;
    }
    ctx->pc = 0x1883B0u;
    {
        const bool branch_taken_0x1883b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1883B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1883B0u;
        // 0x1883b4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1883b0) {
            ctx->pc = 0x188444u;
            goto label_188444;
        }
    }
    ctx->pc = 0x1883B8u;
label_1883b8:
    // 0x1883b8: 0x8ca21004  lw          $v0, 0x1004($a1)
    ctx->pc = 0x1883b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4100)));
label_1883bc:
    // 0x1883bc: 0x10430021  beq         $v0, $v1, . + 4 + (0x21 << 2)
label_1883c0:
    if (ctx->pc == 0x1883C0u) {
        ctx->pc = 0x1883C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1883BCu;
        // 0x1883c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1883C4u;
        goto label_1883c4;
    }
    ctx->pc = 0x1883BCu;
    {
        const bool branch_taken_0x1883bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1883C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1883BCu;
        // 0x1883c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1883bc) {
            ctx->pc = 0x188444u;
            goto label_188444;
        }
    }
    ctx->pc = 0x1883C4u;
label_1883c4:
    // 0x1883c4: 0x8c640ff8  lw          $a0, 0xFF8($v1)
    ctx->pc = 0x1883c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4088)));
label_1883c8:
    // 0x1883c8: 0xc0f6da6  jal         func_3DB698
label_1883cc:
    if (ctx->pc == 0x1883CCu) {
        ctx->pc = 0x1883CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1883C8u;
        // 0x1883cc: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1883D0u;
        goto label_1883d0;
    }
    ctx->pc = 0x1883C8u;
    SET_GPR_U32(ctx, 31, 0x1883D0u);
    ctx->pc = 0x1883CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1883C8u;
    // 0x1883cc: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x1883C8u, 0x1883D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1883D0u;
label_1883d0:
    // 0x1883d0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1883d4:
    if (ctx->pc == 0x1883D4u) {
        ctx->pc = 0x1883D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1883D0u;
        // 0x1883d4: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1883D8u;
        goto label_1883d8;
    }
    ctx->pc = 0x1883D0u;
    {
        const bool branch_taken_0x1883d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1883D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1883D0u;
        // 0x1883d4: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1883d0) {
            ctx->pc = 0x1883FCu;
            goto label_1883fc;
        }
    }
    ctx->pc = 0x1883D8u;
label_1883d8:
    // 0x1883d8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1883d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1883dc:
    // 0x1883dc: 0x8c821060  lw          $v0, 0x1060($a0)
    ctx->pc = 0x1883dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4192)));
label_1883e0:
    // 0x1883e0: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
label_1883e4:
    if (ctx->pc == 0x1883E4u) {
        ctx->pc = 0x1883E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1883E0u;
        // 0x1883e4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1883E8u;
        goto label_1883e8;
    }
    ctx->pc = 0x1883E0u;
    {
        const bool branch_taken_0x1883e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1883e0) {
            ctx->pc = 0x1883E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1883E0u;
            // 0x1883e4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188400u;
            goto label_188400;
        }
    }
    ctx->pc = 0x1883E8u;
label_1883e8:
    // 0x1883e8: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x1883e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_1883ec:
    // 0x1883ec: 0xc0950d0  jal         func_254340
label_1883f0:
    if (ctx->pc == 0x1883F0u) {
        ctx->pc = 0x1883F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1883ECu;
        // 0x1883f0: 0x8c451004  lw          $a1, 0x1004($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1883F4u;
        goto label_1883f4;
    }
    ctx->pc = 0x1883ECu;
    SET_GPR_U32(ctx, 31, 0x1883F4u);
    ctx->pc = 0x1883F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1883ECu;
    // 0x1883f0: 0x8c451004  lw          $a1, 0x1004($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254340u, 0x1883ECu, 0x1883F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1883F4u;
label_1883f4:
    // 0x1883f4: 0x10000029  b           . + 4 + (0x29 << 2)
label_1883f8:
    if (ctx->pc == 0x1883F8u) {
        ctx->pc = 0x1883F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1883F4u;
        // 0x1883f8: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1883FCu;
        goto label_1883fc;
    }
    ctx->pc = 0x1883F4u;
    {
        const bool branch_taken_0x1883f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1883F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1883F4u;
        // 0x1883f8: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1883f4) {
            ctx->pc = 0x18849Cu;
            goto label_18849c;
        }
    }
    ctx->pc = 0x1883FCu;
label_1883fc:
    // 0x1883fc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1883fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_188400:
    // 0x188400: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x188400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_188404:
    // 0x188404: 0x8c440ff8  lw          $a0, 0xFF8($v0)
    ctx->pc = 0x188404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4088)));
label_188408:
    // 0x188408: 0xc0f6da6  jal         func_3DB698
label_18840c:
    if (ctx->pc == 0x18840Cu) {
        ctx->pc = 0x18840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188408u;
        // 0x18840c: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188410u;
        goto label_188410;
    }
    ctx->pc = 0x188408u;
    SET_GPR_U32(ctx, 31, 0x188410u);
    ctx->pc = 0x18840Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188408u;
    // 0x18840c: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x188408u, 0x188410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188410u;
label_188410:
    // 0x188410: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_188414:
    if (ctx->pc == 0x188414u) {
        ctx->pc = 0x188414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188410u;
        // 0x188414: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188418u;
        goto label_188418;
    }
    ctx->pc = 0x188410u;
    {
        const bool branch_taken_0x188410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188410u;
        // 0x188414: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188410) {
            ctx->pc = 0x188498u;
            goto label_188498;
        }
    }
    ctx->pc = 0x188418u;
label_188418:
    // 0x188418: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x188418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18841c:
    // 0x18841c: 0x8c821060  lw          $v0, 0x1060($a0)
    ctx->pc = 0x18841cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4192)));
label_188420:
    // 0x188420: 0x5043001e  beql        $v0, $v1, . + 4 + (0x1E << 2)
label_188424:
    if (ctx->pc == 0x188424u) {
        ctx->pc = 0x188424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188420u;
        // 0x188424: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188428u;
        goto label_188428;
    }
    ctx->pc = 0x188420u;
    {
        const bool branch_taken_0x188420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x188420) {
            ctx->pc = 0x188424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188420u;
            // 0x188424: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18849Cu;
            goto label_18849c;
        }
    }
    ctx->pc = 0x188428u;
label_188428:
    // 0x188428: 0x8e26004c  lw          $a2, 0x4C($s1)
    ctx->pc = 0x188428u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_18842c:
    // 0x18842c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x18842cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_188430:
    // 0x188430: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x188430u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_188434:
    // 0x188434: 0xc095178  jal         func_2545E0
label_188438:
    if (ctx->pc == 0x188438u) {
        ctx->pc = 0x188438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188434u;
        // 0x188438: 0x8cc51004  lw          $a1, 0x1004($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18843Cu;
        goto label_18843c;
    }
    ctx->pc = 0x188434u;
    SET_GPR_U32(ctx, 31, 0x18843Cu);
    ctx->pc = 0x188438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188434u;
    // 0x188438: 0x8cc51004  lw          $a1, 0x1004($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2545E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2545E0u, 0x188434u, 0x18843Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18843Cu;
label_18843c:
    // 0x18843c: 0x10000017  b           . + 4 + (0x17 << 2)
label_188440:
    if (ctx->pc == 0x188440u) {
        ctx->pc = 0x188440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18843Cu;
        // 0x188440: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188444u;
        goto label_188444;
    }
    ctx->pc = 0x18843Cu;
    {
        const bool branch_taken_0x18843c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18843Cu;
        // 0x188440: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18843c) {
            ctx->pc = 0x18849Cu;
            goto label_18849c;
        }
    }
    ctx->pc = 0x188444u;
label_188444:
    // 0x188444: 0x8c620fe4  lw          $v0, 0xFE4($v1)
    ctx->pc = 0x188444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4068)));
label_188448:
    // 0x188448: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x188448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_18844c:
    // 0x18844c: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_188450:
    if (ctx->pc == 0x188450u) {
        ctx->pc = 0x188450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18844Cu;
        // 0x188450: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188454u;
        goto label_188454;
    }
    ctx->pc = 0x18844Cu;
    {
        const bool branch_taken_0x18844c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x188450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18844Cu;
        // 0x188450: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18844c) {
            ctx->pc = 0x188480u;
            goto label_188480;
        }
    }
    ctx->pc = 0x188454u;
label_188454:
    // 0x188454: 0x8c831060  lw          $v1, 0x1060($a0)
    ctx->pc = 0x188454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4192)));
label_188458:
    // 0x188458: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x188458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18845c:
    // 0x18845c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_188460:
    if (ctx->pc == 0x188460u) {
        ctx->pc = 0x188460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18845Cu;
        // 0x188460: 0x24a30020  addiu       $v1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188464u;
        goto label_188464;
    }
    ctx->pc = 0x18845Cu;
    {
        const bool branch_taken_0x18845c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x188460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18845Cu;
        // 0x188460: 0x24a30020  addiu       $v1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18845c) {
            ctx->pc = 0x188480u;
            goto label_188480;
        }
    }
    ctx->pc = 0x188464u;
label_188464:
    // 0x188464: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x188464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_188468:
    // 0x188468: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_18846c:
    if (ctx->pc == 0x18846Cu) {
        ctx->pc = 0x18846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188468u;
        // 0x18846c: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188470u;
        goto label_188470;
    }
    ctx->pc = 0x188468u;
    {
        const bool branch_taken_0x188468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188468) {
            ctx->pc = 0x18846Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188468u;
            // 0x18846c: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18849Cu;
            goto label_18849c;
        }
    }
    ctx->pc = 0x188470u;
label_188470:
    // 0x188470: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x188470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_188474:
    // 0x188474: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x188474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_188478:
    // 0x188478: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
label_18847c:
    if (ctx->pc == 0x18847Cu) {
        ctx->pc = 0x18847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188478u;
        // 0x18847c: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188480u;
        goto label_188480;
    }
    ctx->pc = 0x188478u;
    {
        const bool branch_taken_0x188478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x188478) {
            ctx->pc = 0x18847Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188478u;
            // 0x18847c: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18849Cu;
            goto label_18849c;
        }
    }
    ctx->pc = 0x188480u;
label_188480:
    // 0x188480: 0xc094f06  jal         func_253C18
label_188484:
    if (ctx->pc == 0x188484u) {
        ctx->pc = 0x188484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188480u;
        // 0x188484: 0x8e25004c  lw          $a1, 0x4C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188488u;
        goto label_188488;
    }
    ctx->pc = 0x188480u;
    SET_GPR_U32(ctx, 31, 0x188488u);
    ctx->pc = 0x188484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188480u;
    // 0x188484: 0x8e25004c  lw          $a1, 0x4C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253C18u, 0x188480u, 0x188488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188488u;
label_188488:
    // 0x188488: 0x10000004  b           . + 4 + (0x4 << 2)
label_18848c:
    if (ctx->pc == 0x18848Cu) {
        ctx->pc = 0x18848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188488u;
        // 0x18848c: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188490u;
        goto label_188490;
    }
    ctx->pc = 0x188488u;
    {
        const bool branch_taken_0x188488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188488u;
        // 0x18848c: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188488) {
            ctx->pc = 0x18849Cu;
            goto label_18849c;
        }
    }
    ctx->pc = 0x188490u;
label_188490:
    // 0x188490: 0xc094f06  jal         func_253C18
label_188494:
    if (ctx->pc == 0x188494u) {
        ctx->pc = 0x188494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188490u;
        // 0x188494: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188498u;
        goto label_188498;
    }
    ctx->pc = 0x188490u;
    SET_GPR_U32(ctx, 31, 0x188498u);
    ctx->pc = 0x188494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188490u;
    // 0x188494: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253C18u, 0x188490u, 0x188498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188498u;
label_188498:
    // 0x188498: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x188498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_18849c:
    // 0x18849c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1884a0:
    if (ctx->pc == 0x1884A0u) {
        ctx->pc = 0x1884A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18849Cu;
        // 0x1884a0: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1884A4u;
        goto label_1884a4;
    }
    ctx->pc = 0x18849Cu;
    {
        const bool branch_taken_0x18849c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1884A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18849Cu;
        // 0x1884a0: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18849c) {
            ctx->pc = 0x1884B4u;
            goto label_1884b4;
        }
    }
    ctx->pc = 0x1884A4u;
label_1884a4:
    // 0x1884a4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1884a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1884a8:
    // 0x1884a8: 0xc0cda26  jal         func_336898
label_1884ac:
    if (ctx->pc == 0x1884ACu) {
        ctx->pc = 0x1884ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1884A8u;
        // 0x1884ac: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1884B0u;
        goto label_1884b0;
    }
    ctx->pc = 0x1884A8u;
    SET_GPR_U32(ctx, 31, 0x1884B0u);
    ctx->pc = 0x1884ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1884A8u;
    // 0x1884ac: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x1884A8u, 0x1884B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1884B0u;
label_1884b0:
    // 0x1884b0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1884b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1884b4:
    // 0x1884b4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1884b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1884b8:
    // 0x1884b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1884b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1884bc:
    // 0x1884bc: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x1884bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1884c0:
    // 0x1884c0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1884c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1884c4:
    // 0x1884c4: 0x3e00008  jr          $ra
label_1884c8:
    if (ctx->pc == 0x1884C8u) {
        ctx->pc = 0x1884C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1884C4u;
        // 0x1884c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1884CCu;
        goto label_1884cc;
    }
    ctx->pc = 0x1884C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1884C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1884C4u;
        // 0x1884c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1884C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1884CCu;
label_1884cc:
    // 0x1884cc: 0x0  nop
    ctx->pc = 0x1884ccu;
    // NOP
    ctx->pc = 0x1884d0u;
}
