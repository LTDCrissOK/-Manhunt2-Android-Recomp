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

// Function: sub_00268F38
// Address: 0x268f38 - 0x269128
void sub_00268F38_0x268f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268F38_0x268f38");
#endif

    switch (ctx->pc) {
        case 0x268f38u: goto label_268f38;
        case 0x268f3cu: goto label_268f3c;
        case 0x268f40u: goto label_268f40;
        case 0x268f44u: goto label_268f44;
        case 0x268f48u: goto label_268f48;
        case 0x268f4cu: goto label_268f4c;
        case 0x268f50u: goto label_268f50;
        case 0x268f54u: goto label_268f54;
        case 0x268f58u: goto label_268f58;
        case 0x268f5cu: goto label_268f5c;
        case 0x268f60u: goto label_268f60;
        case 0x268f64u: goto label_268f64;
        case 0x268f68u: goto label_268f68;
        case 0x268f6cu: goto label_268f6c;
        case 0x268f70u: goto label_268f70;
        case 0x268f74u: goto label_268f74;
        case 0x268f78u: goto label_268f78;
        case 0x268f7cu: goto label_268f7c;
        case 0x268f80u: goto label_268f80;
        case 0x268f84u: goto label_268f84;
        case 0x268f88u: goto label_268f88;
        case 0x268f8cu: goto label_268f8c;
        case 0x268f90u: goto label_268f90;
        case 0x268f94u: goto label_268f94;
        case 0x268f98u: goto label_268f98;
        case 0x268f9cu: goto label_268f9c;
        case 0x268fa0u: goto label_268fa0;
        case 0x268fa4u: goto label_268fa4;
        case 0x268fa8u: goto label_268fa8;
        case 0x268facu: goto label_268fac;
        case 0x268fb0u: goto label_268fb0;
        case 0x268fb4u: goto label_268fb4;
        case 0x268fb8u: goto label_268fb8;
        case 0x268fbcu: goto label_268fbc;
        case 0x268fc0u: goto label_268fc0;
        case 0x268fc4u: goto label_268fc4;
        case 0x268fc8u: goto label_268fc8;
        case 0x268fccu: goto label_268fcc;
        case 0x268fd0u: goto label_268fd0;
        case 0x268fd4u: goto label_268fd4;
        case 0x268fd8u: goto label_268fd8;
        case 0x268fdcu: goto label_268fdc;
        case 0x268fe0u: goto label_268fe0;
        case 0x268fe4u: goto label_268fe4;
        case 0x268fe8u: goto label_268fe8;
        case 0x268fecu: goto label_268fec;
        case 0x268ff0u: goto label_268ff0;
        case 0x268ff4u: goto label_268ff4;
        case 0x268ff8u: goto label_268ff8;
        case 0x268ffcu: goto label_268ffc;
        case 0x269000u: goto label_269000;
        case 0x269004u: goto label_269004;
        case 0x269008u: goto label_269008;
        case 0x26900cu: goto label_26900c;
        case 0x269010u: goto label_269010;
        case 0x269014u: goto label_269014;
        case 0x269018u: goto label_269018;
        case 0x26901cu: goto label_26901c;
        case 0x269020u: goto label_269020;
        case 0x269024u: goto label_269024;
        case 0x269028u: goto label_269028;
        case 0x26902cu: goto label_26902c;
        case 0x269030u: goto label_269030;
        case 0x269034u: goto label_269034;
        case 0x269038u: goto label_269038;
        case 0x26903cu: goto label_26903c;
        case 0x269040u: goto label_269040;
        case 0x269044u: goto label_269044;
        case 0x269048u: goto label_269048;
        case 0x26904cu: goto label_26904c;
        case 0x269050u: goto label_269050;
        case 0x269054u: goto label_269054;
        case 0x269058u: goto label_269058;
        case 0x26905cu: goto label_26905c;
        case 0x269060u: goto label_269060;
        case 0x269064u: goto label_269064;
        case 0x269068u: goto label_269068;
        case 0x26906cu: goto label_26906c;
        case 0x269070u: goto label_269070;
        case 0x269074u: goto label_269074;
        case 0x269078u: goto label_269078;
        case 0x26907cu: goto label_26907c;
        case 0x269080u: goto label_269080;
        case 0x269084u: goto label_269084;
        case 0x269088u: goto label_269088;
        case 0x26908cu: goto label_26908c;
        case 0x269090u: goto label_269090;
        case 0x269094u: goto label_269094;
        case 0x269098u: goto label_269098;
        case 0x26909cu: goto label_26909c;
        case 0x2690a0u: goto label_2690a0;
        case 0x2690a4u: goto label_2690a4;
        case 0x2690a8u: goto label_2690a8;
        case 0x2690acu: goto label_2690ac;
        case 0x2690b0u: goto label_2690b0;
        case 0x2690b4u: goto label_2690b4;
        case 0x2690b8u: goto label_2690b8;
        case 0x2690bcu: goto label_2690bc;
        case 0x2690c0u: goto label_2690c0;
        case 0x2690c4u: goto label_2690c4;
        case 0x2690c8u: goto label_2690c8;
        case 0x2690ccu: goto label_2690cc;
        case 0x2690d0u: goto label_2690d0;
        case 0x2690d4u: goto label_2690d4;
        case 0x2690d8u: goto label_2690d8;
        case 0x2690dcu: goto label_2690dc;
        case 0x2690e0u: goto label_2690e0;
        case 0x2690e4u: goto label_2690e4;
        case 0x2690e8u: goto label_2690e8;
        case 0x2690ecu: goto label_2690ec;
        case 0x2690f0u: goto label_2690f0;
        case 0x2690f4u: goto label_2690f4;
        case 0x2690f8u: goto label_2690f8;
        case 0x2690fcu: goto label_2690fc;
        case 0x269100u: goto label_269100;
        case 0x269104u: goto label_269104;
        case 0x269108u: goto label_269108;
        case 0x26910cu: goto label_26910c;
        case 0x269110u: goto label_269110;
        case 0x269114u: goto label_269114;
        case 0x269118u: goto label_269118;
        case 0x26911cu: goto label_26911c;
        case 0x269120u: goto label_269120;
        case 0x269124u: goto label_269124;
        default: break;
    }

    ctx->pc = 0x268f38u;

label_268f38:
    // 0x268f38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x268f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_268f3c:
    // 0x268f3c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x268f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_268f40:
    // 0x268f40: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x268f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_268f44:
    // 0x268f44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x268f44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_268f48:
    // 0x268f48: 0x8e02022c  lw          $v0, 0x22C($s0)
    ctx->pc = 0x268f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 556)));
label_268f4c:
    // 0x268f4c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_268f50:
    if (ctx->pc == 0x268F50u) {
        ctx->pc = 0x268F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268F4Cu;
        // 0x268f50: 0x8e030220  lw          $v1, 0x220($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268F54u;
        goto label_268f54;
    }
    ctx->pc = 0x268F4Cu;
    {
        const bool branch_taken_0x268f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268f4c) {
            ctx->pc = 0x268F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268F4Cu;
            // 0x268f50: 0x8e030220  lw          $v1, 0x220($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268F80u;
            goto label_268f80;
        }
    }
    ctx->pc = 0x268F54u;
label_268f54:
    // 0x268f54: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x268f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_268f58:
    // 0x268f58: 0xc6010228  lwc1        $f1, 0x228($s0)
    ctx->pc = 0x268f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_268f5c:
    // 0x268f5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x268f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_268f60:
    // 0x268f60: 0xc4400074  lwc1        $f0, 0x74($v0)
    ctx->pc = 0x268f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268f64:
    // 0x268f64: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x268f64u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_268f68:
    // 0x268f68: 0x0  nop
    ctx->pc = 0x268f68u;
    // NOP
label_268f6c:
    // 0x268f6c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_268f70:
    if (ctx->pc == 0x268F70u) {
        ctx->pc = 0x268F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268F6Cu;
        // 0x268f70: 0x8e030220  lw          $v1, 0x220($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268F74u;
        goto label_268f74;
    }
    ctx->pc = 0x268F6Cu;
    {
        const bool branch_taken_0x268f6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x268f6c) {
            ctx->pc = 0x268F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268F6Cu;
            // 0x268f70: 0x8e030220  lw          $v1, 0x220($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268F80u;
            goto label_268f80;
        }
    }
    ctx->pc = 0x268F74u;
label_268f74:
    // 0x268f74: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x268f74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
label_268f78:
    // 0x268f78: 0xae00022c  sw          $zero, 0x22C($s0)
    ctx->pc = 0x268f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 0));
label_268f7c:
    // 0x268f7c: 0x8e030220  lw          $v1, 0x220($s0)
    ctx->pc = 0x268f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
label_268f80:
    // 0x268f80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x268f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_268f84:
    // 0x268f84: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
label_268f88:
    if (ctx->pc == 0x268F88u) {
        ctx->pc = 0x268F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268F84u;
        // 0x268f88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268F8Cu;
        goto label_268f8c;
    }
    ctx->pc = 0x268F84u;
    {
        const bool branch_taken_0x268f84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x268F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268F84u;
        // 0x268f88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268f84) {
            ctx->pc = 0x269008u;
            goto label_269008;
        }
    }
    ctx->pc = 0x268F8Cu;
label_268f8c:
    // 0x268f8c: 0x8e02022c  lw          $v0, 0x22C($s0)
    ctx->pc = 0x268f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 556)));
label_268f90:
    // 0x268f90: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_268f94:
    if (ctx->pc == 0x268F94u) {
        ctx->pc = 0x268F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268F90u;
        // 0x268f94: 0xc6000224  lwc1        $f0, 0x224($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x268F98u;
        goto label_268f98;
    }
    ctx->pc = 0x268F90u;
    {
        const bool branch_taken_0x268f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268f90) {
            ctx->pc = 0x268F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268F90u;
            // 0x268f94: 0xc6000224  lwc1        $f0, 0x224($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x268FE0u;
            goto label_268fe0;
        }
    }
    ctx->pc = 0x268F98u;
label_268f98:
    // 0x268f98: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x268f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_268f9c:
    // 0x268f9c: 0xc6020228  lwc1        $f2, 0x228($s0)
    ctx->pc = 0x268f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_268fa0:
    // 0x268fa0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x268fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_268fa4:
    // 0x268fa4: 0xc6010224  lwc1        $f1, 0x224($s0)
    ctx->pc = 0x268fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_268fa8:
    // 0x268fa8: 0x24470070  addiu       $a3, $v0, 0x70
    ctx->pc = 0x268fa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_268fac:
    // 0x268fac: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x268facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268fb0:
    // 0x268fb0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x268fb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_268fb4:
    // 0x268fb4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x268fb4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_268fb8:
    // 0x268fb8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x268fb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_268fbc:
    // 0x268fbc: 0x0  nop
    ctx->pc = 0x268fbcu;
    // NOP
label_268fc0:
    // 0x268fc0: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
label_268fc4:
    if (ctx->pc == 0x268FC4u) {
        ctx->pc = 0x268FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268FC0u;
        // 0x268fc4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268FC8u;
        goto label_268fc8;
    }
    ctx->pc = 0x268FC0u;
    {
        const bool branch_taken_0x268fc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x268FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268FC0u;
        // 0x268fc4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268fc0) {
            ctx->pc = 0x269074u;
            goto label_269074;
        }
    }
    ctx->pc = 0x268FC8u;
label_268fc8:
    // 0x268fc8: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x268fc8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
label_268fcc:
    // 0x268fcc: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x268fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_268fd0:
    // 0x268fd0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x268fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_268fd4:
    // 0x268fd4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x268fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_268fd8:
    // 0x268fd8: 0x10000020  b           . + 4 + (0x20 << 2)
label_268fdc:
    if (ctx->pc == 0x268FDCu) {
        ctx->pc = 0x268FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268FD8u;
        // 0x268fdc: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x268FE0u;
        goto label_268fe0;
    }
    ctx->pc = 0x268FD8u;
    {
        const bool branch_taken_0x268fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268FD8u;
        // 0x268fdc: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x268fd8) {
            ctx->pc = 0x26905Cu;
            goto label_26905c;
        }
    }
    ctx->pc = 0x268FE0u;
label_268fe0:
    // 0x268fe0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x268fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_268fe4:
    // 0x268fe4: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x268fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_268fe8:
    // 0x268fe8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x268fe8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_268fec:
    // 0x268fec: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x268fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_268ff0:
    // 0x268ff0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x268ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_268ff4:
    // 0x268ff4: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x268ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_268ff8:
    // 0x268ff8: 0xc0b7264  jal         func_2DC990
label_268ffc:
    if (ctx->pc == 0x268FFCu) {
        ctx->pc = 0x268FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268FF8u;
        // 0x268ffc: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x269000u;
        goto label_269000;
    }
    ctx->pc = 0x268FF8u;
    SET_GPR_U32(ctx, 31, 0x269000u);
    ctx->pc = 0x268FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268FF8u;
    // 0x268ffc: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC990u, 0x268FF8u, 0x269000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269000u;
label_269000:
    // 0x269000: 0x10000036  b           . + 4 + (0x36 << 2)
label_269004:
    if (ctx->pc == 0x269004u) {
        ctx->pc = 0x269004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269000u;
        // 0x269004: 0x8e020220  lw          $v0, 0x220($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269008u;
        goto label_269008;
    }
    ctx->pc = 0x269000u;
    {
        const bool branch_taken_0x269000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269000u;
        // 0x269004: 0x8e020220  lw          $v0, 0x220($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269000) {
            ctx->pc = 0x2690DCu;
            goto label_2690dc;
        }
    }
    ctx->pc = 0x269008u;
label_269008:
    // 0x269008: 0x54620034  bnel        $v1, $v0, . + 4 + (0x34 << 2)
label_26900c:
    if (ctx->pc == 0x26900Cu) {
        ctx->pc = 0x26900Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269008u;
        // 0x26900c: 0x8e020220  lw          $v0, 0x220($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269010u;
        goto label_269010;
    }
    ctx->pc = 0x269008u;
    {
        const bool branch_taken_0x269008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x269008) {
            ctx->pc = 0x26900Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269008u;
            // 0x26900c: 0x8e020220  lw          $v0, 0x220($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2690DCu;
            goto label_2690dc;
        }
    }
    ctx->pc = 0x269010u;
label_269010:
    // 0x269010: 0x8e02022c  lw          $v0, 0x22C($s0)
    ctx->pc = 0x269010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 556)));
label_269014:
    // 0x269014: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
label_269018:
    if (ctx->pc == 0x269018u) {
        ctx->pc = 0x269018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269014u;
        // 0x269018: 0xc6000224  lwc1        $f0, 0x224($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26901Cu;
        goto label_26901c;
    }
    ctx->pc = 0x269014u;
    {
        const bool branch_taken_0x269014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x269014) {
            ctx->pc = 0x269018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269014u;
            // 0x269018: 0xc6000224  lwc1        $f0, 0x224($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2690BCu;
            goto label_2690bc;
        }
    }
    ctx->pc = 0x26901Cu;
label_26901c:
    // 0x26901c: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x26901cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_269020:
    // 0x269020: 0xc6020228  lwc1        $f2, 0x228($s0)
    ctx->pc = 0x269020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_269024:
    // 0x269024: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x269024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_269028:
    // 0x269028: 0xc6010224  lwc1        $f1, 0x224($s0)
    ctx->pc = 0x269028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26902c:
    // 0x26902c: 0x24470070  addiu       $a3, $v0, 0x70
    ctx->pc = 0x26902cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_269030:
    // 0x269030: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x269030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_269034:
    // 0x269034: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x269034u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_269038:
    // 0x269038: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x269038u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_26903c:
    // 0x26903c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26903cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_269040:
    // 0x269040: 0x0  nop
    ctx->pc = 0x269040u;
    // NOP
label_269044:
    // 0x269044: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_269048:
    if (ctx->pc == 0x269048u) {
        ctx->pc = 0x269048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269044u;
        // 0x269048: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26904Cu;
        goto label_26904c;
    }
    ctx->pc = 0x269044u;
    {
        const bool branch_taken_0x269044 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x269048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269044u;
        // 0x269048: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269044) {
            ctx->pc = 0x269074u;
            goto label_269074;
        }
    }
    ctx->pc = 0x26904Cu;
label_26904c:
    // 0x26904c: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x26904cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_269050:
    // 0x269050: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x269050u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_269054:
    // 0x269054: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x269054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_269058:
    // 0x269058: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x269058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_26905c:
    // 0x26905c: 0xc0b7264  jal         func_2DC990
label_269060:
    if (ctx->pc == 0x269060u) {
        ctx->pc = 0x269060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26905Cu;
        // 0x269060: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269064u;
        goto label_269064;
    }
    ctx->pc = 0x26905Cu;
    SET_GPR_U32(ctx, 31, 0x269064u);
    ctx->pc = 0x269060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26905Cu;
    // 0x269060: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC990u, 0x26905Cu, 0x269064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269064u;
label_269064:
    // 0x269064: 0xc083bc0  jal         func_20EF00
label_269068:
    if (ctx->pc == 0x269068u) {
        ctx->pc = 0x269068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269064u;
        // 0x269068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26906Cu;
        goto label_26906c;
    }
    ctx->pc = 0x269064u;
    SET_GPR_U32(ctx, 31, 0x26906Cu);
    ctx->pc = 0x269068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269064u;
    // 0x269068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF00u, 0x269064u, 0x26906Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26906Cu;
label_26906c:
    // 0x26906c: 0x1000001b  b           . + 4 + (0x1B << 2)
label_269070:
    if (ctx->pc == 0x269070u) {
        ctx->pc = 0x269070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26906Cu;
        // 0x269070: 0x8e020220  lw          $v0, 0x220($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269074u;
        goto label_269074;
    }
    ctx->pc = 0x26906Cu;
    {
        const bool branch_taken_0x26906c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26906Cu;
        // 0x269070: 0x8e020220  lw          $v0, 0x220($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26906c) {
            ctx->pc = 0x2690DCu;
            goto label_2690dc;
        }
    }
    ctx->pc = 0x269074u;
label_269074:
    // 0x269074: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x269074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_269078:
    // 0x269078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x269078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26907c:
    // 0x26907c: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x26907cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_269080:
    // 0x269080: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x269080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_269084:
    // 0x269084: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x269084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_269088:
    // 0x269088: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x269088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26908c:
    // 0x26908c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x26908cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_269090:
    // 0x269090: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x269090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_269094:
    // 0x269094: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x269094u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_269098:
    // 0x269098: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x269098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26909c:
    // 0x26909c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x26909cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2690a0:
    // 0x2690a0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2690a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2690a4:
    // 0x2690a4: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2690a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2690a8:
    // 0x2690a8: 0x40f809  jalr        $v0
label_2690ac:
    if (ctx->pc == 0x2690ACu) {
        ctx->pc = 0x2690ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2690A8u;
        // 0x2690ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2690B0u;
        goto label_2690b0;
    }
    ctx->pc = 0x2690A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2690B0u);
        ctx->pc = 0x2690ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2690A8u;
        // 0x2690ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2690A8u, 0x2690B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2690B0u;
label_2690b0:
    // 0x2690b0: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x2690b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
label_2690b4:
    // 0x2690b4: 0x10000008  b           . + 4 + (0x8 << 2)
label_2690b8:
    if (ctx->pc == 0x2690B8u) {
        ctx->pc = 0x2690B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2690B4u;
        // 0x2690b8: 0xae00022c  sw          $zero, 0x22C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2690BCu;
        goto label_2690bc;
    }
    ctx->pc = 0x2690B4u;
    {
        const bool branch_taken_0x2690b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2690B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2690B4u;
        // 0x2690b8: 0xae00022c  sw          $zero, 0x22C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2690b4) {
            ctx->pc = 0x2690D8u;
            goto label_2690d8;
        }
    }
    ctx->pc = 0x2690BCu;
label_2690bc:
    // 0x2690bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2690bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2690c0:
    // 0x2690c0: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x2690c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_2690c4:
    // 0x2690c4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2690c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2690c8:
    // 0x2690c8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2690c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2690cc:
    // 0x2690cc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2690ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_2690d0:
    // 0x2690d0: 0xc0b7264  jal         func_2DC990
label_2690d4:
    if (ctx->pc == 0x2690D4u) {
        ctx->pc = 0x2690D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2690D0u;
        // 0x2690d4: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2690D8u;
        goto label_2690d8;
    }
    ctx->pc = 0x2690D0u;
    SET_GPR_U32(ctx, 31, 0x2690D8u);
    ctx->pc = 0x2690D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2690D0u;
    // 0x2690d4: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC990u, 0x2690D0u, 0x2690D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2690D8u;
label_2690d8:
    // 0x2690d8: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x2690d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
label_2690dc:
    // 0x2690dc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2690e0:
    if (ctx->pc == 0x2690E0u) {
        ctx->pc = 0x2690E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2690DCu;
        // 0x2690e0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2690E4u;
        goto label_2690e4;
    }
    ctx->pc = 0x2690DCu;
    {
        const bool branch_taken_0x2690dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2690E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2690DCu;
        // 0x2690e0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2690dc) {
            ctx->pc = 0x26910Cu;
            goto label_26910c;
        }
    }
    ctx->pc = 0x2690E4u;
label_2690e4:
    // 0x2690e4: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x2690e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_2690e8:
    // 0x2690e8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2690e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2690ec:
    // 0x2690ec: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2690ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_2690f0:
    // 0x2690f0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2690f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_2690f4:
    // 0x2690f4: 0xc0b7264  jal         func_2DC990
label_2690f8:
    if (ctx->pc == 0x2690F8u) {
        ctx->pc = 0x2690F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2690F4u;
        // 0x2690f8: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2690FCu;
        goto label_2690fc;
    }
    ctx->pc = 0x2690F4u;
    SET_GPR_U32(ctx, 31, 0x2690FCu);
    ctx->pc = 0x2690F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2690F4u;
    // 0x2690f8: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC990u, 0x2690F4u, 0x2690FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2690FCu;
label_2690fc:
    // 0x2690fc: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x2690fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_269100:
    // 0x269100: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x269100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_269104:
    // 0x269104: 0x40f809  jalr        $v0
label_269108:
    if (ctx->pc == 0x269108u) {
        ctx->pc = 0x269108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269104u;
        // 0x269108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26910Cu;
        goto label_26910c;
    }
    ctx->pc = 0x269104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26910Cu);
        ctx->pc = 0x269108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269104u;
        // 0x269108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269104u, 0x26910Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26910Cu;
label_26910c:
    // 0x26910c: 0xc084172  jal         func_2105C8
label_269110:
    if (ctx->pc == 0x269110u) {
        ctx->pc = 0x269110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26910Cu;
        // 0x269110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269114u;
        goto label_269114;
    }
    ctx->pc = 0x26910Cu;
    SET_GPR_U32(ctx, 31, 0x269114u);
    ctx->pc = 0x269110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26910Cu;
    // 0x269110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2105C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2105C8u, 0x26910Cu, 0x269114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269114u;
label_269114:
    // 0x269114: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x269114u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_269118:
    // 0x269118: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x269118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_26911c:
    // 0x26911c: 0x3e00008  jr          $ra
label_269120:
    if (ctx->pc == 0x269120u) {
        ctx->pc = 0x269120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26911Cu;
        // 0x269120: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269124u;
        goto label_269124;
    }
    ctx->pc = 0x26911Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26911Cu;
        // 0x269120: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26911Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269124u;
label_269124:
    // 0x269124: 0x0  nop
    ctx->pc = 0x269124u;
    // NOP
    ctx->pc = 0x269128u;
}
