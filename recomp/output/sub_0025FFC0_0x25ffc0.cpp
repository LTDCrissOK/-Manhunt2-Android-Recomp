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

// Function: sub_0025FFC0
// Address: 0x25ffc0 - 0x260410
void sub_0025FFC0_0x25ffc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FFC0_0x25ffc0");
#endif

    switch (ctx->pc) {
        case 0x25ffc0u: goto label_25ffc0;
        case 0x25ffc4u: goto label_25ffc4;
        case 0x25ffc8u: goto label_25ffc8;
        case 0x25ffccu: goto label_25ffcc;
        case 0x25ffd0u: goto label_25ffd0;
        case 0x25ffd4u: goto label_25ffd4;
        case 0x25ffd8u: goto label_25ffd8;
        case 0x25ffdcu: goto label_25ffdc;
        case 0x25ffe0u: goto label_25ffe0;
        case 0x25ffe4u: goto label_25ffe4;
        case 0x25ffe8u: goto label_25ffe8;
        case 0x25ffecu: goto label_25ffec;
        case 0x25fff0u: goto label_25fff0;
        case 0x25fff4u: goto label_25fff4;
        case 0x25fff8u: goto label_25fff8;
        case 0x25fffcu: goto label_25fffc;
        case 0x260000u: goto label_260000;
        case 0x260004u: goto label_260004;
        case 0x260008u: goto label_260008;
        case 0x26000cu: goto label_26000c;
        case 0x260010u: goto label_260010;
        case 0x260014u: goto label_260014;
        case 0x260018u: goto label_260018;
        case 0x26001cu: goto label_26001c;
        case 0x260020u: goto label_260020;
        case 0x260024u: goto label_260024;
        case 0x260028u: goto label_260028;
        case 0x26002cu: goto label_26002c;
        case 0x260030u: goto label_260030;
        case 0x260034u: goto label_260034;
        case 0x260038u: goto label_260038;
        case 0x26003cu: goto label_26003c;
        case 0x260040u: goto label_260040;
        case 0x260044u: goto label_260044;
        case 0x260048u: goto label_260048;
        case 0x26004cu: goto label_26004c;
        case 0x260050u: goto label_260050;
        case 0x260054u: goto label_260054;
        case 0x260058u: goto label_260058;
        case 0x26005cu: goto label_26005c;
        case 0x260060u: goto label_260060;
        case 0x260064u: goto label_260064;
        case 0x260068u: goto label_260068;
        case 0x26006cu: goto label_26006c;
        case 0x260070u: goto label_260070;
        case 0x260074u: goto label_260074;
        case 0x260078u: goto label_260078;
        case 0x26007cu: goto label_26007c;
        case 0x260080u: goto label_260080;
        case 0x260084u: goto label_260084;
        case 0x260088u: goto label_260088;
        case 0x26008cu: goto label_26008c;
        case 0x260090u: goto label_260090;
        case 0x260094u: goto label_260094;
        case 0x260098u: goto label_260098;
        case 0x26009cu: goto label_26009c;
        case 0x2600a0u: goto label_2600a0;
        case 0x2600a4u: goto label_2600a4;
        case 0x2600a8u: goto label_2600a8;
        case 0x2600acu: goto label_2600ac;
        case 0x2600b0u: goto label_2600b0;
        case 0x2600b4u: goto label_2600b4;
        case 0x2600b8u: goto label_2600b8;
        case 0x2600bcu: goto label_2600bc;
        case 0x2600c0u: goto label_2600c0;
        case 0x2600c4u: goto label_2600c4;
        case 0x2600c8u: goto label_2600c8;
        case 0x2600ccu: goto label_2600cc;
        case 0x2600d0u: goto label_2600d0;
        case 0x2600d4u: goto label_2600d4;
        case 0x2600d8u: goto label_2600d8;
        case 0x2600dcu: goto label_2600dc;
        case 0x2600e0u: goto label_2600e0;
        case 0x2600e4u: goto label_2600e4;
        case 0x2600e8u: goto label_2600e8;
        case 0x2600ecu: goto label_2600ec;
        case 0x2600f0u: goto label_2600f0;
        case 0x2600f4u: goto label_2600f4;
        case 0x2600f8u: goto label_2600f8;
        case 0x2600fcu: goto label_2600fc;
        case 0x260100u: goto label_260100;
        case 0x260104u: goto label_260104;
        case 0x260108u: goto label_260108;
        case 0x26010cu: goto label_26010c;
        case 0x260110u: goto label_260110;
        case 0x260114u: goto label_260114;
        case 0x260118u: goto label_260118;
        case 0x26011cu: goto label_26011c;
        case 0x260120u: goto label_260120;
        case 0x260124u: goto label_260124;
        case 0x260128u: goto label_260128;
        case 0x26012cu: goto label_26012c;
        case 0x260130u: goto label_260130;
        case 0x260134u: goto label_260134;
        case 0x260138u: goto label_260138;
        case 0x26013cu: goto label_26013c;
        case 0x260140u: goto label_260140;
        case 0x260144u: goto label_260144;
        case 0x260148u: goto label_260148;
        case 0x26014cu: goto label_26014c;
        case 0x260150u: goto label_260150;
        case 0x260154u: goto label_260154;
        case 0x260158u: goto label_260158;
        case 0x26015cu: goto label_26015c;
        case 0x260160u: goto label_260160;
        case 0x260164u: goto label_260164;
        case 0x260168u: goto label_260168;
        case 0x26016cu: goto label_26016c;
        case 0x260170u: goto label_260170;
        case 0x260174u: goto label_260174;
        case 0x260178u: goto label_260178;
        case 0x26017cu: goto label_26017c;
        case 0x260180u: goto label_260180;
        case 0x260184u: goto label_260184;
        case 0x260188u: goto label_260188;
        case 0x26018cu: goto label_26018c;
        case 0x260190u: goto label_260190;
        case 0x260194u: goto label_260194;
        case 0x260198u: goto label_260198;
        case 0x26019cu: goto label_26019c;
        case 0x2601a0u: goto label_2601a0;
        case 0x2601a4u: goto label_2601a4;
        case 0x2601a8u: goto label_2601a8;
        case 0x2601acu: goto label_2601ac;
        case 0x2601b0u: goto label_2601b0;
        case 0x2601b4u: goto label_2601b4;
        case 0x2601b8u: goto label_2601b8;
        case 0x2601bcu: goto label_2601bc;
        case 0x2601c0u: goto label_2601c0;
        case 0x2601c4u: goto label_2601c4;
        case 0x2601c8u: goto label_2601c8;
        case 0x2601ccu: goto label_2601cc;
        case 0x2601d0u: goto label_2601d0;
        case 0x2601d4u: goto label_2601d4;
        case 0x2601d8u: goto label_2601d8;
        case 0x2601dcu: goto label_2601dc;
        case 0x2601e0u: goto label_2601e0;
        case 0x2601e4u: goto label_2601e4;
        case 0x2601e8u: goto label_2601e8;
        case 0x2601ecu: goto label_2601ec;
        case 0x2601f0u: goto label_2601f0;
        case 0x2601f4u: goto label_2601f4;
        case 0x2601f8u: goto label_2601f8;
        case 0x2601fcu: goto label_2601fc;
        case 0x260200u: goto label_260200;
        case 0x260204u: goto label_260204;
        case 0x260208u: goto label_260208;
        case 0x26020cu: goto label_26020c;
        case 0x260210u: goto label_260210;
        case 0x260214u: goto label_260214;
        case 0x260218u: goto label_260218;
        case 0x26021cu: goto label_26021c;
        case 0x260220u: goto label_260220;
        case 0x260224u: goto label_260224;
        case 0x260228u: goto label_260228;
        case 0x26022cu: goto label_26022c;
        case 0x260230u: goto label_260230;
        case 0x260234u: goto label_260234;
        case 0x260238u: goto label_260238;
        case 0x26023cu: goto label_26023c;
        case 0x260240u: goto label_260240;
        case 0x260244u: goto label_260244;
        case 0x260248u: goto label_260248;
        case 0x26024cu: goto label_26024c;
        case 0x260250u: goto label_260250;
        case 0x260254u: goto label_260254;
        case 0x260258u: goto label_260258;
        case 0x26025cu: goto label_26025c;
        case 0x260260u: goto label_260260;
        case 0x260264u: goto label_260264;
        case 0x260268u: goto label_260268;
        case 0x26026cu: goto label_26026c;
        case 0x260270u: goto label_260270;
        case 0x260274u: goto label_260274;
        case 0x260278u: goto label_260278;
        case 0x26027cu: goto label_26027c;
        case 0x260280u: goto label_260280;
        case 0x260284u: goto label_260284;
        case 0x260288u: goto label_260288;
        case 0x26028cu: goto label_26028c;
        case 0x260290u: goto label_260290;
        case 0x260294u: goto label_260294;
        case 0x260298u: goto label_260298;
        case 0x26029cu: goto label_26029c;
        case 0x2602a0u: goto label_2602a0;
        case 0x2602a4u: goto label_2602a4;
        case 0x2602a8u: goto label_2602a8;
        case 0x2602acu: goto label_2602ac;
        case 0x2602b0u: goto label_2602b0;
        case 0x2602b4u: goto label_2602b4;
        case 0x2602b8u: goto label_2602b8;
        case 0x2602bcu: goto label_2602bc;
        case 0x2602c0u: goto label_2602c0;
        case 0x2602c4u: goto label_2602c4;
        case 0x2602c8u: goto label_2602c8;
        case 0x2602ccu: goto label_2602cc;
        case 0x2602d0u: goto label_2602d0;
        case 0x2602d4u: goto label_2602d4;
        case 0x2602d8u: goto label_2602d8;
        case 0x2602dcu: goto label_2602dc;
        case 0x2602e0u: goto label_2602e0;
        case 0x2602e4u: goto label_2602e4;
        case 0x2602e8u: goto label_2602e8;
        case 0x2602ecu: goto label_2602ec;
        case 0x2602f0u: goto label_2602f0;
        case 0x2602f4u: goto label_2602f4;
        case 0x2602f8u: goto label_2602f8;
        case 0x2602fcu: goto label_2602fc;
        case 0x260300u: goto label_260300;
        case 0x260304u: goto label_260304;
        case 0x260308u: goto label_260308;
        case 0x26030cu: goto label_26030c;
        case 0x260310u: goto label_260310;
        case 0x260314u: goto label_260314;
        case 0x260318u: goto label_260318;
        case 0x26031cu: goto label_26031c;
        case 0x260320u: goto label_260320;
        case 0x260324u: goto label_260324;
        case 0x260328u: goto label_260328;
        case 0x26032cu: goto label_26032c;
        case 0x260330u: goto label_260330;
        case 0x260334u: goto label_260334;
        case 0x260338u: goto label_260338;
        case 0x26033cu: goto label_26033c;
        case 0x260340u: goto label_260340;
        case 0x260344u: goto label_260344;
        case 0x260348u: goto label_260348;
        case 0x26034cu: goto label_26034c;
        case 0x260350u: goto label_260350;
        case 0x260354u: goto label_260354;
        case 0x260358u: goto label_260358;
        case 0x26035cu: goto label_26035c;
        case 0x260360u: goto label_260360;
        case 0x260364u: goto label_260364;
        case 0x260368u: goto label_260368;
        case 0x26036cu: goto label_26036c;
        case 0x260370u: goto label_260370;
        case 0x260374u: goto label_260374;
        case 0x260378u: goto label_260378;
        case 0x26037cu: goto label_26037c;
        case 0x260380u: goto label_260380;
        case 0x260384u: goto label_260384;
        case 0x260388u: goto label_260388;
        case 0x26038cu: goto label_26038c;
        case 0x260390u: goto label_260390;
        case 0x260394u: goto label_260394;
        case 0x260398u: goto label_260398;
        case 0x26039cu: goto label_26039c;
        case 0x2603a0u: goto label_2603a0;
        case 0x2603a4u: goto label_2603a4;
        case 0x2603a8u: goto label_2603a8;
        case 0x2603acu: goto label_2603ac;
        case 0x2603b0u: goto label_2603b0;
        case 0x2603b4u: goto label_2603b4;
        case 0x2603b8u: goto label_2603b8;
        case 0x2603bcu: goto label_2603bc;
        case 0x2603c0u: goto label_2603c0;
        case 0x2603c4u: goto label_2603c4;
        case 0x2603c8u: goto label_2603c8;
        case 0x2603ccu: goto label_2603cc;
        case 0x2603d0u: goto label_2603d0;
        case 0x2603d4u: goto label_2603d4;
        case 0x2603d8u: goto label_2603d8;
        case 0x2603dcu: goto label_2603dc;
        case 0x2603e0u: goto label_2603e0;
        case 0x2603e4u: goto label_2603e4;
        case 0x2603e8u: goto label_2603e8;
        case 0x2603ecu: goto label_2603ec;
        case 0x2603f0u: goto label_2603f0;
        case 0x2603f4u: goto label_2603f4;
        case 0x2603f8u: goto label_2603f8;
        case 0x2603fcu: goto label_2603fc;
        case 0x260400u: goto label_260400;
        case 0x260404u: goto label_260404;
        case 0x260408u: goto label_260408;
        case 0x26040cu: goto label_26040c;
        default: break;
    }

    ctx->pc = 0x25ffc0u;

label_25ffc0:
    // 0x25ffc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25ffc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_25ffc4:
    // 0x25ffc4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x25ffc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25ffc8:
    // 0x25ffc8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x25ffc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_25ffcc:
    // 0x25ffcc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x25ffccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_25ffd0:
    // 0x25ffd0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25ffd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25ffd4:
    // 0x25ffd4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x25ffd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_25ffd8:
    // 0x25ffd8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x25ffd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25ffdc:
    // 0x25ffdc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x25ffdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_25ffe0:
    // 0x25ffe0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x25ffe0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_25ffe4:
    // 0x25ffe4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x25ffe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_25ffe8:
    // 0x25ffe8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x25ffe8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_25ffec:
    // 0x25ffec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25ffecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_25fff0:
    // 0x25fff0: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x25fff0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_25fff4:
    // 0x25fff4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x25fff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_25fff8:
    // 0x25fff8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x25fff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_25fffc:
    // 0x25fffc: 0xc6400240  lwc1        $f0, 0x240($s2)
    ctx->pc = 0x25fffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260000:
    // 0x260000: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x260000u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_260004:
    // 0x260004: 0x0  nop
    ctx->pc = 0x260004u;
    // NOP
label_260008:
    // 0x260008: 0x450100f7  bc1t        . + 4 + (0xF7 << 2)
label_26000c:
    if (ctx->pc == 0x26000Cu) {
        ctx->pc = 0x26000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260008u;
        // 0x26000c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260010u;
        goto label_260010;
    }
    ctx->pc = 0x260008u;
    {
        const bool branch_taken_0x260008 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260008u;
        // 0x26000c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260008) {
            ctx->pc = 0x2603E8u;
            goto label_2603e8;
        }
    }
    ctx->pc = 0x260010u;
label_260010:
    // 0x260010: 0x8e420234  lw          $v0, 0x234($s2)
    ctx->pc = 0x260010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 564)));
label_260014:
    // 0x260014: 0x144000f4  bnez        $v0, . + 4 + (0xF4 << 2)
label_260018:
    if (ctx->pc == 0x260018u) {
        ctx->pc = 0x260018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260014u;
        // 0x260018: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26001Cu;
        goto label_26001c;
    }
    ctx->pc = 0x260014u;
    {
        const bool branch_taken_0x260014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x260018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260014u;
        // 0x260018: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260014) {
            ctx->pc = 0x2603E8u;
            goto label_2603e8;
        }
    }
    ctx->pc = 0x26001Cu;
label_26001c:
    // 0x26001c: 0x8e700224  lw          $s0, 0x224($s3)
    ctx->pc = 0x26001cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 548)));
label_260020:
    // 0x260020: 0xc097f2a  jal         func_25FCA8
label_260024:
    if (ctx->pc == 0x260024u) {
        ctx->pc = 0x260024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260020u;
        // 0x260024: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260028u;
        goto label_260028;
    }
    ctx->pc = 0x260020u;
    SET_GPR_U32(ctx, 31, 0x260028u);
    ctx->pc = 0x260024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260020u;
    // 0x260024: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCA8u, 0x260020u, 0x260028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260028u;
label_260028:
    // 0x260028: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x260028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_26002c:
    // 0x26002c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26002cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_260030:
    // 0x260030: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x260030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_260034:
    // 0x260034: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x260034u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_260038:
    // 0x260038: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_26003c:
    if (ctx->pc == 0x26003Cu) {
        ctx->pc = 0x260040u;
        goto label_260040;
    }
    ctx->pc = 0x260038u;
    {
        const bool branch_taken_0x260038 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x260038) {
            ctx->pc = 0x26005Cu;
            goto label_26005c;
        }
    }
    ctx->pc = 0x260040u;
label_260040:
    // 0x260040: 0xc097f26  jal         func_25FC98
label_260044:
    if (ctx->pc == 0x260044u) {
        ctx->pc = 0x260044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260040u;
        // 0x260044: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260048u;
        goto label_260048;
    }
    ctx->pc = 0x260040u;
    SET_GPR_U32(ctx, 31, 0x260048u);
    ctx->pc = 0x260044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260040u;
    // 0x260044: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x260040u, 0x260048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260048u;
label_260048:
    // 0x260048: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x260048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26004c:
    // 0x26004c: 0xc097f26  jal         func_25FC98
label_260050:
    if (ctx->pc == 0x260050u) {
        ctx->pc = 0x260050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26004Cu;
        // 0x260050: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260054u;
        goto label_260054;
    }
    ctx->pc = 0x26004Cu;
    SET_GPR_U32(ctx, 31, 0x260054u);
    ctx->pc = 0x260050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26004Cu;
    // 0x260050: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x26004Cu, 0x260054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260054u;
label_260054:
    // 0x260054: 0x120200e4  beq         $s0, $v0, . + 4 + (0xE4 << 2)
label_260058:
    if (ctx->pc == 0x260058u) {
        ctx->pc = 0x260058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260054u;
        // 0x260058: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26005Cu;
        goto label_26005c;
    }
    ctx->pc = 0x260054u;
    {
        const bool branch_taken_0x260054 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x260058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260054u;
        // 0x260058: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260054) {
            ctx->pc = 0x2603E8u;
            goto label_2603e8;
        }
    }
    ctx->pc = 0x26005Cu;
label_26005c:
    // 0x26005c: 0xc097f2a  jal         func_25FCA8
label_260060:
    if (ctx->pc == 0x260060u) {
        ctx->pc = 0x260060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26005Cu;
        // 0x260060: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260064u;
        goto label_260064;
    }
    ctx->pc = 0x26005Cu;
    SET_GPR_U32(ctx, 31, 0x260064u);
    ctx->pc = 0x260060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26005Cu;
    // 0x260060: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCA8u, 0x26005Cu, 0x260064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260064u;
label_260064:
    // 0x260064: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x260064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
label_260068:
    // 0x260068: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x260068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26006c:
    // 0x26006c: 0xc097f26  jal         func_25FC98
label_260070:
    if (ctx->pc == 0x260070u) {
        ctx->pc = 0x260070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26006Cu;
        // 0x260070: 0x2a00a  movz        $s4, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260074u;
        goto label_260074;
    }
    ctx->pc = 0x26006Cu;
    SET_GPR_U32(ctx, 31, 0x260074u);
    ctx->pc = 0x260070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26006Cu;
    // 0x260070: 0x2a00a  movz        $s4, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x26006Cu, 0x260074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260074u;
label_260074:
    // 0x260074: 0x24030067  addiu       $v1, $zero, 0x67
    ctx->pc = 0x260074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
label_260078:
    // 0x260078: 0x50430006  beql        $v0, $v1, . + 4 + (0x6 << 2)
label_26007c:
    if (ctx->pc == 0x26007Cu) {
        ctx->pc = 0x26007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260078u;
        // 0x26007c: 0x8e4200c0  lw          $v0, 0xC0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260080u;
        goto label_260080;
    }
    ctx->pc = 0x260078u;
    {
        const bool branch_taken_0x260078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x260078) {
            ctx->pc = 0x26007Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260078u;
            // 0x26007c: 0x8e4200c0  lw          $v0, 0xC0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260094u;
            goto label_260094;
        }
    }
    ctx->pc = 0x260080u;
label_260080:
    // 0x260080: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x260080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
label_260084:
    // 0x260084: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x260084u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_260088:
    // 0x260088: 0x0  nop
    ctx->pc = 0x260088u;
    // NOP
label_26008c:
    // 0x26008c: 0xe6400244  swc1        $f0, 0x244($s2)
    ctx->pc = 0x26008cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 580), bits); }
label_260090:
    // 0x260090: 0x8e4200c0  lw          $v0, 0xC0($s2)
    ctx->pc = 0x260090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
label_260094:
    // 0x260094: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x260094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
label_260098:
    // 0x260098: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x260098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_26009c:
    // 0x26009c: 0x12a0001c  beqz        $s5, . + 4 + (0x1C << 2)
label_2600a0:
    if (ctx->pc == 0x2600A0u) {
        ctx->pc = 0x2600A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26009Cu;
        // 0x2600a0: 0xae4200c0  sw          $v0, 0xC0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2600A4u;
        goto label_2600a4;
    }
    ctx->pc = 0x26009Cu;
    {
        const bool branch_taken_0x26009c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2600A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26009Cu;
        // 0x2600a0: 0xae4200c0  sw          $v0, 0xC0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26009c) {
            ctx->pc = 0x260110u;
            goto label_260110;
        }
    }
    ctx->pc = 0x2600A4u;
label_2600a4:
    // 0x2600a4: 0x5220001b  beql        $s1, $zero, . + 4 + (0x1B << 2)
label_2600a8:
    if (ctx->pc == 0x2600A8u) {
        ctx->pc = 0x2600A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2600A4u;
        // 0x2600a8: 0x8e640224  lw          $a0, 0x224($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2600ACu;
        goto label_2600ac;
    }
    ctx->pc = 0x2600A4u;
    {
        const bool branch_taken_0x2600a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2600a4) {
            ctx->pc = 0x2600A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2600A4u;
            // 0x2600a8: 0x8e640224  lw          $a0, 0x224($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260114u;
            goto label_260114;
        }
    }
    ctx->pc = 0x2600ACu;
label_2600ac:
    // 0x2600ac: 0xc0899bc  jal         func_2266F0
label_2600b0:
    if (ctx->pc == 0x2600B0u) {
        ctx->pc = 0x2600B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2600ACu;
        // 0x2600b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2600B4u;
        goto label_2600b4;
    }
    ctx->pc = 0x2600ACu;
    SET_GPR_U32(ctx, 31, 0x2600B4u);
    ctx->pc = 0x2600B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2600ACu;
    // 0x2600b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2600ACu, 0x2600B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2600B4u;
label_2600b4:
    // 0x2600b4: 0x56220006  bnel        $s1, $v0, . + 4 + (0x6 << 2)
label_2600b8:
    if (ctx->pc == 0x2600B8u) {
        ctx->pc = 0x2600B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2600B4u;
        // 0x2600b8: 0x8e6200bc  lw          $v0, 0xBC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2600BCu;
        goto label_2600bc;
    }
    ctx->pc = 0x2600B4u;
    {
        const bool branch_taken_0x2600b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2600b4) {
            ctx->pc = 0x2600B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2600B4u;
            // 0x2600b8: 0x8e6200bc  lw          $v0, 0xBC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2600D0u;
            goto label_2600d0;
        }
    }
    ctx->pc = 0x2600BCu;
label_2600bc:
    // 0x2600bc: 0xc08d9bc  jal         func_2366F0
label_2600c0:
    if (ctx->pc == 0x2600C0u) {
        ctx->pc = 0x2600C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2600BCu;
        // 0x2600c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2600C4u;
        goto label_2600c4;
    }
    ctx->pc = 0x2600BCu;
    SET_GPR_U32(ctx, 31, 0x2600C4u);
    ctx->pc = 0x2600C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2600BCu;
    // 0x2600c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2366F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2366F0u, 0x2600BCu, 0x2600C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2600C4u;
label_2600c4:
    // 0x2600c4: 0x104000c7  beqz        $v0, . + 4 + (0xC7 << 2)
label_2600c8:
    if (ctx->pc == 0x2600C8u) {
        ctx->pc = 0x2600C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2600C4u;
        // 0x2600c8: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2600CCu;
        goto label_2600cc;
    }
    ctx->pc = 0x2600C4u;
    {
        const bool branch_taken_0x2600c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2600C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2600C4u;
        // 0x2600c8: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2600c4) {
            ctx->pc = 0x2603E4u;
            goto label_2603e4;
        }
    }
    ctx->pc = 0x2600CCu;
label_2600cc:
    // 0x2600cc: 0x8e6200bc  lw          $v0, 0xBC($s3)
    ctx->pc = 0x2600ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_2600d0:
    // 0x2600d0: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x2600d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_2600d4:
    // 0x2600d4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2600d8:
    if (ctx->pc == 0x2600D8u) {
        ctx->pc = 0x2600D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2600D4u;
        // 0x2600d8: 0x8e630218  lw          $v1, 0x218($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2600DCu;
        goto label_2600dc;
    }
    ctx->pc = 0x2600D4u;
    {
        const bool branch_taken_0x2600d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2600d4) {
            ctx->pc = 0x2600D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2600D4u;
            // 0x2600d8: 0x8e630218  lw          $v1, 0x218($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2600FCu;
            goto label_2600fc;
        }
    }
    ctx->pc = 0x2600DCu;
label_2600dc:
    // 0x2600dc: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x2600dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_2600e0:
    // 0x2600e0: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x2600e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_2600e4:
    // 0x2600e4: 0x40f809  jalr        $v0
label_2600e8:
    if (ctx->pc == 0x2600E8u) {
        ctx->pc = 0x2600E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2600E4u;
        // 0x2600e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2600ECu;
        goto label_2600ec;
    }
    ctx->pc = 0x2600E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2600ECu);
        ctx->pc = 0x2600E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2600E4u;
        // 0x2600e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2600E4u, 0x2600ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2600ECu;
label_2600ec:
    // 0x2600ec: 0xc071c9e  jal         func_1C7278
label_2600f0:
    if (ctx->pc == 0x2600F0u) {
        ctx->pc = 0x2600F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2600ECu;
        // 0x2600f0: 0x8e640ffc  lw          $a0, 0xFFC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2600F4u;
        goto label_2600f4;
    }
    ctx->pc = 0x2600ECu;
    SET_GPR_U32(ctx, 31, 0x2600F4u);
    ctx->pc = 0x2600F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2600ECu;
    // 0x2600f0: 0x8e640ffc  lw          $a0, 0xFFC($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4092)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7278u, 0x2600ECu, 0x2600F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2600F4u;
label_2600f4:
    // 0x2600f4: 0x10000007  b           . + 4 + (0x7 << 2)
label_2600f8:
    if (ctx->pc == 0x2600F8u) {
        ctx->pc = 0x2600F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2600F4u;
        // 0x2600f8: 0x8e640224  lw          $a0, 0x224($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2600FCu;
        goto label_2600fc;
    }
    ctx->pc = 0x2600F4u;
    {
        const bool branch_taken_0x2600f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2600F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2600F4u;
        // 0x2600f8: 0x8e640224  lw          $a0, 0x224($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2600f4) {
            ctx->pc = 0x260114u;
            goto label_260114;
        }
    }
    ctx->pc = 0x2600FCu;
label_2600fc:
    // 0x2600fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2600fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_260100:
    // 0x260100: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x260100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_260104:
    // 0x260104: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x260104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_260108:
    // 0x260108: 0x40f809  jalr        $v0
label_26010c:
    if (ctx->pc == 0x26010Cu) {
        ctx->pc = 0x26010Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260108u;
        // 0x26010c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260110u;
        goto label_260110;
    }
    ctx->pc = 0x260108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x260110u);
        ctx->pc = 0x26010Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260108u;
        // 0x26010c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260108u, 0x260110u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x260110u;
label_260110:
    // 0x260110: 0x8e640224  lw          $a0, 0x224($s3)
    ctx->pc = 0x260110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 548)));
label_260114:
    // 0x260114: 0xc0ac8f8  jal         func_2B23E0
label_260118:
    if (ctx->pc == 0x260118u) {
        ctx->pc = 0x260118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260114u;
        // 0x260118: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26011Cu;
        goto label_26011c;
    }
    ctx->pc = 0x260114u;
    SET_GPR_U32(ctx, 31, 0x26011Cu);
    ctx->pc = 0x260118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260114u;
    // 0x260118: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B23E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B23E0u, 0x260114u, 0x26011Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26011Cu;
label_26011c:
    // 0x26011c: 0x10400095  beqz        $v0, . + 4 + (0x95 << 2)
label_260120:
    if (ctx->pc == 0x260120u) {
        ctx->pc = 0x260120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26011Cu;
        // 0x260120: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260124u;
        goto label_260124;
    }
    ctx->pc = 0x26011Cu;
    {
        const bool branch_taken_0x26011c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26011Cu;
        // 0x260120: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26011c) {
            ctx->pc = 0x260374u;
            goto label_260374;
        }
    }
    ctx->pc = 0x260124u;
label_260124:
    // 0x260124: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x260124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_260128:
    // 0x260128: 0xc049554  jal         func_125550
label_26012c:
    if (ctx->pc == 0x26012Cu) {
        ctx->pc = 0x26012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260128u;
        // 0x26012c: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260130u;
        goto label_260130;
    }
    ctx->pc = 0x260128u;
    SET_GPR_U32(ctx, 31, 0x260130u);
    ctx->pc = 0x26012Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260128u;
    // 0x26012c: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125550u, 0x260128u, 0x260130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260130u;
label_260130:
    // 0x260130: 0x12c00025  beqz        $s6, . + 4 + (0x25 << 2)
label_260134:
    if (ctx->pc == 0x260134u) {
        ctx->pc = 0x260138u;
        goto label_260138;
    }
    ctx->pc = 0x260130u;
    {
        const bool branch_taken_0x260130 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x260130) {
            ctx->pc = 0x2601C8u;
            goto label_2601c8;
        }
    }
    ctx->pc = 0x260138u;
label_260138:
    // 0x260138: 0xc097f26  jal         func_25FC98
label_26013c:
    if (ctx->pc == 0x26013Cu) {
        ctx->pc = 0x26013Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260138u;
        // 0x26013c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260140u;
        goto label_260140;
    }
    ctx->pc = 0x260138u;
    SET_GPR_U32(ctx, 31, 0x260140u);
    ctx->pc = 0x26013Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260138u;
    // 0x26013c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x260138u, 0x260140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260140u;
label_260140:
    // 0x260140: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x260140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_260144:
    // 0x260144: 0x10430020  beq         $v0, $v1, . + 4 + (0x20 << 2)
label_260148:
    if (ctx->pc == 0x260148u) {
        ctx->pc = 0x26014Cu;
        goto label_26014c;
    }
    ctx->pc = 0x260144u;
    {
        const bool branch_taken_0x260144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x260144) {
            ctx->pc = 0x2601C8u;
            goto label_2601c8;
        }
    }
    ctx->pc = 0x26014Cu;
label_26014c:
    // 0x26014c: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x26014cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
label_260150:
    // 0x260150: 0x30423001  andi        $v0, $v0, 0x3001
    ctx->pc = 0x260150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12289);
label_260154:
    // 0x260154: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x260154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
label_260158:
    // 0x260158: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_26015c:
    if (ctx->pc == 0x26015Cu) {
        ctx->pc = 0x260160u;
        goto label_260160;
    }
    ctx->pc = 0x260158u;
    {
        const bool branch_taken_0x260158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x260158) {
            ctx->pc = 0x2601C8u;
            goto label_2601c8;
        }
    }
    ctx->pc = 0x260160u;
label_260160:
    // 0x260160: 0x8e500274  lw          $s0, 0x274($s2)
    ctx->pc = 0x260160u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 628)));
label_260164:
    // 0x260164: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_260168:
    if (ctx->pc == 0x260168u) {
        ctx->pc = 0x260168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260164u;
        // 0x260168: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26016Cu;
        goto label_26016c;
    }
    ctx->pc = 0x260164u;
    {
        const bool branch_taken_0x260164 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x260168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260164u;
        // 0x260168: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260164) {
            ctx->pc = 0x2601C8u;
            goto label_2601c8;
        }
    }
    ctx->pc = 0x26016Cu;
label_26016c:
    // 0x26016c: 0xc0d8de2  jal         func_363788
label_260170:
    if (ctx->pc == 0x260170u) {
        ctx->pc = 0x260170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26016Cu;
        // 0x260170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260174u;
        goto label_260174;
    }
    ctx->pc = 0x26016Cu;
    SET_GPR_U32(ctx, 31, 0x260174u);
    ctx->pc = 0x260170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26016Cu;
    // 0x260170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x26016Cu, 0x260174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260174u;
label_260174:
    // 0x260174: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_260178:
    if (ctx->pc == 0x260178u) {
        ctx->pc = 0x260178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260174u;
        // 0x260178: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26017Cu;
        goto label_26017c;
    }
    ctx->pc = 0x260174u;
    {
        const bool branch_taken_0x260174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x260174) {
            ctx->pc = 0x260178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260174u;
            // 0x260178: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260190u;
            goto label_260190;
        }
    }
    ctx->pc = 0x26017Cu;
label_26017c:
    // 0x26017c: 0xc0d8de2  jal         func_363788
label_260180:
    if (ctx->pc == 0x260180u) {
        ctx->pc = 0x260180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26017Cu;
        // 0x260180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260184u;
        goto label_260184;
    }
    ctx->pc = 0x26017Cu;
    SET_GPR_U32(ctx, 31, 0x260184u);
    ctx->pc = 0x260180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26017Cu;
    // 0x260180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x26017Cu, 0x260184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260184u;
label_260184:
    // 0x260184: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x260184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_260188:
    // 0x260188: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
label_26018c:
    if (ctx->pc == 0x26018Cu) {
        ctx->pc = 0x26018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260188u;
        // 0x26018c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260190u;
        goto label_260190;
    }
    ctx->pc = 0x260188u;
    {
        const bool branch_taken_0x260188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x260188) {
            ctx->pc = 0x26018Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260188u;
            // 0x26018c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260190u;
            goto label_260190;
        }
    }
    ctx->pc = 0x260190u;
label_260190:
    // 0x260190: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_260194:
    if (ctx->pc == 0x260194u) {
        ctx->pc = 0x260194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260190u;
        // 0x260194: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260198u;
        goto label_260198;
    }
    ctx->pc = 0x260190u;
    {
        const bool branch_taken_0x260190 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x260194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260190u;
        // 0x260194: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260190) {
            ctx->pc = 0x2601B4u;
            goto label_2601b4;
        }
    }
    ctx->pc = 0x260198u;
label_260198:
    // 0x260198: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x260198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_26019c:
    // 0x26019c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26019cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2601a0:
    // 0x2601a0: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x2601a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
label_2601a4:
    // 0x2601a4: 0xc07f540  jal         func_1FD500
label_2601a8:
    if (ctx->pc == 0x2601A8u) {
        ctx->pc = 0x2601A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2601A4u;
        // 0x2601a8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2601ACu;
        goto label_2601ac;
    }
    ctx->pc = 0x2601A4u;
    SET_GPR_U32(ctx, 31, 0x2601ACu);
    ctx->pc = 0x2601A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2601A4u;
    // 0x2601a8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD500u, 0x2601A4u, 0x2601ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2601ACu;
label_2601ac:
    // 0x2601ac: 0x10000006  b           . + 4 + (0x6 << 2)
label_2601b0:
    if (ctx->pc == 0x2601B0u) {
        ctx->pc = 0x2601B4u;
        goto label_2601b4;
    }
    ctx->pc = 0x2601ACu;
    {
        const bool branch_taken_0x2601ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2601ac) {
            ctx->pc = 0x2601C8u;
            goto label_2601c8;
        }
    }
    ctx->pc = 0x2601B4u;
label_2601b4:
    // 0x2601b4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2601b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2601b8:
    // 0x2601b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2601b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2601bc:
    // 0x2601bc: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x2601bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
label_2601c0:
    // 0x2601c0: 0xc07f540  jal         func_1FD500
label_2601c4:
    if (ctx->pc == 0x2601C4u) {
        ctx->pc = 0x2601C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2601C0u;
        // 0x2601c4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2601C8u;
        goto label_2601c8;
    }
    ctx->pc = 0x2601C0u;
    SET_GPR_U32(ctx, 31, 0x2601C8u);
    ctx->pc = 0x2601C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2601C0u;
    // 0x2601c4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD500u, 0x2601C0u, 0x2601C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2601C8u;
label_2601c8:
    // 0x2601c8: 0xc0a3702  jal         func_28DC08
label_2601cc:
    if (ctx->pc == 0x2601CCu) {
        ctx->pc = 0x2601CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2601C8u;
        // 0x2601cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2601D0u;
        goto label_2601d0;
    }
    ctx->pc = 0x2601C8u;
    SET_GPR_U32(ctx, 31, 0x2601D0u);
    ctx->pc = 0x2601CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2601C8u;
    // 0x2601cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DC08u, 0x2601C8u, 0x2601D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2601D0u;
label_2601d0:
    // 0x2601d0: 0x8e6200bc  lw          $v0, 0xBC($s3)
    ctx->pc = 0x2601d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_2601d4:
    // 0x2601d4: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x2601d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
label_2601d8:
    // 0x2601d8: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x2601d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_2601dc:
    // 0x2601dc: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_2601e0:
    if (ctx->pc == 0x2601E0u) {
        ctx->pc = 0x2601E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2601DCu;
        // 0x2601e0: 0xae530234  sw          $s3, 0x234($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 564), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2601E4u;
        goto label_2601e4;
    }
    ctx->pc = 0x2601DCu;
    {
        const bool branch_taken_0x2601dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2601dc) {
            ctx->pc = 0x2601E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2601DCu;
            // 0x2601e0: 0xae530234  sw          $s3, 0x234($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 564), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26022Cu;
            goto label_26022c;
        }
    }
    ctx->pc = 0x2601E4u;
label_2601e4:
    // 0x2601e4: 0xc097f26  jal         func_25FC98
label_2601e8:
    if (ctx->pc == 0x2601E8u) {
        ctx->pc = 0x2601E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2601E4u;
        // 0x2601e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2601ECu;
        goto label_2601ec;
    }
    ctx->pc = 0x2601E4u;
    SET_GPR_U32(ctx, 31, 0x2601ECu);
    ctx->pc = 0x2601E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2601E4u;
    // 0x2601e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x2601E4u, 0x2601ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2601ECu;
label_2601ec:
    // 0x2601ec: 0xc0a2dc4  jal         func_28B710
label_2601f0:
    if (ctx->pc == 0x2601F0u) {
        ctx->pc = 0x2601F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2601ECu;
        // 0x2601f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2601F4u;
        goto label_2601f4;
    }
    ctx->pc = 0x2601ECu;
    SET_GPR_U32(ctx, 31, 0x2601F4u);
    ctx->pc = 0x2601F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2601ECu;
    // 0x2601f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B710u, 0x2601ECu, 0x2601F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2601F4u;
label_2601f4:
    // 0x2601f4: 0xc0899bc  jal         func_2266F0
label_2601f8:
    if (ctx->pc == 0x2601F8u) {
        ctx->pc = 0x2601F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2601F4u;
        // 0x2601f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2601FCu;
        goto label_2601fc;
    }
    ctx->pc = 0x2601F4u;
    SET_GPR_U32(ctx, 31, 0x2601FCu);
    ctx->pc = 0x2601F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2601F4u;
    // 0x2601f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2601F4u, 0x2601FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2601FCu;
label_2601fc:
    // 0x2601fc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_260200:
    if (ctx->pc == 0x260200u) {
        ctx->pc = 0x260200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2601FCu;
        // 0x260200: 0xae530234  sw          $s3, 0x234($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 564), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260204u;
        goto label_260204;
    }
    ctx->pc = 0x2601FCu;
    {
        const bool branch_taken_0x2601fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2601fc) {
            ctx->pc = 0x260200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2601FCu;
            // 0x260200: 0xae530234  sw          $s3, 0x234($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 564), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26022Cu;
            goto label_26022c;
        }
    }
    ctx->pc = 0x260204u;
label_260204:
    // 0x260204: 0xc097f26  jal         func_25FC98
label_260208:
    if (ctx->pc == 0x260208u) {
        ctx->pc = 0x260208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260204u;
        // 0x260208: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26020Cu;
        goto label_26020c;
    }
    ctx->pc = 0x260204u;
    SET_GPR_U32(ctx, 31, 0x26020Cu);
    ctx->pc = 0x260208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260204u;
    // 0x260208: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x260204u, 0x26020Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26020Cu;
label_26020c:
    // 0x26020c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x26020cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_260210:
    // 0x260210: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
label_260214:
    if (ctx->pc == 0x260214u) {
        ctx->pc = 0x260214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260210u;
        // 0x260214: 0xae530234  sw          $s3, 0x234($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 564), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260218u;
        goto label_260218;
    }
    ctx->pc = 0x260210u;
    {
        const bool branch_taken_0x260210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x260210) {
            ctx->pc = 0x260214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260210u;
            // 0x260214: 0xae530234  sw          $s3, 0x234($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 564), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26022Cu;
            goto label_26022c;
        }
    }
    ctx->pc = 0x260218u;
label_260218:
    // 0x260218: 0xc097f2a  jal         func_25FCA8
label_26021c:
    if (ctx->pc == 0x26021Cu) {
        ctx->pc = 0x26021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260218u;
        // 0x26021c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260220u;
        goto label_260220;
    }
    ctx->pc = 0x260218u;
    SET_GPR_U32(ctx, 31, 0x260220u);
    ctx->pc = 0x26021Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260218u;
    // 0x26021c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCA8u, 0x260218u, 0x260220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260220u;
label_260220:
    // 0x260220: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x260220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_260224:
    // 0x260224: 0xac62ae00  sw          $v0, -0x5200($v1)
    ctx->pc = 0x260224u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294946304), GPR_U32(ctx, 2));
label_260228:
    // 0x260228: 0xae530234  sw          $s3, 0x234($s2)
    ctx->pc = 0x260228u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 564), GPR_U32(ctx, 19));
label_26022c:
    // 0x26022c: 0xc098514  jal         func_261450
label_260230:
    if (ctx->pc == 0x260230u) {
        ctx->pc = 0x260230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26022Cu;
        // 0x260230: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260234u;
        goto label_260234;
    }
    ctx->pc = 0x26022Cu;
    SET_GPR_U32(ctx, 31, 0x260234u);
    ctx->pc = 0x260230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26022Cu;
    // 0x260230: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261450u, 0x26022Cu, 0x260234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260234u;
label_260234:
    // 0x260234: 0x8e420230  lw          $v0, 0x230($s2)
    ctx->pc = 0x260234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 560)));
label_260238:
    // 0x260238: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x260238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_26023c:
    // 0x26023c: 0x8e440104  lw          $a0, 0x104($s2)
    ctx->pc = 0x26023cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_260240:
    // 0x260240: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x260240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_260244:
    // 0x260244: 0xae420230  sw          $v0, 0x230($s2)
    ctx->pc = 0x260244u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 560), GPR_U32(ctx, 2));
label_260248:
    // 0x260248: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x260248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_26024c:
    // 0x26024c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_260250:
    if (ctx->pc == 0x260250u) {
        ctx->pc = 0x260250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26024Cu;
        // 0x260250: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260254u;
        goto label_260254;
    }
    ctx->pc = 0x26024Cu;
    {
        const bool branch_taken_0x26024c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x260250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26024Cu;
        // 0x260250: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26024c) {
            ctx->pc = 0x260268u;
            goto label_260268;
        }
    }
    ctx->pc = 0x260254u;
label_260254:
    // 0x260254: 0xc0844c0  jal         func_211300
label_260258:
    if (ctx->pc == 0x260258u) {
        ctx->pc = 0x260258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260254u;
        // 0x260258: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26025Cu;
        goto label_26025c;
    }
    ctx->pc = 0x260254u;
    SET_GPR_U32(ctx, 31, 0x26025Cu);
    ctx->pc = 0x260258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260254u;
    // 0x260258: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211300u, 0x260254u, 0x26025Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26025Cu;
label_26025c:
    // 0x26025c: 0x8e4300c0  lw          $v1, 0xC0($s2)
    ctx->pc = 0x26025cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
label_260260:
    // 0x260260: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x260260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_260264:
    // 0x260264: 0xae4300c0  sw          $v1, 0xC0($s2)
    ctx->pc = 0x260264u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 3));
label_260268:
    // 0x260268: 0x5280000b  beql        $s4, $zero, . + 4 + (0xB << 2)
label_26026c:
    if (ctx->pc == 0x26026Cu) {
        ctx->pc = 0x26026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260268u;
        // 0x26026c: 0x8e6200bc  lw          $v0, 0xBC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260270u;
        goto label_260270;
    }
    ctx->pc = 0x260268u;
    {
        const bool branch_taken_0x260268 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x260268) {
            ctx->pc = 0x26026Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260268u;
            // 0x26026c: 0x8e6200bc  lw          $v0, 0xBC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260298u;
            goto label_260298;
        }
    }
    ctx->pc = 0x260270u;
label_260270:
    // 0x260270: 0x8e700218  lw          $s0, 0x218($s3)
    ctx->pc = 0x260270u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 536)));
label_260274:
    // 0x260274: 0xc097f2a  jal         func_25FCA8
label_260278:
    if (ctx->pc == 0x260278u) {
        ctx->pc = 0x260278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260274u;
        // 0x260278: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26027Cu;
        goto label_26027c;
    }
    ctx->pc = 0x260274u;
    SET_GPR_U32(ctx, 31, 0x26027Cu);
    ctx->pc = 0x260278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260274u;
    // 0x260278: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCA8u, 0x260274u, 0x26027Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26027Cu;
label_26027c:
    // 0x26027c: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x26027cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_260280:
    // 0x260280: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x260280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_260284:
    // 0x260284: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x260284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_260288:
    // 0x260288: 0x60f809  jalr        $v1
label_26028c:
    if (ctx->pc == 0x26028Cu) {
        ctx->pc = 0x26028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260288u;
        // 0x26028c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260290u;
        goto label_260290;
    }
    ctx->pc = 0x260288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x260290u);
        ctx->pc = 0x26028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260288u;
        // 0x26028c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260288u, 0x260290u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x260290u;
label_260290:
    // 0x260290: 0x10000007  b           . + 4 + (0x7 << 2)
label_260294:
    if (ctx->pc == 0x260294u) {
        ctx->pc = 0x260294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260290u;
        // 0x260294: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260298u;
        goto label_260298;
    }
    ctx->pc = 0x260290u;
    {
        const bool branch_taken_0x260290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260290u;
        // 0x260294: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260290) {
            ctx->pc = 0x2602B0u;
            goto label_2602b0;
        }
    }
    ctx->pc = 0x260298u;
label_260298:
    // 0x260298: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x260298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_26029c:
    // 0x26029c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2602a0:
    if (ctx->pc == 0x2602A0u) {
        ctx->pc = 0x2602A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26029Cu;
        // 0x2602a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2602A4u;
        goto label_2602a4;
    }
    ctx->pc = 0x26029Cu;
    {
        const bool branch_taken_0x26029c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26029c) {
            ctx->pc = 0x2602A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26029Cu;
            // 0x2602a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2602B0u;
            goto label_2602b0;
        }
    }
    ctx->pc = 0x2602A4u;
label_2602a4:
    // 0x2602a4: 0xc0bdbe8  jal         func_2F6FA0
label_2602a8:
    if (ctx->pc == 0x2602A8u) {
        ctx->pc = 0x2602A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2602A4u;
        // 0x2602a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2602ACu;
        goto label_2602ac;
    }
    ctx->pc = 0x2602A4u;
    SET_GPR_U32(ctx, 31, 0x2602ACu);
    ctx->pc = 0x2602A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2602A4u;
    // 0x2602a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6FA0u, 0x2602A4u, 0x2602ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2602ACu;
label_2602ac:
    // 0x2602ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2602acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2602b0:
    // 0x2602b0: 0xc0cda26  jal         func_336898
label_2602b4:
    if (ctx->pc == 0x2602B4u) {
        ctx->pc = 0x2602B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2602B0u;
        // 0x2602b4: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2602B8u;
        goto label_2602b8;
    }
    ctx->pc = 0x2602B0u;
    SET_GPR_U32(ctx, 31, 0x2602B8u);
    ctx->pc = 0x2602B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2602B0u;
    // 0x2602b4: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x2602B0u, 0x2602B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2602B8u;
label_2602b8:
    // 0x2602b8: 0xc097f26  jal         func_25FC98
label_2602bc:
    if (ctx->pc == 0x2602BCu) {
        ctx->pc = 0x2602BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2602B8u;
        // 0x2602bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2602C0u;
        goto label_2602c0;
    }
    ctx->pc = 0x2602B8u;
    SET_GPR_U32(ctx, 31, 0x2602C0u);
    ctx->pc = 0x2602BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2602B8u;
    // 0x2602bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x2602B8u, 0x2602C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2602C0u;
label_2602c0:
    // 0x2602c0: 0xae62022c  sw          $v0, 0x22C($s3)
    ctx->pc = 0x2602c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 556), GPR_U32(ctx, 2));
label_2602c4:
    // 0x2602c4: 0xae40026c  sw          $zero, 0x26C($s2)
    ctx->pc = 0x2602c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 620), GPR_U32(ctx, 0));
label_2602c8:
    // 0x2602c8: 0x8e4200b8  lw          $v0, 0xB8($s2)
    ctx->pc = 0x2602c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_2602cc:
    // 0x2602cc: 0x8c4302e0  lw          $v1, 0x2E0($v0)
    ctx->pc = 0x2602ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 736)));
label_2602d0:
    // 0x2602d0: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
label_2602d4:
    if (ctx->pc == 0x2602D4u) {
        ctx->pc = 0x2602D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2602D0u;
        // 0x2602d4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2602D8u;
        goto label_2602d8;
    }
    ctx->pc = 0x2602D0u;
    {
        const bool branch_taken_0x2602d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2602D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2602D0u;
        // 0x2602d4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2602d0) {
            ctx->pc = 0x26036Cu;
            goto label_26036c;
        }
    }
    ctx->pc = 0x2602D8u;
label_2602d8:
    // 0x2602d8: 0x8e440104  lw          $a0, 0x104($s2)
    ctx->pc = 0x2602d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2602dc:
    // 0x2602dc: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_2602e0:
    if (ctx->pc == 0x2602E0u) {
        ctx->pc = 0x2602E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2602DCu;
        // 0x2602e0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2602E4u;
        goto label_2602e4;
    }
    ctx->pc = 0x2602DCu;
    {
        const bool branch_taken_0x2602dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2602E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2602DCu;
        // 0x2602e0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2602dc) {
            ctx->pc = 0x260318u;
            goto label_260318;
        }
    }
    ctx->pc = 0x2602E4u;
label_2602e4:
    // 0x2602e4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2602e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_2602e8:
    // 0x2602e8: 0xc0c2e94  jal         func_30BA50
label_2602ec:
    if (ctx->pc == 0x2602ECu) {
        ctx->pc = 0x2602ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2602E8u;
        // 0x2602ec: 0x24a57420  addiu       $a1, $a1, 0x7420 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29728));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2602F0u;
        goto label_2602f0;
    }
    ctx->pc = 0x2602E8u;
    SET_GPR_U32(ctx, 31, 0x2602F0u);
    ctx->pc = 0x2602ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2602E8u;
    // 0x2602ec: 0x24a57420  addiu       $a1, $a1, 0x7420 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BA50u, 0x2602E8u, 0x2602F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2602F0u;
label_2602f0:
    // 0x2602f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2602f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2602f4:
    // 0x2602f4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2602f8:
    if (ctx->pc == 0x2602F8u) {
        ctx->pc = 0x2602FCu;
        goto label_2602fc;
    }
    ctx->pc = 0x2602F4u;
    {
        const bool branch_taken_0x2602f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2602f4) {
            ctx->pc = 0x260318u;
            goto label_260318;
        }
    }
    ctx->pc = 0x2602FCu;
label_2602fc:
    // 0x2602fc: 0xc0f70ce  jal         func_3DC338
label_260300:
    if (ctx->pc == 0x260300u) {
        ctx->pc = 0x260300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2602FCu;
        // 0x260300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260304u;
        goto label_260304;
    }
    ctx->pc = 0x2602FCu;
    SET_GPR_U32(ctx, 31, 0x260304u);
    ctx->pc = 0x260300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2602FCu;
    // 0x260300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x2602FCu, 0x260304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260304u;
label_260304:
    // 0x260304: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_260308:
    if (ctx->pc == 0x260308u) {
        ctx->pc = 0x260308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260304u;
        // 0x260308: 0x26110080  addiu       $s1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26030Cu;
        goto label_26030c;
    }
    ctx->pc = 0x260304u;
    {
        const bool branch_taken_0x260304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260304u;
        // 0x260308: 0x26110080  addiu       $s1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260304) {
            ctx->pc = 0x260318u;
            goto label_260318;
        }
    }
    ctx->pc = 0x26030Cu;
label_26030c:
    // 0x26030c: 0xc0c4900  jal         func_312400
label_260310:
    if (ctx->pc == 0x260310u) {
        ctx->pc = 0x260310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26030Cu;
        // 0x260310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260314u;
        goto label_260314;
    }
    ctx->pc = 0x26030Cu;
    SET_GPR_U32(ctx, 31, 0x260314u);
    ctx->pc = 0x260310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26030Cu;
    // 0x260310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x26030Cu, 0x260314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260314u;
label_260314:
    // 0x260314: 0x26110080  addiu       $s1, $s0, 0x80
    ctx->pc = 0x260314u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_260318:
    // 0x260318: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
label_26031c:
    if (ctx->pc == 0x26031Cu) {
        ctx->pc = 0x26031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260318u;
        // 0x26031c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260320u;
        goto label_260320;
    }
    ctx->pc = 0x260318u;
    {
        const bool branch_taken_0x260318 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x26031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260318u;
        // 0x26031c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260318) {
            ctx->pc = 0x260334u;
            goto label_260334;
        }
    }
    ctx->pc = 0x260320u;
label_260320:
    // 0x260320: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x260320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_260324:
    // 0x260324: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x260324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_260328:
    // 0x260328: 0xc098498  jal         func_261260
label_26032c:
    if (ctx->pc == 0x26032Cu) {
        ctx->pc = 0x26032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260328u;
        // 0x26032c: 0x24510040  addiu       $s1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260330u;
        goto label_260330;
    }
    ctx->pc = 0x260328u;
    SET_GPR_U32(ctx, 31, 0x260330u);
    ctx->pc = 0x26032Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260328u;
    // 0x26032c: 0x24510040  addiu       $s1, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261260u, 0x260328u, 0x260330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260330u;
label_260330:
    // 0x260330: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x260330u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_260334:
    // 0x260334: 0xc0f5240  jal         func_3D4900
label_260338:
    if (ctx->pc == 0x260338u) {
        ctx->pc = 0x260338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260334u;
        // 0x260338: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26033Cu;
        goto label_26033c;
    }
    ctx->pc = 0x260334u;
    SET_GPR_U32(ctx, 31, 0x26033Cu);
    ctx->pc = 0x260338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260334u;
    // 0x260338: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x260334u, 0x26033Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26033Cu;
label_26033c:
    // 0x26033c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x26033cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
label_260340:
    // 0x260340: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x260340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_260344:
    // 0x260344: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x260344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_260348:
    // 0x260348: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x260348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_26034c:
    // 0x26034c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x26034cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_260350:
    // 0x260350: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x260350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_260354:
    // 0x260354: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x260354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_260358:
    // 0x260358: 0x24e77430  addiu       $a3, $a3, 0x7430
    ctx->pc = 0x260358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 29744));
label_26035c:
    // 0x26035c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x26035cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_260360:
    // 0x260360: 0xc0d6416  jal         func_359058
label_260364:
    if (ctx->pc == 0x260364u) {
        ctx->pc = 0x260364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260360u;
        // 0x260364: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260368u;
        goto label_260368;
    }
    ctx->pc = 0x260360u;
    SET_GPR_U32(ctx, 31, 0x260368u);
    ctx->pc = 0x260364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260360u;
    // 0x260364: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359058u, 0x260360u, 0x260368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260368u;
label_260368:
    // 0x260368: 0xae42026c  sw          $v0, 0x26C($s2)
    ctx->pc = 0x260368u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 620), GPR_U32(ctx, 2));
label_26036c:
    // 0x26036c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_260370:
    if (ctx->pc == 0x260370u) {
        ctx->pc = 0x260370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26036Cu;
        // 0x260370: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260374u;
        goto label_260374;
    }
    ctx->pc = 0x26036Cu;
    {
        const bool branch_taken_0x26036c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26036Cu;
        // 0x260370: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26036c) {
            ctx->pc = 0x2603E8u;
            goto label_2603e8;
        }
    }
    ctx->pc = 0x260374u;
label_260374:
    // 0x260374: 0x8e6200bc  lw          $v0, 0xBC($s3)
    ctx->pc = 0x260374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_260378:
    // 0x260378: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x260378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_26037c:
    // 0x26037c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_260380:
    if (ctx->pc == 0x260380u) {
        ctx->pc = 0x260380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26037Cu;
        // 0x260380: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260384u;
        goto label_260384;
    }
    ctx->pc = 0x26037Cu;
    {
        const bool branch_taken_0x26037c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x260380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26037Cu;
        // 0x260380: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26037c) {
            ctx->pc = 0x2603E8u;
            goto label_2603e8;
        }
    }
    ctx->pc = 0x260384u;
label_260384:
    // 0x260384: 0x8e700224  lw          $s0, 0x224($s3)
    ctx->pc = 0x260384u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 548)));
label_260388:
    // 0x260388: 0xc097f2a  jal         func_25FCA8
label_26038c:
    if (ctx->pc == 0x26038Cu) {
        ctx->pc = 0x26038Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260388u;
        // 0x26038c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260390u;
        goto label_260390;
    }
    ctx->pc = 0x260388u;
    SET_GPR_U32(ctx, 31, 0x260390u);
    ctx->pc = 0x26038Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260388u;
    // 0x26038c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCA8u, 0x260388u, 0x260390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260390u;
label_260390:
    // 0x260390: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x260390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_260394:
    // 0x260394: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x260394u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_260398:
    // 0x260398: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x260398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_26039c:
    // 0x26039c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x26039cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2603a0:
    // 0x2603a0: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_2603a4:
    if (ctx->pc == 0x2603A4u) {
        ctx->pc = 0x2603A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2603A0u;
        // 0x2603a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2603A8u;
        goto label_2603a8;
    }
    ctx->pc = 0x2603A0u;
    {
        const bool branch_taken_0x2603a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2603A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2603A0u;
        // 0x2603a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2603a0) {
            ctx->pc = 0x2603E8u;
            goto label_2603e8;
        }
    }
    ctx->pc = 0x2603A8u;
label_2603a8:
    // 0x2603a8: 0xc097f26  jal         func_25FC98
label_2603ac:
    if (ctx->pc == 0x2603ACu) {
        ctx->pc = 0x2603B0u;
        goto label_2603b0;
    }
    ctx->pc = 0x2603A8u;
    SET_GPR_U32(ctx, 31, 0x2603B0u);
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x2603A8u, 0x2603B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2603B0u;
label_2603b0:
    // 0x2603b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2603b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2603b4:
    // 0x2603b4: 0xc097f26  jal         func_25FC98
label_2603b8:
    if (ctx->pc == 0x2603B8u) {
        ctx->pc = 0x2603B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2603B4u;
        // 0x2603b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2603BCu;
        goto label_2603bc;
    }
    ctx->pc = 0x2603B4u;
    SET_GPR_U32(ctx, 31, 0x2603BCu);
    ctx->pc = 0x2603B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2603B4u;
    // 0x2603b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x2603B4u, 0x2603BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2603BCu;
label_2603bc:
    // 0x2603bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2603bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2603c0:
    // 0x2603c0: 0xc0a2d78  jal         func_28B5E0
label_2603c4:
    if (ctx->pc == 0x2603C4u) {
        ctx->pc = 0x2603C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2603C0u;
        // 0x2603c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2603C8u;
        goto label_2603c8;
    }
    ctx->pc = 0x2603C0u;
    SET_GPR_U32(ctx, 31, 0x2603C8u);
    ctx->pc = 0x2603C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2603C0u;
    // 0x2603c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B5E0u, 0x2603C0u, 0x2603C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2603C8u;
label_2603c8:
    // 0x2603c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2603c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2603cc:
    // 0x2603cc: 0xc0a2d88  jal         func_28B620
label_2603d0:
    if (ctx->pc == 0x2603D0u) {
        ctx->pc = 0x2603D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2603CCu;
        // 0x2603d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2603D4u;
        goto label_2603d4;
    }
    ctx->pc = 0x2603CCu;
    SET_GPR_U32(ctx, 31, 0x2603D4u);
    ctx->pc = 0x2603D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2603CCu;
    // 0x2603d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B620u, 0x2603CCu, 0x2603D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2603D4u;
label_2603d4:
    // 0x2603d4: 0xc097f2a  jal         func_25FCA8
label_2603d8:
    if (ctx->pc == 0x2603D8u) {
        ctx->pc = 0x2603D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2603D4u;
        // 0x2603d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2603DCu;
        goto label_2603dc;
    }
    ctx->pc = 0x2603D4u;
    SET_GPR_U32(ctx, 31, 0x2603DCu);
    ctx->pc = 0x2603D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2603D4u;
    // 0x2603d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCA8u, 0x2603D4u, 0x2603DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2603DCu;
label_2603dc:
    // 0x2603dc: 0xc0a2d96  jal         func_28B658
label_2603e0:
    if (ctx->pc == 0x2603E0u) {
        ctx->pc = 0x2603E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2603DCu;
        // 0x2603e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2603E4u;
        goto label_2603e4;
    }
    ctx->pc = 0x2603DCu;
    SET_GPR_U32(ctx, 31, 0x2603E4u);
    ctx->pc = 0x2603E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2603DCu;
    // 0x2603e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B658u, 0x2603DCu, 0x2603E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2603E4u;
label_2603e4:
    // 0x2603e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2603e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2603e8:
    // 0x2603e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2603e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2603ec:
    // 0x2603ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2603ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2603f0:
    // 0x2603f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2603f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2603f4:
    // 0x2603f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2603f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2603f8:
    // 0x2603f8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2603f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2603fc:
    // 0x2603fc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2603fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_260400:
    // 0x260400: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x260400u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_260404:
    // 0x260404: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x260404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_260408:
    // 0x260408: 0x3e00008  jr          $ra
label_26040c:
    if (ctx->pc == 0x26040Cu) {
        ctx->pc = 0x26040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260408u;
        // 0x26040c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260410u;
        goto label_fallthrough_0x260408;
    }
    ctx->pc = 0x260408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260408u;
        // 0x26040c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x260408:
    ctx->pc = 0x260410u;
}
