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

// Function: sub_0033AF50
// Address: 0x33af50 - 0x33b628
void sub_0033AF50_0x33af50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033AF50_0x33af50");
#endif

    switch (ctx->pc) {
        case 0x33afb8u: goto label_33afb8;
        case 0x33b018u: goto label_33b018;
        case 0x33b0b4u: goto label_33b0b4;
        case 0x33b1c8u: goto label_33b1c8;
        case 0x33b270u: goto label_33b270;
        case 0x33b278u: goto label_33b278;
        case 0x33b310u: goto label_33b310;
        case 0x33b364u: goto label_33b364;
        case 0x33b530u: goto label_33b530;
        case 0x33b544u: goto label_33b544;
        case 0x33b568u: goto label_33b568;
        case 0x33b598u: goto label_33b598;
        case 0x33b5c8u: goto label_33b5c8;
        default: break;
    }

    ctx->pc = 0x33af50u;

    // 0x33af50: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x33af50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x33af54: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x33af54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x33af58: 0x8c43bfc4  lw          $v1, -0x403C($v0)
    ctx->pc = 0x33af58u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBFC4u));
    // 0x33af5c: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x33af5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x33af60: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x33af60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x33af64: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x33af64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x33af68: 0xffb30128  sd          $s3, 0x128($sp)
    ctx->pc = 0x33af68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 19));
    // 0x33af6c: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x33af6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
    // 0x33af70: 0xffb50138  sd          $s5, 0x138($sp)
    ctx->pc = 0x33af70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 21));
    // 0x33af74: 0xffb60140  sd          $s6, 0x140($sp)
    ctx->pc = 0x33af74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 22));
    // 0x33af78: 0xffb70148  sd          $s7, 0x148($sp)
    ctx->pc = 0x33af78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 23));
    // 0x33af7c: 0xffbe0150  sd          $fp, 0x150($sp)
    ctx->pc = 0x33af7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 30));
    // 0x33af80: 0xffbf0158  sd          $ra, 0x158($sp)
    ctx->pc = 0x33af80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 31));
    // 0x33af84: 0xe7b50168  swc1        $f21, 0x168($sp)
    ctx->pc = 0x33af84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x33af88: 0x10600199  beqz        $v1, . + 4 + (0x199 << 2)
    ctx->pc = 0x33AF88u;
    {
        const bool branch_taken_0x33af88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AF88u;
        // 0x33af8c: 0xe7b40160  swc1        $f20, 0x160($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33af88) {
            ctx->pc = 0x33B5F0u;
            goto label_33b5f0;
        }
    }
    ctx->pc = 0x33AF90u;
    // 0x33af90: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x33af90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x33af94: 0x8c43bd5c  lw          $v1, -0x42A4($v0)
    ctx->pc = 0x33af94u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD5Cu));
    // 0x33af98: 0x14600196  bnez        $v1, . + 4 + (0x196 << 2)
    ctx->pc = 0x33AF98u;
    {
        const bool branch_taken_0x33af98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33AF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AF98u;
        // 0x33af9c: 0xdfb00110  ld          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33af98) {
            ctx->pc = 0x33B5F4u;
            goto label_33b5f4;
        }
    }
    ctx->pc = 0x33AFA0u;
    // 0x33afa0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x33afa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x33afa4: 0x9043b821  lbu         $v1, -0x47DF($v0)
    ctx->pc = 0x33afa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FB821u));
    // 0x33afa8: 0x14600193  bnez        $v1, . + 4 + (0x193 << 2)
    ctx->pc = 0x33AFA8u;
    {
        const bool branch_taken_0x33afa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33AFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AFA8u;
        // 0x33afac: 0xdfb10118  ld          $s1, 0x118($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33afa8) {
            ctx->pc = 0x33B5F8u;
            goto label_33b5f8;
        }
    }
    ctx->pc = 0x33AFB0u;
    // 0x33afb0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x33afb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33afb4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33afb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_33afb8:
    // 0x33afb8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33afb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33afbc: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x33afbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x33afc0: 0xafa300fc  sw          $v1, 0xFC($sp)
    ctx->pc = 0x33afc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 3));
    // 0x33afc4: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x33afc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
    // 0x33afc8: 0x24636ec4  addiu       $v1, $v1, 0x6EC4
    ctx->pc = 0x33afc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28356));
    // 0x33afcc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x33afccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33afd0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33afd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33afd4: 0x10600182  beqz        $v1, . + 4 + (0x182 << 2)
    ctx->pc = 0x33AFD4u;
    {
        const bool branch_taken_0x33afd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AFD4u;
        // 0x33afd8: 0x3c05005b  lui         $a1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33afd4) {
            ctx->pc = 0x33B5E0u;
            goto label_33b5e0;
        }
    }
    ctx->pc = 0x33AFDCu;
    // 0x33afdc: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x33afdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33afe0: 0x24a56ed8  addiu       $a1, $a1, 0x6ED8
    ctx->pc = 0x33afe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28376));
    // 0x33afe4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x33afe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33afe8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x33afe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x33afec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33afecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33aff0: 0xafa000f8  sw          $zero, 0xF8($sp)
    ctx->pc = 0x33aff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
    // 0x33aff4: 0x1840017a  blez        $v0, . + 4 + (0x17A << 2)
    ctx->pc = 0x33AFF4u;
    {
        const bool branch_taken_0x33aff4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x33AFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AFF4u;
        // 0x33aff8: 0xafa200f4  sw          $v0, 0xF4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aff4) {
            ctx->pc = 0x33B5E0u;
            goto label_33b5e0;
        }
    }
    ctx->pc = 0x33AFFCu;
    // 0x33affc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x33affcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x33b000: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x33b000u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b004: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x33b004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x33b008: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x33b008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x33b00c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x33b00cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33b010: 0x27b70090  addiu       $s7, $sp, 0x90
    ctx->pc = 0x33b010u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x33b014: 0x0  nop
    ctx->pc = 0x33b014u;
    // NOP
label_33b018:
    // 0x33b018: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33b018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x33b01c: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x33b01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x33b020: 0x8c442b00  lw          $a0, 0x2B00($v0)
    ctx->pc = 0x33b020u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x482B00u));
    // 0x33b024: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x33b024u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x33b028: 0x5060010d  beql        $v1, $zero, . + 4 + (0x10D << 2)
    ctx->pc = 0x33B028u;
    {
        const bool branch_taken_0x33b028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b028) {
            ctx->pc = 0x33B02Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B028u;
            // 0x33b02c: 0x92020074  lbu         $v0, 0x74($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B460u;
            goto label_33b460;
        }
    }
    ctx->pc = 0x33B030u;
    // 0x33b030: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x33b030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x33b034: 0x5456010a  bnel        $v0, $s6, . + 4 + (0x10A << 2)
    ctx->pc = 0x33B034u;
    {
        const bool branch_taken_0x33b034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x33b034) {
            ctx->pc = 0x33B038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B034u;
            // 0x33b038: 0x92020074  lbu         $v0, 0x74($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B460u;
            goto label_33b460;
        }
    }
    ctx->pc = 0x33B03Cu;
    // 0x33b03c: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x33b03cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x33b040: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x33b040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x33b044: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x33b044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33b048: 0xc4c22b30  lwc1        $f2, 0x2B30($a2)
    ctx->pc = 0x33b048u;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33b04c: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x33b04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x33b050: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x33b050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33b054: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x33b054u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x33b058: 0xc6030080  lwc1        $f3, 0x80($s0)
    ctx->pc = 0x33b058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33b05c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33b05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33b060: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x33b060u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x33b064: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x33b064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x33b068: 0xe6010084  swc1        $f1, 0x84($s0)
    ctx->pc = 0x33b068u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x33b06c: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x33b06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33b070: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x33b070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33b074: 0xc4c02b30  lwc1        $f0, 0x2B30($a2)
    ctx->pc = 0x33b074u;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33b078: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x33b078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x33b07c: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x33b07cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x33b080: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x33b080u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x33b084: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x33b084u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x33b088: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x33b088u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x33b08c: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x33b08cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x33b090: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x33b090u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x33b094: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x33b094u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x33b098: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x33b098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x33b09c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x33b09cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33b0a0: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x33b0a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b0a4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33b0a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33b0a8: 0xf8610030  sqc2        $vf1, 0x30($v1)
    ctx->pc = 0x33b0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33b0ac: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x33B0ACu;
    SET_GPR_U32(ctx, 31, 0x33B0B4u);
    ctx->pc = 0x33B0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B0ACu;
    // 0x33b0b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x33B0ACu, 0x33B0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B0B4u;
label_33b0b4:
    // 0x33b0b4: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x33b0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x33b0b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33b0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33b0bc: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x33b0bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33b0c0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x33b0c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33b0c4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x33b0c4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x33b0c8: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x33b0c8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33b0cc: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x33b0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33b0d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33b0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33b0d4: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x33b0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33b0d8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x33b0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33b0dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33b0dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33b0e0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x33b0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x33b0e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33b0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33b0e8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x33b0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33b0ec: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x33b0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33b0f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33b0f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33b0f4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x33b0f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x33b0f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33b0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33b0fc: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x33b0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33b100: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x33b100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33b104: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33b104u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33b108: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x33b108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x33b10c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33b10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33b110: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x33b110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x33b114: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x33b114u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33b118: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x33b118u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33b11c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x33b11cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x33b120: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x33b120u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33b124: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x33b124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33b128: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33b128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33b12c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x33b12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33b130: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x33b130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33b134: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33b134u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33b138: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x33b138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x33b13c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33b13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33b140: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x33b140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33b144: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x33b144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33b148: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33b148u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33b14c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x33b14cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x33b150: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33b150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33b154: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x33b154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33b158: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x33b158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33b15c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33b15cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33b160: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x33b160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x33b164: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33b164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33b168: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x33b168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x33b16c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x33b16cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33b170: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x33b170u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33b174: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x33b174u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x33b178: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x33b178u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33b17c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x33b17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33b180: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33b180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33b184: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x33b184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33b188: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x33b188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33b18c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33b18cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33b190: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x33b190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x33b194: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33b194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33b198: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x33b198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33b19c: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x33b19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33b1a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33b1a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33b1a4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x33b1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x33b1a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33b1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33b1ac: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x33b1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33b1b0: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x33b1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33b1b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33b1b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33b1b8: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x33b1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x33b1bc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x33b1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33b1c0: 0xc0b14ae  jal         func_2C52B8
    ctx->pc = 0x33B1C0u;
    SET_GPR_U32(ctx, 31, 0x33B1C8u);
    ctx->pc = 0x33B1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B1C0u;
    // 0x33b1c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C52B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C52B8u, 0x33B1C0u, 0x33B1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B1C8u;
label_33b1c8:
    // 0x33b1c8: 0x92020074  lbu         $v0, 0x74($s0)
    ctx->pc = 0x33b1c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x33b1cc: 0x504000a7  beql        $v0, $zero, . + 4 + (0xA7 << 2)
    ctx->pc = 0x33B1CCu;
    {
        const bool branch_taken_0x33b1cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b1cc) {
            ctx->pc = 0x33B1D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B1CCu;
            // 0x33b1d0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B46Cu;
            goto label_33b46c;
        }
    }
    ctx->pc = 0x33B1D4u;
    // 0x33b1d4: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x33b1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x33b1d8: 0x5456006d  bnel        $v0, $s6, . + 4 + (0x6D << 2)
    ctx->pc = 0x33B1D8u;
    {
        const bool branch_taken_0x33b1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x33b1d8) {
            ctx->pc = 0x33B1DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B1D8u;
            // 0x33b1dc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B390u;
            goto label_33b390;
        }
    }
    ctx->pc = 0x33B1E0u;
    // 0x33b1e0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33b1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x33b1e4: 0x32240003  andi        $a0, $s1, 0x3
    ctx->pc = 0x33b1e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    // 0x33b1e8: 0x8c432b44  lw          $v1, 0x2B44($v0)
    ctx->pc = 0x33b1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482B44u));
    // 0x33b1ec: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x33b1ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x33b1f0: 0x14640067  bne         $v1, $a0, . + 4 + (0x67 << 2)
    ctx->pc = 0x33B1F0u;
    {
        const bool branch_taken_0x33b1f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x33B1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B1F0u;
        // 0x33b1f4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b1f0) {
            ctx->pc = 0x33B390u;
            goto label_33b390;
        }
    }
    ctx->pc = 0x33B1F8u;
    // 0x33b1f8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x33b1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x33b1fc: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x33b1fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x33b200: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x33b200u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x33b204: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x33b204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33b208: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x33b208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33b20c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x33b20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x33b210: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x33b210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x33b214: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x33b214u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x33b218: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x33b218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x33b21c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x33b21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33b220: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x33b220u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x33b224: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x33b224u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x33b228: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x33b228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33b22c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x33b22cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x33b230: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x33b230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33b234: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x33b234u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x33b238: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33b238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33b23c: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x33b23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33b240: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x33b240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x33b244: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x33b244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x33b248: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x33b248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33b24c: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x33b24cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x33b250: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x33b250u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x33b254: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x33b254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33b258: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x33b258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x33b25c: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x33b25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33b260: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x33b260u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x33b264: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x33b264u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x33b268: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x33B268u;
    SET_GPR_U32(ctx, 31, 0x33B270u);
    ctx->pc = 0x33B26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B268u;
    // 0x33b26c: 0xe7a20024  swc1        $f2, 0x24($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x33B268u, 0x33B270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B270u;
label_33b270:
    // 0x33b270: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x33B270u;
    SET_GPR_U32(ctx, 31, 0x33B278u);
    ctx->pc = 0x33B274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B270u;
    // 0x33b274: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x33B270u, 0x33B278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B278u;
label_33b278:
    // 0x33b278: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x33b278u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33b27c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x33b27cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x33b280: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x33b280u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33b284: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x33b284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33b288: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x33b288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x33b28c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x33b28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x33b290: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x33b290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x33b294: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x33b294u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33b298: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x33b298u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33b29c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33b29cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33b2a0: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x33b2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33b2a4: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x33b2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33b2a8: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x33b2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33b2ac: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x33b2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x33b2b0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x33b2b0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x33b2b4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x33b2b4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x33b2b8: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x33b2b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x33b2bc: 0x0  nop
    ctx->pc = 0x33b2bcu;
    // NOP
    // 0x33b2c0: 0x0  nop
    ctx->pc = 0x33b2c0u;
    // NOP
    // 0x33b2c4: 0x46000044  c1          0x44
    ctx->pc = 0x33b2c4u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x33b2c8: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x33b2c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x33b2cc: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x33b2ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33b2d0: 0x0  nop
    ctx->pc = 0x33b2d0u;
    // NOP
    // 0x33b2d4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x33B2D4u;
    {
        const bool branch_taken_0x33b2d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33B2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B2D4u;
        // 0x33b2d8: 0xe7a10080  swc1        $f1, 0x80($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b2d4) {
            ctx->pc = 0x33B2FCu;
            goto label_33b2fc;
        }
    }
    ctx->pc = 0x33B2DCu;
    // 0x33b2dc: 0x0  nop
    ctx->pc = 0x33b2dcu;
    // NOP
    // 0x33b2e0: 0x0  nop
    ctx->pc = 0x33b2e0u;
    // NOP
    // 0x33b2e4: 0x4601a803  div.s       $f0, $f21, $f1
    ctx->pc = 0x33b2e4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[1]); }
    // 0x33b2e8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x33b2e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x33b2ec: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x33b2ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33b2f0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x33b2f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x33b2f4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x33b2f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33b2f8: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x33b2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_33b2fc:
    // 0x33b2fc: 0x3c014130  lui         $at, 0x4130
    ctx->pc = 0x33b2fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16688 << 16));
    // 0x33b300: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x33b300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33b304: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x33b304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b308: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x33B308u;
    SET_GPR_U32(ctx, 31, 0x33B310u);
    ctx->pc = 0x33B30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B308u;
    // 0x33b30c: 0xe7a000f0  swc1        $f0, 0xF0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x33B308u, 0x33B310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B310u;
label_33b310:
    // 0x33b310: 0x7fa00090  sq          $zero, 0x90($sp)
    ctx->pc = 0x33b310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 0));
    // 0x33b314: 0x7fa000a0  sq          $zero, 0xA0($sp)
    ctx->pc = 0x33b314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 0));
    // 0x33b318: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x33b318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x33b31c: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x33b31cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
    // 0x33b320: 0xc4405cd0  lwc1        $f0, 0x5CD0($v0)
    ctx->pc = 0x33b320u;
    { uint32_t bits = FAST_READ32(0x475CD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33b324: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x33b324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33b328: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x33b328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    // 0x33b32c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x33b32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x33b330: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x33b330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x33b334: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x33b334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b338: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x33b338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x33b33c: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x33b33cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x33b340: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x33b340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    // 0x33b344: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x33b344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x33b348: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x33b348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x33b34c: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x33b34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x33b350: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x33b350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x33b354: 0xaee30044  sw          $v1, 0x44($s7)
    ctx->pc = 0x33b354u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 68), GPR_U32(ctx, 3));
    // 0x33b358: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x33b358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x33b35c: 0xc077824  jal         func_1DE090
    ctx->pc = 0x33B35Cu;
    SET_GPR_U32(ctx, 31, 0x33B364u);
    ctx->pc = 0x33B360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B35Cu;
    // 0x33b360: 0xafa000d8  sw          $zero, 0xD8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE090u, 0x33B35Cu, 0x33B364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B364u;
label_33b364:
    // 0x33b364: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33B364u;
    {
        const bool branch_taken_0x33b364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B364u;
        // 0x33b368: 0xc7a00094  lwc1        $f0, 0x94($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b364) {
            ctx->pc = 0x33B380u;
            goto label_33b380;
        }
    }
    ctx->pc = 0x33B36Cu;
    // 0x33b36c: 0x3c013e05  lui         $at, 0x3E05
    ctx->pc = 0x33b36cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15877 << 16));
    // 0x33b370: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x33b370u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x33b374: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x33b374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33b378: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33B378u;
    {
        const bool branch_taken_0x33b378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B378u;
        // 0x33b37c: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b378) {
            ctx->pc = 0x33B388u;
            goto label_33b388;
        }
    }
    ctx->pc = 0x33B380u;
label_33b380:
    // 0x33b380: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33b380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33b384: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x33b384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33b388:
    // 0x33b388: 0xe600006c  swc1        $f0, 0x6C($s0)
    ctx->pc = 0x33b388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
    // 0x33b38c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33b38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33b390:
    // 0x33b390: 0xc601006c  lwc1        $f1, 0x6C($s0)
    ctx->pc = 0x33b390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33b394: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x33b394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33b398: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x33b398u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33b39c: 0x0  nop
    ctx->pc = 0x33b39cu;
    // NOP
    // 0x33b3a0: 0x4502002f  bc1fl       . + 4 + (0x2F << 2)
    ctx->pc = 0x33B3A0u;
    {
        const bool branch_taken_0x33b3a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33b3a0) {
            ctx->pc = 0x33B3A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B3A0u;
            // 0x33b3a4: 0x92020074  lbu         $v0, 0x74($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B460u;
            goto label_33b460;
        }
    }
    ctx->pc = 0x33B3A8u;
    // 0x33b3a8: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x33b3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x33b3ac: 0x5456002c  bnel        $v0, $s6, . + 4 + (0x2C << 2)
    ctx->pc = 0x33B3ACu;
    {
        const bool branch_taken_0x33b3ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x33b3ac) {
            ctx->pc = 0x33B3B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B3ACu;
            // 0x33b3b0: 0x92020074  lbu         $v0, 0x74($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B460u;
            goto label_33b460;
        }
    }
    ctx->pc = 0x33B3B4u;
    // 0x33b3b4: 0xc6000084  lwc1        $f0, 0x84($s0)
    ctx->pc = 0x33b3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33b3b8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x33b3b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33b3bc: 0x0  nop
    ctx->pc = 0x33b3bcu;
    // NOP
    // 0x33b3c0: 0x45020027  bc1fl       . + 4 + (0x27 << 2)
    ctx->pc = 0x33B3C0u;
    {
        const bool branch_taken_0x33b3c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33b3c0) {
            ctx->pc = 0x33B3C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B3C0u;
            // 0x33b3c4: 0x92020074  lbu         $v0, 0x74($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B460u;
            goto label_33b460;
        }
    }
    ctx->pc = 0x33B3C8u;
    // 0x33b3c8: 0x92020075  lbu         $v0, 0x75($s0)
    ctx->pc = 0x33b3c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 117)));
    // 0x33b3cc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x33B3CCu;
    {
        const bool branch_taken_0x33b3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b3cc) {
            ctx->pc = 0x33B3D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B3CCu;
            // 0x33b3d0: 0x46000005  abs.s       $f0, $f0 (Delay Slot)
            ctx->f[0] = FPU_ABS_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B3E0u;
            goto label_33b3e0;
        }
    }
    ctx->pc = 0x33B3D4u;
    // 0x33b3d4: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x33b3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x33b3d8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x33B3D8u;
    {
        const bool branch_taken_0x33b3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B3D8u;
        // 0x33b3dc: 0xa2000076  sb          $zero, 0x76($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 118), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b3d8) {
            ctx->pc = 0x33B45Cu;
            goto label_33b45c;
        }
    }
    ctx->pc = 0x33B3E0u;
label_33b3e0:
    // 0x33b3e0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x33b3e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x33b3e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x33b3e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33b3e8: 0x0  nop
    ctx->pc = 0x33b3e8u;
    // NOP
    // 0x33b3ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x33b3ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x33b3f0: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x33b3f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33b3f4: 0x0  nop
    ctx->pc = 0x33b3f4u;
    // NOP
    // 0x33b3f8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x33B3F8u;
    {
        const bool branch_taken_0x33b3f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33B3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B3F8u;
        // 0x33b3fc: 0xa2160075  sb          $s6, 0x75($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 117), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b3f8) {
            ctx->pc = 0x33B408u;
            goto label_33b408;
        }
    }
    ctx->pc = 0x33B400u;
    // 0x33b400: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x33b400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x33b404: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x33b404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33b408:
    // 0x33b408: 0x0  nop
    ctx->pc = 0x33b408u;
    // NOP
    // 0x33b40c: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x33b40cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x33b410: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x33b410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x33b414: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x33b414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x33b418: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x33b418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x33b41c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x33b41cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33b420: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x33b420u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x33b424: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x33b424u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33b428: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x33b428u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33b42c: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x33b42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x33b430: 0x3c053f33  lui         $a1, 0x3F33
    ctx->pc = 0x33b430u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16179 << 16));
    // 0x33b434: 0x34a53333  ori         $a1, $a1, 0x3333
    ctx->pc = 0x33b434u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13107);
    // 0x33b438: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x33b438u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33b43c: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x33b43cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x33b440: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x33b440u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33b444: 0xfa010020  sqc2        $vf1, 0x20($s0)
    ctx->pc = 0x33b444u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33b448: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x33b448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x33b44c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x33b44cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33b450: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x33b450u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x33b454: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x33b454u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33b458: 0xfa010030  sqc2        $vf1, 0x30($s0)
    ctx->pc = 0x33b458u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_33b45c:
    // 0x33b45c: 0x92020074  lbu         $v0, 0x74($s0)
    ctx->pc = 0x33b45cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 116)));
label_33b460:
    // 0x33b460: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x33B460u;
    {
        const bool branch_taken_0x33b460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b460) {
            ctx->pc = 0x33B464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B460u;
            // 0x33b464: 0x8e020068  lw          $v0, 0x68($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B4D8u;
            goto label_33b4d8;
        }
    }
    ctx->pc = 0x33B468u;
    // 0x33b468: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x33b468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33b46c:
    // 0x33b46c: 0xc601006c  lwc1        $f1, 0x6C($s0)
    ctx->pc = 0x33b46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33b470: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x33b470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33b474: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x33b474u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33b478: 0x0  nop
    ctx->pc = 0x33b478u;
    // NOP
    // 0x33b47c: 0x45020016  bc1fl       . + 4 + (0x16 << 2)
    ctx->pc = 0x33B47Cu;
    {
        const bool branch_taken_0x33b47c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33b47c) {
            ctx->pc = 0x33B480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B47Cu;
            // 0x33b480: 0x8e020068  lw          $v0, 0x68($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B4D8u;
            goto label_33b4d8;
        }
    }
    ctx->pc = 0x33B484u;
    // 0x33b484: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x33b484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x33b488: 0x54760013  bnel        $v1, $s6, . + 4 + (0x13 << 2)
    ctx->pc = 0x33B488u;
    {
        const bool branch_taken_0x33b488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        if (branch_taken_0x33b488) {
            ctx->pc = 0x33B48Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B488u;
            // 0x33b48c: 0x8e020068  lw          $v0, 0x68($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B4D8u;
            goto label_33b4d8;
        }
    }
    ctx->pc = 0x33B490u;
    // 0x33b490: 0xc6000084  lwc1        $f0, 0x84($s0)
    ctx->pc = 0x33b490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33b494: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x33b494u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33b498: 0x0  nop
    ctx->pc = 0x33b498u;
    // NOP
    // 0x33b49c: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x33B49Cu;
    {
        const bool branch_taken_0x33b49c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33b49c) {
            ctx->pc = 0x33B4A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B49Cu;
            // 0x33b4a0: 0x8e020068  lw          $v0, 0x68($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B4D8u;
            goto label_33b4d8;
        }
    }
    ctx->pc = 0x33B4A4u;
    // 0x33b4a4: 0x92020075  lbu         $v0, 0x75($s0)
    ctx->pc = 0x33b4a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 117)));
    // 0x33b4a8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x33B4A8u;
    {
        const bool branch_taken_0x33b4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b4a8) {
            ctx->pc = 0x33B4ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B4A8u;
            // 0x33b4ac: 0x46000005  abs.s       $f0, $f0 (Delay Slot)
            ctx->f[0] = FPU_ABS_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B4C0u;
            goto label_33b4c0;
        }
    }
    ctx->pc = 0x33B4B0u;
    // 0x33b4b0: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x33b4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x33b4b4: 0xa2000076  sb          $zero, 0x76($s0)
    ctx->pc = 0x33b4b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 118), (uint8_t)GPR_U32(ctx, 0));
    // 0x33b4b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x33B4B8u;
    {
        const bool branch_taken_0x33b4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B4B8u;
        // 0x33b4bc: 0xe4810034  swc1        $f1, 0x34($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b4b8) {
            ctx->pc = 0x33B4D4u;
            goto label_33b4d4;
        }
    }
    ctx->pc = 0x33B4C0u;
label_33b4c0:
    // 0x33b4c0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x33b4c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x33b4c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x33b4c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33b4c8: 0xa2030075  sb          $v1, 0x75($s0)
    ctx->pc = 0x33b4c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 117), (uint8_t)GPR_U32(ctx, 3));
    // 0x33b4cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x33b4ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x33b4d0: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x33b4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
label_33b4d4:
    // 0x33b4d4: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x33b4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_33b4d8:
    // 0x33b4d8: 0x261400a0  addiu       $s4, $s0, 0xA0
    ctx->pc = 0x33b4d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x33b4dc: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x33B4DCu;
    {
        const bool branch_taken_0x33b4dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B4DCu;
        // 0x33b4e0: 0x26330001  addiu       $s3, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b4dc) {
            ctx->pc = 0x33B5CCu;
            goto label_33b5cc;
        }
    }
    ctx->pc = 0x33B4E4u;
    // 0x33b4e4: 0x8fa600f8  lw          $a2, 0xF8($sp)
    ctx->pc = 0x33b4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x33b4e8: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x33b4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x33b4ec: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x33b4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x33b4f0: 0x14c20036  bne         $a2, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x33B4F0u;
    {
        const bool branch_taken_0x33b4f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x33B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B4F0u;
        // 0x33b4f4: 0xafa600f8  sw          $a2, 0xF8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b4f0) {
            ctx->pc = 0x33B5CCu;
            goto label_33b5cc;
        }
    }
    ctx->pc = 0x33B4F8u;
    // 0x33b4f8: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x33b4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x33b4fc: 0x10800032  beqz        $a0, . + 4 + (0x32 << 2)
    ctx->pc = 0x33B4FCu;
    {
        const bool branch_taken_0x33b4fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B4FCu;
        // 0x33b500: 0x240200a0  addiu       $v0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b4fc) {
            ctx->pc = 0x33B5C8u;
            goto label_33b5c8;
        }
    }
    ctx->pc = 0x33B504u;
    // 0x33b504: 0x8c83fff0  lw          $v1, -0x10($a0)
    ctx->pc = 0x33b504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967280)));
    // 0x33b508: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x33b508u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x33b50c: 0xa48021  addu        $s0, $a1, $a0
    ctx->pc = 0x33b50cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x33b510: 0x1090002b  beq         $a0, $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x33B510u;
    {
        const bool branch_taken_0x33b510 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x33B514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B510u;
        // 0x33b514: 0x8fa60100  lw          $a2, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b510) {
            ctx->pc = 0x33B5C0u;
            goto label_33b5c0;
        }
    }
    ctx->pc = 0x33B518u;
    // 0x33b518: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x33b518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x33b51c: 0x24426ec4  addiu       $v0, $v0, 0x6EC4
    ctx->pc = 0x33b51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28356));
    // 0x33b520: 0x3c150057  lui         $s5, 0x57
    ctx->pc = 0x33b520u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)87 << 16));
    // 0x33b524: 0xc29021  addu        $s2, $a2, $v0
    ctx->pc = 0x33b524u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x33b528: 0x26110050  addiu       $s1, $s0, 0x50
    ctx->pc = 0x33b528u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x33b52c: 0x2631ff60  addiu       $s1, $s1, -0xA0
    ctx->pc = 0x33b52cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967136));
label_33b530:
    // 0x33b530: 0x8e25ffb0  lw          $a1, -0x50($s1)
    ctx->pc = 0x33b530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967216)));
    // 0x33b534: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33B534u;
    {
        const bool branch_taken_0x33b534 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B534u;
        // 0x33b538: 0x2610ff60  addiu       $s0, $s0, -0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b534) {
            ctx->pc = 0x33B544u;
            goto label_33b544;
        }
    }
    ctx->pc = 0x33B53Cu;
    // 0x33b53c: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x33B53Cu;
    SET_GPR_U32(ctx, 31, 0x33B544u);
    ctx->pc = 0x33B540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B53Cu;
    // 0x33b540: 0x26a45ad0  addiu       $a0, $s5, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x33B53Cu, 0x33B544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B544u;
label_33b544:
    // 0x33b544: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x33b544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x33b548: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x33B548u;
    {
        const bool branch_taken_0x33b548 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B548u;
        // 0x33b54c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b548) {
            ctx->pc = 0x33B580u;
            goto label_33b580;
        }
    }
    ctx->pc = 0x33B550u;
    // 0x33b550: 0x26020068  addiu       $v0, $s0, 0x68
    ctx->pc = 0x33b550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x33b554: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33B554u;
    {
        const bool branch_taken_0x33b554 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x33b554) {
            ctx->pc = 0x33B580u;
            goto label_33b580;
        }
    }
    ctx->pc = 0x33B55Cu;
    // 0x33b55c: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x33b55cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b560: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x33b560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x33b564: 0x0  nop
    ctx->pc = 0x33b564u;
    // NOP
label_33b568:
    // 0x33b568: 0x0  nop
    ctx->pc = 0x33b568u;
    // NOP
    // 0x33b56c: 0x0  nop
    ctx->pc = 0x33b56cu;
    // NOP
    // 0x33b570: 0x0  nop
    ctx->pc = 0x33b570u;
    // NOP
    // 0x33b574: 0x0  nop
    ctx->pc = 0x33b574u;
    // NOP
    // 0x33b578: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x33B578u;
    {
        const bool branch_taken_0x33b578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x33B57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B578u;
        // 0x33b57c: 0x2442fff8  addiu       $v0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b578) {
            ctx->pc = 0x33B568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33b568;
        }
    }
    ctx->pc = 0x33B580u;
label_33b580:
    // 0x33b580: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x33B580u;
    {
        const bool branch_taken_0x33b580 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B580u;
        // 0x33b584: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b580) {
            ctx->pc = 0x33B5B0u;
            goto label_33b5b0;
        }
    }
    ctx->pc = 0x33B588u;
    // 0x33b588: 0x5082000a  beql        $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33B588u;
    {
        const bool branch_taken_0x33b588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x33b588) {
            ctx->pc = 0x33B58Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B588u;
            // 0x33b58c: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B5B4u;
            goto label_33b5b4;
        }
    }
    ctx->pc = 0x33B590u;
    // 0x33b590: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x33b590u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b594: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x33b594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_33b598:
    // 0x33b598: 0x0  nop
    ctx->pc = 0x33b598u;
    // NOP
    // 0x33b59c: 0x0  nop
    ctx->pc = 0x33b59cu;
    // NOP
    // 0x33b5a0: 0x0  nop
    ctx->pc = 0x33b5a0u;
    // NOP
    // 0x33b5a4: 0x0  nop
    ctx->pc = 0x33b5a4u;
    // NOP
    // 0x33b5a8: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x33B5A8u;
    {
        const bool branch_taken_0x33b5a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x33B5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B5A8u;
        // 0x33b5ac: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b5a8) {
            ctx->pc = 0x33B598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33b598;
        }
    }
    ctx->pc = 0x33B5B0u;
label_33b5b0:
    // 0x33b5b0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x33b5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_33b5b4:
    // 0x33b5b4: 0x1450ffde  bne         $v0, $s0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x33B5B4u;
    {
        const bool branch_taken_0x33b5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x33B5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B5B4u;
        // 0x33b5b8: 0x2631ff60  addiu       $s1, $s1, -0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b5b4) {
            ctx->pc = 0x33B530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33b530;
        }
    }
    ctx->pc = 0x33B5BCu;
    // 0x33b5bc: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x33b5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_33b5c0:
    // 0x33b5c0: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x33B5C0u;
    SET_GPR_U32(ctx, 31, 0x33B5C8u);
    ctx->pc = 0x33B5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B5C0u;
    // 0x33b5c4: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x33B5C0u, 0x33B5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B5C8u;
label_33b5c8:
    // 0x33b5c8: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x33b5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
label_33b5cc:
    // 0x33b5cc: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x33b5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x33b5d0: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x33b5d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b5d4: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x33b5d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33b5d8: 0x1440fe8f  bnez        $v0, . + 4 + (-0x171 << 2)
    ctx->pc = 0x33B5D8u;
    {
        const bool branch_taken_0x33b5d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33B5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B5D8u;
        // 0x33b5dc: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b5d8) {
            ctx->pc = 0x33B018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33b018;
        }
    }
    ctx->pc = 0x33B5E0u;
label_33b5e0:
    // 0x33b5e0: 0x8fa300fc  lw          $v1, 0xFC($sp)
    ctx->pc = 0x33b5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x33b5e4: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x33b5e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x33b5e8: 0x1440fe73  bnez        $v0, . + 4 + (-0x18D << 2)
    ctx->pc = 0x33B5E8u;
    {
        const bool branch_taken_0x33b5e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33B5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B5E8u;
        // 0x33b5ec: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b5e8) {
            ctx->pc = 0x33AFB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33afb8;
        }
    }
    ctx->pc = 0x33B5F0u;
label_33b5f0:
    // 0x33b5f0: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x33b5f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_33b5f4:
    // 0x33b5f4: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x33b5f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
label_33b5f8:
    // 0x33b5f8: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x33b5f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x33b5fc: 0xdfb30128  ld          $s3, 0x128($sp)
    ctx->pc = 0x33b5fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x33b600: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x33b600u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x33b604: 0xdfb50138  ld          $s5, 0x138($sp)
    ctx->pc = 0x33b604u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x33b608: 0xdfb60140  ld          $s6, 0x140($sp)
    ctx->pc = 0x33b608u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x33b60c: 0xdfb70148  ld          $s7, 0x148($sp)
    ctx->pc = 0x33b60cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x33b610: 0xdfbe0150  ld          $fp, 0x150($sp)
    ctx->pc = 0x33b610u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x33b614: 0xdfbf0158  ld          $ra, 0x158($sp)
    ctx->pc = 0x33b614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x33b618: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x33b618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x33b61c: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x33b61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x33b620: 0x3e00008  jr          $ra
    ctx->pc = 0x33B620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B620u;
        // 0x33b624: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B628u;
}
