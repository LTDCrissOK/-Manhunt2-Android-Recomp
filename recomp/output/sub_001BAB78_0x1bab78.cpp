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

// Function: sub_001BAB78
// Address: 0x1bab78 - 0x1baf10
void sub_001BAB78_0x1bab78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BAB78_0x1bab78");
#endif

    switch (ctx->pc) {
        case 0x1bab78u: goto label_1bab78;
        case 0x1bab7cu: goto label_1bab7c;
        case 0x1bab80u: goto label_1bab80;
        case 0x1bab84u: goto label_1bab84;
        case 0x1bab88u: goto label_1bab88;
        case 0x1bab8cu: goto label_1bab8c;
        case 0x1bab90u: goto label_1bab90;
        case 0x1bab94u: goto label_1bab94;
        case 0x1bab98u: goto label_1bab98;
        case 0x1bab9cu: goto label_1bab9c;
        case 0x1baba0u: goto label_1baba0;
        case 0x1baba4u: goto label_1baba4;
        case 0x1baba8u: goto label_1baba8;
        case 0x1babacu: goto label_1babac;
        case 0x1babb0u: goto label_1babb0;
        case 0x1babb4u: goto label_1babb4;
        case 0x1babb8u: goto label_1babb8;
        case 0x1babbcu: goto label_1babbc;
        case 0x1babc0u: goto label_1babc0;
        case 0x1babc4u: goto label_1babc4;
        case 0x1babc8u: goto label_1babc8;
        case 0x1babccu: goto label_1babcc;
        case 0x1babd0u: goto label_1babd0;
        case 0x1babd4u: goto label_1babd4;
        case 0x1babd8u: goto label_1babd8;
        case 0x1babdcu: goto label_1babdc;
        case 0x1babe0u: goto label_1babe0;
        case 0x1babe4u: goto label_1babe4;
        case 0x1babe8u: goto label_1babe8;
        case 0x1babecu: goto label_1babec;
        case 0x1babf0u: goto label_1babf0;
        case 0x1babf4u: goto label_1babf4;
        case 0x1babf8u: goto label_1babf8;
        case 0x1babfcu: goto label_1babfc;
        case 0x1bac00u: goto label_1bac00;
        case 0x1bac04u: goto label_1bac04;
        case 0x1bac08u: goto label_1bac08;
        case 0x1bac0cu: goto label_1bac0c;
        case 0x1bac10u: goto label_1bac10;
        case 0x1bac14u: goto label_1bac14;
        case 0x1bac18u: goto label_1bac18;
        case 0x1bac1cu: goto label_1bac1c;
        case 0x1bac20u: goto label_1bac20;
        case 0x1bac24u: goto label_1bac24;
        case 0x1bac28u: goto label_1bac28;
        case 0x1bac2cu: goto label_1bac2c;
        case 0x1bac30u: goto label_1bac30;
        case 0x1bac34u: goto label_1bac34;
        case 0x1bac38u: goto label_1bac38;
        case 0x1bac3cu: goto label_1bac3c;
        case 0x1bac40u: goto label_1bac40;
        case 0x1bac44u: goto label_1bac44;
        case 0x1bac48u: goto label_1bac48;
        case 0x1bac4cu: goto label_1bac4c;
        case 0x1bac50u: goto label_1bac50;
        case 0x1bac54u: goto label_1bac54;
        case 0x1bac58u: goto label_1bac58;
        case 0x1bac5cu: goto label_1bac5c;
        case 0x1bac60u: goto label_1bac60;
        case 0x1bac64u: goto label_1bac64;
        case 0x1bac68u: goto label_1bac68;
        case 0x1bac6cu: goto label_1bac6c;
        case 0x1bac70u: goto label_1bac70;
        case 0x1bac74u: goto label_1bac74;
        case 0x1bac78u: goto label_1bac78;
        case 0x1bac7cu: goto label_1bac7c;
        case 0x1bac80u: goto label_1bac80;
        case 0x1bac84u: goto label_1bac84;
        case 0x1bac88u: goto label_1bac88;
        case 0x1bac8cu: goto label_1bac8c;
        case 0x1bac90u: goto label_1bac90;
        case 0x1bac94u: goto label_1bac94;
        case 0x1bac98u: goto label_1bac98;
        case 0x1bac9cu: goto label_1bac9c;
        case 0x1baca0u: goto label_1baca0;
        case 0x1baca4u: goto label_1baca4;
        case 0x1baca8u: goto label_1baca8;
        case 0x1bacacu: goto label_1bacac;
        case 0x1bacb0u: goto label_1bacb0;
        case 0x1bacb4u: goto label_1bacb4;
        case 0x1bacb8u: goto label_1bacb8;
        case 0x1bacbcu: goto label_1bacbc;
        case 0x1bacc0u: goto label_1bacc0;
        case 0x1bacc4u: goto label_1bacc4;
        case 0x1bacc8u: goto label_1bacc8;
        case 0x1bacccu: goto label_1baccc;
        case 0x1bacd0u: goto label_1bacd0;
        case 0x1bacd4u: goto label_1bacd4;
        case 0x1bacd8u: goto label_1bacd8;
        case 0x1bacdcu: goto label_1bacdc;
        case 0x1bace0u: goto label_1bace0;
        case 0x1bace4u: goto label_1bace4;
        case 0x1bace8u: goto label_1bace8;
        case 0x1bacecu: goto label_1bacec;
        case 0x1bacf0u: goto label_1bacf0;
        case 0x1bacf4u: goto label_1bacf4;
        case 0x1bacf8u: goto label_1bacf8;
        case 0x1bacfcu: goto label_1bacfc;
        case 0x1bad00u: goto label_1bad00;
        case 0x1bad04u: goto label_1bad04;
        case 0x1bad08u: goto label_1bad08;
        case 0x1bad0cu: goto label_1bad0c;
        case 0x1bad10u: goto label_1bad10;
        case 0x1bad14u: goto label_1bad14;
        case 0x1bad18u: goto label_1bad18;
        case 0x1bad1cu: goto label_1bad1c;
        case 0x1bad20u: goto label_1bad20;
        case 0x1bad24u: goto label_1bad24;
        case 0x1bad28u: goto label_1bad28;
        case 0x1bad2cu: goto label_1bad2c;
        case 0x1bad30u: goto label_1bad30;
        case 0x1bad34u: goto label_1bad34;
        case 0x1bad38u: goto label_1bad38;
        case 0x1bad3cu: goto label_1bad3c;
        case 0x1bad40u: goto label_1bad40;
        case 0x1bad44u: goto label_1bad44;
        case 0x1bad48u: goto label_1bad48;
        case 0x1bad4cu: goto label_1bad4c;
        case 0x1bad50u: goto label_1bad50;
        case 0x1bad54u: goto label_1bad54;
        case 0x1bad58u: goto label_1bad58;
        case 0x1bad5cu: goto label_1bad5c;
        case 0x1bad60u: goto label_1bad60;
        case 0x1bad64u: goto label_1bad64;
        case 0x1bad68u: goto label_1bad68;
        case 0x1bad6cu: goto label_1bad6c;
        case 0x1bad70u: goto label_1bad70;
        case 0x1bad74u: goto label_1bad74;
        case 0x1bad78u: goto label_1bad78;
        case 0x1bad7cu: goto label_1bad7c;
        case 0x1bad80u: goto label_1bad80;
        case 0x1bad84u: goto label_1bad84;
        case 0x1bad88u: goto label_1bad88;
        case 0x1bad8cu: goto label_1bad8c;
        case 0x1bad90u: goto label_1bad90;
        case 0x1bad94u: goto label_1bad94;
        case 0x1bad98u: goto label_1bad98;
        case 0x1bad9cu: goto label_1bad9c;
        case 0x1bada0u: goto label_1bada0;
        case 0x1bada4u: goto label_1bada4;
        case 0x1bada8u: goto label_1bada8;
        case 0x1badacu: goto label_1badac;
        case 0x1badb0u: goto label_1badb0;
        case 0x1badb4u: goto label_1badb4;
        case 0x1badb8u: goto label_1badb8;
        case 0x1badbcu: goto label_1badbc;
        case 0x1badc0u: goto label_1badc0;
        case 0x1badc4u: goto label_1badc4;
        case 0x1badc8u: goto label_1badc8;
        case 0x1badccu: goto label_1badcc;
        case 0x1badd0u: goto label_1badd0;
        case 0x1badd4u: goto label_1badd4;
        case 0x1badd8u: goto label_1badd8;
        case 0x1baddcu: goto label_1baddc;
        case 0x1bade0u: goto label_1bade0;
        case 0x1bade4u: goto label_1bade4;
        case 0x1bade8u: goto label_1bade8;
        case 0x1badecu: goto label_1badec;
        case 0x1badf0u: goto label_1badf0;
        case 0x1badf4u: goto label_1badf4;
        case 0x1badf8u: goto label_1badf8;
        case 0x1badfcu: goto label_1badfc;
        case 0x1bae00u: goto label_1bae00;
        case 0x1bae04u: goto label_1bae04;
        case 0x1bae08u: goto label_1bae08;
        case 0x1bae0cu: goto label_1bae0c;
        case 0x1bae10u: goto label_1bae10;
        case 0x1bae14u: goto label_1bae14;
        case 0x1bae18u: goto label_1bae18;
        case 0x1bae1cu: goto label_1bae1c;
        case 0x1bae20u: goto label_1bae20;
        case 0x1bae24u: goto label_1bae24;
        case 0x1bae28u: goto label_1bae28;
        case 0x1bae2cu: goto label_1bae2c;
        case 0x1bae30u: goto label_1bae30;
        case 0x1bae34u: goto label_1bae34;
        case 0x1bae38u: goto label_1bae38;
        case 0x1bae3cu: goto label_1bae3c;
        case 0x1bae40u: goto label_1bae40;
        case 0x1bae44u: goto label_1bae44;
        case 0x1bae48u: goto label_1bae48;
        case 0x1bae4cu: goto label_1bae4c;
        case 0x1bae50u: goto label_1bae50;
        case 0x1bae54u: goto label_1bae54;
        case 0x1bae58u: goto label_1bae58;
        case 0x1bae5cu: goto label_1bae5c;
        case 0x1bae60u: goto label_1bae60;
        case 0x1bae64u: goto label_1bae64;
        case 0x1bae68u: goto label_1bae68;
        case 0x1bae6cu: goto label_1bae6c;
        case 0x1bae70u: goto label_1bae70;
        case 0x1bae74u: goto label_1bae74;
        case 0x1bae78u: goto label_1bae78;
        case 0x1bae7cu: goto label_1bae7c;
        case 0x1bae80u: goto label_1bae80;
        case 0x1bae84u: goto label_1bae84;
        case 0x1bae88u: goto label_1bae88;
        case 0x1bae8cu: goto label_1bae8c;
        case 0x1bae90u: goto label_1bae90;
        case 0x1bae94u: goto label_1bae94;
        case 0x1bae98u: goto label_1bae98;
        case 0x1bae9cu: goto label_1bae9c;
        case 0x1baea0u: goto label_1baea0;
        case 0x1baea4u: goto label_1baea4;
        case 0x1baea8u: goto label_1baea8;
        case 0x1baeacu: goto label_1baeac;
        case 0x1baeb0u: goto label_1baeb0;
        case 0x1baeb4u: goto label_1baeb4;
        case 0x1baeb8u: goto label_1baeb8;
        case 0x1baebcu: goto label_1baebc;
        case 0x1baec0u: goto label_1baec0;
        case 0x1baec4u: goto label_1baec4;
        case 0x1baec8u: goto label_1baec8;
        case 0x1baeccu: goto label_1baecc;
        case 0x1baed0u: goto label_1baed0;
        case 0x1baed4u: goto label_1baed4;
        case 0x1baed8u: goto label_1baed8;
        case 0x1baedcu: goto label_1baedc;
        case 0x1baee0u: goto label_1baee0;
        case 0x1baee4u: goto label_1baee4;
        case 0x1baee8u: goto label_1baee8;
        case 0x1baeecu: goto label_1baeec;
        case 0x1baef0u: goto label_1baef0;
        case 0x1baef4u: goto label_1baef4;
        case 0x1baef8u: goto label_1baef8;
        case 0x1baefcu: goto label_1baefc;
        case 0x1baf00u: goto label_1baf00;
        case 0x1baf04u: goto label_1baf04;
        case 0x1baf08u: goto label_1baf08;
        case 0x1baf0cu: goto label_1baf0c;
        default: break;
    }

    ctx->pc = 0x1bab78u;

label_1bab78:
    // 0x1bab78: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1bab78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1bab7c:
    // 0x1bab7c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1bab7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_1bab80:
    // 0x1bab80: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x1bab80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
label_1bab84:
    // 0x1bab84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bab84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bab88:
    // 0x1bab88: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1bab88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_1bab8c:
    // 0x1bab8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bab8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1bab90:
    // 0x1bab90: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x1bab90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
label_1bab94:
    // 0x1bab94: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x1bab94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_1bab98:
    // 0x1bab98: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x1bab98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
label_1bab9c:
    // 0x1bab9c: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1bab9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1baba0:
    // 0x1baba0: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1baba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_1baba4:
    // 0x1baba4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1baba8:
    if (ctx->pc == 0x1BABA8u) {
        ctx->pc = 0x1BABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BABA4u;
        // 0x1baba8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BABACu;
        goto label_1babac;
    }
    ctx->pc = 0x1BABA4u;
    {
        const bool branch_taken_0x1baba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BABA4u;
        // 0x1baba8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baba4) {
            ctx->pc = 0x1BABC0u;
            goto label_1babc0;
        }
    }
    ctx->pc = 0x1BABACu;
label_1babac:
    // 0x1babac: 0xc06edee  jal         func_1BB7B8
label_1babb0:
    if (ctx->pc == 0x1BABB0u) {
        ctx->pc = 0x1BABB4u;
        goto label_1babb4;
    }
    ctx->pc = 0x1BABACu;
    SET_GPR_U32(ctx, 31, 0x1BABB4u);
    ctx->pc = 0x1BB7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB7B8u, 0x1BABACu, 0x1BABB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BABB4u;
label_1babb4:
    // 0x1babb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1babb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1babb8:
    // 0x1babb8: 0x100000cb  b           . + 4 + (0xCB << 2)
label_1babbc:
    if (ctx->pc == 0x1BABBCu) {
        ctx->pc = 0x1BABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BABB8u;
        // 0x1babbc: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BABC0u;
        goto label_1babc0;
    }
    ctx->pc = 0x1BABB8u;
    {
        const bool branch_taken_0x1babb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BABB8u;
        // 0x1babbc: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1babb8) {
            ctx->pc = 0x1BAEE8u;
            goto label_1baee8;
        }
    }
    ctx->pc = 0x1BABC0u;
label_1babc0:
    // 0x1babc0: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x1babc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1babc4:
    // 0x1babc4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1babc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_1babc8:
    // 0x1babc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1babc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1babcc:
    // 0x1babcc: 0x0  nop
    ctx->pc = 0x1babccu;
    // NOP
label_1babd0:
    // 0x1babd0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1babd0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1babd4:
    // 0x1babd4: 0x0  nop
    ctx->pc = 0x1babd4u;
    // NOP
label_1babd8:
    // 0x1babd8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1babdc:
    if (ctx->pc == 0x1BABDCu) {
        ctx->pc = 0x1BABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BABD8u;
        // 0x1babdc: 0xc6140024  lwc1        $f20, 0x24($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BABE0u;
        goto label_1babe0;
    }
    ctx->pc = 0x1BABD8u;
    {
        const bool branch_taken_0x1babd8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BABD8u;
        // 0x1babdc: 0xc6140024  lwc1        $f20, 0x24($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1babd8) {
            ctx->pc = 0x1BABE4u;
            goto label_1babe4;
        }
    }
    ctx->pc = 0x1BABE0u;
label_1babe0:
    // 0x1babe0: 0xe6010024  swc1        $f1, 0x24($s0)
    ctx->pc = 0x1babe0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_1babe4:
    // 0x1babe4: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x1babe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_1babe8:
    // 0x1babe8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_1babec:
    if (ctx->pc == 0x1BABECu) {
        ctx->pc = 0x1BABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BABE8u;
        // 0x1babec: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BABF0u;
        goto label_1babf0;
    }
    ctx->pc = 0x1BABE8u;
    {
        const bool branch_taken_0x1babe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1babe8) {
            ctx->pc = 0x1BABECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BABE8u;
            // 0x1babec: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BAC14u;
            goto label_1bac14;
        }
    }
    ctx->pc = 0x1BABF0u;
label_1babf0:
    // 0x1babf0: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1babf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1babf4:
    // 0x1babf4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1babf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1babf8:
    // 0x1babf8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1babf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1babfc:
    // 0x1babfc: 0x0  nop
    ctx->pc = 0x1babfcu;
    // NOP
label_1bac00:
    // 0x1bac00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bac00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bac04:
    // 0x1bac04: 0x0  nop
    ctx->pc = 0x1bac04u;
    // NOP
label_1bac08:
    // 0x1bac08: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1bac0c:
    if (ctx->pc == 0x1BAC0Cu) {
        ctx->pc = 0x1BAC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC08u;
        // 0x1bac0c: 0xe6010024  swc1        $f1, 0x24($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAC10u;
        goto label_1bac10;
    }
    ctx->pc = 0x1BAC08u;
    {
        const bool branch_taken_0x1bac08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bac08) {
            ctx->pc = 0x1BAC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BAC08u;
            // 0x1bac0c: 0xe6010024  swc1        $f1, 0x24($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BAC10u;
            goto label_1bac10;
        }
    }
    ctx->pc = 0x1BAC10u;
label_1bac10:
    // 0x1bac10: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1bac10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1bac14:
    // 0x1bac14: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1bac14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
label_1bac18:
    // 0x1bac18: 0x104000ae  beqz        $v0, . + 4 + (0xAE << 2)
label_1bac1c:
    if (ctx->pc == 0x1BAC1Cu) {
        ctx->pc = 0x1BAC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC18u;
        // 0x1bac1c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAC20u;
        goto label_1bac20;
    }
    ctx->pc = 0x1BAC18u;
    {
        const bool branch_taken_0x1bac18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC18u;
        // 0x1bac1c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bac18) {
            ctx->pc = 0x1BAED4u;
            goto label_1baed4;
        }
    }
    ctx->pc = 0x1BAC20u;
label_1bac20:
    // 0x1bac20: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1bac20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1bac24:
    // 0x1bac24: 0x24531380  addiu       $s3, $v0, 0x1380
    ctx->pc = 0x1bac24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
label_1bac28:
    // 0x1bac28: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1bac28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bac2c:
    // 0x1bac2c: 0xc0f6a96  jal         func_3DAA58
label_1bac30:
    if (ctx->pc == 0x1BAC30u) {
        ctx->pc = 0x1BAC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC2Cu;
        // 0x1bac30: 0xafb30044  sw          $s3, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAC34u;
        goto label_1bac34;
    }
    ctx->pc = 0x1BAC2Cu;
    SET_GPR_U32(ctx, 31, 0x1BAC34u);
    ctx->pc = 0x1BAC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAC2Cu;
    // 0x1bac30: 0xafb30044  sw          $s3, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BAC2Cu, 0x1BAC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAC34u;
label_1bac34:
    // 0x1bac34: 0xc0f6a96  jal         func_3DAA58
label_1bac38:
    if (ctx->pc == 0x1BAC38u) {
        ctx->pc = 0x1BAC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC34u;
        // 0x1bac38: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAC3Cu;
        goto label_1bac3c;
    }
    ctx->pc = 0x1BAC34u;
    SET_GPR_U32(ctx, 31, 0x1BAC3Cu);
    ctx->pc = 0x1BAC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAC34u;
    // 0x1bac38: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BAC34u, 0x1BAC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAC3Cu;
label_1bac3c:
    // 0x1bac3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bac3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bac40:
    // 0x1bac40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bac40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bac44:
    // 0x1bac44: 0xc06fc2a  jal         func_1BF0A8
label_1bac48:
    if (ctx->pc == 0x1BAC48u) {
        ctx->pc = 0x1BAC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC44u;
        // 0x1bac48: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAC4Cu;
        goto label_1bac4c;
    }
    ctx->pc = 0x1BAC44u;
    SET_GPR_U32(ctx, 31, 0x1BAC4Cu);
    ctx->pc = 0x1BAC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAC44u;
    // 0x1bac48: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF0A8u, 0x1BAC44u, 0x1BAC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAC4Cu;
label_1bac4c:
    // 0x1bac4c: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x1bac4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_1bac50:
    // 0x1bac50: 0x8c510fe8  lw          $s1, 0xFE8($v0)
    ctx->pc = 0x1bac50u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4072)));
label_1bac54:
    // 0x1bac54: 0xc070116  jal         func_1C0458
label_1bac58:
    if (ctx->pc == 0x1BAC58u) {
        ctx->pc = 0x1BAC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC54u;
        // 0x1bac58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAC5Cu;
        goto label_1bac5c;
    }
    ctx->pc = 0x1BAC54u;
    SET_GPR_U32(ctx, 31, 0x1BAC5Cu);
    ctx->pc = 0x1BAC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAC54u;
    // 0x1bac58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0458u, 0x1BAC54u, 0x1BAC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAC5Cu;
label_1bac5c:
    // 0x1bac5c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_1bac60:
    if (ctx->pc == 0x1BAC60u) {
        ctx->pc = 0x1BAC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC5Cu;
        // 0x1bac60: 0xc6010030  lwc1        $f1, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAC64u;
        goto label_1bac64;
    }
    ctx->pc = 0x1BAC5Cu;
    {
        const bool branch_taken_0x1bac5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bac5c) {
            ctx->pc = 0x1BAC60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BAC5Cu;
            // 0x1bac60: 0xc6010030  lwc1        $f1, 0x30($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BAC78u;
            goto label_1bac78;
        }
    }
    ctx->pc = 0x1BAC64u;
label_1bac64:
    // 0x1bac64: 0xc06edee  jal         func_1BB7B8
label_1bac68:
    if (ctx->pc == 0x1BAC68u) {
        ctx->pc = 0x1BAC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC64u;
        // 0x1bac68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAC6Cu;
        goto label_1bac6c;
    }
    ctx->pc = 0x1BAC64u;
    SET_GPR_U32(ctx, 31, 0x1BAC6Cu);
    ctx->pc = 0x1BAC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAC64u;
    // 0x1bac68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB7B8u, 0x1BAC64u, 0x1BAC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAC6Cu;
label_1bac6c:
    // 0x1bac6c: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x1bac6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bac70:
    // 0x1bac70: 0x1000009c  b           . + 4 + (0x9C << 2)
label_1bac74:
    if (ctx->pc == 0x1BAC74u) {
        ctx->pc = 0x1BAC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC70u;
        // 0x1bac74: 0xafb30044  sw          $s3, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAC78u;
        goto label_1bac78;
    }
    ctx->pc = 0x1BAC70u;
    {
        const bool branch_taken_0x1bac70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC70u;
        // 0x1bac74: 0xafb30044  sw          $s3, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bac70) {
            ctx->pc = 0x1BAEE4u;
            goto label_1baee4;
        }
    }
    ctx->pc = 0x1BAC78u;
label_1bac78:
    // 0x1bac78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1bac78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bac7c:
    // 0x1bac7c: 0x0  nop
    ctx->pc = 0x1bac7cu;
    // NOP
label_1bac80:
    // 0x1bac80: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1bac80u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bac84:
    // 0x1bac84: 0x0  nop
    ctx->pc = 0x1bac84u;
    // NOP
label_1bac88:
    // 0x1bac88: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1bac8c:
    if (ctx->pc == 0x1BAC8Cu) {
        ctx->pc = 0x1BAC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC88u;
        // 0x1bac8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAC90u;
        goto label_1bac90;
    }
    ctx->pc = 0x1BAC88u;
    {
        const bool branch_taken_0x1bac88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BAC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC88u;
        // 0x1bac8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bac88) {
            ctx->pc = 0x1BAC94u;
            goto label_1bac94;
        }
    }
    ctx->pc = 0x1BAC90u;
label_1bac90:
    // 0x1bac90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bac90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bac94:
    // 0x1bac94: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_1bac98:
    if (ctx->pc == 0x1BAC98u) {
        ctx->pc = 0x1BAC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC94u;
        // 0x1bac98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAC9Cu;
        goto label_1bac9c;
    }
    ctx->pc = 0x1BAC94u;
    {
        const bool branch_taken_0x1bac94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC94u;
        // 0x1bac98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bac94) {
            ctx->pc = 0x1BAD30u;
            goto label_1bad30;
        }
    }
    ctx->pc = 0x1BAC9Cu;
label_1bac9c:
    // 0x1bac9c: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1bac9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1baca0:
    // 0x1baca0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1baca4:
    if (ctx->pc == 0x1BACA4u) {
        ctx->pc = 0x1BACA8u;
        goto label_1baca8;
    }
    ctx->pc = 0x1BACA0u;
    {
        const bool branch_taken_0x1baca0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1baca0) {
            ctx->pc = 0x1BACBCu;
            goto label_1bacbc;
        }
    }
    ctx->pc = 0x1BACA8u;
label_1baca8:
    // 0x1baca8: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x1baca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1bacac:
    // 0x1bacac: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x1bacacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_1bacb0:
    // 0x1bacb0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1bacb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_1bacb4:
    // 0x1bacb4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1bacb8:
    if (ctx->pc == 0x1BACB8u) {
        ctx->pc = 0x1BACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BACB4u;
        // 0x1bacb8: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BACBCu;
        goto label_1bacbc;
    }
    ctx->pc = 0x1BACB4u;
    {
        const bool branch_taken_0x1bacb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BACB4u;
        // 0x1bacb8: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bacb4) {
            ctx->pc = 0x1BACE0u;
            goto label_1bace0;
        }
    }
    ctx->pc = 0x1BACBCu;
label_1bacbc:
    // 0x1bacbc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1bacc0:
    if (ctx->pc == 0x1BACC0u) {
        ctx->pc = 0x1BACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BACBCu;
        // 0x1bacc0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BACC4u;
        goto label_1bacc4;
    }
    ctx->pc = 0x1BACBCu;
    {
        const bool branch_taken_0x1bacbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BACBCu;
        // 0x1bacc0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bacbc) {
            ctx->pc = 0x1BACD8u;
            goto label_1bacd8;
        }
    }
    ctx->pc = 0x1BACC4u;
label_1bacc4:
    // 0x1bacc4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1bacc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1bacc8:
    // 0x1bacc8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1baccc:
    if (ctx->pc == 0x1BACCCu) {
        ctx->pc = 0x1BACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BACC8u;
        // 0x1baccc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BACD0u;
        goto label_1bacd0;
    }
    ctx->pc = 0x1BACC8u;
    {
        const bool branch_taken_0x1bacc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BACC8u;
        // 0x1baccc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bacc8) {
            ctx->pc = 0x1BACD8u;
            goto label_1bacd8;
        }
    }
    ctx->pc = 0x1BACD0u;
label_1bacd0:
    // 0x1bacd0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1bacd4:
    if (ctx->pc == 0x1BACD4u) {
        ctx->pc = 0x1BACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BACD0u;
        // 0x1bacd4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BACD8u;
        goto label_1bacd8;
    }
    ctx->pc = 0x1BACD0u;
    {
        const bool branch_taken_0x1bacd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BACD0u;
        // 0x1bacd4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bacd0) {
            ctx->pc = 0x1BACE0u;
            goto label_1bace0;
        }
    }
    ctx->pc = 0x1BACD8u;
label_1bacd8:
    // 0x1bacd8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bacd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bacdc:
    // 0x1bacdc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1bacdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bace0:
    // 0x1bace0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1bace4:
    if (ctx->pc == 0x1BACE4u) {
        ctx->pc = 0x1BACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BACE0u;
        // 0x1bace4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BACE8u;
        goto label_1bace8;
    }
    ctx->pc = 0x1BACE0u;
    {
        const bool branch_taken_0x1bace0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BACE0u;
        // 0x1bace4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bace0) {
            ctx->pc = 0x1BAD10u;
            goto label_1bad10;
        }
    }
    ctx->pc = 0x1BACE8u;
label_1bace8:
    // 0x1bace8: 0x8e230394  lw          $v1, 0x394($s1)
    ctx->pc = 0x1bace8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 916)));
label_1bacec:
    // 0x1bacec: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1bacecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1bacf0:
    // 0x1bacf0: 0x40f809  jalr        $v0
label_1bacf4:
    if (ctx->pc == 0x1BACF4u) {
        ctx->pc = 0x1BACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BACF0u;
        // 0x1bacf4: 0xc60c0054  lwc1        $f12, 0x54($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BACF8u;
        goto label_1bacf8;
    }
    ctx->pc = 0x1BACF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BACF8u);
        ctx->pc = 0x1BACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BACF0u;
        // 0x1bacf4: 0xc60c0054  lwc1        $f12, 0x54($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BACF0u, 0x1BACF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BACF8u;
label_1bacf8:
    // 0x1bacf8: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_1bacfc:
    if (ctx->pc == 0x1BACFCu) {
        ctx->pc = 0x1BACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BACF8u;
        // 0x1bacfc: 0xc6010030  lwc1        $f1, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAD00u;
        goto label_1bad00;
    }
    ctx->pc = 0x1BACF8u;
    {
        const bool branch_taken_0x1bacf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bacf8) {
            ctx->pc = 0x1BACFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BACF8u;
            // 0x1bacfc: 0xc6010030  lwc1        $f1, 0x30($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BAD34u;
            goto label_1bad34;
        }
    }
    ctx->pc = 0x1BAD00u;
label_1bad00:
    // 0x1bad00: 0xc06ede2  jal         func_1BB788
label_1bad04:
    if (ctx->pc == 0x1BAD04u) {
        ctx->pc = 0x1BAD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD00u;
        // 0x1bad04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAD08u;
        goto label_1bad08;
    }
    ctx->pc = 0x1BAD00u;
    SET_GPR_U32(ctx, 31, 0x1BAD08u);
    ctx->pc = 0x1BAD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAD00u;
    // 0x1bad04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB788u, 0x1BAD00u, 0x1BAD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAD08u;
label_1bad08:
    // 0x1bad08: 0x1000000a  b           . + 4 + (0xA << 2)
label_1bad0c:
    if (ctx->pc == 0x1BAD0Cu) {
        ctx->pc = 0x1BAD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD08u;
        // 0x1bad0c: 0xc6010030  lwc1        $f1, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAD10u;
        goto label_1bad10;
    }
    ctx->pc = 0x1BAD08u;
    {
        const bool branch_taken_0x1bad08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD08u;
        // 0x1bad0c: 0xc6010030  lwc1        $f1, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bad08) {
            ctx->pc = 0x1BAD34u;
            goto label_1bad34;
        }
    }
    ctx->pc = 0x1BAD10u;
label_1bad10:
    // 0x1bad10: 0x8e230394  lw          $v1, 0x394($s1)
    ctx->pc = 0x1bad10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 916)));
label_1bad14:
    // 0x1bad14: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1bad14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1bad18:
    // 0x1bad18: 0x40f809  jalr        $v0
label_1bad1c:
    if (ctx->pc == 0x1BAD1Cu) {
        ctx->pc = 0x1BAD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD18u;
        // 0x1bad1c: 0xc60c0048  lwc1        $f12, 0x48($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAD20u;
        goto label_1bad20;
    }
    ctx->pc = 0x1BAD18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BAD20u);
        ctx->pc = 0x1BAD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD18u;
        // 0x1bad1c: 0xc60c0048  lwc1        $f12, 0x48($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAD18u, 0x1BAD20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BAD20u;
label_1bad20:
    // 0x1bad20: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_1bad24:
    if (ctx->pc == 0x1BAD24u) {
        ctx->pc = 0x1BAD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD20u;
        // 0x1bad24: 0xc6010030  lwc1        $f1, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAD28u;
        goto label_1bad28;
    }
    ctx->pc = 0x1BAD20u;
    {
        const bool branch_taken_0x1bad20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bad20) {
            ctx->pc = 0x1BAD24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BAD20u;
            // 0x1bad24: 0xc6010030  lwc1        $f1, 0x30($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BAD34u;
            goto label_1bad34;
        }
    }
    ctx->pc = 0x1BAD28u;
label_1bad28:
    // 0x1bad28: 0xc06ede2  jal         func_1BB788
label_1bad2c:
    if (ctx->pc == 0x1BAD2Cu) {
        ctx->pc = 0x1BAD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD28u;
        // 0x1bad2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAD30u;
        goto label_1bad30;
    }
    ctx->pc = 0x1BAD28u;
    SET_GPR_U32(ctx, 31, 0x1BAD30u);
    ctx->pc = 0x1BAD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAD28u;
    // 0x1bad2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB788u, 0x1BAD28u, 0x1BAD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAD30u;
label_1bad30:
    // 0x1bad30: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x1bad30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bad34:
    // 0x1bad34: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1bad34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1bad38:
    // 0x1bad38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bad38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bad3c:
    // 0x1bad3c: 0x0  nop
    ctx->pc = 0x1bad3cu;
    // NOP
label_1bad40:
    // 0x1bad40: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1bad40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bad44:
    // 0x1bad44: 0x0  nop
    ctx->pc = 0x1bad44u;
    // NOP
label_1bad48:
    // 0x1bad48: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1bad4c:
    if (ctx->pc == 0x1BAD4Cu) {
        ctx->pc = 0x1BAD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD48u;
        // 0x1bad4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAD50u;
        goto label_1bad50;
    }
    ctx->pc = 0x1BAD48u;
    {
        const bool branch_taken_0x1bad48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BAD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD48u;
        // 0x1bad4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bad48) {
            ctx->pc = 0x1BAD54u;
            goto label_1bad54;
        }
    }
    ctx->pc = 0x1BAD50u;
label_1bad50:
    // 0x1bad50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bad50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bad54:
    // 0x1bad54: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_1bad58:
    if (ctx->pc == 0x1BAD58u) {
        ctx->pc = 0x1BAD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD54u;
        // 0x1bad58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAD5Cu;
        goto label_1bad5c;
    }
    ctx->pc = 0x1BAD54u;
    {
        const bool branch_taken_0x1bad54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD54u;
        // 0x1bad58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bad54) {
            ctx->pc = 0x1BAE40u;
            goto label_1bae40;
        }
    }
    ctx->pc = 0x1BAD5Cu;
label_1bad5c:
    // 0x1bad5c: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1bad5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1bad60:
    // 0x1bad60: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1bad64:
    if (ctx->pc == 0x1BAD64u) {
        ctx->pc = 0x1BAD68u;
        goto label_1bad68;
    }
    ctx->pc = 0x1BAD60u;
    {
        const bool branch_taken_0x1bad60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bad60) {
            ctx->pc = 0x1BAD7Cu;
            goto label_1bad7c;
        }
    }
    ctx->pc = 0x1BAD68u;
label_1bad68:
    // 0x1bad68: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x1bad68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1bad6c:
    // 0x1bad6c: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x1bad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_1bad70:
    // 0x1bad70: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1bad70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_1bad74:
    // 0x1bad74: 0x1000000a  b           . + 4 + (0xA << 2)
label_1bad78:
    if (ctx->pc == 0x1BAD78u) {
        ctx->pc = 0x1BAD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD74u;
        // 0x1bad78: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAD7Cu;
        goto label_1bad7c;
    }
    ctx->pc = 0x1BAD74u;
    {
        const bool branch_taken_0x1bad74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD74u;
        // 0x1bad78: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bad74) {
            ctx->pc = 0x1BADA0u;
            goto label_1bada0;
        }
    }
    ctx->pc = 0x1BAD7Cu;
label_1bad7c:
    // 0x1bad7c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1bad80:
    if (ctx->pc == 0x1BAD80u) {
        ctx->pc = 0x1BAD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD7Cu;
        // 0x1bad80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAD84u;
        goto label_1bad84;
    }
    ctx->pc = 0x1BAD7Cu;
    {
        const bool branch_taken_0x1bad7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD7Cu;
        // 0x1bad80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bad7c) {
            ctx->pc = 0x1BAD98u;
            goto label_1bad98;
        }
    }
    ctx->pc = 0x1BAD84u;
label_1bad84:
    // 0x1bad84: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1bad84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1bad88:
    // 0x1bad88: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1bad8c:
    if (ctx->pc == 0x1BAD8Cu) {
        ctx->pc = 0x1BAD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD88u;
        // 0x1bad8c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAD90u;
        goto label_1bad90;
    }
    ctx->pc = 0x1BAD88u;
    {
        const bool branch_taken_0x1bad88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BAD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD88u;
        // 0x1bad8c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bad88) {
            ctx->pc = 0x1BAD98u;
            goto label_1bad98;
        }
    }
    ctx->pc = 0x1BAD90u;
label_1bad90:
    // 0x1bad90: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1bad94:
    if (ctx->pc == 0x1BAD94u) {
        ctx->pc = 0x1BAD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD90u;
        // 0x1bad94: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAD98u;
        goto label_1bad98;
    }
    ctx->pc = 0x1BAD90u;
    {
        const bool branch_taken_0x1bad90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BAD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD90u;
        // 0x1bad94: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bad90) {
            ctx->pc = 0x1BADA0u;
            goto label_1bada0;
        }
    }
    ctx->pc = 0x1BAD98u;
label_1bad98:
    // 0x1bad98: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bad98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bad9c:
    // 0x1bad9c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1bad9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1bada0:
    // 0x1bada0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1bada4:
    if (ctx->pc == 0x1BADA4u) {
        ctx->pc = 0x1BADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BADA0u;
        // 0x1bada4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BADA8u;
        goto label_1bada8;
    }
    ctx->pc = 0x1BADA0u;
    {
        const bool branch_taken_0x1bada0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BADA0u;
        // 0x1bada4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bada0) {
            ctx->pc = 0x1BADE8u;
            goto label_1bade8;
        }
    }
    ctx->pc = 0x1BADA8u;
label_1bada8:
    // 0x1bada8: 0x8e230394  lw          $v1, 0x394($s1)
    ctx->pc = 0x1bada8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 916)));
label_1badac:
    // 0x1badac: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1badacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1badb0:
    // 0x1badb0: 0x40f809  jalr        $v0
label_1badb4:
    if (ctx->pc == 0x1BADB4u) {
        ctx->pc = 0x1BADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BADB0u;
        // 0x1badb4: 0xc60c0058  lwc1        $f12, 0x58($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BADB8u;
        goto label_1badb8;
    }
    ctx->pc = 0x1BADB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BADB8u);
        ctx->pc = 0x1BADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BADB0u;
        // 0x1badb4: 0xc60c0058  lwc1        $f12, 0x58($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BADB0u, 0x1BADB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BADB8u;
label_1badb8:
    // 0x1badb8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1badbc:
    if (ctx->pc == 0x1BADBCu) {
        ctx->pc = 0x1BADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BADB8u;
        // 0x1badbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BADC0u;
        goto label_1badc0;
    }
    ctx->pc = 0x1BADB8u;
    {
        const bool branch_taken_0x1badb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BADB8u;
        // 0x1badbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1badb8) {
            ctx->pc = 0x1BAE00u;
            goto label_1bae00;
        }
    }
    ctx->pc = 0x1BADC0u;
label_1badc0:
    // 0x1badc0: 0x8e230394  lw          $v1, 0x394($s1)
    ctx->pc = 0x1badc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 916)));
label_1badc4:
    // 0x1badc4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1badc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1badc8:
    // 0x1badc8: 0x40f809  jalr        $v0
label_1badcc:
    if (ctx->pc == 0x1BADCCu) {
        ctx->pc = 0x1BADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BADC8u;
        // 0x1badcc: 0xc60c0048  lwc1        $f12, 0x48($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BADD0u;
        goto label_1badd0;
    }
    ctx->pc = 0x1BADC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BADD0u);
        ctx->pc = 0x1BADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BADC8u;
        // 0x1badcc: 0xc60c0048  lwc1        $f12, 0x48($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BADC8u, 0x1BADD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BADD0u;
label_1badd0:
    // 0x1badd0: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_1badd4:
    if (ctx->pc == 0x1BADD4u) {
        ctx->pc = 0x1BADD8u;
        goto label_1badd8;
    }
    ctx->pc = 0x1BADD0u;
    {
        const bool branch_taken_0x1badd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1badd0) {
            ctx->pc = 0x1BAE28u;
            goto label_1bae28;
        }
    }
    ctx->pc = 0x1BADD8u;
label_1badd8:
    // 0x1badd8: 0xc06ede2  jal         func_1BB788
label_1baddc:
    if (ctx->pc == 0x1BADDCu) {
        ctx->pc = 0x1BADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BADD8u;
        // 0x1baddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BADE0u;
        goto label_1bade0;
    }
    ctx->pc = 0x1BADD8u;
    SET_GPR_U32(ctx, 31, 0x1BADE0u);
    ctx->pc = 0x1BADDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BADD8u;
    // 0x1baddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB788u, 0x1BADD8u, 0x1BADE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BADE0u;
label_1bade0:
    // 0x1bade0: 0x10000018  b           . + 4 + (0x18 << 2)
label_1bade4:
    if (ctx->pc == 0x1BADE4u) {
        ctx->pc = 0x1BADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BADE0u;
        // 0x1bade4: 0xc6010030  lwc1        $f1, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BADE8u;
        goto label_1bade8;
    }
    ctx->pc = 0x1BADE0u;
    {
        const bool branch_taken_0x1bade0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BADE0u;
        // 0x1bade4: 0xc6010030  lwc1        $f1, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bade0) {
            ctx->pc = 0x1BAE44u;
            goto label_1bae44;
        }
    }
    ctx->pc = 0x1BADE8u;
label_1bade8:
    // 0x1bade8: 0x8e230394  lw          $v1, 0x394($s1)
    ctx->pc = 0x1bade8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 916)));
label_1badec:
    // 0x1badec: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1badecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1badf0:
    // 0x1badf0: 0x40f809  jalr        $v0
label_1badf4:
    if (ctx->pc == 0x1BADF4u) {
        ctx->pc = 0x1BADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BADF0u;
        // 0x1badf4: 0xc60c0058  lwc1        $f12, 0x58($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BADF8u;
        goto label_1badf8;
    }
    ctx->pc = 0x1BADF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BADF8u);
        ctx->pc = 0x1BADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BADF0u;
        // 0x1badf4: 0xc60c0058  lwc1        $f12, 0x58($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BADF0u, 0x1BADF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BADF8u;
label_1badf8:
    // 0x1badf8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1badfc:
    if (ctx->pc == 0x1BADFCu) {
        ctx->pc = 0x1BADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BADF8u;
        // 0x1badfc: 0x8e230394  lw          $v1, 0x394($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 916)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAE00u;
        goto label_1bae00;
    }
    ctx->pc = 0x1BADF8u;
    {
        const bool branch_taken_0x1badf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1badf8) {
            ctx->pc = 0x1BADFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BADF8u;
            // 0x1badfc: 0x8e230394  lw          $v1, 0x394($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 916)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BAE10u;
            goto label_1bae10;
        }
    }
    ctx->pc = 0x1BAE00u;
label_1bae00:
    // 0x1bae00: 0xc06edd6  jal         func_1BB758
label_1bae04:
    if (ctx->pc == 0x1BAE04u) {
        ctx->pc = 0x1BAE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE00u;
        // 0x1bae04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAE08u;
        goto label_1bae08;
    }
    ctx->pc = 0x1BAE00u;
    SET_GPR_U32(ctx, 31, 0x1BAE08u);
    ctx->pc = 0x1BAE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAE00u;
    // 0x1bae04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB758u, 0x1BAE00u, 0x1BAE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAE08u;
label_1bae08:
    // 0x1bae08: 0x1000000e  b           . + 4 + (0xE << 2)
label_1bae0c:
    if (ctx->pc == 0x1BAE0Cu) {
        ctx->pc = 0x1BAE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE08u;
        // 0x1bae0c: 0xc6010030  lwc1        $f1, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAE10u;
        goto label_1bae10;
    }
    ctx->pc = 0x1BAE08u;
    {
        const bool branch_taken_0x1bae08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE08u;
        // 0x1bae0c: 0xc6010030  lwc1        $f1, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bae08) {
            ctx->pc = 0x1BAE44u;
            goto label_1bae44;
        }
    }
    ctx->pc = 0x1BAE10u;
label_1bae10:
    // 0x1bae10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bae10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bae14:
    // 0x1bae14: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1bae14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1bae18:
    // 0x1bae18: 0x40f809  jalr        $v0
label_1bae1c:
    if (ctx->pc == 0x1BAE1Cu) {
        ctx->pc = 0x1BAE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE18u;
        // 0x1bae1c: 0xc60c0048  lwc1        $f12, 0x48($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAE20u;
        goto label_1bae20;
    }
    ctx->pc = 0x1BAE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BAE20u);
        ctx->pc = 0x1BAE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE18u;
        // 0x1bae1c: 0xc60c0048  lwc1        $f12, 0x48($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAE18u, 0x1BAE20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BAE20u;
label_1bae20:
    // 0x1bae20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1bae24:
    if (ctx->pc == 0x1BAE24u) {
        ctx->pc = 0x1BAE28u;
        goto label_1bae28;
    }
    ctx->pc = 0x1BAE20u;
    {
        const bool branch_taken_0x1bae20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bae20) {
            ctx->pc = 0x1BAE38u;
            goto label_1bae38;
        }
    }
    ctx->pc = 0x1BAE28u;
label_1bae28:
    // 0x1bae28: 0xc06edee  jal         func_1BB7B8
label_1bae2c:
    if (ctx->pc == 0x1BAE2Cu) {
        ctx->pc = 0x1BAE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE28u;
        // 0x1bae2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAE30u;
        goto label_1bae30;
    }
    ctx->pc = 0x1BAE28u;
    SET_GPR_U32(ctx, 31, 0x1BAE30u);
    ctx->pc = 0x1BAE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAE28u;
    // 0x1bae2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB7B8u, 0x1BAE28u, 0x1BAE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAE30u;
label_1bae30:
    // 0x1bae30: 0x10000004  b           . + 4 + (0x4 << 2)
label_1bae34:
    if (ctx->pc == 0x1BAE34u) {
        ctx->pc = 0x1BAE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE30u;
        // 0x1bae34: 0xc6010030  lwc1        $f1, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAE38u;
        goto label_1bae38;
    }
    ctx->pc = 0x1BAE30u;
    {
        const bool branch_taken_0x1bae30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE30u;
        // 0x1bae34: 0xc6010030  lwc1        $f1, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bae30) {
            ctx->pc = 0x1BAE44u;
            goto label_1bae44;
        }
    }
    ctx->pc = 0x1BAE38u;
label_1bae38:
    // 0x1bae38: 0xc06ede2  jal         func_1BB788
label_1bae3c:
    if (ctx->pc == 0x1BAE3Cu) {
        ctx->pc = 0x1BAE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE38u;
        // 0x1bae3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAE40u;
        goto label_1bae40;
    }
    ctx->pc = 0x1BAE38u;
    SET_GPR_U32(ctx, 31, 0x1BAE40u);
    ctx->pc = 0x1BAE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAE38u;
    // 0x1bae3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB788u, 0x1BAE38u, 0x1BAE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAE40u;
label_1bae40:
    // 0x1bae40: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x1bae40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bae44:
    // 0x1bae44: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1bae44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_1bae48:
    // 0x1bae48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bae48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bae4c:
    // 0x1bae4c: 0x0  nop
    ctx->pc = 0x1bae4cu;
    // NOP
label_1bae50:
    // 0x1bae50: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1bae50u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bae54:
    // 0x1bae54: 0x0  nop
    ctx->pc = 0x1bae54u;
    // NOP
label_1bae58:
    // 0x1bae58: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1bae5c:
    if (ctx->pc == 0x1BAE5Cu) {
        ctx->pc = 0x1BAE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE58u;
        // 0x1bae5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAE60u;
        goto label_1bae60;
    }
    ctx->pc = 0x1BAE58u;
    {
        const bool branch_taken_0x1bae58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BAE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE58u;
        // 0x1bae5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bae58) {
            ctx->pc = 0x1BAE64u;
            goto label_1bae64;
        }
    }
    ctx->pc = 0x1BAE60u;
label_1bae60:
    // 0x1bae60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bae60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bae64:
    // 0x1bae64: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1bae68:
    if (ctx->pc == 0x1BAE68u) {
        ctx->pc = 0x1BAE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE64u;
        // 0x1bae68: 0x26821380  addiu       $v0, $s4, 0x1380 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAE6Cu;
        goto label_1bae6c;
    }
    ctx->pc = 0x1BAE64u;
    {
        const bool branch_taken_0x1bae64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE64u;
        // 0x1bae68: 0x26821380  addiu       $v0, $s4, 0x1380 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bae64) {
            ctx->pc = 0x1BAECCu;
            goto label_1baecc;
        }
    }
    ctx->pc = 0x1BAE6Cu;
label_1bae6c:
    // 0x1bae6c: 0x8e230394  lw          $v1, 0x394($s1)
    ctx->pc = 0x1bae6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 916)));
label_1bae70:
    // 0x1bae70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bae70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bae74:
    // 0x1bae74: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1bae74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1bae78:
    // 0x1bae78: 0x40f809  jalr        $v0
label_1bae7c:
    if (ctx->pc == 0x1BAE7Cu) {
        ctx->pc = 0x1BAE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE78u;
        // 0x1bae7c: 0xc60c0048  lwc1        $f12, 0x48($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAE80u;
        goto label_1bae80;
    }
    ctx->pc = 0x1BAE78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BAE80u);
        ctx->pc = 0x1BAE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE78u;
        // 0x1bae7c: 0xc60c0048  lwc1        $f12, 0x48($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAE78u, 0x1BAE80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BAE80u;
label_1bae80:
    // 0x1bae80: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1bae84:
    if (ctx->pc == 0x1BAE84u) {
        ctx->pc = 0x1BAE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE80u;
        // 0x1bae84: 0x8e230394  lw          $v1, 0x394($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 916)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAE88u;
        goto label_1bae88;
    }
    ctx->pc = 0x1BAE80u;
    {
        const bool branch_taken_0x1bae80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bae80) {
            ctx->pc = 0x1BAE84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BAE80u;
            // 0x1bae84: 0x8e230394  lw          $v1, 0x394($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 916)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BAE98u;
            goto label_1bae98;
        }
    }
    ctx->pc = 0x1BAE88u;
label_1bae88:
    // 0x1bae88: 0xc06edee  jal         func_1BB7B8
label_1bae8c:
    if (ctx->pc == 0x1BAE8Cu) {
        ctx->pc = 0x1BAE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE88u;
        // 0x1bae8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAE90u;
        goto label_1bae90;
    }
    ctx->pc = 0x1BAE88u;
    SET_GPR_U32(ctx, 31, 0x1BAE90u);
    ctx->pc = 0x1BAE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAE88u;
    // 0x1bae8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB7B8u, 0x1BAE88u, 0x1BAE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAE90u;
label_1bae90:
    // 0x1bae90: 0x1000000e  b           . + 4 + (0xE << 2)
label_1bae94:
    if (ctx->pc == 0x1BAE94u) {
        ctx->pc = 0x1BAE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE90u;
        // 0x1bae94: 0x26821380  addiu       $v0, $s4, 0x1380 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAE98u;
        goto label_1bae98;
    }
    ctx->pc = 0x1BAE90u;
    {
        const bool branch_taken_0x1bae90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE90u;
        // 0x1bae94: 0x26821380  addiu       $v0, $s4, 0x1380 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bae90) {
            ctx->pc = 0x1BAECCu;
            goto label_1baecc;
        }
    }
    ctx->pc = 0x1BAE98u;
label_1bae98:
    // 0x1bae98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bae98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bae9c:
    // 0x1bae9c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1bae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1baea0:
    // 0x1baea0: 0x40f809  jalr        $v0
label_1baea4:
    if (ctx->pc == 0x1BAEA4u) {
        ctx->pc = 0x1BAEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAEA0u;
        // 0x1baea4: 0xc60c004c  lwc1        $f12, 0x4C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAEA8u;
        goto label_1baea8;
    }
    ctx->pc = 0x1BAEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BAEA8u);
        ctx->pc = 0x1BAEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAEA0u;
        // 0x1baea4: 0xc60c004c  lwc1        $f12, 0x4C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAEA0u, 0x1BAEA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BAEA8u;
label_1baea8:
    // 0x1baea8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1baeac:
    if (ctx->pc == 0x1BAEACu) {
        ctx->pc = 0x1BAEB0u;
        goto label_1baeb0;
    }
    ctx->pc = 0x1BAEA8u;
    {
        const bool branch_taken_0x1baea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1baea8) {
            ctx->pc = 0x1BAEC0u;
            goto label_1baec0;
        }
    }
    ctx->pc = 0x1BAEB0u;
label_1baeb0:
    // 0x1baeb0: 0xc06ede2  jal         func_1BB788
label_1baeb4:
    if (ctx->pc == 0x1BAEB4u) {
        ctx->pc = 0x1BAEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAEB0u;
        // 0x1baeb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAEB8u;
        goto label_1baeb8;
    }
    ctx->pc = 0x1BAEB0u;
    SET_GPR_U32(ctx, 31, 0x1BAEB8u);
    ctx->pc = 0x1BAEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAEB0u;
    // 0x1baeb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB788u, 0x1BAEB0u, 0x1BAEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAEB8u;
label_1baeb8:
    // 0x1baeb8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1baebc:
    if (ctx->pc == 0x1BAEBCu) {
        ctx->pc = 0x1BAEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAEB8u;
        // 0x1baebc: 0x26821380  addiu       $v0, $s4, 0x1380 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAEC0u;
        goto label_1baec0;
    }
    ctx->pc = 0x1BAEB8u;
    {
        const bool branch_taken_0x1baeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAEB8u;
        // 0x1baebc: 0x26821380  addiu       $v0, $s4, 0x1380 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baeb8) {
            ctx->pc = 0x1BAECCu;
            goto label_1baecc;
        }
    }
    ctx->pc = 0x1BAEC0u;
label_1baec0:
    // 0x1baec0: 0xc06edd6  jal         func_1BB758
label_1baec4:
    if (ctx->pc == 0x1BAEC4u) {
        ctx->pc = 0x1BAEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAEC0u;
        // 0x1baec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAEC8u;
        goto label_1baec8;
    }
    ctx->pc = 0x1BAEC0u;
    SET_GPR_U32(ctx, 31, 0x1BAEC8u);
    ctx->pc = 0x1BAEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAEC0u;
    // 0x1baec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB758u, 0x1BAEC0u, 0x1BAEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAEC8u;
label_1baec8:
    // 0x1baec8: 0x26821380  addiu       $v0, $s4, 0x1380
    ctx->pc = 0x1baec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4992));
label_1baecc:
    // 0x1baecc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1baed0:
    if (ctx->pc == 0x1BAED0u) {
        ctx->pc = 0x1BAED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAECCu;
        // 0x1baed0: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAED4u;
        goto label_1baed4;
    }
    ctx->pc = 0x1BAECCu;
    {
        const bool branch_taken_0x1baecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAECCu;
        // 0x1baed0: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baecc) {
            ctx->pc = 0x1BAEDCu;
            goto label_1baedc;
        }
    }
    ctx->pc = 0x1BAED4u;
label_1baed4:
    // 0x1baed4: 0xc06edee  jal         func_1BB7B8
label_1baed8:
    if (ctx->pc == 0x1BAED8u) {
        ctx->pc = 0x1BAED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAED4u;
        // 0x1baed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAEDCu;
        goto label_1baedc;
    }
    ctx->pc = 0x1BAED4u;
    SET_GPR_U32(ctx, 31, 0x1BAEDCu);
    ctx->pc = 0x1BAED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAED4u;
    // 0x1baed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB7B8u, 0x1BAED4u, 0x1BAEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAEDCu;
label_1baedc:
    // 0x1baedc: 0xe6140024  swc1        $f20, 0x24($s0)
    ctx->pc = 0x1baedcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_1baee0:
    // 0x1baee0: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x1baee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1baee4:
    // 0x1baee4: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1baee4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1baee8:
    // 0x1baee8: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x1baee8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1baeec:
    // 0x1baeec: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1baeecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1baef0:
    // 0x1baef0: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x1baef0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_1baef4:
    // 0x1baef4: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x1baef4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1baef8:
    // 0x1baef8: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x1baef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_1baefc:
    // 0x1baefc: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1baefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1baf00:
    // 0x1baf00: 0x3e00008  jr          $ra
label_1baf04:
    if (ctx->pc == 0x1BAF04u) {
        ctx->pc = 0x1BAF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAF00u;
        // 0x1baf04: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAF08u;
        goto label_1baf08;
    }
    ctx->pc = 0x1BAF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAF00u;
        // 0x1baf04: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAF00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BAF08u;
label_1baf08:
    // 0x1baf08: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1baf08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1baf0c:
    // 0x1baf0c: 0x0  nop
    ctx->pc = 0x1baf0cu;
    // NOP
    ctx->pc = 0x1baf10u;
}
