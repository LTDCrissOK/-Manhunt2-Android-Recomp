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

// Function: sub_002FEAC8
// Address: 0x2feac8 - 0x2feef0
void sub_002FEAC8_0x2feac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FEAC8_0x2feac8");
#endif

    switch (ctx->pc) {
        case 0x2feac8u: goto label_2feac8;
        case 0x2feaccu: goto label_2feacc;
        case 0x2fead0u: goto label_2fead0;
        case 0x2fead4u: goto label_2fead4;
        case 0x2fead8u: goto label_2fead8;
        case 0x2feadcu: goto label_2feadc;
        case 0x2feae0u: goto label_2feae0;
        case 0x2feae4u: goto label_2feae4;
        case 0x2feae8u: goto label_2feae8;
        case 0x2feaecu: goto label_2feaec;
        case 0x2feaf0u: goto label_2feaf0;
        case 0x2feaf4u: goto label_2feaf4;
        case 0x2feaf8u: goto label_2feaf8;
        case 0x2feafcu: goto label_2feafc;
        case 0x2feb00u: goto label_2feb00;
        case 0x2feb04u: goto label_2feb04;
        case 0x2feb08u: goto label_2feb08;
        case 0x2feb0cu: goto label_2feb0c;
        case 0x2feb10u: goto label_2feb10;
        case 0x2feb14u: goto label_2feb14;
        case 0x2feb18u: goto label_2feb18;
        case 0x2feb1cu: goto label_2feb1c;
        case 0x2feb20u: goto label_2feb20;
        case 0x2feb24u: goto label_2feb24;
        case 0x2feb28u: goto label_2feb28;
        case 0x2feb2cu: goto label_2feb2c;
        case 0x2feb30u: goto label_2feb30;
        case 0x2feb34u: goto label_2feb34;
        case 0x2feb38u: goto label_2feb38;
        case 0x2feb3cu: goto label_2feb3c;
        case 0x2feb40u: goto label_2feb40;
        case 0x2feb44u: goto label_2feb44;
        case 0x2feb48u: goto label_2feb48;
        case 0x2feb4cu: goto label_2feb4c;
        case 0x2feb50u: goto label_2feb50;
        case 0x2feb54u: goto label_2feb54;
        case 0x2feb58u: goto label_2feb58;
        case 0x2feb5cu: goto label_2feb5c;
        case 0x2feb60u: goto label_2feb60;
        case 0x2feb64u: goto label_2feb64;
        case 0x2feb68u: goto label_2feb68;
        case 0x2feb6cu: goto label_2feb6c;
        case 0x2feb70u: goto label_2feb70;
        case 0x2feb74u: goto label_2feb74;
        case 0x2feb78u: goto label_2feb78;
        case 0x2feb7cu: goto label_2feb7c;
        case 0x2feb80u: goto label_2feb80;
        case 0x2feb84u: goto label_2feb84;
        case 0x2feb88u: goto label_2feb88;
        case 0x2feb8cu: goto label_2feb8c;
        case 0x2feb90u: goto label_2feb90;
        case 0x2feb94u: goto label_2feb94;
        case 0x2feb98u: goto label_2feb98;
        case 0x2feb9cu: goto label_2feb9c;
        case 0x2feba0u: goto label_2feba0;
        case 0x2feba4u: goto label_2feba4;
        case 0x2feba8u: goto label_2feba8;
        case 0x2febacu: goto label_2febac;
        case 0x2febb0u: goto label_2febb0;
        case 0x2febb4u: goto label_2febb4;
        case 0x2febb8u: goto label_2febb8;
        case 0x2febbcu: goto label_2febbc;
        case 0x2febc0u: goto label_2febc0;
        case 0x2febc4u: goto label_2febc4;
        case 0x2febc8u: goto label_2febc8;
        case 0x2febccu: goto label_2febcc;
        case 0x2febd0u: goto label_2febd0;
        case 0x2febd4u: goto label_2febd4;
        case 0x2febd8u: goto label_2febd8;
        case 0x2febdcu: goto label_2febdc;
        case 0x2febe0u: goto label_2febe0;
        case 0x2febe4u: goto label_2febe4;
        case 0x2febe8u: goto label_2febe8;
        case 0x2febecu: goto label_2febec;
        case 0x2febf0u: goto label_2febf0;
        case 0x2febf4u: goto label_2febf4;
        case 0x2febf8u: goto label_2febf8;
        case 0x2febfcu: goto label_2febfc;
        case 0x2fec00u: goto label_2fec00;
        case 0x2fec04u: goto label_2fec04;
        case 0x2fec08u: goto label_2fec08;
        case 0x2fec0cu: goto label_2fec0c;
        case 0x2fec10u: goto label_2fec10;
        case 0x2fec14u: goto label_2fec14;
        case 0x2fec18u: goto label_2fec18;
        case 0x2fec1cu: goto label_2fec1c;
        case 0x2fec20u: goto label_2fec20;
        case 0x2fec24u: goto label_2fec24;
        case 0x2fec28u: goto label_2fec28;
        case 0x2fec2cu: goto label_2fec2c;
        case 0x2fec30u: goto label_2fec30;
        case 0x2fec34u: goto label_2fec34;
        case 0x2fec38u: goto label_2fec38;
        case 0x2fec3cu: goto label_2fec3c;
        case 0x2fec40u: goto label_2fec40;
        case 0x2fec44u: goto label_2fec44;
        case 0x2fec48u: goto label_2fec48;
        case 0x2fec4cu: goto label_2fec4c;
        case 0x2fec50u: goto label_2fec50;
        case 0x2fec54u: goto label_2fec54;
        case 0x2fec58u: goto label_2fec58;
        case 0x2fec5cu: goto label_2fec5c;
        case 0x2fec60u: goto label_2fec60;
        case 0x2fec64u: goto label_2fec64;
        case 0x2fec68u: goto label_2fec68;
        case 0x2fec6cu: goto label_2fec6c;
        case 0x2fec70u: goto label_2fec70;
        case 0x2fec74u: goto label_2fec74;
        case 0x2fec78u: goto label_2fec78;
        case 0x2fec7cu: goto label_2fec7c;
        case 0x2fec80u: goto label_2fec80;
        case 0x2fec84u: goto label_2fec84;
        case 0x2fec88u: goto label_2fec88;
        case 0x2fec8cu: goto label_2fec8c;
        case 0x2fec90u: goto label_2fec90;
        case 0x2fec94u: goto label_2fec94;
        case 0x2fec98u: goto label_2fec98;
        case 0x2fec9cu: goto label_2fec9c;
        case 0x2feca0u: goto label_2feca0;
        case 0x2feca4u: goto label_2feca4;
        case 0x2feca8u: goto label_2feca8;
        case 0x2fecacu: goto label_2fecac;
        case 0x2fecb0u: goto label_2fecb0;
        case 0x2fecb4u: goto label_2fecb4;
        case 0x2fecb8u: goto label_2fecb8;
        case 0x2fecbcu: goto label_2fecbc;
        case 0x2fecc0u: goto label_2fecc0;
        case 0x2fecc4u: goto label_2fecc4;
        case 0x2fecc8u: goto label_2fecc8;
        case 0x2fecccu: goto label_2feccc;
        case 0x2fecd0u: goto label_2fecd0;
        case 0x2fecd4u: goto label_2fecd4;
        case 0x2fecd8u: goto label_2fecd8;
        case 0x2fecdcu: goto label_2fecdc;
        case 0x2fece0u: goto label_2fece0;
        case 0x2fece4u: goto label_2fece4;
        case 0x2fece8u: goto label_2fece8;
        case 0x2fececu: goto label_2fecec;
        case 0x2fecf0u: goto label_2fecf0;
        case 0x2fecf4u: goto label_2fecf4;
        case 0x2fecf8u: goto label_2fecf8;
        case 0x2fecfcu: goto label_2fecfc;
        case 0x2fed00u: goto label_2fed00;
        case 0x2fed04u: goto label_2fed04;
        case 0x2fed08u: goto label_2fed08;
        case 0x2fed0cu: goto label_2fed0c;
        case 0x2fed10u: goto label_2fed10;
        case 0x2fed14u: goto label_2fed14;
        case 0x2fed18u: goto label_2fed18;
        case 0x2fed1cu: goto label_2fed1c;
        case 0x2fed20u: goto label_2fed20;
        case 0x2fed24u: goto label_2fed24;
        case 0x2fed28u: goto label_2fed28;
        case 0x2fed2cu: goto label_2fed2c;
        case 0x2fed30u: goto label_2fed30;
        case 0x2fed34u: goto label_2fed34;
        case 0x2fed38u: goto label_2fed38;
        case 0x2fed3cu: goto label_2fed3c;
        case 0x2fed40u: goto label_2fed40;
        case 0x2fed44u: goto label_2fed44;
        case 0x2fed48u: goto label_2fed48;
        case 0x2fed4cu: goto label_2fed4c;
        case 0x2fed50u: goto label_2fed50;
        case 0x2fed54u: goto label_2fed54;
        case 0x2fed58u: goto label_2fed58;
        case 0x2fed5cu: goto label_2fed5c;
        case 0x2fed60u: goto label_2fed60;
        case 0x2fed64u: goto label_2fed64;
        case 0x2fed68u: goto label_2fed68;
        case 0x2fed6cu: goto label_2fed6c;
        case 0x2fed70u: goto label_2fed70;
        case 0x2fed74u: goto label_2fed74;
        case 0x2fed78u: goto label_2fed78;
        case 0x2fed7cu: goto label_2fed7c;
        case 0x2fed80u: goto label_2fed80;
        case 0x2fed84u: goto label_2fed84;
        case 0x2fed88u: goto label_2fed88;
        case 0x2fed8cu: goto label_2fed8c;
        case 0x2fed90u: goto label_2fed90;
        case 0x2fed94u: goto label_2fed94;
        case 0x2fed98u: goto label_2fed98;
        case 0x2fed9cu: goto label_2fed9c;
        case 0x2feda0u: goto label_2feda0;
        case 0x2feda4u: goto label_2feda4;
        case 0x2feda8u: goto label_2feda8;
        case 0x2fedacu: goto label_2fedac;
        case 0x2fedb0u: goto label_2fedb0;
        case 0x2fedb4u: goto label_2fedb4;
        case 0x2fedb8u: goto label_2fedb8;
        case 0x2fedbcu: goto label_2fedbc;
        case 0x2fedc0u: goto label_2fedc0;
        case 0x2fedc4u: goto label_2fedc4;
        case 0x2fedc8u: goto label_2fedc8;
        case 0x2fedccu: goto label_2fedcc;
        case 0x2fedd0u: goto label_2fedd0;
        case 0x2fedd4u: goto label_2fedd4;
        case 0x2fedd8u: goto label_2fedd8;
        case 0x2feddcu: goto label_2feddc;
        case 0x2fede0u: goto label_2fede0;
        case 0x2fede4u: goto label_2fede4;
        case 0x2fede8u: goto label_2fede8;
        case 0x2fedecu: goto label_2fedec;
        case 0x2fedf0u: goto label_2fedf0;
        case 0x2fedf4u: goto label_2fedf4;
        case 0x2fedf8u: goto label_2fedf8;
        case 0x2fedfcu: goto label_2fedfc;
        case 0x2fee00u: goto label_2fee00;
        case 0x2fee04u: goto label_2fee04;
        case 0x2fee08u: goto label_2fee08;
        case 0x2fee0cu: goto label_2fee0c;
        case 0x2fee10u: goto label_2fee10;
        case 0x2fee14u: goto label_2fee14;
        case 0x2fee18u: goto label_2fee18;
        case 0x2fee1cu: goto label_2fee1c;
        case 0x2fee20u: goto label_2fee20;
        case 0x2fee24u: goto label_2fee24;
        case 0x2fee28u: goto label_2fee28;
        case 0x2fee2cu: goto label_2fee2c;
        case 0x2fee30u: goto label_2fee30;
        case 0x2fee34u: goto label_2fee34;
        case 0x2fee38u: goto label_2fee38;
        case 0x2fee3cu: goto label_2fee3c;
        case 0x2fee40u: goto label_2fee40;
        case 0x2fee44u: goto label_2fee44;
        case 0x2fee48u: goto label_2fee48;
        case 0x2fee4cu: goto label_2fee4c;
        case 0x2fee50u: goto label_2fee50;
        case 0x2fee54u: goto label_2fee54;
        case 0x2fee58u: goto label_2fee58;
        case 0x2fee5cu: goto label_2fee5c;
        case 0x2fee60u: goto label_2fee60;
        case 0x2fee64u: goto label_2fee64;
        case 0x2fee68u: goto label_2fee68;
        case 0x2fee6cu: goto label_2fee6c;
        case 0x2fee70u: goto label_2fee70;
        case 0x2fee74u: goto label_2fee74;
        case 0x2fee78u: goto label_2fee78;
        case 0x2fee7cu: goto label_2fee7c;
        case 0x2fee80u: goto label_2fee80;
        case 0x2fee84u: goto label_2fee84;
        case 0x2fee88u: goto label_2fee88;
        case 0x2fee8cu: goto label_2fee8c;
        case 0x2fee90u: goto label_2fee90;
        case 0x2fee94u: goto label_2fee94;
        case 0x2fee98u: goto label_2fee98;
        case 0x2fee9cu: goto label_2fee9c;
        case 0x2feea0u: goto label_2feea0;
        case 0x2feea4u: goto label_2feea4;
        case 0x2feea8u: goto label_2feea8;
        case 0x2feeacu: goto label_2feeac;
        case 0x2feeb0u: goto label_2feeb0;
        case 0x2feeb4u: goto label_2feeb4;
        case 0x2feeb8u: goto label_2feeb8;
        case 0x2feebcu: goto label_2feebc;
        case 0x2feec0u: goto label_2feec0;
        case 0x2feec4u: goto label_2feec4;
        case 0x2feec8u: goto label_2feec8;
        case 0x2feeccu: goto label_2feecc;
        case 0x2feed0u: goto label_2feed0;
        case 0x2feed4u: goto label_2feed4;
        case 0x2feed8u: goto label_2feed8;
        case 0x2feedcu: goto label_2feedc;
        case 0x2feee0u: goto label_2feee0;
        case 0x2feee4u: goto label_2feee4;
        case 0x2feee8u: goto label_2feee8;
        case 0x2feeecu: goto label_2feeec;
        default: break;
    }

    ctx->pc = 0x2feac8u;

label_2feac8:
    // 0x2feac8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2feac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2feacc:
    // 0x2feacc: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x2feaccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
label_2fead0:
    // 0x2fead0: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x2fead0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
label_2fead4:
    // 0x2fead4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2fead4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fead8:
    // 0x2fead8: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2fead8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_2feadc:
    // 0x2feadc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2feadcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2feae0:
    // 0x2feae0: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x2feae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
label_2feae4:
    // 0x2feae4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2feae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2feae8:
    // 0x2feae8: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x2feae8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_2feaec:
    // 0x2feaec: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x2feaecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_2feaf0:
    // 0x2feaf0: 0xc08f68a  jal         func_23DA28
label_2feaf4:
    if (ctx->pc == 0x2FEAF4u) {
        ctx->pc = 0x2FEAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEAF0u;
        // 0x2feaf4: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEAF8u;
        goto label_2feaf8;
    }
    ctx->pc = 0x2FEAF0u;
    SET_GPR_U32(ctx, 31, 0x2FEAF8u);
    ctx->pc = 0x2FEAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEAF0u;
    // 0x2feaf4: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA28u, 0x2FEAF0u, 0x2FEAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEAF8u;
label_2feaf8:
    // 0x2feaf8: 0x144000f3  bnez        $v0, . + 4 + (0xF3 << 2)
label_2feafc:
    if (ctx->pc == 0x2FEAFCu) {
        ctx->pc = 0x2FEAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEAF8u;
        // 0x2feafc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEB00u;
        goto label_2feb00;
    }
    ctx->pc = 0x2FEAF8u;
    {
        const bool branch_taken_0x2feaf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FEAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEAF8u;
        // 0x2feafc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2feaf8) {
            ctx->pc = 0x2FEEC8u;
            goto label_2feec8;
        }
    }
    ctx->pc = 0x2FEB00u;
label_2feb00:
    // 0x2feb00: 0x8e4211c0  lw          $v0, 0x11C0($s2)
    ctx->pc = 0x2feb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4544)));
label_2feb04:
    // 0x2feb04: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x2feb04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_2feb08:
    // 0x2feb08: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2feb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2feb0c:
    // 0x2feb0c: 0x104300ee  beq         $v0, $v1, . + 4 + (0xEE << 2)
label_2feb10:
    if (ctx->pc == 0x2FEB10u) {
        ctx->pc = 0x2FEB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEB0Cu;
        // 0x2feb10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEB14u;
        goto label_2feb14;
    }
    ctx->pc = 0x2FEB0Cu;
    {
        const bool branch_taken_0x2feb0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2FEB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEB0Cu;
        // 0x2feb10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2feb0c) {
            ctx->pc = 0x2FEEC8u;
            goto label_2feec8;
        }
    }
    ctx->pc = 0x2FEB14u;
label_2feb14:
    // 0x2feb14: 0xc66000d0  lwc1        $f0, 0xD0($s3)
    ctx->pc = 0x2feb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2feb18:
    // 0x2feb18: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x2feb18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_2feb1c:
    // 0x2feb1c: 0x0  nop
    ctx->pc = 0x2feb1cu;
    // NOP
label_2feb20:
    // 0x2feb20: 0x46160036  c.le.s      $f0, $f22
    ctx->pc = 0x2feb20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2feb24:
    // 0x2feb24: 0x0  nop
    ctx->pc = 0x2feb24u;
    // NOP
label_2feb28:
    // 0x2feb28: 0x450100e7  bc1t        . + 4 + (0xE7 << 2)
label_2feb2c:
    if (ctx->pc == 0x2FEB2Cu) {
        ctx->pc = 0x2FEB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEB28u;
        // 0x2feb2c: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEB30u;
        goto label_2feb30;
    }
    ctx->pc = 0x2FEB28u;
    {
        const bool branch_taken_0x2feb28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FEB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEB28u;
        // 0x2feb2c: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2feb28) {
            ctx->pc = 0x2FEEC8u;
            goto label_2feec8;
        }
    }
    ctx->pc = 0x2FEB30u;
label_2feb30:
    // 0x2feb30: 0x8e62036c  lw          $v0, 0x36C($s3)
    ctx->pc = 0x2feb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 876)));
label_2feb34:
    // 0x2feb34: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2feb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2feb38:
    // 0x2feb38: 0x104300e3  beq         $v0, $v1, . + 4 + (0xE3 << 2)
label_2feb3c:
    if (ctx->pc == 0x2FEB3Cu) {
        ctx->pc = 0x2FEB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEB38u;
        // 0x2feb3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEB40u;
        goto label_2feb40;
    }
    ctx->pc = 0x2FEB38u;
    {
        const bool branch_taken_0x2feb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2FEB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEB38u;
        // 0x2feb3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2feb38) {
            ctx->pc = 0x2FEEC8u;
            goto label_2feec8;
        }
    }
    ctx->pc = 0x2FEB40u;
label_2feb40:
    // 0x2feb40: 0xc0f6a96  jal         func_3DAA58
label_2feb44:
    if (ctx->pc == 0x2FEB44u) {
        ctx->pc = 0x2FEB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEB40u;
        // 0x2feb44: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEB48u;
        goto label_2feb48;
    }
    ctx->pc = 0x2FEB40u;
    SET_GPR_U32(ctx, 31, 0x2FEB48u);
    ctx->pc = 0x2FEB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEB40u;
    // 0x2feb44: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2FEB40u, 0x2FEB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEB48u;
label_2feb48:
    // 0x2feb48: 0x8e640104  lw          $a0, 0x104($s3)
    ctx->pc = 0x2feb48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_2feb4c:
    // 0x2feb4c: 0x8e450104  lw          $a1, 0x104($s2)
    ctx->pc = 0x2feb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2feb50:
    // 0x2feb50: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2feb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2feb54:
    // 0x2feb54: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2feb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2feb58:
    // 0x2feb58: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x2feb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_2feb5c:
    // 0x2feb5c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2feb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2feb60:
    // 0x2feb60: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2feb60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2feb64:
    // 0x2feb64: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2feb64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2feb68:
    // 0x2feb68: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2feb68u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2feb6c:
    // 0x2feb6c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2feb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_2feb70:
    // 0x2feb70: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2feb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2feb74:
    // 0x2feb74: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2feb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2feb78:
    // 0x2feb78: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x2feb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2feb7c:
    // 0x2feb7c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2feb7cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2feb80:
    // 0x2feb80: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2feb80u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2feb84:
    // 0x2feb84: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x2feb84u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2feb88:
    // 0x2feb88: 0x46140504  c1          0x140504
    ctx->pc = 0x2feb88u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
label_2feb8c:
    // 0x2feb8c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2feb8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_2feb90:
    // 0x2feb90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2feb90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2feb94:
    // 0x2feb94: 0x0  nop
    ctx->pc = 0x2feb94u;
    // NOP
label_2feb98:
    // 0x2feb98: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2feb98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2feb9c:
    // 0x2feb9c: 0x0  nop
    ctx->pc = 0x2feb9cu;
    // NOP
label_2feba0:
    // 0x2feba0: 0x450100c9  bc1t        . + 4 + (0xC9 << 2)
label_2feba4:
    if (ctx->pc == 0x2FEBA4u) {
        ctx->pc = 0x2FEBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEBA0u;
        // 0x2feba4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEBA8u;
        goto label_2feba8;
    }
    ctx->pc = 0x2FEBA0u;
    {
        const bool branch_taken_0x2feba0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FEBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEBA0u;
        // 0x2feba4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2feba0) {
            ctx->pc = 0x2FEEC8u;
            goto label_2feec8;
        }
    }
    ctx->pc = 0x2FEBA8u;
label_2feba8:
    // 0x2feba8: 0x3c01407c  lui         $at, 0x407C
    ctx->pc = 0x2feba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16508 << 16));
label_2febac:
    // 0x2febac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2febacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2febb0:
    // 0x2febb0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2febb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2febb4:
    // 0x2febb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2febb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2febb8:
    // 0x2febb8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2febb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_2febbc:
    // 0x2febbc: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2febbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2febc0:
    // 0x2febc0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2febc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2febc4:
    // 0x2febc4: 0x460da341  sub.s       $f13, $f20, $f13
    ctx->pc = 0x2febc4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[13]);
label_2febc8:
    // 0x2febc8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2febc8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_2febcc:
    // 0x2febcc: 0xc0bf93a  jal         func_2FE4E8
label_2febd0:
    if (ctx->pc == 0x2FEBD0u) {
        ctx->pc = 0x2FEBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEBCCu;
        // 0x2febd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEBD4u;
        goto label_2febd4;
    }
    ctx->pc = 0x2FEBCCu;
    SET_GPR_U32(ctx, 31, 0x2FEBD4u);
    ctx->pc = 0x2FEBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEBCCu;
    // 0x2febd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE4E8u, 0x2FEBCCu, 0x2FEBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEBD4u;
label_2febd4:
    // 0x2febd4: 0x104000bc  beqz        $v0, . + 4 + (0xBC << 2)
label_2febd8:
    if (ctx->pc == 0x2FEBD8u) {
        ctx->pc = 0x2FEBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEBD4u;
        // 0x2febd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEBDCu;
        goto label_2febdc;
    }
    ctx->pc = 0x2FEBD4u;
    {
        const bool branch_taken_0x2febd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEBD4u;
        // 0x2febd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2febd4) {
            ctx->pc = 0x2FEEC8u;
            goto label_2feec8;
        }
    }
    ctx->pc = 0x2FEBDCu;
label_2febdc:
    // 0x2febdc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2febdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2febe0:
    // 0x2febe0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2febe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2febe4:
    // 0x2febe4: 0x0  nop
    ctx->pc = 0x2febe4u;
    // NOP
label_2febe8:
    // 0x2febe8: 0x4614a803  div.s       $f0, $f21, $f20
    ctx->pc = 0x2febe8u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[20]); }
label_2febec:
    // 0x2febec: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2febecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2febf0:
    // 0x2febf0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2febf0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2febf4:
    // 0x2febf4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2febf4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2febf8:
    // 0x2febf8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2febf8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2febfc:
    // 0x2febfc: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2febfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fec00:
    // 0x2fec00: 0xc0f6a96  jal         func_3DAA58
label_2fec04:
    if (ctx->pc == 0x2FEC04u) {
        ctx->pc = 0x2FEC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEC00u;
        // 0x2fec04: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEC08u;
        goto label_2fec08;
    }
    ctx->pc = 0x2FEC00u;
    SET_GPR_U32(ctx, 31, 0x2FEC08u);
    ctx->pc = 0x2FEC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEC00u;
    // 0x2fec04: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2FEC00u, 0x2FEC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEC08u;
label_2fec08:
    // 0x2fec08: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2fec08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2fec0c:
    // 0x2fec0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fec0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2fec10:
    // 0x2fec10: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2fec10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2fec14:
    // 0x2fec14: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2fec14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2fec18:
    // 0x2fec18: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2fec18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fec1c:
    // 0x2fec1c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2fec1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2fec20:
    // 0x2fec20: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2fec20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2fec24:
    // 0x2fec24: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2fec24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fec28:
    // 0x2fec28: 0xc0f6a96  jal         func_3DAA58
label_2fec2c:
    if (ctx->pc == 0x2FEC2Cu) {
        ctx->pc = 0x2FEC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEC28u;
        // 0x2fec2c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEC30u;
        goto label_2fec30;
    }
    ctx->pc = 0x2FEC28u;
    SET_GPR_U32(ctx, 31, 0x2FEC30u);
    ctx->pc = 0x2FEC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEC28u;
    // 0x2fec2c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2FEC28u, 0x2FEC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEC30u;
label_2fec30:
    // 0x2fec30: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x2fec30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2fec34:
    // 0x2fec34: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fec34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2fec38:
    // 0x2fec38: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2fec38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2fec3c:
    // 0x2fec3c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fec3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2fec40:
    // 0x2fec40: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x2fec40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2fec44:
    // 0x2fec44: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2fec44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2fec48:
    // 0x2fec48: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2fec48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fec4c:
    // 0x2fec4c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2fec4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fec50:
    // 0x2fec50: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2fec50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2fec54:
    // 0x2fec54: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2fec54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2fec58:
    // 0x2fec58: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2fec58u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2fec5c:
    // 0x2fec5c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2fec5cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2fec60:
    // 0x2fec60: 0xe7b6003c  swc1        $f22, 0x3C($sp)
    ctx->pc = 0x2fec60u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_2fec64:
    // 0x2fec64: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2fec64u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_2fec68:
    // 0x2fec68: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2fec68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2fec6c:
    // 0x2fec6c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2fec6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_2fec70:
    // 0x2fec70: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2fec70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2fec74:
    // 0x2fec74: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x2fec74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2fec78:
    // 0x2fec78: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2fec78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fec7c:
    // 0x2fec7c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2fec7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2fec80:
    // 0x2fec80: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2fec80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2fec84:
    // 0x2fec84: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2fec84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fec88:
    // 0x2fec88: 0xc0f6a96  jal         func_3DAA58
label_2fec8c:
    if (ctx->pc == 0x2FEC8Cu) {
        ctx->pc = 0x2FEC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEC88u;
        // 0x2fec8c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEC90u;
        goto label_2fec90;
    }
    ctx->pc = 0x2FEC88u;
    SET_GPR_U32(ctx, 31, 0x2FEC90u);
    ctx->pc = 0x2FEC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEC88u;
    // 0x2fec8c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2FEC88u, 0x2FEC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEC90u;
label_2fec90:
    // 0x2fec90: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x2fec90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2fec94:
    // 0x2fec94: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fec94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2fec98:
    // 0x2fec98: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2fec98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2fec9c:
    // 0x2fec9c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fec9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2feca0:
    // 0x2feca0: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x2feca0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2feca4:
    // 0x2feca4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2feca4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2feca8:
    // 0x2feca8: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2feca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fecac:
    // 0x2fecac: 0x8e4211c0  lw          $v0, 0x11C0($s2)
    ctx->pc = 0x2fecacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4544)));
label_2fecb0:
    // 0x2fecb0: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x2fecb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_2fecb4:
    // 0x2fecb4: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2fecb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2fecb8:
    // 0x2fecb8: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2fecb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fecbc:
    // 0x2fecbc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2fecbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2fecc0:
    // 0x2fecc0: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2fecc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2fecc4:
    // 0x2fecc4: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x2fecc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2fecc8:
    // 0x2fecc8: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x2fecc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_2feccc:
    // 0x2feccc: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2fecccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_2fecd0:
    // 0x2fecd0: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x2fecd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_2fecd4:
    // 0x2fecd4: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_2fecd8:
    if (ctx->pc == 0x2FECD8u) {
        ctx->pc = 0x2FECD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FECD4u;
        // 0x2fecd8: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FECDCu;
        goto label_2fecdc;
    }
    ctx->pc = 0x2FECD4u;
    {
        const bool branch_taken_0x2fecd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FECD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FECD4u;
        // 0x2fecd8: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fecd4) {
            ctx->pc = 0x2FECE4u;
            goto label_2fece4;
        }
    }
    ctx->pc = 0x2FECDCu;
label_2fecdc:
    // 0x2fecdc: 0xc0bb688  jal         func_2EDA20
label_2fece0:
    if (ctx->pc == 0x2FECE0u) {
        ctx->pc = 0x2FECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FECDCu;
        // 0x2fece0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FECE4u;
        goto label_2fece4;
    }
    ctx->pc = 0x2FECDCu;
    SET_GPR_U32(ctx, 31, 0x2FECE4u);
    ctx->pc = 0x2FECE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FECDCu;
    // 0x2fece0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDA20u, 0x2FECDCu, 0x2FECE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FECE4u;
label_2fece4:
    // 0x2fece4: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x2fece4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2fece8:
    // 0x2fece8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2fece8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2fecec:
    // 0x2fecec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fececu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2fecf0:
    // 0x2fecf0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2fecf0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2fecf4:
    // 0x2fecf4: 0xf8410060  sqc2        $vf1, 0x60($v0)
    ctx->pc = 0x2fecf4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fecf8:
    // 0x2fecf8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2fecf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2fecfc:
    // 0x2fecfc: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x2fecfcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_2fed00:
    // 0x2fed00: 0xe7b60064  swc1        $f22, 0x64($sp)
    ctx->pc = 0x2fed00u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_2fed04:
    // 0x2fed04: 0xe4b50008  swc1        $f21, 0x8($a1)
    ctx->pc = 0x2fed04u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_2fed08:
    // 0x2fed08: 0xc0b1b16  jal         func_2C6C58
label_2fed0c:
    if (ctx->pc == 0x2FED0Cu) {
        ctx->pc = 0x2FED0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FED08u;
        // 0x2fed0c: 0xe7b6006c  swc1        $f22, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FED10u;
        goto label_2fed10;
    }
    ctx->pc = 0x2FED08u;
    SET_GPR_U32(ctx, 31, 0x2FED10u);
    ctx->pc = 0x2FED0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FED08u;
    // 0x2fed0c: 0xe7b6006c  swc1        $f22, 0x6C($sp) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6C58u, 0x2FED08u, 0x2FED10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FED10u;
label_2fed10:
    // 0x2fed10: 0x8e430218  lw          $v1, 0x218($s2)
    ctx->pc = 0x2fed10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
label_2fed14:
    // 0x2fed14: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2fed14u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2fed18:
    // 0x2fed18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fed18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fed1c:
    // 0x2fed1c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2fed1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2fed20:
    // 0x2fed20: 0x8c6201c8  lw          $v0, 0x1C8($v1)
    ctx->pc = 0x2fed20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 456)));
label_2fed24:
    // 0x2fed24: 0x40f809  jalr        $v0
label_2fed28:
    if (ctx->pc == 0x2FED28u) {
        ctx->pc = 0x2FED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FED24u;
        // 0x2fed28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FED2Cu;
        goto label_2fed2c;
    }
    ctx->pc = 0x2FED24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FED2Cu);
        ctx->pc = 0x2FED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FED24u;
        // 0x2fed28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FED24u, 0x2FED2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FED2Cu;
label_2fed2c:
    // 0x2fed2c: 0x8e630218  lw          $v1, 0x218($s3)
    ctx->pc = 0x2fed2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 536)));
label_2fed30:
    // 0x2fed30: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2fed30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2fed34:
    // 0x2fed34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2fed34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fed38:
    // 0x2fed38: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2fed38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2fed3c:
    // 0x2fed3c: 0x40f809  jalr        $v0
label_2fed40:
    if (ctx->pc == 0x2FED40u) {
        ctx->pc = 0x2FED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FED3Cu;
        // 0x2fed40: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FED44u;
        goto label_2fed44;
    }
    ctx->pc = 0x2FED3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FED44u);
        ctx->pc = 0x2FED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FED3Cu;
        // 0x2fed40: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FED3Cu, 0x2FED44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FED44u;
label_2fed44:
    // 0x2fed44: 0x8e630104  lw          $v1, 0x104($s3)
    ctx->pc = 0x2fed44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_2fed48:
    // 0x2fed48: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2fed48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2fed4c:
    // 0x2fed4c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2fed50:
    // 0x2fed50: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2fed50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2fed54:
    // 0x2fed54: 0xf8410060  sqc2        $vf1, 0x60($v0)
    ctx->pc = 0x2fed54u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fed58:
    // 0x2fed58: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2fed58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
label_2fed5c:
    // 0x2fed5c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2fed5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fed60:
    // 0x2fed60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2fed60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fed64:
    // 0x2fed64: 0x8e630218  lw          $v1, 0x218($s3)
    ctx->pc = 0x2fed64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 536)));
label_2fed68:
    // 0x2fed68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2fed68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fed6c:
    // 0x2fed6c: 0x460ca300  add.s       $f12, $f20, $f12
    ctx->pc = 0x2fed6cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
label_2fed70:
    // 0x2fed70: 0x8c6201c8  lw          $v0, 0x1C8($v1)
    ctx->pc = 0x2fed70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 456)));
label_2fed74:
    // 0x2fed74: 0x40f809  jalr        $v0
label_2fed78:
    if (ctx->pc == 0x2FED78u) {
        ctx->pc = 0x2FED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FED74u;
        // 0x2fed78: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FED7Cu;
        goto label_2fed7c;
    }
    ctx->pc = 0x2FED74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FED7Cu);
        ctx->pc = 0x2FED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FED74u;
        // 0x2fed78: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FED74u, 0x2FED7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FED7Cu;
label_2fed7c:
    // 0x2fed7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fed7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fed80:
    // 0x2fed80: 0xc094ec2  jal         func_253B08
label_2fed84:
    if (ctx->pc == 0x2FED84u) {
        ctx->pc = 0x2FED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FED80u;
        // 0x2fed84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FED88u;
        goto label_2fed88;
    }
    ctx->pc = 0x2FED80u;
    SET_GPR_U32(ctx, 31, 0x2FED88u);
    ctx->pc = 0x2FED84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FED80u;
    // 0x2fed84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253B08u, 0x2FED80u, 0x2FED88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FED88u;
label_2fed88:
    // 0x2fed88: 0x8e6300c4  lw          $v1, 0xC4($s3)
    ctx->pc = 0x2fed88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
label_2fed8c:
    // 0x2fed8c: 0xac710028  sw          $s1, 0x28($v1)
    ctx->pc = 0x2fed8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 17));
label_2fed90:
    // 0x2fed90: 0x8e6400c4  lw          $a0, 0xC4($s3)
    ctx->pc = 0x2fed90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
label_2fed94:
    // 0x2fed94: 0x90820032  lbu         $v0, 0x32($a0)
    ctx->pc = 0x2fed94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 50)));
label_2fed98:
    // 0x2fed98: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2fed98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_2fed9c:
    // 0x2fed9c: 0xa0820032  sb          $v0, 0x32($a0)
    ctx->pc = 0x2fed9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 2));
label_2feda0:
    // 0x2feda0: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x2feda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_2feda4:
    // 0x2feda4: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2feda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2feda8:
    // 0x2feda8: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2feda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2fedac:
    // 0x2fedac: 0x40f809  jalr        $v0
label_2fedb0:
    if (ctx->pc == 0x2FEDB0u) {
        ctx->pc = 0x2FEDB4u;
        goto label_2fedb4;
    }
    ctx->pc = 0x2FEDACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FEDB4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEDACu, 0x2FEDB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FEDB4u;
label_2fedb4:
    // 0x2fedb4: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x2fedb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_2fedb8:
    // 0x2fedb8: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2fedb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2fedbc:
    // 0x2fedbc: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x2fedbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2fedc0:
    // 0x2fedc0: 0x40f809  jalr        $v0
label_2fedc4:
    if (ctx->pc == 0x2FEDC4u) {
        ctx->pc = 0x2FEDC8u;
        goto label_2fedc8;
    }
    ctx->pc = 0x2FEDC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FEDC8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEDC0u, 0x2FEDC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FEDC8u;
label_2fedc8:
    // 0x2fedc8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2fedc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fedcc:
    // 0x2fedcc: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x2fedccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_2fedd0:
    // 0x2fedd0: 0xc08fed2  jal         func_23FB48
label_2fedd4:
    if (ctx->pc == 0x2FEDD4u) {
        ctx->pc = 0x2FEDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEDD0u;
        // 0x2fedd4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEDD8u;
        goto label_2fedd8;
    }
    ctx->pc = 0x2FEDD0u;
    SET_GPR_U32(ctx, 31, 0x2FEDD8u);
    ctx->pc = 0x2FEDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEDD0u;
    // 0x2fedd4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2FEDD0u, 0x2FEDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEDD8u;
label_2fedd8:
    // 0x2fedd8: 0x8e430218  lw          $v1, 0x218($s2)
    ctx->pc = 0x2fedd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
label_2feddc:
    // 0x2feddc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2feddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2fede0:
    // 0x2fede0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2fede0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fede4:
    // 0x2fede4: 0x8c6201c0  lw          $v0, 0x1C0($v1)
    ctx->pc = 0x2fede4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 448)));
label_2fede8:
    // 0x2fede8: 0x40f809  jalr        $v0
label_2fedec:
    if (ctx->pc == 0x2FEDECu) {
        ctx->pc = 0x2FEDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEDE8u;
        // 0x2fedec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEDF0u;
        goto label_2fedf0;
    }
    ctx->pc = 0x2FEDE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FEDF0u);
        ctx->pc = 0x2FEDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEDE8u;
        // 0x2fedec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEDE8u, 0x2FEDF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FEDF0u;
label_2fedf0:
    // 0x2fedf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fedf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fedf4:
    // 0x2fedf4: 0xc08bd96  jal         func_22F658
label_2fedf8:
    if (ctx->pc == 0x2FEDF8u) {
        ctx->pc = 0x2FEDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEDF4u;
        // 0x2fedf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEDFCu;
        goto label_2fedfc;
    }
    ctx->pc = 0x2FEDF4u;
    SET_GPR_U32(ctx, 31, 0x2FEDFCu);
    ctx->pc = 0x2FEDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEDF4u;
    // 0x2fedf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x2FEDF4u, 0x2FEDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEDFCu;
label_2fedfc:
    // 0x2fedfc: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x2fedfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_2fee00:
    // 0x2fee00: 0xac510028  sw          $s1, 0x28($v0)
    ctx->pc = 0x2fee00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 17));
label_2fee04:
    // 0x2fee04: 0x8e44010c  lw          $a0, 0x10C($s2)
    ctx->pc = 0x2fee04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_2fee08:
    // 0x2fee08: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2fee08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2fee0c:
    // 0x2fee0c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2fee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2fee10:
    // 0x2fee10: 0x40f809  jalr        $v0
label_2fee14:
    if (ctx->pc == 0x2FEE14u) {
        ctx->pc = 0x2FEE18u;
        goto label_2fee18;
    }
    ctx->pc = 0x2FEE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FEE18u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEE10u, 0x2FEE18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FEE18u;
label_2fee18:
    // 0x2fee18: 0x8e44010c  lw          $a0, 0x10C($s2)
    ctx->pc = 0x2fee18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_2fee1c:
    // 0x2fee1c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2fee1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2fee20:
    // 0x2fee20: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x2fee20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2fee24:
    // 0x2fee24: 0x40f809  jalr        $v0
label_2fee28:
    if (ctx->pc == 0x2FEE28u) {
        ctx->pc = 0x2FEE2Cu;
        goto label_2fee2c;
    }
    ctx->pc = 0x2FEE24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FEE2Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEE24u, 0x2FEE2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FEE2Cu;
label_2fee2c:
    // 0x2fee2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fee2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fee30:
    // 0x2fee30: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x2fee30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_2fee34:
    // 0x2fee34: 0xc08fed2  jal         func_23FB48
label_2fee38:
    if (ctx->pc == 0x2FEE38u) {
        ctx->pc = 0x2FEE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE34u;
        // 0x2fee38: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEE3Cu;
        goto label_2fee3c;
    }
    ctx->pc = 0x2FEE34u;
    SET_GPR_U32(ctx, 31, 0x2FEE3Cu);
    ctx->pc = 0x2FEE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEE34u;
    // 0x2fee38: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2FEE34u, 0x2FEE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEE3Cu;
label_2fee3c:
    // 0x2fee3c: 0x8e420334  lw          $v0, 0x334($s2)
    ctx->pc = 0x2fee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_2fee40:
    // 0x2fee40: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2fee44:
    if (ctx->pc == 0x2FEE44u) {
        ctx->pc = 0x2FEE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE40u;
        // 0x2fee44: 0x3c03003f  lui         $v1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEE48u;
        goto label_2fee48;
    }
    ctx->pc = 0x2FEE40u;
    {
        const bool branch_taken_0x2fee40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE40u;
        // 0x2fee44: 0x3c03003f  lui         $v1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fee40) {
            ctx->pc = 0x2FEE74u;
            goto label_2fee74;
        }
    }
    ctx->pc = 0x2FEE48u;
label_2fee48:
    // 0x2fee48: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2fee48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2fee4c:
    // 0x2fee4c: 0xa4626b4c  sh          $v0, 0x6B4C($v1)
    ctx->pc = 0x2fee4cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 27468), (uint16_t)GPR_U32(ctx, 2));
label_2fee50:
    // 0x2fee50: 0x24050055  addiu       $a1, $zero, 0x55
    ctx->pc = 0x2fee50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
label_2fee54:
    // 0x2fee54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fee54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fee58:
    // 0x2fee58: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2fee58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_2fee5c:
    // 0x2fee5c: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x2fee5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_2fee60:
    // 0x2fee60: 0xc069900  jal         func_1A6400
label_2fee64:
    if (ctx->pc == 0x2FEE64u) {
        ctx->pc = 0x2FEE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE60u;
        // 0x2fee64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEE68u;
        goto label_2fee68;
    }
    ctx->pc = 0x2FEE60u;
    SET_GPR_U32(ctx, 31, 0x2FEE68u);
    ctx->pc = 0x2FEE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEE60u;
    // 0x2fee64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6400u, 0x2FEE60u, 0x2FEE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEE68u;
label_2fee68:
    // 0x2fee68: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x2fee68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_2fee6c:
    // 0x2fee6c: 0xc06a05e  jal         func_1A8178
label_2fee70:
    if (ctx->pc == 0x2FEE70u) {
        ctx->pc = 0x2FEE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE6Cu;
        // 0x2fee70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEE74u;
        goto label_2fee74;
    }
    ctx->pc = 0x2FEE6Cu;
    SET_GPR_U32(ctx, 31, 0x2FEE74u);
    ctx->pc = 0x2FEE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEE6Cu;
    // 0x2fee70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x2FEE6Cu, 0x2FEE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEE74u;
label_2fee74:
    // 0x2fee74: 0x8e700334  lw          $s0, 0x334($s3)
    ctx->pc = 0x2fee74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
label_2fee78:
    // 0x2fee78: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_2fee7c:
    if (ctx->pc == 0x2FEE7Cu) {
        ctx->pc = 0x2FEE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE78u;
        // 0x2fee7c: 0x24050055  addiu       $a1, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEE80u;
        goto label_2fee80;
    }
    ctx->pc = 0x2FEE78u;
    {
        const bool branch_taken_0x2fee78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE78u;
        // 0x2fee7c: 0x24050055  addiu       $a1, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fee78) {
            ctx->pc = 0x2FEE98u;
            goto label_2fee98;
        }
    }
    ctx->pc = 0x2FEE80u;
label_2fee80:
    // 0x2fee80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fee80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fee84:
    // 0x2fee84: 0xc069bc8  jal         func_1A6F20
label_2fee88:
    if (ctx->pc == 0x2FEE88u) {
        ctx->pc = 0x2FEE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE84u;
        // 0x2fee88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEE8Cu;
        goto label_2fee8c;
    }
    ctx->pc = 0x2FEE84u;
    SET_GPR_U32(ctx, 31, 0x2FEE8Cu);
    ctx->pc = 0x2FEE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEE84u;
    // 0x2fee88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6F20u, 0x2FEE84u, 0x2FEE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEE8Cu;
label_2fee8c:
    // 0x2fee8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fee8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fee90:
    // 0x2fee90: 0xc06a05e  jal         func_1A8178
label_2fee94:
    if (ctx->pc == 0x2FEE94u) {
        ctx->pc = 0x2FEE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE90u;
        // 0x2fee94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEE98u;
        goto label_2fee98;
    }
    ctx->pc = 0x2FEE90u;
    SET_GPR_U32(ctx, 31, 0x2FEE98u);
    ctx->pc = 0x2FEE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEE90u;
    // 0x2fee94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x2FEE90u, 0x2FEE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEE98u;
label_2fee98:
    // 0x2fee98: 0xc0c092e  jal         func_3024B8
label_2fee9c:
    if (ctx->pc == 0x2FEE9Cu) {
        ctx->pc = 0x2FEE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE98u;
        // 0x2fee9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEEA0u;
        goto label_2feea0;
    }
    ctx->pc = 0x2FEE98u;
    SET_GPR_U32(ctx, 31, 0x2FEEA0u);
    ctx->pc = 0x2FEE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEE98u;
    // 0x2fee9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3024B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3024B8u, 0x2FEE98u, 0x2FEEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEEA0u;
label_2feea0:
    // 0x2feea0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2feea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2feea4:
    // 0x2feea4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2feea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_2feea8:
    // 0x2feea8: 0x8c44bd48  lw          $a0, -0x42B8($v0)
    ctx->pc = 0x2feea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950216)));
label_2feeac:
    // 0x2feeac: 0x24a51c68  addiu       $a1, $a1, 0x1C68
    ctx->pc = 0x2feeacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7272));
label_2feeb0:
    // 0x2feeb0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2feeb0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_2feeb4:
    // 0x2feeb4: 0xc0c7f22  jal         func_31FC88
label_2feeb8:
    if (ctx->pc == 0x2FEEB8u) {
        ctx->pc = 0x2FEEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEEB4u;
        // 0x2feeb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEEBCu;
        goto label_2feebc;
    }
    ctx->pc = 0x2FEEB4u;
    SET_GPR_U32(ctx, 31, 0x2FEEBCu);
    ctx->pc = 0x2FEEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEEB4u;
    // 0x2feeb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FC88u, 0x2FEEB4u, 0x2FEEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEEBCu;
label_2feebc:
    // 0x2feebc: 0xc0c0922  jal         func_302488
label_2feec0:
    if (ctx->pc == 0x2FEEC0u) {
        ctx->pc = 0x2FEEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEEBCu;
        // 0x2feec0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEEC4u;
        goto label_2feec4;
    }
    ctx->pc = 0x2FEEBCu;
    SET_GPR_U32(ctx, 31, 0x2FEEC4u);
    ctx->pc = 0x2FEEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEEBCu;
    // 0x2feec0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302488u, 0x2FEEBCu, 0x2FEEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEEC4u;
label_2feec4:
    // 0x2feec4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2feec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2feec8:
    // 0x2feec8: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2feec8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2feecc:
    // 0x2feecc: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x2feeccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_2feed0:
    // 0x2feed0: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x2feed0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2feed4:
    // 0x2feed4: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x2feed4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_2feed8:
    // 0x2feed8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2feed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2feedc:
    // 0x2feedc: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x2feedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2feee0:
    // 0x2feee0: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x2feee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2feee4:
    // 0x2feee4: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2feee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2feee8:
    // 0x2feee8: 0x3e00008  jr          $ra
label_2feeec:
    if (ctx->pc == 0x2FEEECu) {
        ctx->pc = 0x2FEEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEEE8u;
        // 0x2feeec: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEEF0u;
        goto label_fallthrough_0x2feee8;
    }
    ctx->pc = 0x2FEEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FEEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEEE8u;
        // 0x2feeec: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEEE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2feee8:
    ctx->pc = 0x2FEEF0u;
}
