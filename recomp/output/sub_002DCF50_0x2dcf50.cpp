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

// Function: sub_002DCF50
// Address: 0x2dcf50 - 0x2dd2d8
void sub_002DCF50_0x2dcf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DCF50_0x2dcf50");
#endif

    switch (ctx->pc) {
        case 0x2dcf50u: goto label_2dcf50;
        case 0x2dcf54u: goto label_2dcf54;
        case 0x2dcf58u: goto label_2dcf58;
        case 0x2dcf5cu: goto label_2dcf5c;
        case 0x2dcf60u: goto label_2dcf60;
        case 0x2dcf64u: goto label_2dcf64;
        case 0x2dcf68u: goto label_2dcf68;
        case 0x2dcf6cu: goto label_2dcf6c;
        case 0x2dcf70u: goto label_2dcf70;
        case 0x2dcf74u: goto label_2dcf74;
        case 0x2dcf78u: goto label_2dcf78;
        case 0x2dcf7cu: goto label_2dcf7c;
        case 0x2dcf80u: goto label_2dcf80;
        case 0x2dcf84u: goto label_2dcf84;
        case 0x2dcf88u: goto label_2dcf88;
        case 0x2dcf8cu: goto label_2dcf8c;
        case 0x2dcf90u: goto label_2dcf90;
        case 0x2dcf94u: goto label_2dcf94;
        case 0x2dcf98u: goto label_2dcf98;
        case 0x2dcf9cu: goto label_2dcf9c;
        case 0x2dcfa0u: goto label_2dcfa0;
        case 0x2dcfa4u: goto label_2dcfa4;
        case 0x2dcfa8u: goto label_2dcfa8;
        case 0x2dcfacu: goto label_2dcfac;
        case 0x2dcfb0u: goto label_2dcfb0;
        case 0x2dcfb4u: goto label_2dcfb4;
        case 0x2dcfb8u: goto label_2dcfb8;
        case 0x2dcfbcu: goto label_2dcfbc;
        case 0x2dcfc0u: goto label_2dcfc0;
        case 0x2dcfc4u: goto label_2dcfc4;
        case 0x2dcfc8u: goto label_2dcfc8;
        case 0x2dcfccu: goto label_2dcfcc;
        case 0x2dcfd0u: goto label_2dcfd0;
        case 0x2dcfd4u: goto label_2dcfd4;
        case 0x2dcfd8u: goto label_2dcfd8;
        case 0x2dcfdcu: goto label_2dcfdc;
        case 0x2dcfe0u: goto label_2dcfe0;
        case 0x2dcfe4u: goto label_2dcfe4;
        case 0x2dcfe8u: goto label_2dcfe8;
        case 0x2dcfecu: goto label_2dcfec;
        case 0x2dcff0u: goto label_2dcff0;
        case 0x2dcff4u: goto label_2dcff4;
        case 0x2dcff8u: goto label_2dcff8;
        case 0x2dcffcu: goto label_2dcffc;
        case 0x2dd000u: goto label_2dd000;
        case 0x2dd004u: goto label_2dd004;
        case 0x2dd008u: goto label_2dd008;
        case 0x2dd00cu: goto label_2dd00c;
        case 0x2dd010u: goto label_2dd010;
        case 0x2dd014u: goto label_2dd014;
        case 0x2dd018u: goto label_2dd018;
        case 0x2dd01cu: goto label_2dd01c;
        case 0x2dd020u: goto label_2dd020;
        case 0x2dd024u: goto label_2dd024;
        case 0x2dd028u: goto label_2dd028;
        case 0x2dd02cu: goto label_2dd02c;
        case 0x2dd030u: goto label_2dd030;
        case 0x2dd034u: goto label_2dd034;
        case 0x2dd038u: goto label_2dd038;
        case 0x2dd03cu: goto label_2dd03c;
        case 0x2dd040u: goto label_2dd040;
        case 0x2dd044u: goto label_2dd044;
        case 0x2dd048u: goto label_2dd048;
        case 0x2dd04cu: goto label_2dd04c;
        case 0x2dd050u: goto label_2dd050;
        case 0x2dd054u: goto label_2dd054;
        case 0x2dd058u: goto label_2dd058;
        case 0x2dd05cu: goto label_2dd05c;
        case 0x2dd060u: goto label_2dd060;
        case 0x2dd064u: goto label_2dd064;
        case 0x2dd068u: goto label_2dd068;
        case 0x2dd06cu: goto label_2dd06c;
        case 0x2dd070u: goto label_2dd070;
        case 0x2dd074u: goto label_2dd074;
        case 0x2dd078u: goto label_2dd078;
        case 0x2dd07cu: goto label_2dd07c;
        case 0x2dd080u: goto label_2dd080;
        case 0x2dd084u: goto label_2dd084;
        case 0x2dd088u: goto label_2dd088;
        case 0x2dd08cu: goto label_2dd08c;
        case 0x2dd090u: goto label_2dd090;
        case 0x2dd094u: goto label_2dd094;
        case 0x2dd098u: goto label_2dd098;
        case 0x2dd09cu: goto label_2dd09c;
        case 0x2dd0a0u: goto label_2dd0a0;
        case 0x2dd0a4u: goto label_2dd0a4;
        case 0x2dd0a8u: goto label_2dd0a8;
        case 0x2dd0acu: goto label_2dd0ac;
        case 0x2dd0b0u: goto label_2dd0b0;
        case 0x2dd0b4u: goto label_2dd0b4;
        case 0x2dd0b8u: goto label_2dd0b8;
        case 0x2dd0bcu: goto label_2dd0bc;
        case 0x2dd0c0u: goto label_2dd0c0;
        case 0x2dd0c4u: goto label_2dd0c4;
        case 0x2dd0c8u: goto label_2dd0c8;
        case 0x2dd0ccu: goto label_2dd0cc;
        case 0x2dd0d0u: goto label_2dd0d0;
        case 0x2dd0d4u: goto label_2dd0d4;
        case 0x2dd0d8u: goto label_2dd0d8;
        case 0x2dd0dcu: goto label_2dd0dc;
        case 0x2dd0e0u: goto label_2dd0e0;
        case 0x2dd0e4u: goto label_2dd0e4;
        case 0x2dd0e8u: goto label_2dd0e8;
        case 0x2dd0ecu: goto label_2dd0ec;
        case 0x2dd0f0u: goto label_2dd0f0;
        case 0x2dd0f4u: goto label_2dd0f4;
        case 0x2dd0f8u: goto label_2dd0f8;
        case 0x2dd0fcu: goto label_2dd0fc;
        case 0x2dd100u: goto label_2dd100;
        case 0x2dd104u: goto label_2dd104;
        case 0x2dd108u: goto label_2dd108;
        case 0x2dd10cu: goto label_2dd10c;
        case 0x2dd110u: goto label_2dd110;
        case 0x2dd114u: goto label_2dd114;
        case 0x2dd118u: goto label_2dd118;
        case 0x2dd11cu: goto label_2dd11c;
        case 0x2dd120u: goto label_2dd120;
        case 0x2dd124u: goto label_2dd124;
        case 0x2dd128u: goto label_2dd128;
        case 0x2dd12cu: goto label_2dd12c;
        case 0x2dd130u: goto label_2dd130;
        case 0x2dd134u: goto label_2dd134;
        case 0x2dd138u: goto label_2dd138;
        case 0x2dd13cu: goto label_2dd13c;
        case 0x2dd140u: goto label_2dd140;
        case 0x2dd144u: goto label_2dd144;
        case 0x2dd148u: goto label_2dd148;
        case 0x2dd14cu: goto label_2dd14c;
        case 0x2dd150u: goto label_2dd150;
        case 0x2dd154u: goto label_2dd154;
        case 0x2dd158u: goto label_2dd158;
        case 0x2dd15cu: goto label_2dd15c;
        case 0x2dd160u: goto label_2dd160;
        case 0x2dd164u: goto label_2dd164;
        case 0x2dd168u: goto label_2dd168;
        case 0x2dd16cu: goto label_2dd16c;
        case 0x2dd170u: goto label_2dd170;
        case 0x2dd174u: goto label_2dd174;
        case 0x2dd178u: goto label_2dd178;
        case 0x2dd17cu: goto label_2dd17c;
        case 0x2dd180u: goto label_2dd180;
        case 0x2dd184u: goto label_2dd184;
        case 0x2dd188u: goto label_2dd188;
        case 0x2dd18cu: goto label_2dd18c;
        case 0x2dd190u: goto label_2dd190;
        case 0x2dd194u: goto label_2dd194;
        case 0x2dd198u: goto label_2dd198;
        case 0x2dd19cu: goto label_2dd19c;
        case 0x2dd1a0u: goto label_2dd1a0;
        case 0x2dd1a4u: goto label_2dd1a4;
        case 0x2dd1a8u: goto label_2dd1a8;
        case 0x2dd1acu: goto label_2dd1ac;
        case 0x2dd1b0u: goto label_2dd1b0;
        case 0x2dd1b4u: goto label_2dd1b4;
        case 0x2dd1b8u: goto label_2dd1b8;
        case 0x2dd1bcu: goto label_2dd1bc;
        case 0x2dd1c0u: goto label_2dd1c0;
        case 0x2dd1c4u: goto label_2dd1c4;
        case 0x2dd1c8u: goto label_2dd1c8;
        case 0x2dd1ccu: goto label_2dd1cc;
        case 0x2dd1d0u: goto label_2dd1d0;
        case 0x2dd1d4u: goto label_2dd1d4;
        case 0x2dd1d8u: goto label_2dd1d8;
        case 0x2dd1dcu: goto label_2dd1dc;
        case 0x2dd1e0u: goto label_2dd1e0;
        case 0x2dd1e4u: goto label_2dd1e4;
        case 0x2dd1e8u: goto label_2dd1e8;
        case 0x2dd1ecu: goto label_2dd1ec;
        case 0x2dd1f0u: goto label_2dd1f0;
        case 0x2dd1f4u: goto label_2dd1f4;
        case 0x2dd1f8u: goto label_2dd1f8;
        case 0x2dd1fcu: goto label_2dd1fc;
        case 0x2dd200u: goto label_2dd200;
        case 0x2dd204u: goto label_2dd204;
        case 0x2dd208u: goto label_2dd208;
        case 0x2dd20cu: goto label_2dd20c;
        case 0x2dd210u: goto label_2dd210;
        case 0x2dd214u: goto label_2dd214;
        case 0x2dd218u: goto label_2dd218;
        case 0x2dd21cu: goto label_2dd21c;
        case 0x2dd220u: goto label_2dd220;
        case 0x2dd224u: goto label_2dd224;
        case 0x2dd228u: goto label_2dd228;
        case 0x2dd22cu: goto label_2dd22c;
        case 0x2dd230u: goto label_2dd230;
        case 0x2dd234u: goto label_2dd234;
        case 0x2dd238u: goto label_2dd238;
        case 0x2dd23cu: goto label_2dd23c;
        case 0x2dd240u: goto label_2dd240;
        case 0x2dd244u: goto label_2dd244;
        case 0x2dd248u: goto label_2dd248;
        case 0x2dd24cu: goto label_2dd24c;
        case 0x2dd250u: goto label_2dd250;
        case 0x2dd254u: goto label_2dd254;
        case 0x2dd258u: goto label_2dd258;
        case 0x2dd25cu: goto label_2dd25c;
        case 0x2dd260u: goto label_2dd260;
        case 0x2dd264u: goto label_2dd264;
        case 0x2dd268u: goto label_2dd268;
        case 0x2dd26cu: goto label_2dd26c;
        case 0x2dd270u: goto label_2dd270;
        case 0x2dd274u: goto label_2dd274;
        case 0x2dd278u: goto label_2dd278;
        case 0x2dd27cu: goto label_2dd27c;
        case 0x2dd280u: goto label_2dd280;
        case 0x2dd284u: goto label_2dd284;
        case 0x2dd288u: goto label_2dd288;
        case 0x2dd28cu: goto label_2dd28c;
        case 0x2dd290u: goto label_2dd290;
        case 0x2dd294u: goto label_2dd294;
        case 0x2dd298u: goto label_2dd298;
        case 0x2dd29cu: goto label_2dd29c;
        case 0x2dd2a0u: goto label_2dd2a0;
        case 0x2dd2a4u: goto label_2dd2a4;
        case 0x2dd2a8u: goto label_2dd2a8;
        case 0x2dd2acu: goto label_2dd2ac;
        case 0x2dd2b0u: goto label_2dd2b0;
        case 0x2dd2b4u: goto label_2dd2b4;
        case 0x2dd2b8u: goto label_2dd2b8;
        case 0x2dd2bcu: goto label_2dd2bc;
        case 0x2dd2c0u: goto label_2dd2c0;
        case 0x2dd2c4u: goto label_2dd2c4;
        case 0x2dd2c8u: goto label_2dd2c8;
        case 0x2dd2ccu: goto label_2dd2cc;
        case 0x2dd2d0u: goto label_2dd2d0;
        case 0x2dd2d4u: goto label_2dd2d4;
        default: break;
    }

    ctx->pc = 0x2dcf50u;

label_2dcf50:
    // 0x2dcf50: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2dcf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2dcf54:
    // 0x2dcf54: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x2dcf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
label_2dcf58:
    // 0x2dcf58: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x2dcf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
label_2dcf5c:
    // 0x2dcf5c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2dcf5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2dcf60:
    // 0x2dcf60: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x2dcf60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
label_2dcf64:
    // 0x2dcf64: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2dcf64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2dcf68:
    // 0x2dcf68: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x2dcf68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
label_2dcf6c:
    // 0x2dcf6c: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x2dcf6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
label_2dcf70:
    // 0x2dcf70: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x2dcf70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
label_2dcf74:
    // 0x2dcf74: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x2dcf74u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_2dcf78:
    // 0x2dcf78: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2dcf78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_2dcf7c:
    // 0x2dcf7c: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x2dcf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_2dcf80:
    // 0x2dcf80: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x2dcf80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
label_2dcf84:
    // 0x2dcf84: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2dcf88:
    if (ctx->pc == 0x2DCF88u) {
        ctx->pc = 0x2DCF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF84u;
        // 0x2dcf88: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCF8Cu;
        goto label_2dcf8c;
    }
    ctx->pc = 0x2DCF84u;
    {
        const bool branch_taken_0x2dcf84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DCF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF84u;
        // 0x2dcf88: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcf84) {
            ctx->pc = 0x2DCF90u;
            goto label_2dcf90;
        }
    }
    ctx->pc = 0x2DCF8Cu;
label_2dcf8c:
    // 0x2dcf8c: 0x8e540034  lw          $s4, 0x34($s2)
    ctx->pc = 0x2dcf8cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_2dcf90:
    // 0x2dcf90: 0xc083bc0  jal         func_20EF00
label_2dcf94:
    if (ctx->pc == 0x2DCF94u) {
        ctx->pc = 0x2DCF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF90u;
        // 0x2dcf94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCF98u;
        goto label_2dcf98;
    }
    ctx->pc = 0x2DCF90u;
    SET_GPR_U32(ctx, 31, 0x2DCF98u);
    ctx->pc = 0x2DCF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCF90u;
    // 0x2dcf94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF00u, 0x2DCF90u, 0x2DCF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCF98u;
label_2dcf98:
    // 0x2dcf98: 0x8e8200c4  lw          $v0, 0xC4($s4)
    ctx->pc = 0x2dcf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
label_2dcf9c:
    // 0x2dcf9c: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x2dcf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_2dcfa0:
    // 0x2dcfa0: 0xc083bc0  jal         func_20EF00
label_2dcfa4:
    if (ctx->pc == 0x2DCFA4u) {
        ctx->pc = 0x2DCFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCFA0u;
        // 0x2dcfa4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCFA8u;
        goto label_2dcfa8;
    }
    ctx->pc = 0x2DCFA0u;
    SET_GPR_U32(ctx, 31, 0x2DCFA8u);
    ctx->pc = 0x2DCFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCFA0u;
    // 0x2dcfa4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF00u, 0x2DCFA0u, 0x2DCFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCFA8u;
label_2dcfa8:
    // 0x2dcfa8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2dcfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2dcfac:
    // 0x2dcfac: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x2dcfacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_2dcfb0:
    // 0x2dcfb0: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x2dcfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
label_2dcfb4:
    // 0x2dcfb4: 0x8e8200c0  lw          $v0, 0xC0($s4)
    ctx->pc = 0x2dcfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
label_2dcfb8:
    // 0x2dcfb8: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2dcfb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_2dcfbc:
    // 0x2dcfbc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_2dcfc0:
    if (ctx->pc == 0x2DCFC0u) {
        ctx->pc = 0x2DCFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCFBCu;
        // 0x2dcfc0: 0x8e8200b8  lw          $v0, 0xB8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCFC4u;
        goto label_2dcfc4;
    }
    ctx->pc = 0x2DCFBCu;
    {
        const bool branch_taken_0x2dcfbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcfbc) {
            ctx->pc = 0x2DCFC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCFBCu;
            // 0x2dcfc0: 0x8e8200b8  lw          $v0, 0xB8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCFE4u;
            goto label_2dcfe4;
        }
    }
    ctx->pc = 0x2DCFC4u;
label_2dcfc4:
    // 0x2dcfc4: 0x8e630070  lw          $v1, 0x70($s3)
    ctx->pc = 0x2dcfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_2dcfc8:
    // 0x2dcfc8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2dcfc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2dcfcc:
    // 0x2dcfcc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2dcfccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dcfd0:
    // 0x2dcfd0: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x2dcfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_2dcfd4:
    // 0x2dcfd4: 0x40f809  jalr        $v0
label_2dcfd8:
    if (ctx->pc == 0x2DCFD8u) {
        ctx->pc = 0x2DCFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCFD4u;
        // 0x2dcfd8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCFDCu;
        goto label_2dcfdc;
    }
    ctx->pc = 0x2DCFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DCFDCu);
        ctx->pc = 0x2DCFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCFD4u;
        // 0x2dcfd8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCFD4u, 0x2DCFDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DCFDCu;
label_2dcfdc:
    // 0x2dcfdc: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_2dcfe0:
    if (ctx->pc == 0x2DCFE0u) {
        ctx->pc = 0x2DCFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCFDCu;
        // 0x2dcfe0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCFE4u;
        goto label_2dcfe4;
    }
    ctx->pc = 0x2DCFDCu;
    {
        const bool branch_taken_0x2dcfdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCFDCu;
        // 0x2dcfe0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcfdc) {
            ctx->pc = 0x2DD2B0u;
            goto label_2dd2b0;
        }
    }
    ctx->pc = 0x2DCFE4u;
label_2dcfe4:
    // 0x2dcfe4: 0x8c500038  lw          $s0, 0x38($v0)
    ctx->pc = 0x2dcfe4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2dcfe8:
    // 0x2dcfe8: 0x56000008  bnel        $s0, $zero, . + 4 + (0x8 << 2)
label_2dcfec:
    if (ctx->pc == 0x2DCFECu) {
        ctx->pc = 0x2DCFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCFE8u;
        // 0x2dcfec: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCFF0u;
        goto label_2dcff0;
    }
    ctx->pc = 0x2DCFE8u;
    {
        const bool branch_taken_0x2dcfe8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dcfe8) {
            ctx->pc = 0x2DCFECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCFE8u;
            // 0x2dcfec: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD00Cu;
            goto label_2dd00c;
        }
    }
    ctx->pc = 0x2DCFF0u;
label_2dcff0:
    // 0x2dcff0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2dcff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2dcff4:
    // 0x2dcff4: 0xc0d7394  jal         func_35CE50
label_2dcff8:
    if (ctx->pc == 0x2DCFF8u) {
        ctx->pc = 0x2DCFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCFF4u;
        // 0x2dcff8: 0x268500f8  addiu       $a1, $s4, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCFFCu;
        goto label_2dcffc;
    }
    ctx->pc = 0x2DCFF4u;
    SET_GPR_U32(ctx, 31, 0x2DCFFCu);
    ctx->pc = 0x2DCFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCFF4u;
    // 0x2dcff8: 0x268500f8  addiu       $a1, $s4, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x2DCFF4u, 0x2DCFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCFFCu;
label_2dcffc:
    // 0x2dcffc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2dcffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2dd000:
    // 0x2dd000: 0xc0d7412  jal         func_35D048
label_2dd004:
    if (ctx->pc == 0x2DD004u) {
        ctx->pc = 0x2DD004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD000u;
        // 0x2dd004: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD008u;
        goto label_2dd008;
    }
    ctx->pc = 0x2DD000u;
    SET_GPR_U32(ctx, 31, 0x2DD008u);
    ctx->pc = 0x2DD004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD000u;
    // 0x2dd004: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2DD000u, 0x2DD008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD008u;
label_2dd008:
    // 0x2dd008: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2dd008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2dd00c:
    // 0x2dd00c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2dd00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2dd010:
    // 0x2dd010: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2dd010u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2dd014:
    // 0x2dd014: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2dd018:
    if (ctx->pc == 0x2DD018u) {
        ctx->pc = 0x2DD018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD014u;
        // 0x2dd018: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD01Cu;
        goto label_2dd01c;
    }
    ctx->pc = 0x2DD014u;
    {
        const bool branch_taken_0x2dd014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD014u;
        // 0x2dd018: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd014) {
            ctx->pc = 0x2DD034u;
            goto label_2dd034;
        }
    }
    ctx->pc = 0x2DD01Cu;
label_2dd01c:
    // 0x2dd01c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2dd01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2dd020:
    // 0x2dd020: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2dd024:
    if (ctx->pc == 0x2DD024u) {
        ctx->pc = 0x2DD024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD020u;
        // 0x2dd024: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD028u;
        goto label_2dd028;
    }
    ctx->pc = 0x2DD020u;
    {
        const bool branch_taken_0x2dd020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DD024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD020u;
        // 0x2dd024: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd020) {
            ctx->pc = 0x2DD030u;
            goto label_2dd030;
        }
    }
    ctx->pc = 0x2DD028u;
label_2dd028:
    // 0x2dd028: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2dd02c:
    if (ctx->pc == 0x2DD02Cu) {
        ctx->pc = 0x2DD02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD028u;
        // 0x2dd02c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD030u;
        goto label_2dd030;
    }
    ctx->pc = 0x2DD028u;
    {
        const bool branch_taken_0x2dd028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DD02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD028u;
        // 0x2dd02c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd028) {
            ctx->pc = 0x2DD034u;
            goto label_2dd034;
        }
    }
    ctx->pc = 0x2DD030u;
label_2dd030:
    // 0x2dd030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dd030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dd034:
    // 0x2dd034: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2dd034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2dd038:
    // 0x2dd038: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_2dd03c:
    if (ctx->pc == 0x2DD03Cu) {
        ctx->pc = 0x2DD03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD038u;
        // 0x2dd03c: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD040u;
        goto label_2dd040;
    }
    ctx->pc = 0x2DD038u;
    {
        const bool branch_taken_0x2dd038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD038u;
        // 0x2dd03c: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd038) {
            ctx->pc = 0x2DD0BCu;
            goto label_2dd0bc;
        }
    }
    ctx->pc = 0x2DD040u;
label_2dd040:
    // 0x2dd040: 0xc07a8b2  jal         func_1EA2C8
label_2dd044:
    if (ctx->pc == 0x2DD044u) {
        ctx->pc = 0x2DD044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD040u;
        // 0x2dd044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD048u;
        goto label_2dd048;
    }
    ctx->pc = 0x2DD040u;
    SET_GPR_U32(ctx, 31, 0x2DD048u);
    ctx->pc = 0x2DD044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD040u;
    // 0x2dd044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x2DD040u, 0x2DD048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD048u;
label_2dd048:
    // 0x2dd048: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x2dd048u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_2dd04c:
    // 0x2dd04c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2dd04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2dd050:
    // 0x2dd050: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x2dd050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_2dd054:
    // 0x2dd054: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x2dd054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dd058:
    // 0x2dd058: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2dd058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2dd05c:
    // 0x2dd05c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2dd05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2dd060:
    // 0x2dd060: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2dd060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd064:
    // 0x2dd064: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2dd064u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2dd068:
    // 0x2dd068: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2dd068u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_2dd06c:
    // 0x2dd06c: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x2dd06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_2dd070:
    // 0x2dd070: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2dd070u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2dd074:
    // 0x2dd074: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x2dd074u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_2dd078:
    // 0x2dd078: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x2dd078u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_2dd07c:
    // 0x2dd07c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2dd07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_2dd080:
    // 0x2dd080: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2dd080u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2dd084:
    // 0x2dd084: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2dd084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_2dd088:
    // 0x2dd088: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2dd088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2dd08c:
    // 0x2dd08c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2dd08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2dd090:
    // 0x2dd090: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x2dd090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_2dd094:
    // 0x2dd094: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dd094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dd098:
    // 0x2dd098: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x2dd098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_2dd09c:
    // 0x2dd09c: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x2dd09cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_2dd0a0:
    // 0x2dd0a0: 0x8e84010c  lw          $a0, 0x10C($s4)
    ctx->pc = 0x2dd0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 268)));
label_2dd0a4:
    // 0x2dd0a4: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2dd0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2dd0a8:
    // 0x2dd0a8: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x2dd0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_2dd0ac:
    // 0x2dd0ac: 0x40f809  jalr        $v0
label_2dd0b0:
    if (ctx->pc == 0x2DD0B0u) {
        ctx->pc = 0x2DD0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0ACu;
        // 0x2dd0b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD0B4u;
        goto label_2dd0b4;
    }
    ctx->pc = 0x2DD0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DD0B4u);
        ctx->pc = 0x2DD0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0ACu;
        // 0x2dd0b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD0ACu, 0x2DD0B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DD0B4u;
label_2dd0b4:
    // 0x2dd0b4: 0x1000007f  b           . + 4 + (0x7F << 2)
label_2dd0b8:
    if (ctx->pc == 0x2DD0B8u) {
        ctx->pc = 0x2DD0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0B4u;
        // 0x2dd0b8: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD0BCu;
        goto label_2dd0bc;
    }
    ctx->pc = 0x2DD0B4u;
    {
        const bool branch_taken_0x2dd0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0B4u;
        // 0x2dd0b8: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd0b4) {
            ctx->pc = 0x2DD2B4u;
            goto label_2dd2b4;
        }
    }
    ctx->pc = 0x2DD0BCu;
label_2dd0bc:
    // 0x2dd0bc: 0xc0f6a96  jal         func_3DAA58
label_2dd0c0:
    if (ctx->pc == 0x2DD0C0u) {
        ctx->pc = 0x2DD0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0BCu;
        // 0x2dd0c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD0C4u;
        goto label_2dd0c4;
    }
    ctx->pc = 0x2DD0BCu;
    SET_GPR_U32(ctx, 31, 0x2DD0C4u);
    ctx->pc = 0x2DD0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD0BCu;
    // 0x2dd0c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DD0BCu, 0x2DD0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD0C4u;
label_2dd0c4:
    // 0x2dd0c4: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2dd0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd0c8:
    // 0x2dd0c8: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x2dd0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_2dd0cc:
    // 0x2dd0cc: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x2dd0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dd0d0:
    // 0x2dd0d0: 0xc6440000  lwc1        $f4, 0x0($s2)
    ctx->pc = 0x2dd0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2dd0d4:
    // 0x2dd0d4: 0xc642000c  lwc1        $f2, 0xC($s2)
    ctx->pc = 0x2dd0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2dd0d8:
    // 0x2dd0d8: 0xc6430010  lwc1        $f3, 0x10($s2)
    ctx->pc = 0x2dd0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2dd0dc:
    // 0x2dd0dc: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x2dd0dcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2dd0e0:
    // 0x2dd0e0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2dd0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2dd0e4:
    // 0x2dd0e4: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2dd0e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2dd0e8:
    // 0x2dd0e8: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x2dd0e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_2dd0ec:
    // 0x2dd0ec: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x2dd0ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2dd0f0:
    // 0x2dd0f0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2dd0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd0f4:
    // 0x2dd0f4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2dd0f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2dd0f8:
    // 0x2dd0f8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2dd0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dd0fc:
    // 0x2dd0fc: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x2dd0fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2dd100:
    // 0x2dd100: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2dd100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd104:
    // 0x2dd104: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2dd104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_2dd108:
    // 0x2dd108: 0x8e91010c  lw          $s1, 0x10C($s4)
    ctx->pc = 0x2dd108u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 268)));
label_2dd10c:
    // 0x2dd10c: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
label_2dd110:
    if (ctx->pc == 0x2DD110u) {
        ctx->pc = 0x2DD110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD10Cu;
        // 0x2dd110: 0x26630030  addiu       $v1, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD114u;
        goto label_2dd114;
    }
    ctx->pc = 0x2DD10Cu;
    {
        const bool branch_taken_0x2dd10c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD10Cu;
        // 0x2dd110: 0x26630030  addiu       $v1, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd10c) {
            ctx->pc = 0x2DD134u;
            goto label_2dd134;
        }
    }
    ctx->pc = 0x2DD114u;
label_2dd114:
    // 0x2dd114: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2dd114u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2dd118:
    // 0x2dd118: 0x268500f8  addiu       $a1, $s4, 0xF8
    ctx->pc = 0x2dd118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 248));
label_2dd11c:
    // 0x2dd11c: 0xc0d7394  jal         func_35CE50
label_2dd120:
    if (ctx->pc == 0x2DD120u) {
        ctx->pc = 0x2DD120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD11Cu;
        // 0x2dd120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD124u;
        goto label_2dd124;
    }
    ctx->pc = 0x2DD11Cu;
    SET_GPR_U32(ctx, 31, 0x2DD124u);
    ctx->pc = 0x2DD120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD11Cu;
    // 0x2dd120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x2DD11Cu, 0x2DD124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD124u;
label_2dd124:
    // 0x2dd124: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dd124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dd128:
    // 0x2dd128: 0xc0d7412  jal         func_35D048
label_2dd12c:
    if (ctx->pc == 0x2DD12Cu) {
        ctx->pc = 0x2DD12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD128u;
        // 0x2dd12c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD130u;
        goto label_2dd130;
    }
    ctx->pc = 0x2DD128u;
    SET_GPR_U32(ctx, 31, 0x2DD130u);
    ctx->pc = 0x2DD12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD128u;
    // 0x2dd12c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2DD128u, 0x2DD130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD130u;
label_2dd130:
    // 0x2dd130: 0x26630030  addiu       $v1, $s3, 0x30
    ctx->pc = 0x2dd130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_2dd134:
    // 0x2dd134: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x2dd134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_2dd138:
    // 0x2dd138: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2dd138u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2dd13c:
    // 0x2dd13c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2dd13cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2dd140:
    // 0x2dd140: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2dd140u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2dd144:
    // 0x2dd144: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2dd144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_2dd148:
    // 0x2dd148: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2dd148u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2dd14c:
    // 0x2dd14c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2dd14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2dd150:
    // 0x2dd150: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x2dd150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2dd154:
    // 0x2dd154: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2dd154u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2dd158:
    // 0x2dd158: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2dd158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2dd15c:
    // 0x2dd15c: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x2dd15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2dd160:
    // 0x2dd160: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2dd160u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_2dd164:
    // 0x2dd164: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2dd164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2dd168:
    // 0x2dd168: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x2dd168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2dd16c:
    // 0x2dd16c: 0x4603119c  madd.s      $f6, $f2, $f3
    ctx->pc = 0x2dd16cu;
    ctx->f[6] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2dd170:
    // 0x2dd170: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2dd170u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2dd174:
    // 0x2dd174: 0x0  nop
    ctx->pc = 0x2dd174u;
    // NOP
label_2dd178:
    // 0x2dd178: 0x4606a834  c.lt.s      $f21, $f6
    ctx->pc = 0x2dd178u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dd17c:
    // 0x2dd17c: 0x0  nop
    ctx->pc = 0x2dd17cu;
    // NOP
label_2dd180:
    // 0x2dd180: 0x4503ff91  bc1tl       . + 4 + (-0x6F << 2)
label_2dd184:
    if (ctx->pc == 0x2DD184u) {
        ctx->pc = 0x2DD184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD180u;
        // 0x2dd184: 0x8e630070  lw          $v1, 0x70($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD188u;
        goto label_2dd188;
    }
    ctx->pc = 0x2DD180u;
    {
        const bool branch_taken_0x2dd180 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd180) {
            ctx->pc = 0x2DD184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD180u;
            // 0x2dd184: 0x8e630070  lw          $v1, 0x70($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCFC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dcfc8;
        }
    }
    ctx->pc = 0x2DD188u;
label_2dd188:
    // 0x2dd188: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x2dd188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_2dd18c:
    // 0x2dd18c: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x2dd18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2dd190:
    // 0x2dd190: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x2dd190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd194:
    // 0x2dd194: 0xc4610044  lwc1        $f1, 0x44($v1)
    ctx->pc = 0x2dd194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dd198:
    // 0x2dd198: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2dd198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2dd19c:
    // 0x2dd19c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2dd19cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2dd1a0:
    // 0x2dd1a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2dd1a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2dd1a4:
    // 0x2dd1a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2dd1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2dd1a8:
    // 0x2dd1a8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2dd1a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2dd1ac:
    // 0x2dd1ac: 0xc6610024  lwc1        $f1, 0x24($s3)
    ctx->pc = 0x2dd1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dd1b0:
    // 0x2dd1b0: 0xc6220024  lwc1        $f2, 0x24($s1)
    ctx->pc = 0x2dd1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2dd1b4:
    // 0x2dd1b4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2dd1b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2dd1b8:
    // 0x2dd1b8: 0xc665000c  lwc1        $f5, 0xC($s3)
    ctx->pc = 0x2dd1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2dd1bc:
    // 0x2dd1bc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2dd1bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2dd1c0:
    // 0x2dd1c0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2dd1c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_2dd1c4:
    // 0x2dd1c4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2dd1c4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2dd1c8:
    // 0x2dd1c8: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2dd1c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_2dd1cc:
    // 0x2dd1cc: 0x0  nop
    ctx->pc = 0x2dd1ccu;
    // NOP
label_2dd1d0:
    // 0x2dd1d0: 0x0  nop
    ctx->pc = 0x2dd1d0u;
    // NOP
label_2dd1d4:
    // 0x2dd1d4: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x2dd1d4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_2dd1d8:
    // 0x2dd1d8: 0x46142834  c.lt.s      $f5, $f20
    ctx->pc = 0x2dd1d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dd1dc:
    // 0x2dd1dc: 0x0  nop
    ctx->pc = 0x2dd1dcu;
    // NOP
label_2dd1e0:
    // 0x2dd1e0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2dd1e4:
    if (ctx->pc == 0x2DD1E4u) {
        ctx->pc = 0x2DD1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD1E0u;
        // 0x2dd1e4: 0xe674000c  swc1        $f20, 0xC($s3) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD1E8u;
        goto label_2dd1e8;
    }
    ctx->pc = 0x2DD1E0u;
    {
        const bool branch_taken_0x2dd1e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd1e0) {
            ctx->pc = 0x2DD1E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD1E0u;
            // 0x2dd1e4: 0xe674000c  swc1        $f20, 0xC($s3) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD1E8u;
            goto label_2dd1e8;
        }
    }
    ctx->pc = 0x2DD1E8u;
label_2dd1e8:
    // 0x2dd1e8: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x2dd1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dd1ec:
    // 0x2dd1ec: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2dd1ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dd1f0:
    // 0x2dd1f0: 0x0  nop
    ctx->pc = 0x2dd1f0u;
    // NOP
label_2dd1f4:
    // 0x2dd1f4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2dd1f8:
    if (ctx->pc == 0x2DD1F8u) {
        ctx->pc = 0x2DD1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD1F4u;
        // 0x2dd1f8: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD1FCu;
        goto label_2dd1fc;
    }
    ctx->pc = 0x2DD1F4u;
    {
        const bool branch_taken_0x2dd1f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd1f4) {
            ctx->pc = 0x2DD1F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD1F4u;
            // 0x2dd1f8: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD1FCu;
            goto label_2dd1fc;
        }
    }
    ctx->pc = 0x2DD1FCu;
label_2dd1fc:
    // 0x2dd1fc: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x2dd1fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2dd200:
    // 0x2dd200: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2dd200u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2dd204:
    // 0x2dd204: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2dd204u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2dd208:
    // 0x2dd208: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2dd208u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2dd20c:
    // 0x2dd20c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2dd20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_2dd210:
    // 0x2dd210: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2dd210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2dd214:
    // 0x2dd214: 0xc0b71e0  jal         func_2DC780
label_2dd218:
    if (ctx->pc == 0x2DD218u) {
        ctx->pc = 0x2DD218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD214u;
        // 0x2dd218: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD21Cu;
        goto label_2dd21c;
    }
    ctx->pc = 0x2DD214u;
    SET_GPR_U32(ctx, 31, 0x2DD21Cu);
    ctx->pc = 0x2DD218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD214u;
    // 0x2dd218: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC780u, 0x2DD214u, 0x2DD21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD21Cu;
label_2dd21c:
    // 0x2dd21c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2dd21cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2dd220:
    // 0x2dd220: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dd220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dd224:
    // 0x2dd224: 0x0  nop
    ctx->pc = 0x2dd224u;
    // NOP
label_2dd228:
    // 0x2dd228: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2dd228u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2dd22c:
    // 0x2dd22c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2dd22cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2dd230:
    // 0x2dd230: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2dd230u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2dd234:
    // 0x2dd234: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2dd234u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2dd238:
    // 0x2dd238: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2dd238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_2dd23c:
    // 0x2dd23c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dd23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dd240:
    // 0x2dd240: 0xc0b71e0  jal         func_2DC780
label_2dd244:
    if (ctx->pc == 0x2DD244u) {
        ctx->pc = 0x2DD244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD240u;
        // 0x2dd244: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD248u;
        goto label_2dd248;
    }
    ctx->pc = 0x2DD240u;
    SET_GPR_U32(ctx, 31, 0x2DD248u);
    ctx->pc = 0x2DD244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD240u;
    // 0x2dd244: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC780u, 0x2DD240u, 0x2DD248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD248u;
label_2dd248:
    // 0x2dd248: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x2dd248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_2dd24c:
    // 0x2dd24c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2dd24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2dd250:
    // 0x2dd250: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2dd250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2dd254:
    // 0x2dd254: 0x10440016  beq         $v0, $a0, . + 4 + (0x16 << 2)
label_2dd258:
    if (ctx->pc == 0x2DD258u) {
        ctx->pc = 0x2DD258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD254u;
        // 0x2dd258: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD25Cu;
        goto label_2dd25c;
    }
    ctx->pc = 0x2DD254u;
    {
        const bool branch_taken_0x2dd254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2DD258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD254u;
        // 0x2dd258: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd254) {
            ctx->pc = 0x2DD2B0u;
            goto label_2dd2b0;
        }
    }
    ctx->pc = 0x2DD25Cu;
label_2dd25c:
    // 0x2dd25c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2dd25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2dd260:
    // 0x2dd260: 0x90620114  lbu         $v0, 0x114($v1)
    ctx->pc = 0x2dd260u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 276)));
label_2dd264:
    // 0x2dd264: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_2dd268:
    if (ctx->pc == 0x2DD268u) {
        ctx->pc = 0x2DD268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD264u;
        // 0x2dd268: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD26Cu;
        goto label_2dd26c;
    }
    ctx->pc = 0x2DD264u;
    {
        const bool branch_taken_0x2dd264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD264u;
        // 0x2dd268: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd264) {
            ctx->pc = 0x2DD2B0u;
            goto label_2dd2b0;
        }
    }
    ctx->pc = 0x2DD26Cu;
label_2dd26c:
    // 0x2dd26c: 0x8c6200b8  lw          $v0, 0xB8($v1)
    ctx->pc = 0x2dd26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
label_2dd270:
    // 0x2dd270: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dd270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dd274:
    // 0x2dd274: 0x3c10004a  lui         $s0, 0x4A
    ctx->pc = 0x2dd274u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
label_2dd278:
    // 0x2dd278: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2dd278u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2dd27c:
    // 0x2dd27c: 0x26109b10  addiu       $s0, $s0, -0x64F0
    ctx->pc = 0x2dd27cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941456));
label_2dd280:
    // 0x2dd280: 0xc07a8e4  jal         func_1EA390
label_2dd284:
    if (ctx->pc == 0x2DD284u) {
        ctx->pc = 0x2DD284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD280u;
        // 0x2dd284: 0x90520054  lbu         $s2, 0x54($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD288u;
        goto label_2dd288;
    }
    ctx->pc = 0x2DD280u;
    SET_GPR_U32(ctx, 31, 0x2DD288u);
    ctx->pc = 0x2DD284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD280u;
    // 0x2dd284: 0x90520054  lbu         $s2, 0x54($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA390u, 0x2DD280u, 0x2DD288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD288u;
label_2dd288:
    // 0x2dd288: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x2dd288u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2dd28c:
    // 0x2dd28c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dd28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dd290:
    // 0x2dd290: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2dd290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dd294:
    // 0x2dd294: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2dd294u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2dd298:
    // 0x2dd298: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2dd298u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dd29c:
    // 0x2dd29c: 0x304900ff  andi        $t1, $v0, 0xFF
    ctx->pc = 0x2dd29cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2dd2a0:
    // 0x2dd2a0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2dd2a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2dd2a4:
    // 0x2dd2a4: 0xc07f550  jal         func_1FD540
label_2dd2a8:
    if (ctx->pc == 0x2DD2A8u) {
        ctx->pc = 0x2DD2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD2A4u;
        // 0x2dd2a8: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD2ACu;
        goto label_2dd2ac;
    }
    ctx->pc = 0x2DD2A4u;
    SET_GPR_U32(ctx, 31, 0x2DD2ACu);
    ctx->pc = 0x2DD2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD2A4u;
    // 0x2dd2a8: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD540u, 0x2DD2A4u, 0x2DD2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD2ACu;
label_2dd2ac:
    // 0x2dd2ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dd2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dd2b0:
    // 0x2dd2b0: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x2dd2b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2dd2b4:
    // 0x2dd2b4: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x2dd2b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_2dd2b8:
    // 0x2dd2b8: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x2dd2b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2dd2bc:
    // 0x2dd2bc: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x2dd2bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_2dd2c0:
    // 0x2dd2c0: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x2dd2c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2dd2c4:
    // 0x2dd2c4: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x2dd2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_2dd2c8:
    // 0x2dd2c8: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x2dd2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2dd2cc:
    // 0x2dd2cc: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2dd2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2dd2d0:
    // 0x2dd2d0: 0x3e00008  jr          $ra
label_2dd2d4:
    if (ctx->pc == 0x2DD2D4u) {
        ctx->pc = 0x2DD2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD2D0u;
        // 0x2dd2d4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD2D8u;
        goto label_fallthrough_0x2dd2d0;
    }
    ctx->pc = 0x2DD2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD2D0u;
        // 0x2dd2d4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2dd2d0:
    ctx->pc = 0x2DD2D8u;
}
