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

// Function: sub_002BDE70
// Address: 0x2bde70 - 0x2be078
void sub_002BDE70_0x2bde70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BDE70_0x2bde70");
#endif

    switch (ctx->pc) {
        case 0x2bde70u: goto label_2bde70;
        case 0x2bde74u: goto label_2bde74;
        case 0x2bde78u: goto label_2bde78;
        case 0x2bde7cu: goto label_2bde7c;
        case 0x2bde80u: goto label_2bde80;
        case 0x2bde84u: goto label_2bde84;
        case 0x2bde88u: goto label_2bde88;
        case 0x2bde8cu: goto label_2bde8c;
        case 0x2bde90u: goto label_2bde90;
        case 0x2bde94u: goto label_2bde94;
        case 0x2bde98u: goto label_2bde98;
        case 0x2bde9cu: goto label_2bde9c;
        case 0x2bdea0u: goto label_2bdea0;
        case 0x2bdea4u: goto label_2bdea4;
        case 0x2bdea8u: goto label_2bdea8;
        case 0x2bdeacu: goto label_2bdeac;
        case 0x2bdeb0u: goto label_2bdeb0;
        case 0x2bdeb4u: goto label_2bdeb4;
        case 0x2bdeb8u: goto label_2bdeb8;
        case 0x2bdebcu: goto label_2bdebc;
        case 0x2bdec0u: goto label_2bdec0;
        case 0x2bdec4u: goto label_2bdec4;
        case 0x2bdec8u: goto label_2bdec8;
        case 0x2bdeccu: goto label_2bdecc;
        case 0x2bded0u: goto label_2bded0;
        case 0x2bded4u: goto label_2bded4;
        case 0x2bded8u: goto label_2bded8;
        case 0x2bdedcu: goto label_2bdedc;
        case 0x2bdee0u: goto label_2bdee0;
        case 0x2bdee4u: goto label_2bdee4;
        case 0x2bdee8u: goto label_2bdee8;
        case 0x2bdeecu: goto label_2bdeec;
        case 0x2bdef0u: goto label_2bdef0;
        case 0x2bdef4u: goto label_2bdef4;
        case 0x2bdef8u: goto label_2bdef8;
        case 0x2bdefcu: goto label_2bdefc;
        case 0x2bdf00u: goto label_2bdf00;
        case 0x2bdf04u: goto label_2bdf04;
        case 0x2bdf08u: goto label_2bdf08;
        case 0x2bdf0cu: goto label_2bdf0c;
        case 0x2bdf10u: goto label_2bdf10;
        case 0x2bdf14u: goto label_2bdf14;
        case 0x2bdf18u: goto label_2bdf18;
        case 0x2bdf1cu: goto label_2bdf1c;
        case 0x2bdf20u: goto label_2bdf20;
        case 0x2bdf24u: goto label_2bdf24;
        case 0x2bdf28u: goto label_2bdf28;
        case 0x2bdf2cu: goto label_2bdf2c;
        case 0x2bdf30u: goto label_2bdf30;
        case 0x2bdf34u: goto label_2bdf34;
        case 0x2bdf38u: goto label_2bdf38;
        case 0x2bdf3cu: goto label_2bdf3c;
        case 0x2bdf40u: goto label_2bdf40;
        case 0x2bdf44u: goto label_2bdf44;
        case 0x2bdf48u: goto label_2bdf48;
        case 0x2bdf4cu: goto label_2bdf4c;
        case 0x2bdf50u: goto label_2bdf50;
        case 0x2bdf54u: goto label_2bdf54;
        case 0x2bdf58u: goto label_2bdf58;
        case 0x2bdf5cu: goto label_2bdf5c;
        case 0x2bdf60u: goto label_2bdf60;
        case 0x2bdf64u: goto label_2bdf64;
        case 0x2bdf68u: goto label_2bdf68;
        case 0x2bdf6cu: goto label_2bdf6c;
        case 0x2bdf70u: goto label_2bdf70;
        case 0x2bdf74u: goto label_2bdf74;
        case 0x2bdf78u: goto label_2bdf78;
        case 0x2bdf7cu: goto label_2bdf7c;
        case 0x2bdf80u: goto label_2bdf80;
        case 0x2bdf84u: goto label_2bdf84;
        case 0x2bdf88u: goto label_2bdf88;
        case 0x2bdf8cu: goto label_2bdf8c;
        case 0x2bdf90u: goto label_2bdf90;
        case 0x2bdf94u: goto label_2bdf94;
        case 0x2bdf98u: goto label_2bdf98;
        case 0x2bdf9cu: goto label_2bdf9c;
        case 0x2bdfa0u: goto label_2bdfa0;
        case 0x2bdfa4u: goto label_2bdfa4;
        case 0x2bdfa8u: goto label_2bdfa8;
        case 0x2bdfacu: goto label_2bdfac;
        case 0x2bdfb0u: goto label_2bdfb0;
        case 0x2bdfb4u: goto label_2bdfb4;
        case 0x2bdfb8u: goto label_2bdfb8;
        case 0x2bdfbcu: goto label_2bdfbc;
        case 0x2bdfc0u: goto label_2bdfc0;
        case 0x2bdfc4u: goto label_2bdfc4;
        case 0x2bdfc8u: goto label_2bdfc8;
        case 0x2bdfccu: goto label_2bdfcc;
        case 0x2bdfd0u: goto label_2bdfd0;
        case 0x2bdfd4u: goto label_2bdfd4;
        case 0x2bdfd8u: goto label_2bdfd8;
        case 0x2bdfdcu: goto label_2bdfdc;
        case 0x2bdfe0u: goto label_2bdfe0;
        case 0x2bdfe4u: goto label_2bdfe4;
        case 0x2bdfe8u: goto label_2bdfe8;
        case 0x2bdfecu: goto label_2bdfec;
        case 0x2bdff0u: goto label_2bdff0;
        case 0x2bdff4u: goto label_2bdff4;
        case 0x2bdff8u: goto label_2bdff8;
        case 0x2bdffcu: goto label_2bdffc;
        case 0x2be000u: goto label_2be000;
        case 0x2be004u: goto label_2be004;
        case 0x2be008u: goto label_2be008;
        case 0x2be00cu: goto label_2be00c;
        case 0x2be010u: goto label_2be010;
        case 0x2be014u: goto label_2be014;
        case 0x2be018u: goto label_2be018;
        case 0x2be01cu: goto label_2be01c;
        case 0x2be020u: goto label_2be020;
        case 0x2be024u: goto label_2be024;
        case 0x2be028u: goto label_2be028;
        case 0x2be02cu: goto label_2be02c;
        case 0x2be030u: goto label_2be030;
        case 0x2be034u: goto label_2be034;
        case 0x2be038u: goto label_2be038;
        case 0x2be03cu: goto label_2be03c;
        case 0x2be040u: goto label_2be040;
        case 0x2be044u: goto label_2be044;
        case 0x2be048u: goto label_2be048;
        case 0x2be04cu: goto label_2be04c;
        case 0x2be050u: goto label_2be050;
        case 0x2be054u: goto label_2be054;
        case 0x2be058u: goto label_2be058;
        case 0x2be05cu: goto label_2be05c;
        case 0x2be060u: goto label_2be060;
        case 0x2be064u: goto label_2be064;
        case 0x2be068u: goto label_2be068;
        case 0x2be06cu: goto label_2be06c;
        case 0x2be070u: goto label_2be070;
        case 0x2be074u: goto label_2be074;
        default: break;
    }

    ctx->pc = 0x2bde70u;

label_2bde70:
    // 0x2bde70: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2bde70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2bde74:
    // 0x2bde74: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2bde74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2bde78:
    // 0x2bde78: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x2bde78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
label_2bde7c:
    // 0x2bde7c: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x2bde7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
label_2bde80:
    // 0x2bde80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bde80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bde84:
    // 0x2bde84: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2bde84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bde88:
    // 0x2bde88: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x2bde88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
label_2bde8c:
    // 0x2bde8c: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x2bde8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_2bde90:
    // 0x2bde90: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2bde90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2bde94:
    // 0x2bde94: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x2bde94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
label_2bde98:
    // 0x2bde98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bde98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bde9c:
    // 0x2bde9c: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x2bde9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
label_2bdea0:
    // 0x2bdea0: 0x3c160047  lui         $s6, 0x47
    ctx->pc = 0x2bdea0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)71 << 16));
label_2bdea4:
    // 0x2bdea4: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2bdea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_2bdea8:
    // 0x2bdea8: 0x3c170047  lui         $s7, 0x47
    ctx->pc = 0x2bdea8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)71 << 16));
label_2bdeac:
    // 0x2bdeac: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x2bdeacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
label_2bdeb0:
    // 0x2bdeb0: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x2bdeb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
label_2bdeb4:
    // 0x2bdeb4: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x2bdeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
label_2bdeb8:
    // 0x2bdeb8: 0xc0b11aa  jal         func_2C46A8
label_2bdebc:
    if (ctx->pc == 0x2BDEBCu) {
        ctx->pc = 0x2BDEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDEB8u;
        // 0x2bdebc: 0x3c1e0047  lui         $fp, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDEC0u;
        goto label_2bdec0;
    }
    ctx->pc = 0x2BDEB8u;
    SET_GPR_U32(ctx, 31, 0x2BDEC0u);
    ctx->pc = 0x2BDEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDEB8u;
    // 0x2bdebc: 0x3c1e0047  lui         $fp, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)71 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46A8u, 0x2BDEB8u, 0x2BDEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDEC0u;
label_2bdec0:
    // 0x2bdec0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bdec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bdec4:
    // 0x2bdec4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bdec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bdec8:
    // 0x2bdec8: 0xc0b11aa  jal         func_2C46A8
label_2bdecc:
    if (ctx->pc == 0x2BDECCu) {
        ctx->pc = 0x2BDECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDEC8u;
        // 0x2bdecc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDED0u;
        goto label_2bded0;
    }
    ctx->pc = 0x2BDEC8u;
    SET_GPR_U32(ctx, 31, 0x2BDED0u);
    ctx->pc = 0x2BDECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDEC8u;
    // 0x2bdecc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46A8u, 0x2BDEC8u, 0x2BDED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDED0u;
label_2bded0:
    // 0x2bded0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bded0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bded4:
    // 0x2bded4: 0x10a00022  beqz        $a1, . + 4 + (0x22 << 2)
label_2bded8:
    if (ctx->pc == 0x2BDED8u) {
        ctx->pc = 0x2BDED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDED4u;
        // 0x2bded8: 0x27b40010  addiu       $s4, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDEDCu;
        goto label_2bdedc;
    }
    ctx->pc = 0x2BDED4u;
    {
        const bool branch_taken_0x2bded4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDED4u;
        // 0x2bded8: 0x27b40010  addiu       $s4, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bded4) {
            ctx->pc = 0x2BDF60u;
            goto label_2bdf60;
        }
    }
    ctx->pc = 0x2BDEDCu;
label_2bdedc:
    // 0x2bdedc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2bdedcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_2bdee0:
    // 0x2bdee0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2bdee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bdee4:
    // 0x2bdee4: 0xc0f9328  jal         func_3E4CA0
label_2bdee8:
    if (ctx->pc == 0x2BDEE8u) {
        ctx->pc = 0x2BDEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDEE4u;
        // 0x2bdee8: 0x248451d4  addiu       $a0, $a0, 0x51D4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20948));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDEECu;
        goto label_2bdeec;
    }
    ctx->pc = 0x2BDEE4u;
    SET_GPR_U32(ctx, 31, 0x2BDEECu);
    ctx->pc = 0x2BDEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDEE4u;
    // 0x2bdee8: 0x248451d4  addiu       $a0, $a0, 0x51D4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20948));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E4CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E4CA0u, 0x2BDEE4u, 0x2BDEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDEECu;
label_2bdeec:
    // 0x2bdeec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2bdeecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bdef0:
    // 0x2bdef0: 0x1860001b  blez        $v1, . + 4 + (0x1B << 2)
label_2bdef4:
    if (ctx->pc == 0x2BDEF4u) {
        ctx->pc = 0x2BDEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDEF0u;
        // 0x2bdef4: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDEF8u;
        goto label_2bdef8;
    }
    ctx->pc = 0x2BDEF0u;
    {
        const bool branch_taken_0x2bdef0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2BDEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDEF0u;
        // 0x2bdef4: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdef0) {
            ctx->pc = 0x2BDF60u;
            goto label_2bdf60;
        }
    }
    ctx->pc = 0x2BDEF8u;
label_2bdef8:
    // 0x2bdef8: 0x3c130100  lui         $s3, 0x100
    ctx->pc = 0x2bdef8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)256 << 16));
label_2bdefc:
    // 0x2bdefc: 0x3c150100  lui         $s5, 0x100
    ctx->pc = 0x2bdefcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)256 << 16));
label_2bdf00:
    // 0x2bdf00: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bdf00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2bdf04:
    // 0x2bdf04: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2bdf04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2bdf08:
    // 0x2bdf08: 0xc0b11aa  jal         func_2C46A8
label_2bdf0c:
    if (ctx->pc == 0x2BDF0Cu) {
        ctx->pc = 0x2BDF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF08u;
        // 0x2bdf0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDF10u;
        goto label_2bdf10;
    }
    ctx->pc = 0x2BDF08u;
    SET_GPR_U32(ctx, 31, 0x2BDF10u);
    ctx->pc = 0x2BDF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDF08u;
    // 0x2bdf0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46A8u, 0x2BDF08u, 0x2BDF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDF10u;
label_2bdf10:
    // 0x2bdf10: 0x87a50000  lh          $a1, 0x0($sp)
    ctx->pc = 0x2bdf10u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_2bdf14:
    // 0x2bdf14: 0xc0af81e  jal         func_2BE078
label_2bdf18:
    if (ctx->pc == 0x2BDF18u) {
        ctx->pc = 0x2BDF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF14u;
        // 0x2bdf18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDF1Cu;
        goto label_2bdf1c;
    }
    ctx->pc = 0x2BDF14u;
    SET_GPR_U32(ctx, 31, 0x2BDF1Cu);
    ctx->pc = 0x2BDF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDF14u;
    // 0x2bdf18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE078u, 0x2BDF14u, 0x2BDF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDF1Cu;
label_2bdf1c:
    // 0x2bdf1c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2bdf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2bdf20:
    // 0x2bdf20: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x2bdf20u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2bdf24:
    // 0x2bdf24: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2bdf24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2bdf28:
    // 0x2bdf28: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2bdf28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2bdf2c:
    // 0x2bdf2c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2bdf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2bdf30:
    // 0x2bdf30: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2bdf30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2bdf34:
    // 0x2bdf34: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2bdf34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2bdf38:
    // 0x2bdf38: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2bdf38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2bdf3c:
    // 0x2bdf3c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2bdf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2bdf40:
    // 0x2bdf40: 0x40f809  jalr        $v0
label_2bdf44:
    if (ctx->pc == 0x2BDF44u) {
        ctx->pc = 0x2BDF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF40u;
        // 0x2bdf44: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDF48u;
        goto label_2bdf48;
    }
    ctx->pc = 0x2BDF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BDF48u);
        ctx->pc = 0x2BDF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF40u;
        // 0x2bdf44: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDF40u, 0x2BDF48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BDF48u;
label_2bdf48:
    // 0x2bdf48: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x2bdf48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2bdf4c:
    // 0x2bdf4c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2bdf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bdf50:
    // 0x2bdf50: 0x38603  sra         $s0, $v1, 24
    ctx->pc = 0x2bdf50u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 24));
label_2bdf54:
    // 0x2bdf54: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2bdf54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2bdf58:
    // 0x2bdf58: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_2bdf5c:
    if (ctx->pc == 0x2BDF5Cu) {
        ctx->pc = 0x2BDF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF58u;
        // 0x2bdf5c: 0x2759821  addu        $s3, $s3, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDF60u;
        goto label_2bdf60;
    }
    ctx->pc = 0x2BDF58u;
    {
        const bool branch_taken_0x2bdf58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BDF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF58u;
        // 0x2bdf5c: 0x2759821  addu        $s3, $s3, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdf58) {
            ctx->pc = 0x2BDF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bdf00;
        }
    }
    ctx->pc = 0x2BDF60u;
label_2bdf60:
    // 0x2bdf60: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2bdf60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bdf64:
    // 0x2bdf64: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2bdf64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bdf68:
    // 0x2bdf68: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2bdf68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2bdf6c:
    // 0x2bdf6c: 0x26c701e0  addiu       $a3, $s6, 0x1E0
    ctx->pc = 0x2bdf6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 480));
label_2bdf70:
    // 0x2bdf70: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x2bdf70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2bdf74:
    // 0x2bdf74: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x2bdf74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2bdf78:
    // 0x2bdf78: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x2bdf78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2bdf7c:
    // 0x2bdf7c: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x2bdf7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2bdf80:
    // 0x2bdf80: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x2bdf80u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2bdf84:
    // 0x2bdf84: 0x908021  addu        $s0, $a0, $s0
    ctx->pc = 0x2bdf84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_2bdf88:
    // 0x2bdf88: 0x6ba80027  ldl         $t0, 0x27($sp)
    ctx->pc = 0x2bdf88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_2bdf8c:
    // 0x2bdf8c: 0x6fa80020  ldr         $t0, 0x20($sp)
    ctx->pc = 0x2bdf8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_2bdf90:
    // 0x2bdf90: 0xb3a80037  sdl         $t0, 0x37($sp)
    ctx->pc = 0x2bdf90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2bdf94:
    // 0x2bdf94: 0xb7a80030  sdr         $t0, 0x30($sp)
    ctx->pc = 0x2bdf94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2bdf98:
    // 0x2bdf98: 0x6ba70037  ldl         $a3, 0x37($sp)
    ctx->pc = 0x2bdf98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_2bdf9c:
    // 0x2bdf9c: 0x6fa70030  ldr         $a3, 0x30($sp)
    ctx->pc = 0x2bdf9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_2bdfa0:
    // 0x2bdfa0: 0xb3a7001b  sdl         $a3, 0x1B($sp)
    ctx->pc = 0x2bdfa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2bdfa4:
    // 0x2bdfa4: 0xb7a70014  sdr         $a3, 0x14($sp)
    ctx->pc = 0x2bdfa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2bdfa8:
    // 0x2bdfa8: 0xc0f9374  jal         func_3E4DD0
label_2bdfac:
    if (ctx->pc == 0x2BDFACu) {
        ctx->pc = 0x2BDFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDFA8u;
        // 0x2bdfac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDFB0u;
        goto label_2bdfb0;
    }
    ctx->pc = 0x2BDFA8u;
    SET_GPR_U32(ctx, 31, 0x2BDFB0u);
    ctx->pc = 0x2BDFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDFA8u;
    // 0x2bdfac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E4DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E4DD0u, 0x2BDFA8u, 0x2BDFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDFB0u;
label_2bdfb0:
    // 0x2bdfb0: 0x26e701e8  addiu       $a3, $s7, 0x1E8
    ctx->pc = 0x2bdfb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 488));
label_2bdfb4:
    // 0x2bdfb4: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x2bdfb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_2bdfb8:
    // 0x2bdfb8: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x2bdfb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_2bdfbc:
    // 0x2bdfbc: 0xb3a40047  sdl         $a0, 0x47($sp)
    ctx->pc = 0x2bdfbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2bdfc0:
    // 0x2bdfc0: 0xb7a40040  sdr         $a0, 0x40($sp)
    ctx->pc = 0x2bdfc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2bdfc4:
    // 0x2bdfc4: 0x6ba80047  ldl         $t0, 0x47($sp)
    ctx->pc = 0x2bdfc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_2bdfc8:
    // 0x2bdfc8: 0x6fa80040  ldr         $t0, 0x40($sp)
    ctx->pc = 0x2bdfc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_2bdfcc:
    // 0x2bdfcc: 0xb3a80057  sdl         $t0, 0x57($sp)
    ctx->pc = 0x2bdfccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2bdfd0:
    // 0x2bdfd0: 0xb7a80050  sdr         $t0, 0x50($sp)
    ctx->pc = 0x2bdfd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2bdfd4:
    // 0x2bdfd4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2bdfd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bdfd8:
    // 0x2bdfd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bdfd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bdfdc:
    // 0x2bdfdc: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2bdfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_2bdfe0:
    // 0x2bdfe0: 0x6ba70057  ldl         $a3, 0x57($sp)
    ctx->pc = 0x2bdfe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_2bdfe4:
    // 0x2bdfe4: 0x6fa70050  ldr         $a3, 0x50($sp)
    ctx->pc = 0x2bdfe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_2bdfe8:
    // 0x2bdfe8: 0xb3a7001b  sdl         $a3, 0x1B($sp)
    ctx->pc = 0x2bdfe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2bdfec:
    // 0x2bdfec: 0xb7a70014  sdr         $a3, 0x14($sp)
    ctx->pc = 0x2bdfecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2bdff0:
    // 0x2bdff0: 0xc0f9374  jal         func_3E4DD0
label_2bdff4:
    if (ctx->pc == 0x2BDFF4u) {
        ctx->pc = 0x2BDFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDFF0u;
        // 0x2bdff4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDFF8u;
        goto label_2bdff8;
    }
    ctx->pc = 0x2BDFF0u;
    SET_GPR_U32(ctx, 31, 0x2BDFF8u);
    ctx->pc = 0x2BDFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDFF0u;
    // 0x2bdff4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E4DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E4DD0u, 0x2BDFF0u, 0x2BDFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDFF8u;
label_2bdff8:
    // 0x2bdff8: 0x27c701f0  addiu       $a3, $fp, 0x1F0
    ctx->pc = 0x2bdff8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 496));
label_2bdffc:
    // 0x2bdffc: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x2bdffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_2be000:
    // 0x2be000: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x2be000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_2be004:
    // 0x2be004: 0xb3a40027  sdl         $a0, 0x27($sp)
    ctx->pc = 0x2be004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2be008:
    // 0x2be008: 0xb7a40020  sdr         $a0, 0x20($sp)
    ctx->pc = 0x2be008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2be00c:
    // 0x2be00c: 0x6ba80027  ldl         $t0, 0x27($sp)
    ctx->pc = 0x2be00cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_2be010:
    // 0x2be010: 0x6fa80020  ldr         $t0, 0x20($sp)
    ctx->pc = 0x2be010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_2be014:
    // 0x2be014: 0xb3a80037  sdl         $t0, 0x37($sp)
    ctx->pc = 0x2be014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2be018:
    // 0x2be018: 0xb7a80030  sdr         $t0, 0x30($sp)
    ctx->pc = 0x2be018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2be01c:
    // 0x2be01c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2be01cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2be020:
    // 0x2be020: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2be020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2be024:
    // 0x2be024: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2be024u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_2be028:
    // 0x2be028: 0x6ba70037  ldl         $a3, 0x37($sp)
    ctx->pc = 0x2be028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_2be02c:
    // 0x2be02c: 0x6fa70030  ldr         $a3, 0x30($sp)
    ctx->pc = 0x2be02cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_2be030:
    // 0x2be030: 0xb3a7001b  sdl         $a3, 0x1B($sp)
    ctx->pc = 0x2be030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2be034:
    // 0x2be034: 0xb7a70014  sdr         $a3, 0x14($sp)
    ctx->pc = 0x2be034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2be038:
    // 0x2be038: 0xc0f9374  jal         func_3E4DD0
label_2be03c:
    if (ctx->pc == 0x2BE03Cu) {
        ctx->pc = 0x2BE03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE038u;
        // 0x2be03c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE040u;
        goto label_2be040;
    }
    ctx->pc = 0x2BE038u;
    SET_GPR_U32(ctx, 31, 0x2BE040u);
    ctx->pc = 0x2BE03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE038u;
    // 0x2be03c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E4DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E4DD0u, 0x2BE038u, 0x2BE040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE040u;
label_2be040:
    // 0x2be040: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2be040u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_2be044:
    // 0x2be044: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2be044u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2be048:
    // 0x2be048: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x2be048u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_2be04c:
    // 0x2be04c: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x2be04cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2be050:
    // 0x2be050: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x2be050u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_2be054:
    // 0x2be054: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x2be054u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2be058:
    // 0x2be058: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x2be058u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_2be05c:
    // 0x2be05c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x2be05cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2be060:
    // 0x2be060: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x2be060u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_2be064:
    // 0x2be064: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x2be064u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2be068:
    // 0x2be068: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x2be068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_2be06c:
    // 0x2be06c: 0x3e00008  jr          $ra
label_2be070:
    if (ctx->pc == 0x2BE070u) {
        ctx->pc = 0x2BE070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE06Cu;
        // 0x2be070: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE074u;
        goto label_2be074;
    }
    ctx->pc = 0x2BE06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE06Cu;
        // 0x2be070: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE06Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE074u;
label_2be074:
    // 0x2be074: 0x0  nop
    ctx->pc = 0x2be074u;
    // NOP
    ctx->pc = 0x2be078u;
}
