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

// Function: sub_0010DE60
// Address: 0x10de60 - 0x10e138
void sub_0010DE60_0x10de60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010DE60_0x10de60");
#endif

    switch (ctx->pc) {
        case 0x10de60u: goto label_10de60;
        case 0x10de64u: goto label_10de64;
        case 0x10de68u: goto label_10de68;
        case 0x10de6cu: goto label_10de6c;
        case 0x10de70u: goto label_10de70;
        case 0x10de74u: goto label_10de74;
        case 0x10de78u: goto label_10de78;
        case 0x10de7cu: goto label_10de7c;
        case 0x10de80u: goto label_10de80;
        case 0x10de84u: goto label_10de84;
        case 0x10de88u: goto label_10de88;
        case 0x10de8cu: goto label_10de8c;
        case 0x10de90u: goto label_10de90;
        case 0x10de94u: goto label_10de94;
        case 0x10de98u: goto label_10de98;
        case 0x10de9cu: goto label_10de9c;
        case 0x10dea0u: goto label_10dea0;
        case 0x10dea4u: goto label_10dea4;
        case 0x10dea8u: goto label_10dea8;
        case 0x10deacu: goto label_10deac;
        case 0x10deb0u: goto label_10deb0;
        case 0x10deb4u: goto label_10deb4;
        case 0x10deb8u: goto label_10deb8;
        case 0x10debcu: goto label_10debc;
        case 0x10dec0u: goto label_10dec0;
        case 0x10dec4u: goto label_10dec4;
        case 0x10dec8u: goto label_10dec8;
        case 0x10deccu: goto label_10decc;
        case 0x10ded0u: goto label_10ded0;
        case 0x10ded4u: goto label_10ded4;
        case 0x10ded8u: goto label_10ded8;
        case 0x10dedcu: goto label_10dedc;
        case 0x10dee0u: goto label_10dee0;
        case 0x10dee4u: goto label_10dee4;
        case 0x10dee8u: goto label_10dee8;
        case 0x10deecu: goto label_10deec;
        case 0x10def0u: goto label_10def0;
        case 0x10def4u: goto label_10def4;
        case 0x10def8u: goto label_10def8;
        case 0x10defcu: goto label_10defc;
        case 0x10df00u: goto label_10df00;
        case 0x10df04u: goto label_10df04;
        case 0x10df08u: goto label_10df08;
        case 0x10df0cu: goto label_10df0c;
        case 0x10df10u: goto label_10df10;
        case 0x10df14u: goto label_10df14;
        case 0x10df18u: goto label_10df18;
        case 0x10df1cu: goto label_10df1c;
        case 0x10df20u: goto label_10df20;
        case 0x10df24u: goto label_10df24;
        case 0x10df28u: goto label_10df28;
        case 0x10df2cu: goto label_10df2c;
        case 0x10df30u: goto label_10df30;
        case 0x10df34u: goto label_10df34;
        case 0x10df38u: goto label_10df38;
        case 0x10df3cu: goto label_10df3c;
        case 0x10df40u: goto label_10df40;
        case 0x10df44u: goto label_10df44;
        case 0x10df48u: goto label_10df48;
        case 0x10df4cu: goto label_10df4c;
        case 0x10df50u: goto label_10df50;
        case 0x10df54u: goto label_10df54;
        case 0x10df58u: goto label_10df58;
        case 0x10df5cu: goto label_10df5c;
        case 0x10df60u: goto label_10df60;
        case 0x10df64u: goto label_10df64;
        case 0x10df68u: goto label_10df68;
        case 0x10df6cu: goto label_10df6c;
        case 0x10df70u: goto label_10df70;
        case 0x10df74u: goto label_10df74;
        case 0x10df78u: goto label_10df78;
        case 0x10df7cu: goto label_10df7c;
        case 0x10df80u: goto label_10df80;
        case 0x10df84u: goto label_10df84;
        case 0x10df88u: goto label_10df88;
        case 0x10df8cu: goto label_10df8c;
        case 0x10df90u: goto label_10df90;
        case 0x10df94u: goto label_10df94;
        case 0x10df98u: goto label_10df98;
        case 0x10df9cu: goto label_10df9c;
        case 0x10dfa0u: goto label_10dfa0;
        case 0x10dfa4u: goto label_10dfa4;
        case 0x10dfa8u: goto label_10dfa8;
        case 0x10dfacu: goto label_10dfac;
        case 0x10dfb0u: goto label_10dfb0;
        case 0x10dfb4u: goto label_10dfb4;
        case 0x10dfb8u: goto label_10dfb8;
        case 0x10dfbcu: goto label_10dfbc;
        case 0x10dfc0u: goto label_10dfc0;
        case 0x10dfc4u: goto label_10dfc4;
        case 0x10dfc8u: goto label_10dfc8;
        case 0x10dfccu: goto label_10dfcc;
        case 0x10dfd0u: goto label_10dfd0;
        case 0x10dfd4u: goto label_10dfd4;
        case 0x10dfd8u: goto label_10dfd8;
        case 0x10dfdcu: goto label_10dfdc;
        case 0x10dfe0u: goto label_10dfe0;
        case 0x10dfe4u: goto label_10dfe4;
        case 0x10dfe8u: goto label_10dfe8;
        case 0x10dfecu: goto label_10dfec;
        case 0x10dff0u: goto label_10dff0;
        case 0x10dff4u: goto label_10dff4;
        case 0x10dff8u: goto label_10dff8;
        case 0x10dffcu: goto label_10dffc;
        case 0x10e000u: goto label_10e000;
        case 0x10e004u: goto label_10e004;
        case 0x10e008u: goto label_10e008;
        case 0x10e00cu: goto label_10e00c;
        case 0x10e010u: goto label_10e010;
        case 0x10e014u: goto label_10e014;
        case 0x10e018u: goto label_10e018;
        case 0x10e01cu: goto label_10e01c;
        case 0x10e020u: goto label_10e020;
        case 0x10e024u: goto label_10e024;
        case 0x10e028u: goto label_10e028;
        case 0x10e02cu: goto label_10e02c;
        case 0x10e030u: goto label_10e030;
        case 0x10e034u: goto label_10e034;
        case 0x10e038u: goto label_10e038;
        case 0x10e03cu: goto label_10e03c;
        case 0x10e040u: goto label_10e040;
        case 0x10e044u: goto label_10e044;
        case 0x10e048u: goto label_10e048;
        case 0x10e04cu: goto label_10e04c;
        case 0x10e050u: goto label_10e050;
        case 0x10e054u: goto label_10e054;
        case 0x10e058u: goto label_10e058;
        case 0x10e05cu: goto label_10e05c;
        case 0x10e060u: goto label_10e060;
        case 0x10e064u: goto label_10e064;
        case 0x10e068u: goto label_10e068;
        case 0x10e06cu: goto label_10e06c;
        case 0x10e070u: goto label_10e070;
        case 0x10e074u: goto label_10e074;
        case 0x10e078u: goto label_10e078;
        case 0x10e07cu: goto label_10e07c;
        case 0x10e080u: goto label_10e080;
        case 0x10e084u: goto label_10e084;
        case 0x10e088u: goto label_10e088;
        case 0x10e08cu: goto label_10e08c;
        case 0x10e090u: goto label_10e090;
        case 0x10e094u: goto label_10e094;
        case 0x10e098u: goto label_10e098;
        case 0x10e09cu: goto label_10e09c;
        case 0x10e0a0u: goto label_10e0a0;
        case 0x10e0a4u: goto label_10e0a4;
        case 0x10e0a8u: goto label_10e0a8;
        case 0x10e0acu: goto label_10e0ac;
        case 0x10e0b0u: goto label_10e0b0;
        case 0x10e0b4u: goto label_10e0b4;
        case 0x10e0b8u: goto label_10e0b8;
        case 0x10e0bcu: goto label_10e0bc;
        case 0x10e0c0u: goto label_10e0c0;
        case 0x10e0c4u: goto label_10e0c4;
        case 0x10e0c8u: goto label_10e0c8;
        case 0x10e0ccu: goto label_10e0cc;
        case 0x10e0d0u: goto label_10e0d0;
        case 0x10e0d4u: goto label_10e0d4;
        case 0x10e0d8u: goto label_10e0d8;
        case 0x10e0dcu: goto label_10e0dc;
        case 0x10e0e0u: goto label_10e0e0;
        case 0x10e0e4u: goto label_10e0e4;
        case 0x10e0e8u: goto label_10e0e8;
        case 0x10e0ecu: goto label_10e0ec;
        case 0x10e0f0u: goto label_10e0f0;
        case 0x10e0f4u: goto label_10e0f4;
        case 0x10e0f8u: goto label_10e0f8;
        case 0x10e0fcu: goto label_10e0fc;
        case 0x10e100u: goto label_10e100;
        case 0x10e104u: goto label_10e104;
        case 0x10e108u: goto label_10e108;
        case 0x10e10cu: goto label_10e10c;
        case 0x10e110u: goto label_10e110;
        case 0x10e114u: goto label_10e114;
        case 0x10e118u: goto label_10e118;
        case 0x10e11cu: goto label_10e11c;
        case 0x10e120u: goto label_10e120;
        case 0x10e124u: goto label_10e124;
        case 0x10e128u: goto label_10e128;
        case 0x10e12cu: goto label_10e12c;
        case 0x10e130u: goto label_10e130;
        case 0x10e134u: goto label_10e134;
        default: break;
    }

    ctx->pc = 0x10de60u;

label_10de60:
    // 0x10de60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10de60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_10de64:
    // 0x10de64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10de64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_10de68:
    // 0x10de68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10de68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_10de6c:
    // 0x10de6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10de6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10de70:
    // 0x10de70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10de70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_10de74:
    // 0x10de74: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x10de74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_10de78:
    // 0x10de78: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_10de7c:
    if (ctx->pc == 0x10DE7Cu) {
        ctx->pc = 0x10DE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE78u;
        // 0x10de7c: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DE80u;
        goto label_10de80;
    }
    ctx->pc = 0x10DE78u;
    {
        const bool branch_taken_0x10de78 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x10DE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE78u;
        // 0x10de7c: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de78) {
            ctx->pc = 0x10DE88u;
            goto label_10de88;
        }
    }
    ctx->pc = 0x10DE80u;
label_10de80:
    // 0x10de80: 0x10000003  b           . + 4 + (0x3 << 2)
label_10de84:
    if (ctx->pc == 0x10DE84u) {
        ctx->pc = 0x10DE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE80u;
        // 0x10de84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DE88u;
        goto label_10de88;
    }
    ctx->pc = 0x10DE80u;
    {
        const bool branch_taken_0x10de80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE80u;
        // 0x10de84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de80) {
            ctx->pc = 0x10DE90u;
            goto label_10de90;
        }
    }
    ctx->pc = 0x10DE88u;
label_10de88:
    // 0x10de88: 0xc0478c8  jal         func_11E320
label_10de8c:
    if (ctx->pc == 0x10DE8Cu) {
        ctx->pc = 0x10DE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE88u;
        // 0x10de8c: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DE90u;
        goto label_10de90;
    }
    ctx->pc = 0x10DE88u;
    SET_GPR_U32(ctx, 31, 0x10DE90u);
    ctx->pc = 0x10DE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DE88u;
    // 0x10de8c: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E320u, 0x10DE88u, 0x10DE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DE90u;
label_10de90:
    // 0x10de90: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_10de94:
    if (ctx->pc == 0x10DE94u) {
        ctx->pc = 0x10DE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE90u;
        // 0x10de94: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DE98u;
        goto label_10de98;
    }
    ctx->pc = 0x10DE90u;
    {
        const bool branch_taken_0x10de90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE90u;
        // 0x10de94: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de90) {
            ctx->pc = 0x10DED8u;
            goto label_10ded8;
        }
    }
    ctx->pc = 0x10DE98u;
label_10de98:
    // 0x10de98: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x10de98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_10de9c:
    // 0x10de9c: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x10de9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
label_10dea0:
    // 0x10dea0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10dea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10dea4:
    // 0x10dea4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10dea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10dea8:
    // 0x10dea8: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x10dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
label_10deac:
    // 0x10deac: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_10deb0:
    if (ctx->pc == 0x10DEB0u) {
        ctx->pc = 0x10DEB4u;
        goto label_10deb4;
    }
    ctx->pc = 0x10DEACu;
    {
        const bool branch_taken_0x10deac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10deac) {
            ctx->pc = 0x10DED8u;
            goto label_10ded8;
        }
    }
    ctx->pc = 0x10DEB4u;
label_10deb4:
    // 0x10deb4: 0xdc421020  ld          $v0, 0x1020($v0)
    ctx->pc = 0x10deb4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4128)));
label_10deb8:
    // 0x10deb8: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x10deb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
label_10debc:
    // 0x10debc: 0x217ff  dsra32      $v0, $v0, 31
    ctx->pc = 0x10debcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 31));
label_10dec0:
    // 0x10dec0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x10dec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_10dec4:
    // 0x10dec4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10dec4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_10dec8:
    // 0x10dec8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_10decc:
    if (ctx->pc == 0x10DECCu) {
        ctx->pc = 0x10DECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DEC8u;
        // 0x10decc: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DED0u;
        goto label_10ded0;
    }
    ctx->pc = 0x10DEC8u;
    {
        const bool branch_taken_0x10dec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DEC8u;
        // 0x10decc: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dec8) {
            ctx->pc = 0x10DED8u;
            goto label_10ded8;
        }
    }
    ctx->pc = 0x10DED0u;
label_10ded0:
    // 0x10ded0: 0xc04990a  jal         func_126428
label_10ded4:
    if (ctx->pc == 0x10DED4u) {
        ctx->pc = 0x10DED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DED0u;
        // 0x10ded4: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DED8u;
        goto label_10ded8;
    }
    ctx->pc = 0x10DED0u;
    SET_GPR_U32(ctx, 31, 0x10DED8u);
    ctx->pc = 0x10DED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DED0u;
    // 0x10ded4: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126428u, 0x10DED0u, 0x10DED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DED8u;
label_10ded8:
    // 0x10ded8: 0xc0448c8  jal         func_112320
label_10dedc:
    if (ctx->pc == 0x10DEDCu) {
        ctx->pc = 0x10DEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DED8u;
        // 0x10dedc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DEE0u;
        goto label_10dee0;
    }
    ctx->pc = 0x10DED8u;
    SET_GPR_U32(ctx, 31, 0x10DEE0u);
    ctx->pc = 0x10DEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DED8u;
    // 0x10dedc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112320u, 0x10DED8u, 0x10DEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DEE0u;
label_10dee0:
    // 0x10dee0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x10dee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10dee4:
    // 0x10dee4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_10dee8:
    if (ctx->pc == 0x10DEE8u) {
        ctx->pc = 0x10DEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DEE4u;
        // 0x10dee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DEECu;
        goto label_10deec;
    }
    ctx->pc = 0x10DEE4u;
    {
        const bool branch_taken_0x10dee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10DEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DEE4u;
        // 0x10dee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dee4) {
            ctx->pc = 0x10DEF4u;
            goto label_10def4;
        }
    }
    ctx->pc = 0x10DEECu;
label_10deec:
    // 0x10deec: 0xc043c56  jal         func_10F158
label_10def0:
    if (ctx->pc == 0x10DEF0u) {
        ctx->pc = 0x10DEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DEECu;
        // 0x10def0: 0x24050045  addiu       $a1, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DEF4u;
        goto label_10def4;
    }
    ctx->pc = 0x10DEECu;
    SET_GPR_U32(ctx, 31, 0x10DEF4u);
    ctx->pc = 0x10DEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DEECu;
    // 0x10def0: 0x24050045  addiu       $a1, $zero, 0x45 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x10DEECu, 0x10DEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DEF4u;
label_10def4:
    // 0x10def4: 0xc044920  jal         func_112480
label_10def8:
    if (ctx->pc == 0x10DEF8u) {
        ctx->pc = 0x10DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DEF4u;
        // 0x10def8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DEFCu;
        goto label_10defc;
    }
    ctx->pc = 0x10DEF4u;
    SET_GPR_U32(ctx, 31, 0x10DEFCu);
    ctx->pc = 0x10DEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DEF4u;
    // 0x10def8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112480u, 0x10DEF4u, 0x10DEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DEFCu;
label_10defc:
    // 0x10defc: 0xc04481a  jal         func_112068
label_10df00:
    if (ctx->pc == 0x10DF00u) {
        ctx->pc = 0x10DF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DEFCu;
        // 0x10df00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DF04u;
        goto label_10df04;
    }
    ctx->pc = 0x10DEFCu;
    SET_GPR_U32(ctx, 31, 0x10DF04u);
    ctx->pc = 0x10DF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DEFCu;
    // 0x10df00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112068u, 0x10DEFCu, 0x10DF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DF04u;
label_10df04:
    // 0x10df04: 0x8e0200ec  lw          $v0, 0xEC($s0)
    ctx->pc = 0x10df04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_10df08:
    // 0x10df08: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_10df0c:
    if (ctx->pc == 0x10DF0Cu) {
        ctx->pc = 0x10DF10u;
        goto label_10df10;
    }
    ctx->pc = 0x10DF08u;
    {
        const bool branch_taken_0x10df08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10df08) {
            ctx->pc = 0x10DF28u;
            goto label_10df28;
        }
    }
    ctx->pc = 0x10DF10u;
label_10df10:
    // 0x10df10: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x10df10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10df14:
    // 0x10df14: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_10df18:
    if (ctx->pc == 0x10DF18u) {
        ctx->pc = 0x10DF1Cu;
        goto label_10df1c;
    }
    ctx->pc = 0x10DF14u;
    {
        const bool branch_taken_0x10df14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10df14) {
            ctx->pc = 0x10DF28u;
            goto label_10df28;
        }
    }
    ctx->pc = 0x10DF1Cu;
label_10df1c:
    // 0x10df1c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x10df1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10df20:
    // 0x10df20: 0x50400080  beql        $v0, $zero, . + 4 + (0x80 << 2)
label_10df24:
    if (ctx->pc == 0x10DF24u) {
        ctx->pc = 0x10DF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF20u;
        // 0x10df24: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DF28u;
        goto label_10df28;
    }
    ctx->pc = 0x10DF20u;
    {
        const bool branch_taken_0x10df20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10df20) {
            ctx->pc = 0x10DF24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10DF20u;
            // 0x10df24: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E124u;
            goto label_10e124;
        }
    }
    ctx->pc = 0x10DF28u;
label_10df28:
    // 0x10df28: 0xc04490c  jal         func_112430
label_10df2c:
    if (ctx->pc == 0x10DF2Cu) {
        ctx->pc = 0x10DF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF28u;
        // 0x10df2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DF30u;
        goto label_10df30;
    }
    ctx->pc = 0x10DF28u;
    SET_GPR_U32(ctx, 31, 0x10DF30u);
    ctx->pc = 0x10DF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DF28u;
    // 0x10df2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112430u, 0x10DF28u, 0x10DF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DF30u;
label_10df30:
    // 0x10df30: 0xc044d4a  jal         func_113528
label_10df34:
    if (ctx->pc == 0x10DF34u) {
        ctx->pc = 0x10DF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF30u;
        // 0x10df34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DF38u;
        goto label_10df38;
    }
    ctx->pc = 0x10DF30u;
    SET_GPR_U32(ctx, 31, 0x10DF38u);
    ctx->pc = 0x10DF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DF30u;
    // 0x10df34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113528u, 0x10DF30u, 0x10DF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DF38u;
label_10df38:
    // 0x10df38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10df38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10df3c:
    // 0x10df3c: 0xc044d54  jal         func_113550
label_10df40:
    if (ctx->pc == 0x10DF40u) {
        ctx->pc = 0x10DF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF3Cu;
        // 0x10df40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DF44u;
        goto label_10df44;
    }
    ctx->pc = 0x10DF3Cu;
    SET_GPR_U32(ctx, 31, 0x10DF44u);
    ctx->pc = 0x10DF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DF3Cu;
    // 0x10df40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113550u, 0x10DF3Cu, 0x10DF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DF44u;
label_10df44:
    // 0x10df44: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x10df44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_10df48:
    // 0x10df48: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_10df4c:
    if (ctx->pc == 0x10DF4Cu) {
        ctx->pc = 0x10DF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF48u;
        // 0x10df4c: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DF50u;
        goto label_10df50;
    }
    ctx->pc = 0x10DF48u;
    {
        const bool branch_taken_0x10df48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10df48) {
            ctx->pc = 0x10DF4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10DF48u;
            // 0x10df4c: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10DF80u;
            goto label_10df80;
        }
    }
    ctx->pc = 0x10DF50u;
label_10df50:
    // 0x10df50: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x10df50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_10df54:
    // 0x10df54: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_10df58:
    if (ctx->pc == 0x10DF58u) {
        ctx->pc = 0x10DF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF54u;
        // 0x10df58: 0x8e02023c  lw          $v0, 0x23C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DF5Cu;
        goto label_10df5c;
    }
    ctx->pc = 0x10DF54u;
    {
        const bool branch_taken_0x10df54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10df54) {
            ctx->pc = 0x10DF58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10DF54u;
            // 0x10df58: 0x8e02023c  lw          $v0, 0x23C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10DF68u;
            goto label_10df68;
        }
    }
    ctx->pc = 0x10DF5Cu;
label_10df5c:
    // 0x10df5c: 0xc04ca34  jal         func_1328D0
label_10df60:
    if (ctx->pc == 0x10DF60u) {
        ctx->pc = 0x10DF64u;
        goto label_10df64;
    }
    ctx->pc = 0x10DF5Cu;
    SET_GPR_U32(ctx, 31, 0x10DF64u);
    ctx->pc = 0x1328D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328D0u, 0x10DF5Cu, 0x10DF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DF64u;
label_10df64:
    // 0x10df64: 0x8e02023c  lw          $v0, 0x23C($s0)
    ctx->pc = 0x10df64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
label_10df68:
    // 0x10df68: 0x5440006e  bnel        $v0, $zero, . + 4 + (0x6E << 2)
label_10df6c:
    if (ctx->pc == 0x10DF6Cu) {
        ctx->pc = 0x10DF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF68u;
        // 0x10df6c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DF70u;
        goto label_10df70;
    }
    ctx->pc = 0x10DF68u;
    {
        const bool branch_taken_0x10df68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10df68) {
            ctx->pc = 0x10DF6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10DF68u;
            // 0x10df6c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E124u;
            goto label_10e124;
        }
    }
    ctx->pc = 0x10DF70u;
label_10df70:
    // 0x10df70: 0xc0447ee  jal         func_111FB8
label_10df74:
    if (ctx->pc == 0x10DF74u) {
        ctx->pc = 0x10DF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF70u;
        // 0x10df74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DF78u;
        goto label_10df78;
    }
    ctx->pc = 0x10DF70u;
    SET_GPR_U32(ctx, 31, 0x10DF78u);
    ctx->pc = 0x10DF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DF70u;
    // 0x10df74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111FB8u, 0x10DF70u, 0x10DF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DF78u;
label_10df78:
    // 0x10df78: 0x1000006a  b           . + 4 + (0x6A << 2)
label_10df7c:
    if (ctx->pc == 0x10DF7Cu) {
        ctx->pc = 0x10DF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF78u;
        // 0x10df7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DF80u;
        goto label_10df80;
    }
    ctx->pc = 0x10DF78u;
    {
        const bool branch_taken_0x10df78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF78u;
        // 0x10df7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10df78) {
            ctx->pc = 0x10E124u;
            goto label_10e124;
        }
    }
    ctx->pc = 0x10DF80u;
label_10df80:
    // 0x10df80: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_10df84:
    if (ctx->pc == 0x10DF84u) {
        ctx->pc = 0x10DF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF80u;
        // 0x10df84: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DF88u;
        goto label_10df88;
    }
    ctx->pc = 0x10DF80u;
    {
        const bool branch_taken_0x10df80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF80u;
        // 0x10df84: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10df80) {
            ctx->pc = 0x10DFCCu;
            goto label_10dfcc;
        }
    }
    ctx->pc = 0x10DF88u;
label_10df88:
    // 0x10df88: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x10df88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_10df8c:
    // 0x10df8c: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x10df8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
label_10df90:
    // 0x10df90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10df90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10df94:
    // 0x10df94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10df94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10df98:
    // 0x10df98: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x10df98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
label_10df9c:
    // 0x10df9c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_10dfa0:
    if (ctx->pc == 0x10DFA0u) {
        ctx->pc = 0x10DFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF9Cu;
        // 0x10dfa0: 0x8c4200c0  lw          $v0, 0xC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DFA4u;
        goto label_10dfa4;
    }
    ctx->pc = 0x10DF9Cu;
    {
        const bool branch_taken_0x10df9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10df9c) {
            ctx->pc = 0x10DFA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10DF9Cu;
            // 0x10dfa0: 0x8c4200c0  lw          $v0, 0xC0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10DFACu;
            goto label_10dfac;
        }
    }
    ctx->pc = 0x10DFA4u;
label_10dfa4:
    // 0x10dfa4: 0x10000003  b           . + 4 + (0x3 << 2)
label_10dfa8:
    if (ctx->pc == 0x10DFA8u) {
        ctx->pc = 0x10DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DFA4u;
        // 0x10dfa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DFACu;
        goto label_10dfac;
    }
    ctx->pc = 0x10DFA4u;
    {
        const bool branch_taken_0x10dfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DFA4u;
        // 0x10dfa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dfa4) {
            ctx->pc = 0x10DFB4u;
            goto label_10dfb4;
        }
    }
    ctx->pc = 0x10DFACu;
label_10dfac:
    // 0x10dfac: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x10dfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_10dfb0:
    // 0x10dfb0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10dfb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10dfb4:
    // 0x10dfb4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_10dfb8:
    if (ctx->pc == 0x10DFB8u) {
        ctx->pc = 0x10DFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DFB4u;
        // 0x10dfb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DFBCu;
        goto label_10dfbc;
    }
    ctx->pc = 0x10DFB4u;
    {
        const bool branch_taken_0x10dfb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DFB4u;
        // 0x10dfb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dfb4) {
            ctx->pc = 0x10DFCCu;
            goto label_10dfcc;
        }
    }
    ctx->pc = 0x10DFBCu;
label_10dfbc:
    // 0x10dfbc: 0xc043c56  jal         func_10F158
label_10dfc0:
    if (ctx->pc == 0x10DFC0u) {
        ctx->pc = 0x10DFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DFBCu;
        // 0x10dfc0: 0x24050045  addiu       $a1, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DFC4u;
        goto label_10dfc4;
    }
    ctx->pc = 0x10DFBCu;
    SET_GPR_U32(ctx, 31, 0x10DFC4u);
    ctx->pc = 0x10DFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DFBCu;
    // 0x10dfc0: 0x24050045  addiu       $a1, $zero, 0x45 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x10DFBCu, 0x10DFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DFC4u;
label_10dfc4:
    // 0x10dfc4: 0x10000057  b           . + 4 + (0x57 << 2)
label_10dfc8:
    if (ctx->pc == 0x10DFC8u) {
        ctx->pc = 0x10DFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DFC4u;
        // 0x10dfc8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DFCCu;
        goto label_10dfcc;
    }
    ctx->pc = 0x10DFC4u;
    {
        const bool branch_taken_0x10dfc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DFC4u;
        // 0x10dfc8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dfc4) {
            ctx->pc = 0x10E124u;
            goto label_10e124;
        }
    }
    ctx->pc = 0x10DFCCu;
label_10dfcc:
    // 0x10dfcc: 0xc0443da  jal         func_110F68
label_10dfd0:
    if (ctx->pc == 0x10DFD0u) {
        ctx->pc = 0x10DFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DFCCu;
        // 0x10dfd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DFD4u;
        goto label_10dfd4;
    }
    ctx->pc = 0x10DFCCu;
    SET_GPR_U32(ctx, 31, 0x10DFD4u);
    ctx->pc = 0x10DFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DFCCu;
    // 0x10dfd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F68u, 0x10DFCCu, 0x10DFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DFD4u;
label_10dfd4:
    // 0x10dfd4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_10dfd8:
    if (ctx->pc == 0x10DFD8u) {
        ctx->pc = 0x10DFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DFD4u;
        // 0x10dfd8: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DFDCu;
        goto label_10dfdc;
    }
    ctx->pc = 0x10DFD4u;
    {
        const bool branch_taken_0x10dfd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10DFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DFD4u;
        // 0x10dfd8: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dfd4) {
            ctx->pc = 0x10E000u;
            goto label_10e000;
        }
    }
    ctx->pc = 0x10DFDCu;
label_10dfdc:
    // 0x10dfdc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x10dfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_10dfe0:
    // 0x10dfe0: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x10dfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
label_10dfe4:
    // 0x10dfe4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10dfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10dfe8:
    // 0x10dfe8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10dfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10dfec:
    // 0x10dfec: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x10dfecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
label_10dff0:
    // 0x10dff0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_10dff4:
    if (ctx->pc == 0x10DFF4u) {
        ctx->pc = 0x10DFF8u;
        goto label_10dff8;
    }
    ctx->pc = 0x10DFF0u;
    {
        const bool branch_taken_0x10dff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10dff0) {
            ctx->pc = 0x10E000u;
            goto label_10e000;
        }
    }
    ctx->pc = 0x10DFF8u;
label_10dff8:
    // 0x10dff8: 0xc0619b2  jal         func_1866C8
label_10dffc:
    if (ctx->pc == 0x10DFFCu) {
        ctx->pc = 0x10DFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DFF8u;
        // 0x10dffc: 0x8c440ff4  lw          $a0, 0xFF4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4084)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E000u;
        goto label_10e000;
    }
    ctx->pc = 0x10DFF8u;
    SET_GPR_U32(ctx, 31, 0x10E000u);
    ctx->pc = 0x10DFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DFF8u;
    // 0x10dffc: 0x8c440ff4  lw          $a0, 0xFF4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4084)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1866C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1866C8u, 0x10DFF8u, 0x10E000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E000u;
label_10e000:
    // 0x10e000: 0xc04470e  jal         func_111C38
label_10e004:
    if (ctx->pc == 0x10E004u) {
        ctx->pc = 0x10E004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E000u;
        // 0x10e004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E008u;
        goto label_10e008;
    }
    ctx->pc = 0x10E000u;
    SET_GPR_U32(ctx, 31, 0x10E008u);
    ctx->pc = 0x10E004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E000u;
    // 0x10e004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111C38u, 0x10E000u, 0x10E008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E008u;
label_10e008:
    // 0x10e008: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x10e008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_10e00c:
    // 0x10e00c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_10e010:
    if (ctx->pc == 0x10E010u) {
        ctx->pc = 0x10E010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E00Cu;
        // 0x10e010: 0x8e0201ec  lw          $v0, 0x1EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E014u;
        goto label_10e014;
    }
    ctx->pc = 0x10E00Cu;
    {
        const bool branch_taken_0x10e00c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e00c) {
            ctx->pc = 0x10E010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E00Cu;
            // 0x10e010: 0x8e0201ec  lw          $v0, 0x1EC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E028u;
            goto label_10e028;
        }
    }
    ctx->pc = 0x10E014u;
label_10e014:
    // 0x10e014: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x10e014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10e018:
    // 0x10e018: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x10e018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_10e01c:
    // 0x10e01c: 0x40f809  jalr        $v0
label_10e020:
    if (ctx->pc == 0x10E020u) {
        ctx->pc = 0x10E020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E01Cu;
        // 0x10e020: 0x8e0500d0  lw          $a1, 0xD0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E024u;
        goto label_10e024;
    }
    ctx->pc = 0x10E01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10E024u);
        ctx->pc = 0x10E020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E01Cu;
        // 0x10e020: 0x8e0500d0  lw          $a1, 0xD0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E01Cu, 0x10E024u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E024u;
label_10e024:
    // 0x10e024: 0x8e0201ec  lw          $v0, 0x1EC($s0)
    ctx->pc = 0x10e024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
label_10e028:
    // 0x10e028: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_10e02c:
    if (ctx->pc == 0x10E02Cu) {
        ctx->pc = 0x10E02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E028u;
        // 0x10e02c: 0x8e0200e0  lw          $v0, 0xE0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E030u;
        goto label_10e030;
    }
    ctx->pc = 0x10E028u;
    {
        const bool branch_taken_0x10e028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e028) {
            ctx->pc = 0x10E02Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E028u;
            // 0x10e02c: 0x8e0200e0  lw          $v0, 0xE0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E080u;
            goto label_10e080;
        }
    }
    ctx->pc = 0x10E030u;
label_10e030:
    // 0x10e030: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x10e030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_10e034:
    // 0x10e034: 0x50800012  beql        $a0, $zero, . + 4 + (0x12 << 2)
label_10e038:
    if (ctx->pc == 0x10E038u) {
        ctx->pc = 0x10E038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E034u;
        // 0x10e038: 0x8e0200e0  lw          $v0, 0xE0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E03Cu;
        goto label_10e03c;
    }
    ctx->pc = 0x10E034u;
    {
        const bool branch_taken_0x10e034 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e034) {
            ctx->pc = 0x10E038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E034u;
            // 0x10e038: 0x8e0200e0  lw          $v0, 0xE0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E080u;
            goto label_10e080;
        }
    }
    ctx->pc = 0x10E03Cu;
label_10e03c:
    // 0x10e03c: 0x8e0602a0  lw          $a2, 0x2A0($s0)
    ctx->pc = 0x10e03cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 672)));
label_10e040:
    // 0x10e040: 0x8e0500e0  lw          $a1, 0xE0($s0)
    ctx->pc = 0x10e040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_10e044:
    // 0x10e044: 0xc05fc1a  jal         func_17F068
label_10e048:
    if (ctx->pc == 0x10E048u) {
        ctx->pc = 0x10E048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E044u;
        // 0x10e048: 0x6302b  sltu        $a2, $zero, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E04Cu;
        goto label_10e04c;
    }
    ctx->pc = 0x10E044u;
    SET_GPR_U32(ctx, 31, 0x10E04Cu);
    ctx->pc = 0x10E048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E044u;
    // 0x10e048: 0x6302b  sltu        $a2, $zero, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F068u, 0x10E044u, 0x10E04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E04Cu;
label_10e04c:
    // 0x10e04c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10e04cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10e050:
    // 0x10e050: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_10e054:
    if (ctx->pc == 0x10E054u) {
        ctx->pc = 0x10E054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E050u;
        // 0x10e054: 0xae0002a0  sw          $zero, 0x2A0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E058u;
        goto label_10e058;
    }
    ctx->pc = 0x10E050u;
    {
        const bool branch_taken_0x10e050 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E050u;
        // 0x10e054: 0xae0002a0  sw          $zero, 0x2A0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e050) {
            ctx->pc = 0x10E07Cu;
            goto label_10e07c;
        }
    }
    ctx->pc = 0x10E058u;
label_10e058:
    // 0x10e058: 0xc0443da  jal         func_110F68
label_10e05c:
    if (ctx->pc == 0x10E05Cu) {
        ctx->pc = 0x10E05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E058u;
        // 0x10e05c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E060u;
        goto label_10e060;
    }
    ctx->pc = 0x10E058u;
    SET_GPR_U32(ctx, 31, 0x10E060u);
    ctx->pc = 0x10E05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E058u;
    // 0x10e05c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F68u, 0x10E058u, 0x10E060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E060u;
label_10e060:
    // 0x10e060: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_10e064:
    if (ctx->pc == 0x10E064u) {
        ctx->pc = 0x10E064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E060u;
        // 0x10e064: 0x8e0200e0  lw          $v0, 0xE0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E068u;
        goto label_10e068;
    }
    ctx->pc = 0x10E060u;
    {
        const bool branch_taken_0x10e060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e060) {
            ctx->pc = 0x10E064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E060u;
            // 0x10e064: 0x8e0200e0  lw          $v0, 0xE0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E080u;
            goto label_10e080;
        }
    }
    ctx->pc = 0x10E068u;
label_10e068:
    // 0x10e068: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x10e068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_10e06c:
    // 0x10e06c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_10e070:
    if (ctx->pc == 0x10E070u) {
        ctx->pc = 0x10E070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E06Cu;
        // 0x10e070: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E074u;
        goto label_10e074;
    }
    ctx->pc = 0x10E06Cu;
    {
        const bool branch_taken_0x10e06c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E06Cu;
        // 0x10e070: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e06c) {
            ctx->pc = 0x10E07Cu;
            goto label_10e07c;
        }
    }
    ctx->pc = 0x10E074u;
label_10e074:
    // 0x10e074: 0xae1100c4  sw          $s1, 0xC4($s0)
    ctx->pc = 0x10e074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 17));
label_10e078:
    // 0x10e078: 0xae0200bc  sw          $v0, 0xBC($s0)
    ctx->pc = 0x10e078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
label_10e07c:
    // 0x10e07c: 0x8e0200e0  lw          $v0, 0xE0($s0)
    ctx->pc = 0x10e07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_10e080:
    // 0x10e080: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_10e084:
    if (ctx->pc == 0x10E084u) {
        ctx->pc = 0x10E084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E080u;
        // 0x10e084: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E088u;
        goto label_10e088;
    }
    ctx->pc = 0x10E080u;
    {
        const bool branch_taken_0x10e080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e080) {
            ctx->pc = 0x10E084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E080u;
            // 0x10e084: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E094u;
            goto label_10e094;
        }
    }
    ctx->pc = 0x10E088u;
label_10e088:
    // 0x10e088: 0xc0445ce  jal         func_111738
label_10e08c:
    if (ctx->pc == 0x10E08Cu) {
        ctx->pc = 0x10E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E088u;
        // 0x10e08c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E090u;
        goto label_10e090;
    }
    ctx->pc = 0x10E088u;
    SET_GPR_U32(ctx, 31, 0x10E090u);
    ctx->pc = 0x10E08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E088u;
    // 0x10e08c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111738u, 0x10E088u, 0x10E090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E090u;
label_10e090:
    // 0x10e090: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x10e090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_10e094:
    // 0x10e094: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_10e098:
    if (ctx->pc == 0x10E098u) {
        ctx->pc = 0x10E098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E094u;
        // 0x10e098: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E09Cu;
        goto label_10e09c;
    }
    ctx->pc = 0x10E094u;
    {
        const bool branch_taken_0x10e094 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e094) {
            ctx->pc = 0x10E098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E094u;
            // 0x10e098: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E0A8u;
            goto label_10e0a8;
        }
    }
    ctx->pc = 0x10E09Cu;
label_10e09c:
    // 0x10e09c: 0xc05dd02  jal         func_177408
label_10e0a0:
    if (ctx->pc == 0x10E0A0u) {
        ctx->pc = 0x10E0A4u;
        goto label_10e0a4;
    }
    ctx->pc = 0x10E09Cu;
    SET_GPR_U32(ctx, 31, 0x10E0A4u);
    ctx->pc = 0x177408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177408u, 0x10E09Cu, 0x10E0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E0A4u;
label_10e0a4:
    // 0x10e0a4: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x10e0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_10e0a8:
    // 0x10e0a8: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_10e0ac:
    if (ctx->pc == 0x10E0ACu) {
        ctx->pc = 0x10E0B0u;
        goto label_10e0b0;
    }
    ctx->pc = 0x10E0A8u;
    {
        const bool branch_taken_0x10e0a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e0a8) {
            ctx->pc = 0x10E0F0u;
            goto label_10e0f0;
        }
    }
    ctx->pc = 0x10E0B0u;
label_10e0b0:
    // 0x10e0b0: 0xc04ca34  jal         func_1328D0
label_10e0b4:
    if (ctx->pc == 0x10E0B4u) {
        ctx->pc = 0x10E0B8u;
        goto label_10e0b8;
    }
    ctx->pc = 0x10E0B0u;
    SET_GPR_U32(ctx, 31, 0x10E0B8u);
    ctx->pc = 0x1328D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328D0u, 0x10E0B0u, 0x10E0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E0B8u;
label_10e0b8:
    // 0x10e0b8: 0x8e020258  lw          $v0, 0x258($s0)
    ctx->pc = 0x10e0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
label_10e0bc:
    // 0x10e0bc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_10e0c0:
    if (ctx->pc == 0x10E0C0u) {
        ctx->pc = 0x10E0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E0BCu;
        // 0x10e0c0: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E0C4u;
        goto label_10e0c4;
    }
    ctx->pc = 0x10E0BCu;
    {
        const bool branch_taken_0x10e0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E0BCu;
        // 0x10e0c0: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e0bc) {
            ctx->pc = 0x10E0F0u;
            goto label_10e0f0;
        }
    }
    ctx->pc = 0x10E0C4u;
label_10e0c4:
    // 0x10e0c4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x10e0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_10e0c8:
    // 0x10e0c8: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x10e0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
label_10e0cc:
    // 0x10e0cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10e0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10e0d0:
    // 0x10e0d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10e0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10e0d4:
    // 0x10e0d4: 0x8c440108  lw          $a0, 0x108($v0)
    ctx->pc = 0x10e0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
label_10e0d8:
    // 0x10e0d8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_10e0dc:
    if (ctx->pc == 0x10E0DCu) {
        ctx->pc = 0x10E0E0u;
        goto label_10e0e0;
    }
    ctx->pc = 0x10E0D8u;
    {
        const bool branch_taken_0x10e0d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e0d8) {
            ctx->pc = 0x10E0F0u;
            goto label_10e0f0;
        }
    }
    ctx->pc = 0x10E0E0u;
label_10e0e0:
    // 0x10e0e0: 0xc095280  jal         func_254A00
label_10e0e4:
    if (ctx->pc == 0x10E0E4u) {
        ctx->pc = 0x10E0E8u;
        goto label_10e0e8;
    }
    ctx->pc = 0x10E0E0u;
    SET_GPR_U32(ctx, 31, 0x10E0E8u);
    ctx->pc = 0x254A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254A00u, 0x10E0E0u, 0x10E0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E0E8u;
label_10e0e8:
    // 0x10e0e8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_10e0ec:
    if (ctx->pc == 0x10E0ECu) {
        ctx->pc = 0x10E0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E0E8u;
        // 0x10e0ec: 0xae000258  sw          $zero, 0x258($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E0F0u;
        goto label_10e0f0;
    }
    ctx->pc = 0x10E0E8u;
    {
        const bool branch_taken_0x10e0e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e0e8) {
            ctx->pc = 0x10E0ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E0E8u;
            // 0x10e0ec: 0xae000258  sw          $zero, 0x258($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E0F0u;
            goto label_10e0f0;
        }
    }
    ctx->pc = 0x10E0F0u;
label_10e0f0:
    // 0x10e0f0: 0xc044a94  jal         func_112A50
label_10e0f4:
    if (ctx->pc == 0x10E0F4u) {
        ctx->pc = 0x10E0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E0F0u;
        // 0x10e0f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E0F8u;
        goto label_10e0f8;
    }
    ctx->pc = 0x10E0F0u;
    SET_GPR_U32(ctx, 31, 0x10E0F8u);
    ctx->pc = 0x10E0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E0F0u;
    // 0x10e0f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112A50u, 0x10E0F0u, 0x10E0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E0F8u;
label_10e0f8:
    // 0x10e0f8: 0xc044b94  jal         func_112E50
label_10e0fc:
    if (ctx->pc == 0x10E0FCu) {
        ctx->pc = 0x10E0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E0F8u;
        // 0x10e0fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E100u;
        goto label_10e100;
    }
    ctx->pc = 0x10E0F8u;
    SET_GPR_U32(ctx, 31, 0x10E100u);
    ctx->pc = 0x10E0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E0F8u;
    // 0x10e0fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112E50u, 0x10E0F8u, 0x10E100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E100u;
label_10e100:
    // 0x10e100: 0xc045202  jal         func_114808
label_10e104:
    if (ctx->pc == 0x10E104u) {
        ctx->pc = 0x10E104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E100u;
        // 0x10e104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E108u;
        goto label_10e108;
    }
    ctx->pc = 0x10E100u;
    SET_GPR_U32(ctx, 31, 0x10E108u);
    ctx->pc = 0x10E104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E100u;
    // 0x10e104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114808u, 0x10E100u, 0x10E108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E108u;
label_10e108:
    // 0x10e108: 0xc04476a  jal         func_111DA8
label_10e10c:
    if (ctx->pc == 0x10E10Cu) {
        ctx->pc = 0x10E10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E108u;
        // 0x10e10c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E110u;
        goto label_10e110;
    }
    ctx->pc = 0x10E108u;
    SET_GPR_U32(ctx, 31, 0x10E110u);
    ctx->pc = 0x10E10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E108u;
    // 0x10e10c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111DA8u, 0x10E108u, 0x10E110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E110u;
label_10e110:
    // 0x10e110: 0xc0447c4  jal         func_111F10
label_10e114:
    if (ctx->pc == 0x10E114u) {
        ctx->pc = 0x10E114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E110u;
        // 0x10e114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E118u;
        goto label_10e118;
    }
    ctx->pc = 0x10E110u;
    SET_GPR_U32(ctx, 31, 0x10E118u);
    ctx->pc = 0x10E114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E110u;
    // 0x10e114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F10u, 0x10E110u, 0x10E118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E118u;
label_10e118:
    // 0x10e118: 0xc0452c6  jal         func_114B18
label_10e11c:
    if (ctx->pc == 0x10E11Cu) {
        ctx->pc = 0x10E11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E118u;
        // 0x10e11c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E120u;
        goto label_10e120;
    }
    ctx->pc = 0x10E118u;
    SET_GPR_U32(ctx, 31, 0x10E120u);
    ctx->pc = 0x10E11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E118u;
    // 0x10e11c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114B18u, 0x10E118u, 0x10E120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E120u;
label_10e120:
    // 0x10e120: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10e120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10e124:
    // 0x10e124: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10e124u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_10e128:
    // 0x10e128: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10e128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10e12c:
    // 0x10e12c: 0x3e00008  jr          $ra
label_10e130:
    if (ctx->pc == 0x10E130u) {
        ctx->pc = 0x10E130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E12Cu;
        // 0x10e130: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E134u;
        goto label_10e134;
    }
    ctx->pc = 0x10E12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E12Cu;
        // 0x10e130: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E134u;
label_10e134:
    // 0x10e134: 0x0  nop
    ctx->pc = 0x10e134u;
    // NOP
    ctx->pc = 0x10e138u;
}
