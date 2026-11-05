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

// Function: sub_001BDE80
// Address: 0x1bde80 - 0x1be250
void sub_001BDE80_0x1bde80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDE80_0x1bde80");
#endif

    switch (ctx->pc) {
        case 0x1bde80u: goto label_1bde80;
        case 0x1bde84u: goto label_1bde84;
        case 0x1bde88u: goto label_1bde88;
        case 0x1bde8cu: goto label_1bde8c;
        case 0x1bde90u: goto label_1bde90;
        case 0x1bde94u: goto label_1bde94;
        case 0x1bde98u: goto label_1bde98;
        case 0x1bde9cu: goto label_1bde9c;
        case 0x1bdea0u: goto label_1bdea0;
        case 0x1bdea4u: goto label_1bdea4;
        case 0x1bdea8u: goto label_1bdea8;
        case 0x1bdeacu: goto label_1bdeac;
        case 0x1bdeb0u: goto label_1bdeb0;
        case 0x1bdeb4u: goto label_1bdeb4;
        case 0x1bdeb8u: goto label_1bdeb8;
        case 0x1bdebcu: goto label_1bdebc;
        case 0x1bdec0u: goto label_1bdec0;
        case 0x1bdec4u: goto label_1bdec4;
        case 0x1bdec8u: goto label_1bdec8;
        case 0x1bdeccu: goto label_1bdecc;
        case 0x1bded0u: goto label_1bded0;
        case 0x1bded4u: goto label_1bded4;
        case 0x1bded8u: goto label_1bded8;
        case 0x1bdedcu: goto label_1bdedc;
        case 0x1bdee0u: goto label_1bdee0;
        case 0x1bdee4u: goto label_1bdee4;
        case 0x1bdee8u: goto label_1bdee8;
        case 0x1bdeecu: goto label_1bdeec;
        case 0x1bdef0u: goto label_1bdef0;
        case 0x1bdef4u: goto label_1bdef4;
        case 0x1bdef8u: goto label_1bdef8;
        case 0x1bdefcu: goto label_1bdefc;
        case 0x1bdf00u: goto label_1bdf00;
        case 0x1bdf04u: goto label_1bdf04;
        case 0x1bdf08u: goto label_1bdf08;
        case 0x1bdf0cu: goto label_1bdf0c;
        case 0x1bdf10u: goto label_1bdf10;
        case 0x1bdf14u: goto label_1bdf14;
        case 0x1bdf18u: goto label_1bdf18;
        case 0x1bdf1cu: goto label_1bdf1c;
        case 0x1bdf20u: goto label_1bdf20;
        case 0x1bdf24u: goto label_1bdf24;
        case 0x1bdf28u: goto label_1bdf28;
        case 0x1bdf2cu: goto label_1bdf2c;
        case 0x1bdf30u: goto label_1bdf30;
        case 0x1bdf34u: goto label_1bdf34;
        case 0x1bdf38u: goto label_1bdf38;
        case 0x1bdf3cu: goto label_1bdf3c;
        case 0x1bdf40u: goto label_1bdf40;
        case 0x1bdf44u: goto label_1bdf44;
        case 0x1bdf48u: goto label_1bdf48;
        case 0x1bdf4cu: goto label_1bdf4c;
        case 0x1bdf50u: goto label_1bdf50;
        case 0x1bdf54u: goto label_1bdf54;
        case 0x1bdf58u: goto label_1bdf58;
        case 0x1bdf5cu: goto label_1bdf5c;
        case 0x1bdf60u: goto label_1bdf60;
        case 0x1bdf64u: goto label_1bdf64;
        case 0x1bdf68u: goto label_1bdf68;
        case 0x1bdf6cu: goto label_1bdf6c;
        case 0x1bdf70u: goto label_1bdf70;
        case 0x1bdf74u: goto label_1bdf74;
        case 0x1bdf78u: goto label_1bdf78;
        case 0x1bdf7cu: goto label_1bdf7c;
        case 0x1bdf80u: goto label_1bdf80;
        case 0x1bdf84u: goto label_1bdf84;
        case 0x1bdf88u: goto label_1bdf88;
        case 0x1bdf8cu: goto label_1bdf8c;
        case 0x1bdf90u: goto label_1bdf90;
        case 0x1bdf94u: goto label_1bdf94;
        case 0x1bdf98u: goto label_1bdf98;
        case 0x1bdf9cu: goto label_1bdf9c;
        case 0x1bdfa0u: goto label_1bdfa0;
        case 0x1bdfa4u: goto label_1bdfa4;
        case 0x1bdfa8u: goto label_1bdfa8;
        case 0x1bdfacu: goto label_1bdfac;
        case 0x1bdfb0u: goto label_1bdfb0;
        case 0x1bdfb4u: goto label_1bdfb4;
        case 0x1bdfb8u: goto label_1bdfb8;
        case 0x1bdfbcu: goto label_1bdfbc;
        case 0x1bdfc0u: goto label_1bdfc0;
        case 0x1bdfc4u: goto label_1bdfc4;
        case 0x1bdfc8u: goto label_1bdfc8;
        case 0x1bdfccu: goto label_1bdfcc;
        case 0x1bdfd0u: goto label_1bdfd0;
        case 0x1bdfd4u: goto label_1bdfd4;
        case 0x1bdfd8u: goto label_1bdfd8;
        case 0x1bdfdcu: goto label_1bdfdc;
        case 0x1bdfe0u: goto label_1bdfe0;
        case 0x1bdfe4u: goto label_1bdfe4;
        case 0x1bdfe8u: goto label_1bdfe8;
        case 0x1bdfecu: goto label_1bdfec;
        case 0x1bdff0u: goto label_1bdff0;
        case 0x1bdff4u: goto label_1bdff4;
        case 0x1bdff8u: goto label_1bdff8;
        case 0x1bdffcu: goto label_1bdffc;
        case 0x1be000u: goto label_1be000;
        case 0x1be004u: goto label_1be004;
        case 0x1be008u: goto label_1be008;
        case 0x1be00cu: goto label_1be00c;
        case 0x1be010u: goto label_1be010;
        case 0x1be014u: goto label_1be014;
        case 0x1be018u: goto label_1be018;
        case 0x1be01cu: goto label_1be01c;
        case 0x1be020u: goto label_1be020;
        case 0x1be024u: goto label_1be024;
        case 0x1be028u: goto label_1be028;
        case 0x1be02cu: goto label_1be02c;
        case 0x1be030u: goto label_1be030;
        case 0x1be034u: goto label_1be034;
        case 0x1be038u: goto label_1be038;
        case 0x1be03cu: goto label_1be03c;
        case 0x1be040u: goto label_1be040;
        case 0x1be044u: goto label_1be044;
        case 0x1be048u: goto label_1be048;
        case 0x1be04cu: goto label_1be04c;
        case 0x1be050u: goto label_1be050;
        case 0x1be054u: goto label_1be054;
        case 0x1be058u: goto label_1be058;
        case 0x1be05cu: goto label_1be05c;
        case 0x1be060u: goto label_1be060;
        case 0x1be064u: goto label_1be064;
        case 0x1be068u: goto label_1be068;
        case 0x1be06cu: goto label_1be06c;
        case 0x1be070u: goto label_1be070;
        case 0x1be074u: goto label_1be074;
        case 0x1be078u: goto label_1be078;
        case 0x1be07cu: goto label_1be07c;
        case 0x1be080u: goto label_1be080;
        case 0x1be084u: goto label_1be084;
        case 0x1be088u: goto label_1be088;
        case 0x1be08cu: goto label_1be08c;
        case 0x1be090u: goto label_1be090;
        case 0x1be094u: goto label_1be094;
        case 0x1be098u: goto label_1be098;
        case 0x1be09cu: goto label_1be09c;
        case 0x1be0a0u: goto label_1be0a0;
        case 0x1be0a4u: goto label_1be0a4;
        case 0x1be0a8u: goto label_1be0a8;
        case 0x1be0acu: goto label_1be0ac;
        case 0x1be0b0u: goto label_1be0b0;
        case 0x1be0b4u: goto label_1be0b4;
        case 0x1be0b8u: goto label_1be0b8;
        case 0x1be0bcu: goto label_1be0bc;
        case 0x1be0c0u: goto label_1be0c0;
        case 0x1be0c4u: goto label_1be0c4;
        case 0x1be0c8u: goto label_1be0c8;
        case 0x1be0ccu: goto label_1be0cc;
        case 0x1be0d0u: goto label_1be0d0;
        case 0x1be0d4u: goto label_1be0d4;
        case 0x1be0d8u: goto label_1be0d8;
        case 0x1be0dcu: goto label_1be0dc;
        case 0x1be0e0u: goto label_1be0e0;
        case 0x1be0e4u: goto label_1be0e4;
        case 0x1be0e8u: goto label_1be0e8;
        case 0x1be0ecu: goto label_1be0ec;
        case 0x1be0f0u: goto label_1be0f0;
        case 0x1be0f4u: goto label_1be0f4;
        case 0x1be0f8u: goto label_1be0f8;
        case 0x1be0fcu: goto label_1be0fc;
        case 0x1be100u: goto label_1be100;
        case 0x1be104u: goto label_1be104;
        case 0x1be108u: goto label_1be108;
        case 0x1be10cu: goto label_1be10c;
        case 0x1be110u: goto label_1be110;
        case 0x1be114u: goto label_1be114;
        case 0x1be118u: goto label_1be118;
        case 0x1be11cu: goto label_1be11c;
        case 0x1be120u: goto label_1be120;
        case 0x1be124u: goto label_1be124;
        case 0x1be128u: goto label_1be128;
        case 0x1be12cu: goto label_1be12c;
        case 0x1be130u: goto label_1be130;
        case 0x1be134u: goto label_1be134;
        case 0x1be138u: goto label_1be138;
        case 0x1be13cu: goto label_1be13c;
        case 0x1be140u: goto label_1be140;
        case 0x1be144u: goto label_1be144;
        case 0x1be148u: goto label_1be148;
        case 0x1be14cu: goto label_1be14c;
        case 0x1be150u: goto label_1be150;
        case 0x1be154u: goto label_1be154;
        case 0x1be158u: goto label_1be158;
        case 0x1be15cu: goto label_1be15c;
        case 0x1be160u: goto label_1be160;
        case 0x1be164u: goto label_1be164;
        case 0x1be168u: goto label_1be168;
        case 0x1be16cu: goto label_1be16c;
        case 0x1be170u: goto label_1be170;
        case 0x1be174u: goto label_1be174;
        case 0x1be178u: goto label_1be178;
        case 0x1be17cu: goto label_1be17c;
        case 0x1be180u: goto label_1be180;
        case 0x1be184u: goto label_1be184;
        case 0x1be188u: goto label_1be188;
        case 0x1be18cu: goto label_1be18c;
        case 0x1be190u: goto label_1be190;
        case 0x1be194u: goto label_1be194;
        case 0x1be198u: goto label_1be198;
        case 0x1be19cu: goto label_1be19c;
        case 0x1be1a0u: goto label_1be1a0;
        case 0x1be1a4u: goto label_1be1a4;
        case 0x1be1a8u: goto label_1be1a8;
        case 0x1be1acu: goto label_1be1ac;
        case 0x1be1b0u: goto label_1be1b0;
        case 0x1be1b4u: goto label_1be1b4;
        case 0x1be1b8u: goto label_1be1b8;
        case 0x1be1bcu: goto label_1be1bc;
        case 0x1be1c0u: goto label_1be1c0;
        case 0x1be1c4u: goto label_1be1c4;
        case 0x1be1c8u: goto label_1be1c8;
        case 0x1be1ccu: goto label_1be1cc;
        case 0x1be1d0u: goto label_1be1d0;
        case 0x1be1d4u: goto label_1be1d4;
        case 0x1be1d8u: goto label_1be1d8;
        case 0x1be1dcu: goto label_1be1dc;
        case 0x1be1e0u: goto label_1be1e0;
        case 0x1be1e4u: goto label_1be1e4;
        case 0x1be1e8u: goto label_1be1e8;
        case 0x1be1ecu: goto label_1be1ec;
        case 0x1be1f0u: goto label_1be1f0;
        case 0x1be1f4u: goto label_1be1f4;
        case 0x1be1f8u: goto label_1be1f8;
        case 0x1be1fcu: goto label_1be1fc;
        case 0x1be200u: goto label_1be200;
        case 0x1be204u: goto label_1be204;
        case 0x1be208u: goto label_1be208;
        case 0x1be20cu: goto label_1be20c;
        case 0x1be210u: goto label_1be210;
        case 0x1be214u: goto label_1be214;
        case 0x1be218u: goto label_1be218;
        case 0x1be21cu: goto label_1be21c;
        case 0x1be220u: goto label_1be220;
        case 0x1be224u: goto label_1be224;
        case 0x1be228u: goto label_1be228;
        case 0x1be22cu: goto label_1be22c;
        case 0x1be230u: goto label_1be230;
        case 0x1be234u: goto label_1be234;
        case 0x1be238u: goto label_1be238;
        case 0x1be23cu: goto label_1be23c;
        case 0x1be240u: goto label_1be240;
        case 0x1be244u: goto label_1be244;
        case 0x1be248u: goto label_1be248;
        case 0x1be24cu: goto label_1be24c;
        default: break;
    }

    ctx->pc = 0x1bde80u;

label_1bde80:
    // 0x1bde80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1bde80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1bde84:
    // 0x1bde84: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x1bde84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
label_1bde88:
    // 0x1bde88: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1bde88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_1bde8c:
    // 0x1bde8c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1bde8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bde90:
    // 0x1bde90: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1bde90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_1bde94:
    // 0x1bde94: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1bde94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_1bde98:
    // 0x1bde98: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1bde98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_1bde9c:
    // 0x1bde9c: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x1bde9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
label_1bdea0:
    // 0x1bdea0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1bdea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1bdea4:
    // 0x1bdea4: 0xae600338  sw          $zero, 0x338($s3)
    ctx->pc = 0x1bdea4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 824), GPR_U32(ctx, 0));
label_1bdea8:
    // 0x1bdea8: 0x8e640030  lw          $a0, 0x30($s3)
    ctx->pc = 0x1bdea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_1bdeac:
    // 0x1bdeac: 0x8e6200e4  lw          $v0, 0xE4($s3)
    ctx->pc = 0x1bdeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 228)));
label_1bdeb0:
    // 0x1bdeb0: 0x14820018  bne         $a0, $v0, . + 4 + (0x18 << 2)
label_1bdeb4:
    if (ctx->pc == 0x1BDEB4u) {
        ctx->pc = 0x1BDEB8u;
        goto label_1bdeb8;
    }
    ctx->pc = 0x1BDEB0u;
    {
        const bool branch_taken_0x1bdeb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bdeb0) {
            ctx->pc = 0x1BDF14u;
            goto label_1bdf14;
        }
    }
    ctx->pc = 0x1BDEB8u;
label_1bdeb8:
    // 0x1bdeb8: 0xc04153e  jal         func_1054F8
label_1bdebc:
    if (ctx->pc == 0x1BDEBCu) {
        ctx->pc = 0x1BDEC0u;
        goto label_1bdec0;
    }
    ctx->pc = 0x1BDEB8u;
    SET_GPR_U32(ctx, 31, 0x1BDEC0u);
    ctx->pc = 0x1054F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054F8u, 0x1BDEB8u, 0x1BDEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDEC0u;
label_1bdec0:
    // 0x1bdec0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1bdec0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1bdec4:
    // 0x1bdec4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_1bdec8:
    if (ctx->pc == 0x1BDEC8u) {
        ctx->pc = 0x1BDEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDEC4u;
        // 0x1bdec8: 0x26700310  addiu       $s0, $s3, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDECCu;
        goto label_1bdecc;
    }
    ctx->pc = 0x1BDEC4u;
    {
        const bool branch_taken_0x1bdec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDEC4u;
        // 0x1bdec8: 0x26700310  addiu       $s0, $s3, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdec4) {
            ctx->pc = 0x1BDF14u;
            goto label_1bdf14;
        }
    }
    ctx->pc = 0x1BDECCu;
label_1bdecc:
    // 0x1bdecc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1bdeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1bded0:
    // 0x1bded0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1bded4:
    if (ctx->pc == 0x1BDED4u) {
        ctx->pc = 0x1BDED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDED0u;
        // 0x1bded4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDED8u;
        goto label_1bded8;
    }
    ctx->pc = 0x1BDED0u;
    {
        const bool branch_taken_0x1bded0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDED0u;
        // 0x1bded4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bded0) {
            ctx->pc = 0x1BDEF8u;
            goto label_1bdef8;
        }
    }
    ctx->pc = 0x1BDED8u;
label_1bded8:
    // 0x1bded8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1bded8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1bdedc:
    // 0x1bdedc: 0x0  nop
    ctx->pc = 0x1bdedcu;
    // NOP
label_1bdee0:
    // 0x1bdee0: 0xc0f61e8  jal         func_3D87A0
label_1bdee4:
    if (ctx->pc == 0x1BDEE4u) {
        ctx->pc = 0x1BDEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDEE0u;
        // 0x1bdee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDEE8u;
        goto label_1bdee8;
    }
    ctx->pc = 0x1BDEE0u;
    SET_GPR_U32(ctx, 31, 0x1BDEE8u);
    ctx->pc = 0x1BDEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDEE0u;
    // 0x1bdee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x1BDEE0u, 0x1BDEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDEE8u;
label_1bdee8:
    // 0x1bdee8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1bdee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1bdeec:
    // 0x1bdeec: 0x0  nop
    ctx->pc = 0x1bdeecu;
    // NOP
label_1bdef0:
    // 0x1bdef0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_1bdef4:
    if (ctx->pc == 0x1BDEF4u) {
        ctx->pc = 0x1BDEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDEF0u;
        // 0x1bdef4: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDEF8u;
        goto label_1bdef8;
    }
    ctx->pc = 0x1BDEF0u;
    {
        const bool branch_taken_0x1bdef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdef0) {
            ctx->pc = 0x1BDEF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BDEF0u;
            // 0x1bdef4: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BDEE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bdee0;
        }
    }
    ctx->pc = 0x1BDEF8u;
label_1bdef8:
    // 0x1bdef8: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1bdef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1bdefc:
    // 0x1bdefc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bdefcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bdf00:
    // 0x1bdf00: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1bdf00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1bdf04:
    // 0x1bdf04: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1bdf04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1bdf08:
    // 0x1bdf08: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1bdf08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1bdf0c:
    // 0x1bdf0c: 0x100000c7  b           . + 4 + (0xC7 << 2)
label_1bdf10:
    if (ctx->pc == 0x1BDF10u) {
        ctx->pc = 0x1BDF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF0Cu;
        // 0x1bdf10: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDF14u;
        goto label_1bdf14;
    }
    ctx->pc = 0x1BDF0Cu;
    {
        const bool branch_taken_0x1bdf0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF0Cu;
        // 0x1bdf10: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdf0c) {
            ctx->pc = 0x1BE22Cu;
            goto label_1be22c;
        }
    }
    ctx->pc = 0x1BDF14u;
label_1bdf14:
    // 0x1bdf14: 0xc06fa74  jal         func_1BE9D0
label_1bdf18:
    if (ctx->pc == 0x1BDF18u) {
        ctx->pc = 0x1BDF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF14u;
        // 0x1bdf18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDF1Cu;
        goto label_1bdf1c;
    }
    ctx->pc = 0x1BDF14u;
    SET_GPR_U32(ctx, 31, 0x1BDF1Cu);
    ctx->pc = 0x1BDF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDF14u;
    // 0x1bdf18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE9D0u, 0x1BDF14u, 0x1BDF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDF1Cu;
label_1bdf1c:
    // 0x1bdf1c: 0xae600348  sw          $zero, 0x348($s3)
    ctx->pc = 0x1bdf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 840), GPR_U32(ctx, 0));
label_1bdf20:
    // 0x1bdf20: 0x266300d0  addiu       $v1, $s3, 0xD0
    ctx->pc = 0x1bdf20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
label_1bdf24:
    // 0x1bdf24: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1bdf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1bdf28:
    // 0x1bdf28: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1bdf28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
label_1bdf2c:
    // 0x1bdf2c: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_1bdf30:
    if (ctx->pc == 0x1BDF30u) {
        ctx->pc = 0x1BDF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF2Cu;
        // 0x1bdf30: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDF34u;
        goto label_1bdf34;
    }
    ctx->pc = 0x1BDF2Cu;
    {
        const bool branch_taken_0x1bdf2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF2Cu;
        // 0x1bdf30: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdf2c) {
            ctx->pc = 0x1BE030u;
            goto label_1be030;
        }
    }
    ctx->pc = 0x1BDF34u;
label_1bdf34:
    // 0x1bdf34: 0x8e720030  lw          $s2, 0x30($s3)
    ctx->pc = 0x1bdf34u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_1bdf38:
    // 0x1bdf38: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bdf38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bdf3c:
    // 0x1bdf3c: 0x8e910014  lw          $s1, 0x14($s4)
    ctx->pc = 0x1bdf3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_1bdf40:
    // 0x1bdf40: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bdf40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bdf44:
    // 0x1bdf44: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1bdf44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_1bdf48:
    // 0x1bdf48: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bdf48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1bdf4c:
    // 0x1bdf4c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1bdf4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bdf50:
    // 0x1bdf50: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1bdf50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bdf54:
    // 0x1bdf54: 0xc0406dc  jal         func_101B70
label_1bdf58:
    if (ctx->pc == 0x1BDF58u) {
        ctx->pc = 0x1BDF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF54u;
        // 0x1bdf58: 0x26700310  addiu       $s0, $s3, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDF5Cu;
        goto label_1bdf5c;
    }
    ctx->pc = 0x1BDF54u;
    SET_GPR_U32(ctx, 31, 0x1BDF5Cu);
    ctx->pc = 0x1BDF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDF54u;
    // 0x1bdf58: 0x26700310  addiu       $s0, $s3, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B70u, 0x1BDF54u, 0x1BDF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDF5Cu;
label_1bdf5c:
    // 0x1bdf5c: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x1bdf5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bdf60:
    // 0x1bdf60: 0x8e630394  lw          $v1, 0x394($s3)
    ctx->pc = 0x1bdf60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 916)));
label_1bdf64:
    // 0x1bdf64: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1bdf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1bdf68:
    // 0x1bdf68: 0x40f809  jalr        $v0
label_1bdf6c:
    if (ctx->pc == 0x1BDF6Cu) {
        ctx->pc = 0x1BDF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF68u;
        // 0x1bdf6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDF70u;
        goto label_1bdf70;
    }
    ctx->pc = 0x1BDF68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BDF70u);
        ctx->pc = 0x1BDF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF68u;
        // 0x1bdf6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDF68u, 0x1BDF70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BDF70u;
label_1bdf70:
    // 0x1bdf70: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1bdf70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bdf74:
    // 0x1bdf74: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1bdf74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bdf78:
    // 0x1bdf78: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1bdf78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bdf7c:
    // 0x1bdf7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bdf7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bdf80:
    // 0x1bdf80: 0xc0411ac  jal         func_1046B0
label_1bdf84:
    if (ctx->pc == 0x1BDF84u) {
        ctx->pc = 0x1BDF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF80u;
        // 0x1bdf84: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDF88u;
        goto label_1bdf88;
    }
    ctx->pc = 0x1BDF80u;
    SET_GPR_U32(ctx, 31, 0x1BDF88u);
    ctx->pc = 0x1BDF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDF80u;
    // 0x1bdf84: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1046B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1046B0u, 0x1BDF80u, 0x1BDF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDF88u;
label_1bdf88:
    // 0x1bdf88: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1bdf88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1bdf8c:
    // 0x1bdf8c: 0xae620338  sw          $v0, 0x338($s3)
    ctx->pc = 0x1bdf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 824), GPR_U32(ctx, 2));
label_1bdf90:
    // 0x1bdf90: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x1bdf90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_1bdf94:
    // 0x1bdf94: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_1bdf98:
    if (ctx->pc == 0x1BDF98u) {
        ctx->pc = 0x1BDF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF94u;
        // 0x1bdf98: 0x38a20002  xori        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDF9Cu;
        goto label_1bdf9c;
    }
    ctx->pc = 0x1BDF94u;
    {
        const bool branch_taken_0x1bdf94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF94u;
        // 0x1bdf98: 0x38a20002  xori        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdf94) {
            ctx->pc = 0x1BDFB0u;
            goto label_1bdfb0;
        }
    }
    ctx->pc = 0x1BDF9Cu;
label_1bdf9c:
    // 0x1bdf9c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1bdf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_1bdfa0:
    // 0x1bdfa0: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x1bdfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_1bdfa4:
    // 0x1bdfa4: 0x8c43bd50  lw          $v1, -0x42B0($v0)
    ctx->pc = 0x1bdfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
label_1bdfa8:
    // 0x1bdfa8: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
label_1bdfac:
    if (ctx->pc == 0x1BDFACu) {
        ctx->pc = 0x1BDFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDFA8u;
        // 0x1bdfac: 0x38a20002  xori        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDFB0u;
        goto label_1bdfb0;
    }
    ctx->pc = 0x1BDFA8u;
    {
        const bool branch_taken_0x1bdfa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BDFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDFA8u;
        // 0x1bdfac: 0x38a20002  xori        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdfa8) {
            ctx->pc = 0x1BDFD0u;
            goto label_1bdfd0;
        }
    }
    ctx->pc = 0x1BDFB0u;
label_1bdfb0:
    // 0x1bdfb0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_1bdfb4:
    if (ctx->pc == 0x1BDFB4u) {
        ctx->pc = 0x1BDFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDFB0u;
        // 0x1bdfb4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDFB8u;
        goto label_1bdfb8;
    }
    ctx->pc = 0x1BDFB0u;
    {
        const bool branch_taken_0x1bdfb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDFB0u;
        // 0x1bdfb4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdfb0) {
            ctx->pc = 0x1BE028u;
            goto label_1be028;
        }
    }
    ctx->pc = 0x1BDFB8u;
label_1bdfb8:
    // 0x1bdfb8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1bdfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_1bdfbc:
    // 0x1bdfbc: 0x8e900014  lw          $s0, 0x14($s4)
    ctx->pc = 0x1bdfbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_1bdfc0:
    // 0x1bdfc0: 0xc095368  jal         func_254DA0
label_1bdfc4:
    if (ctx->pc == 0x1BDFC4u) {
        ctx->pc = 0x1BDFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDFC0u;
        // 0x1bdfc4: 0x8c44bd50  lw          $a0, -0x42B0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDFC8u;
        goto label_1bdfc8;
    }
    ctx->pc = 0x1BDFC0u;
    SET_GPR_U32(ctx, 31, 0x1BDFC8u);
    ctx->pc = 0x1BDFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDFC0u;
    // 0x1bdfc4: 0x8c44bd50  lw          $a0, -0x42B0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254DA0u, 0x1BDFC0u, 0x1BDFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDFC8u;
label_1bdfc8:
    // 0x1bdfc8: 0x16020017  bne         $s0, $v0, . + 4 + (0x17 << 2)
label_1bdfcc:
    if (ctx->pc == 0x1BDFCCu) {
        ctx->pc = 0x1BDFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDFC8u;
        // 0x1bdfcc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDFD0u;
        goto label_1bdfd0;
    }
    ctx->pc = 0x1BDFC8u;
    {
        const bool branch_taken_0x1bdfc8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BDFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDFC8u;
        // 0x1bdfcc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdfc8) {
            ctx->pc = 0x1BE028u;
            goto label_1be028;
        }
    }
    ctx->pc = 0x1BDFD0u;
label_1bdfd0:
    // 0x1bdfd0: 0x86630390  lh          $v1, 0x390($s3)
    ctx->pc = 0x1bdfd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 912)));
label_1bdfd4:
    // 0x1bdfd4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bdfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1bdfd8:
    // 0x1bdfd8: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_1bdfdc:
    if (ctx->pc == 0x1BDFDCu) {
        ctx->pc = 0x1BDFE0u;
        goto label_1bdfe0;
    }
    ctx->pc = 0x1BDFD8u;
    {
        const bool branch_taken_0x1bdfd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bdfd8) {
            ctx->pc = 0x1BE018u;
            goto label_1be018;
        }
    }
    ctx->pc = 0x1BDFE0u;
label_1bdfe0:
    // 0x1bdfe0: 0xc04121c  jal         func_104870
label_1bdfe4:
    if (ctx->pc == 0x1BDFE4u) {
        ctx->pc = 0x1BDFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDFE0u;
        // 0x1bdfe4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDFE8u;
        goto label_1bdfe8;
    }
    ctx->pc = 0x1BDFE0u;
    SET_GPR_U32(ctx, 31, 0x1BDFE8u);
    ctx->pc = 0x1BDFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDFE0u;
    // 0x1bdfe4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104870u, 0x1BDFE0u, 0x1BDFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDFE8u;
label_1bdfe8:
    // 0x1bdfe8: 0x86630390  lh          $v1, 0x390($s3)
    ctx->pc = 0x1bdfe8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 912)));
label_1bdfec:
    // 0x1bdfec: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x1bdfecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
label_1bdff0:
    // 0x1bdff0: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x1bdff0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1bdff4:
    // 0x1bdff4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_1bdff8:
    if (ctx->pc == 0x1BDFF8u) {
        ctx->pc = 0x1BDFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDFF4u;
        // 0x1bdff8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDFFCu;
        goto label_1bdffc;
    }
    ctx->pc = 0x1BDFF4u;
    {
        const bool branch_taken_0x1bdff4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDFF4u;
        // 0x1bdff8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdff4) {
            ctx->pc = 0x1BE014u;
            goto label_1be014;
        }
    }
    ctx->pc = 0x1BDFFCu;
label_1bdffc:
    // 0x1bdffc: 0x8e620310  lw          $v0, 0x310($s3)
    ctx->pc = 0x1bdffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 784)));
label_1be000:
    // 0x1be000: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1be004:
    if (ctx->pc == 0x1BE004u) {
        ctx->pc = 0x1BE004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE000u;
        // 0x1be004: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE008u;
        goto label_1be008;
    }
    ctx->pc = 0x1BE000u;
    {
        const bool branch_taken_0x1be000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE000u;
        // 0x1be004: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be000) {
            ctx->pc = 0x1BE014u;
            goto label_1be014;
        }
    }
    ctx->pc = 0x1BE008u;
label_1be008:
    // 0x1be008: 0x8e620338  lw          $v0, 0x338($s3)
    ctx->pc = 0x1be008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 824)));
label_1be00c:
    // 0x1be00c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1be010:
    if (ctx->pc == 0x1BE010u) {
        ctx->pc = 0x1BE010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE00Cu;
        // 0x1be010: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE014u;
        goto label_1be014;
    }
    ctx->pc = 0x1BE00Cu;
    {
        const bool branch_taken_0x1be00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE00Cu;
        // 0x1be010: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be00c) {
            ctx->pc = 0x1BE018u;
            goto label_1be018;
        }
    }
    ctx->pc = 0x1BE014u;
label_1be014:
    // 0x1be014: 0xa2620392  sb          $v0, 0x392($s3)
    ctx->pc = 0x1be014u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 914), (uint8_t)GPR_U32(ctx, 2));
label_1be018:
    // 0x1be018: 0xc04121c  jal         func_104870
label_1be01c:
    if (ctx->pc == 0x1BE01Cu) {
        ctx->pc = 0x1BE01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE018u;
        // 0x1be01c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE020u;
        goto label_1be020;
    }
    ctx->pc = 0x1BE018u;
    SET_GPR_U32(ctx, 31, 0x1BE020u);
    ctx->pc = 0x1BE01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE018u;
    // 0x1be01c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104870u, 0x1BE018u, 0x1BE020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE020u;
label_1be020:
    // 0x1be020: 0x10000003  b           . + 4 + (0x3 << 2)
label_1be024:
    if (ctx->pc == 0x1BE024u) {
        ctx->pc = 0x1BE024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE020u;
        // 0x1be024: 0xa6620390  sh          $v0, 0x390($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 912), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE028u;
        goto label_1be028;
    }
    ctx->pc = 0x1BE020u;
    {
        const bool branch_taken_0x1be020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE020u;
        // 0x1be024: 0xa6620390  sh          $v0, 0x390($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 912), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be020) {
            ctx->pc = 0x1BE030u;
            goto label_1be030;
        }
    }
    ctx->pc = 0x1BE028u;
label_1be028:
    // 0x1be028: 0xa2600392  sb          $zero, 0x392($s3)
    ctx->pc = 0x1be028u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 914), (uint8_t)GPR_U32(ctx, 0));
label_1be02c:
    // 0x1be02c: 0xa6620390  sh          $v0, 0x390($s3)
    ctx->pc = 0x1be02cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 912), (uint16_t)GPR_U32(ctx, 2));
label_1be030:
    // 0x1be030: 0x8e650338  lw          $a1, 0x338($s3)
    ctx->pc = 0x1be030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 824)));
label_1be034:
    // 0x1be034: 0x54a00043  bnel        $a1, $zero, . + 4 + (0x43 << 2)
label_1be038:
    if (ctx->pc == 0x1BE038u) {
        ctx->pc = 0x1BE038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE034u;
        // 0x1be038: 0xc66100d0  lwc1        $f1, 0xD0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE03Cu;
        goto label_1be03c;
    }
    ctx->pc = 0x1BE034u;
    {
        const bool branch_taken_0x1be034 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be034) {
            ctx->pc = 0x1BE038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BE034u;
            // 0x1be038: 0xc66100d0  lwc1        $f1, 0xD0($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BE144u;
            goto label_1be144;
        }
    }
    ctx->pc = 0x1BE03Cu;
label_1be03c:
    // 0x1be03c: 0x26630110  addiu       $v1, $s3, 0x110
    ctx->pc = 0x1be03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 272));
label_1be040:
    // 0x1be040: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x1be040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_1be044:
    // 0x1be044: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1be044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1be048:
    // 0x1be048: 0x1082003b  beq         $a0, $v0, . + 4 + (0x3B << 2)
label_1be04c:
    if (ctx->pc == 0x1BE04Cu) {
        ctx->pc = 0x1BE04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE048u;
        // 0x1be04c: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE050u;
        goto label_1be050;
    }
    ctx->pc = 0x1BE048u;
    {
        const bool branch_taken_0x1be048 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BE04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE048u;
        // 0x1be04c: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be048) {
            ctx->pc = 0x1BE138u;
            goto label_1be138;
        }
    }
    ctx->pc = 0x1BE050u;
label_1be050:
    // 0x1be050: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1be050u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1be054:
    // 0x1be054: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x1be054u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1be058:
    // 0x1be058: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1be058u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1be05c:
    // 0x1be05c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1be05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_1be060:
    // 0x1be060: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x1be060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1be064:
    // 0x1be064: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1be064u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1be068:
    // 0x1be068: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x1be068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1be06c:
    // 0x1be06c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1be06cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1be070:
    // 0x1be070: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1be070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1be074:
    // 0x1be074: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1be074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1be078:
    // 0x1be078: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1be078u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1be07c:
    // 0x1be07c: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x1be07cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1be080:
    // 0x1be080: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1be080u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1be084:
    // 0x1be084: 0xc0414d6  jal         func_105358
label_1be088:
    if (ctx->pc == 0x1BE088u) {
        ctx->pc = 0x1BE088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE084u;
        // 0x1be088: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE08Cu;
        goto label_1be08c;
    }
    ctx->pc = 0x1BE084u;
    SET_GPR_U32(ctx, 31, 0x1BE08Cu);
    ctx->pc = 0x1BE088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE084u;
    // 0x1be088: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105358u, 0x1BE084u, 0x1BE08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE08Cu;
label_1be08c:
    // 0x1be08c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_1be090:
    if (ctx->pc == 0x1BE090u) {
        ctx->pc = 0x1BE090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE08Cu;
        // 0x1be090: 0x266201e0  addiu       $v0, $s3, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE094u;
        goto label_1be094;
    }
    ctx->pc = 0x1BE08Cu;
    {
        const bool branch_taken_0x1be08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE08Cu;
        // 0x1be090: 0x266201e0  addiu       $v0, $s3, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be08c) {
            ctx->pc = 0x1BE134u;
            goto label_1be134;
        }
    }
    ctx->pc = 0x1BE094u;
label_1be094:
    // 0x1be094: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x1be094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_1be098:
    // 0x1be098: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1be098u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1be09c:
    // 0x1be09c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1be09cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1be0a0:
    // 0x1be0a0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1be0a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1be0a4:
    // 0x1be0a4: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1be0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_1be0a8:
    // 0x1be0a8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1be0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1be0ac:
    // 0x1be0ac: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1be0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1be0b0:
    // 0x1be0b0: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x1be0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1be0b4:
    // 0x1be0b4: 0xc7a5003c  lwc1        $f5, 0x3C($sp)
    ctx->pc = 0x1be0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1be0b8:
    // 0x1be0b8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1be0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1be0bc:
    // 0x1be0bc: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1be0bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1be0c0:
    // 0x1be0c0: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x1be0c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1be0c4:
    // 0x1be0c4: 0xe7a5002c  swc1        $f5, 0x2C($sp)
    ctx->pc = 0x1be0c4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1be0c8:
    // 0x1be0c8: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x1be0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1be0cc:
    // 0x1be0cc: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x1be0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1be0d0:
    // 0x1be0d0: 0xc6240008  lwc1        $f4, 0x8($s1)
    ctx->pc = 0x1be0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1be0d4:
    // 0x1be0d4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1be0d4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_1be0d8:
    // 0x1be0d8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1be0d8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_1be0dc:
    // 0x1be0dc: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1be0dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_1be0e0:
    // 0x1be0e0: 0x46010044  c1          0x10044
    ctx->pc = 0x1be0e0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_1be0e4:
    // 0x1be0e4: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x1be0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_1be0e8:
    // 0x1be0e8: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_1be0ec:
    if (ctx->pc == 0x1BE0ECu) {
        ctx->pc = 0x1BE0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE0E8u;
        // 0x1be0ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE0F0u;
        goto label_1be0f0;
    }
    ctx->pc = 0x1BE0E8u;
    {
        const bool branch_taken_0x1be0e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BE0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE0E8u;
        // 0x1be0ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be0e8) {
            ctx->pc = 0x1BE10Cu;
            goto label_1be10c;
        }
    }
    ctx->pc = 0x1BE0F0u;
label_1be0f0:
    // 0x1be0f0: 0xc6600350  lwc1        $f0, 0x350($s3)
    ctx->pc = 0x1be0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1be0f4:
    // 0x1be0f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1be0f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1be0f8:
    // 0x1be0f8: 0x0  nop
    ctx->pc = 0x1be0f8u;
    // NOP
label_1be0fc:
    // 0x1be0fc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1be100:
    if (ctx->pc == 0x1BE100u) {
        ctx->pc = 0x1BE100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE0FCu;
        // 0x1be100: 0x26640190  addiu       $a0, $s3, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE104u;
        goto label_1be104;
    }
    ctx->pc = 0x1BE0FCu;
    {
        const bool branch_taken_0x1be0fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BE100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE0FCu;
        // 0x1be100: 0x26640190  addiu       $a0, $s3, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be0fc) {
            ctx->pc = 0x1BE110u;
            goto label_1be110;
        }
    }
    ctx->pc = 0x1BE104u;
label_1be104:
    // 0x1be104: 0x1000000b  b           . + 4 + (0xB << 2)
label_1be108:
    if (ctx->pc == 0x1BE108u) {
        ctx->pc = 0x1BE108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE104u;
        // 0x1be108: 0xae620338  sw          $v0, 0x338($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 824), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE10Cu;
        goto label_1be10c;
    }
    ctx->pc = 0x1BE104u;
    {
        const bool branch_taken_0x1be104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE104u;
        // 0x1be108: 0xae620338  sw          $v0, 0x338($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 824), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be104) {
            ctx->pc = 0x1BE134u;
            goto label_1be134;
        }
    }
    ctx->pc = 0x1BE10Cu;
label_1be10c:
    // 0x1be10c: 0x26640190  addiu       $a0, $s3, 0x190
    ctx->pc = 0x1be10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 400));
label_1be110:
    // 0x1be110: 0xae620348  sw          $v0, 0x348($s3)
    ctx->pc = 0x1be110u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 840), GPR_U32(ctx, 2));
label_1be114:
    // 0x1be114: 0xc06fb58  jal         func_1BED60
label_1be118:
    if (ctx->pc == 0x1BE118u) {
        ctx->pc = 0x1BE118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE114u;
        // 0x1be118: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE11Cu;
        goto label_1be11c;
    }
    ctx->pc = 0x1BE114u;
    SET_GPR_U32(ctx, 31, 0x1BE11Cu);
    ctx->pc = 0x1BE118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE114u;
    // 0x1be118: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED60u, 0x1BE114u, 0x1BE11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE11Cu;
label_1be11c:
    // 0x1be11c: 0x266400f0  addiu       $a0, $s3, 0xF0
    ctx->pc = 0x1be11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
label_1be120:
    // 0x1be120: 0xc06fb58  jal         func_1BED60
label_1be124:
    if (ctx->pc == 0x1BE124u) {
        ctx->pc = 0x1BE124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE120u;
        // 0x1be124: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE128u;
        goto label_1be128;
    }
    ctx->pc = 0x1BE120u;
    SET_GPR_U32(ctx, 31, 0x1BE128u);
    ctx->pc = 0x1BE124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE120u;
    // 0x1be124: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED60u, 0x1BE120u, 0x1BE128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE128u;
label_1be128:
    // 0x1be128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1be12c:
    // 0x1be12c: 0xc06fb58  jal         func_1BED60
label_1be130:
    if (ctx->pc == 0x1BE130u) {
        ctx->pc = 0x1BE130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE12Cu;
        // 0x1be130: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE134u;
        goto label_1be134;
    }
    ctx->pc = 0x1BE12Cu;
    SET_GPR_U32(ctx, 31, 0x1BE134u);
    ctx->pc = 0x1BE130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE12Cu;
    // 0x1be130: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED60u, 0x1BE12Cu, 0x1BE134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE134u;
label_1be134:
    // 0x1be134: 0x8e650338  lw          $a1, 0x338($s3)
    ctx->pc = 0x1be134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 824)));
label_1be138:
    // 0x1be138: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
label_1be13c:
    if (ctx->pc == 0x1BE13Cu) {
        ctx->pc = 0x1BE13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE138u;
        // 0x1be13c: 0x26700310  addiu       $s0, $s3, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE140u;
        goto label_1be140;
    }
    ctx->pc = 0x1BE138u;
    {
        const bool branch_taken_0x1be138 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE138u;
        // 0x1be13c: 0x26700310  addiu       $s0, $s3, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be138) {
            ctx->pc = 0x1BE188u;
            goto label_1be188;
        }
    }
    ctx->pc = 0x1BE140u;
label_1be140:
    // 0x1be140: 0xc66100d0  lwc1        $f1, 0xD0($s3)
    ctx->pc = 0x1be140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1be144:
    // 0x1be144: 0x26660170  addiu       $a2, $s3, 0x170
    ctx->pc = 0x1be144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 368));
label_1be148:
    // 0x1be148: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1be148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1be14c:
    // 0x1be14c: 0xe6610170  swc1        $f1, 0x170($s3)
    ctx->pc = 0x1be14cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 368), bits); }
label_1be150:
    // 0x1be150: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x1be150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1be154:
    // 0x1be154: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x1be154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_1be158:
    // 0x1be158: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x1be158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1be15c:
    // 0x1be15c: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x1be15cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_1be160:
    // 0x1be160: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x1be160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_1be164:
    // 0x1be164: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x1be164u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
label_1be168:
    // 0x1be168: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x1be168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_1be16c:
    // 0x1be16c: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x1be16cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
label_1be170:
    // 0x1be170: 0x8e620394  lw          $v0, 0x394($s3)
    ctx->pc = 0x1be170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 916)));
label_1be174:
    // 0x1be174: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1be174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1be178:
    // 0x1be178: 0x60f809  jalr        $v1
label_1be17c:
    if (ctx->pc == 0x1BE17Cu) {
        ctx->pc = 0x1BE17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE178u;
        // 0x1be17c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE180u;
        goto label_1be180;
    }
    ctx->pc = 0x1BE178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BE180u);
        ctx->pc = 0x1BE17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE178u;
        // 0x1be17c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE178u, 0x1BE180u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BE180u;
label_1be180:
    // 0x1be180: 0x10000017  b           . + 4 + (0x17 << 2)
label_1be184:
    if (ctx->pc == 0x1BE184u) {
        ctx->pc = 0x1BE188u;
        goto label_1be188;
    }
    ctx->pc = 0x1BE180u;
    {
        const bool branch_taken_0x1be180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be180) {
            ctx->pc = 0x1BE1E0u;
            goto label_1be1e0;
        }
    }
    ctx->pc = 0x1BE188u;
label_1be188:
    // 0x1be188: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1be188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1be18c:
    // 0x1be18c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1be18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1be190:
    // 0x1be190: 0xc06f8f8  jal         func_1BE3E0
label_1be194:
    if (ctx->pc == 0x1BE194u) {
        ctx->pc = 0x1BE194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE190u;
        // 0x1be194: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE198u;
        goto label_1be198;
    }
    ctx->pc = 0x1BE190u;
    SET_GPR_U32(ctx, 31, 0x1BE198u);
    ctx->pc = 0x1BE194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE190u;
    // 0x1be194: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE3E0u, 0x1BE190u, 0x1BE198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE198u;
label_1be198:
    // 0x1be198: 0x266401c0  addiu       $a0, $s3, 0x1C0
    ctx->pc = 0x1be198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 448));
label_1be19c:
    // 0x1be19c: 0xc06fb44  jal         func_1BED10
label_1be1a0:
    if (ctx->pc == 0x1BE1A0u) {
        ctx->pc = 0x1BE1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE19Cu;
        // 0x1be1a0: 0x266501e0  addiu       $a1, $s3, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE1A4u;
        goto label_1be1a4;
    }
    ctx->pc = 0x1BE19Cu;
    SET_GPR_U32(ctx, 31, 0x1BE1A4u);
    ctx->pc = 0x1BE1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE19Cu;
    // 0x1be1a0: 0x266501e0  addiu       $a1, $s3, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED10u, 0x1BE19Cu, 0x1BE1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE1A4u;
label_1be1a4:
    // 0x1be1a4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1be1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1be1a8:
    // 0x1be1a8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1be1ac:
    if (ctx->pc == 0x1BE1ACu) {
        ctx->pc = 0x1BE1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE1A8u;
        // 0x1be1ac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE1B0u;
        goto label_1be1b0;
    }
    ctx->pc = 0x1BE1A8u;
    {
        const bool branch_taken_0x1be1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE1A8u;
        // 0x1be1ac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be1a8) {
            ctx->pc = 0x1BE1B4u;
            goto label_1be1b4;
        }
    }
    ctx->pc = 0x1BE1B0u;
label_1be1b0:
    // 0x1be1b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1be1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1be1b4:
    // 0x1be1b4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1be1b8:
    if (ctx->pc == 0x1BE1B8u) {
        ctx->pc = 0x1BE1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE1B4u;
        // 0x1be1b8: 0x26640130  addiu       $a0, $s3, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE1BCu;
        goto label_1be1bc;
    }
    ctx->pc = 0x1BE1B4u;
    {
        const bool branch_taken_0x1be1b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE1B4u;
        // 0x1be1b8: 0x26640130  addiu       $a0, $s3, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be1b4) {
            ctx->pc = 0x1BE1D8u;
            goto label_1be1d8;
        }
    }
    ctx->pc = 0x1BE1BCu;
label_1be1bc:
    // 0x1be1bc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1be1c0:
    if (ctx->pc == 0x1BE1C0u) {
        ctx->pc = 0x1BE1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE1BCu;
        // 0x1be1c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE1C4u;
        goto label_1be1c4;
    }
    ctx->pc = 0x1BE1BCu;
    {
        const bool branch_taken_0x1be1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE1BCu;
        // 0x1be1c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be1bc) {
            ctx->pc = 0x1BE1C8u;
            goto label_1be1c8;
        }
    }
    ctx->pc = 0x1BE1C4u;
label_1be1c4:
    // 0x1be1c4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1be1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1be1c8:
    // 0x1be1c8: 0xc06fb38  jal         func_1BECE0
label_1be1cc:
    if (ctx->pc == 0x1BE1CCu) {
        ctx->pc = 0x1BE1D0u;
        goto label_1be1d0;
    }
    ctx->pc = 0x1BE1C8u;
    SET_GPR_U32(ctx, 31, 0x1BE1D0u);
    ctx->pc = 0x1BECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BECE0u, 0x1BE1C8u, 0x1BE1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE1D0u;
label_1be1d0:
    // 0x1be1d0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1be1d4:
    if (ctx->pc == 0x1BE1D4u) {
        ctx->pc = 0x1BE1D8u;
        goto label_1be1d8;
    }
    ctx->pc = 0x1BE1D0u;
    {
        const bool branch_taken_0x1be1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be1d0) {
            ctx->pc = 0x1BE1E0u;
            goto label_1be1e0;
        }
    }
    ctx->pc = 0x1BE1D8u;
label_1be1d8:
    // 0x1be1d8: 0xc06fb58  jal         func_1BED60
label_1be1dc:
    if (ctx->pc == 0x1BE1DCu) {
        ctx->pc = 0x1BE1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE1D8u;
        // 0x1be1dc: 0x266500f0  addiu       $a1, $s3, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE1E0u;
        goto label_1be1e0;
    }
    ctx->pc = 0x1BE1D8u;
    SET_GPR_U32(ctx, 31, 0x1BE1E0u);
    ctx->pc = 0x1BE1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE1D8u;
    // 0x1be1dc: 0x266500f0  addiu       $a1, $s3, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED60u, 0x1BE1D8u, 0x1BE1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE1E0u;
label_1be1e0:
    // 0x1be1e0: 0xc06fc34  jal         func_1BF0D0
label_1be1e4:
    if (ctx->pc == 0x1BE1E4u) {
        ctx->pc = 0x1BE1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE1E0u;
        // 0x1be1e4: 0x26640210  addiu       $a0, $s3, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE1E8u;
        goto label_1be1e8;
    }
    ctx->pc = 0x1BE1E0u;
    SET_GPR_U32(ctx, 31, 0x1BE1E8u);
    ctx->pc = 0x1BE1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE1E0u;
    // 0x1be1e4: 0x26640210  addiu       $a0, $s3, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF0D0u, 0x1BE1E0u, 0x1BE1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE1E8u;
label_1be1e8:
    // 0x1be1e8: 0xc06fc34  jal         func_1BF0D0
label_1be1ec:
    if (ctx->pc == 0x1BE1ECu) {
        ctx->pc = 0x1BE1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE1E8u;
        // 0x1be1ec: 0x266402b0  addiu       $a0, $s3, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE1F0u;
        goto label_1be1f0;
    }
    ctx->pc = 0x1BE1E8u;
    SET_GPR_U32(ctx, 31, 0x1BE1F0u);
    ctx->pc = 0x1BE1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE1E8u;
    // 0x1be1ec: 0x266402b0  addiu       $a0, $s3, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF0D0u, 0x1BE1E8u, 0x1BE1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE1F0u;
label_1be1f0:
    // 0x1be1f0: 0xc06fc34  jal         func_1BF0D0
label_1be1f4:
    if (ctx->pc == 0x1BE1F4u) {
        ctx->pc = 0x1BE1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE1F0u;
        // 0x1be1f4: 0x26640260  addiu       $a0, $s3, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE1F8u;
        goto label_1be1f8;
    }
    ctx->pc = 0x1BE1F0u;
    SET_GPR_U32(ctx, 31, 0x1BE1F8u);
    ctx->pc = 0x1BE1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE1F0u;
    // 0x1be1f4: 0x26640260  addiu       $a0, $s3, 0x260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF0D0u, 0x1BE1F0u, 0x1BE1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE1F8u;
label_1be1f8:
    // 0x1be1f8: 0xc66100d0  lwc1        $f1, 0xD0($s3)
    ctx->pc = 0x1be1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1be1fc:
    // 0x1be1fc: 0x26640150  addiu       $a0, $s3, 0x150
    ctx->pc = 0x1be1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 336));
label_1be200:
    // 0x1be200: 0xe6610150  swc1        $f1, 0x150($s3)
    ctx->pc = 0x1be200u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 336), bits); }
label_1be204:
    // 0x1be204: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x1be204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1be208:
    // 0x1be208: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1be208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_1be20c:
    // 0x1be20c: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x1be20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1be210:
    // 0x1be210: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1be210u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1be214:
    // 0x1be214: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x1be214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_1be218:
    // 0x1be218: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1be218u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_1be21c:
    // 0x1be21c: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x1be21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_1be220:
    // 0x1be220: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1be220u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_1be224:
    // 0x1be224: 0x7e600300  sq          $zero, 0x300($s3)
    ctx->pc = 0x1be224u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 768), GPR_VEC(ctx, 0));
label_1be228:
    // 0x1be228: 0x8e620338  lw          $v0, 0x338($s3)
    ctx->pc = 0x1be228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 824)));
label_1be22c:
    // 0x1be22c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1be22cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1be230:
    // 0x1be230: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1be230u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1be234:
    // 0x1be234: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1be234u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1be238:
    // 0x1be238: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1be238u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1be23c:
    // 0x1be23c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1be23cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1be240:
    // 0x1be240: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x1be240u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_1be244:
    // 0x1be244: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1be244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1be248:
    // 0x1be248: 0x3e00008  jr          $ra
label_1be24c:
    if (ctx->pc == 0x1BE24Cu) {
        ctx->pc = 0x1BE24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE248u;
        // 0x1be24c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE250u;
        goto label_fallthrough_0x1be248;
    }
    ctx->pc = 0x1BE248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE248u;
        // 0x1be24c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1be248:
    ctx->pc = 0x1BE250u;
}
