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

// Function: sub_0018AA38
// Address: 0x18aa38 - 0x18b580
void sub_0018AA38_0x18aa38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018AA38_0x18aa38");
#endif

    switch (ctx->pc) {
        case 0x18ab68u: goto label_18ab68;
        case 0x18aba8u: goto label_18aba8;
        case 0x18abb0u: goto label_18abb0;
        case 0x18acbcu: goto label_18acbc;
        case 0x18acd4u: goto label_18acd4;
        case 0x18ace4u: goto label_18ace4;
        case 0x18ad14u: goto label_18ad14;
        case 0x18aeb4u: goto label_18aeb4;
        case 0x18aeccu: goto label_18aecc;
        case 0x18aedcu: goto label_18aedc;
        case 0x18b0b4u: goto label_18b0b4;
        case 0x18b0ccu: goto label_18b0cc;
        case 0x18b0dcu: goto label_18b0dc;
        case 0x18b130u: goto label_18b130;
        case 0x18b1e0u: goto label_18b1e0;
        case 0x18b38cu: goto label_18b38c;
        case 0x18b524u: goto label_18b524;
        default: break;
    }

    ctx->pc = 0x18aa38u;

    // 0x18aa38: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x18aa38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x18aa3c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x18aa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x18aa40: 0xffb00140  sd          $s0, 0x140($sp)
    ctx->pc = 0x18aa40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 16));
    // 0x18aa44: 0xffb10148  sd          $s1, 0x148($sp)
    ctx->pc = 0x18aa44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 17));
    // 0x18aa48: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x18aa48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aa4c: 0xffb20150  sd          $s2, 0x150($sp)
    ctx->pc = 0x18aa4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 18));
    // 0x18aa50: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x18aa50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aa54: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x18aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x18aa58: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18aa58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aa5c: 0xffb30158  sd          $s3, 0x158($sp)
    ctx->pc = 0x18aa5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 19));
    // 0x18aa60: 0xffb40160  sd          $s4, 0x160($sp)
    ctx->pc = 0x18aa60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 20));
    // 0x18aa64: 0xffb50168  sd          $s5, 0x168($sp)
    ctx->pc = 0x18aa64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 21));
    // 0x18aa68: 0xffb60170  sd          $s6, 0x170($sp)
    ctx->pc = 0x18aa68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 22));
    // 0x18aa6c: 0xffb70178  sd          $s7, 0x178($sp)
    ctx->pc = 0x18aa6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 23));
    // 0x18aa70: 0xffbe0180  sd          $fp, 0x180($sp)
    ctx->pc = 0x18aa70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 30));
    // 0x18aa74: 0xffbf0188  sd          $ra, 0x188($sp)
    ctx->pc = 0x18aa74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 31));
    // 0x18aa78: 0xe7b50198  swc1        $f21, 0x198($sp)
    ctx->pc = 0x18aa78u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x18aa7c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18AA7Cu;
    {
        const bool branch_taken_0x18aa7c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x18AA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA7Cu;
        // 0x18aa80: 0xe7b40190  swc1        $f20, 0x190($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aa7c) {
            ctx->pc = 0x18AA98u;
            goto label_18aa98;
        }
    }
    ctx->pc = 0x18AA84u;
    // 0x18aa84: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18aa84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18aa88: 0x0  nop
    ctx->pc = 0x18aa88u;
    // NOP
    // 0x18aa8c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x18aa8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x18aa90: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18AA90u;
    {
        const bool branch_taken_0x18aa90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18aa90) {
            ctx->pc = 0x18AAB4u;
            goto label_18aab4;
        }
    }
    ctx->pc = 0x18AA98u;
label_18aa98:
    // 0x18aa98: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x18aa98u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x18aa9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18aa9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18aaa0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18aaa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18aaa4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18aaa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18aaa8: 0x0  nop
    ctx->pc = 0x18aaa8u;
    // NOP
    // 0x18aaac: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x18aaacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x18aab0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x18aab0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_18aab4:
    // 0x18aab4: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x18aab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x18aab8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x18aab8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x18aabc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18aabcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18aac0: 0xc6410094  lwc1        $f1, 0x94($s2)
    ctx->pc = 0x18aac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18aac4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x18aac4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x18aac8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18aac8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18aacc: 0x0  nop
    ctx->pc = 0x18aaccu;
    // NOP
    // 0x18aad0: 0x4501029c  bc1t        . + 4 + (0x29C << 2)
    ctx->pc = 0x18AAD0u;
    {
        const bool branch_taken_0x18aad0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AAD0u;
        // 0x18aad4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aad0) {
            ctx->pc = 0x18B544u;
            goto label_18b544;
        }
    }
    ctx->pc = 0x18AAD8u;
    // 0x18aad8: 0x8ca30104  lw          $v1, 0x104($a1)
    ctx->pc = 0x18aad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x18aadc: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x18aadcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x18aae0: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x18aae0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18aae4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x18aae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18aae8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18aae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18aaec: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x18aaecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18aaf0: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x18aaf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
    // 0x18aaf4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x18aaf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x18aaf8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18aaf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18aafc: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x18aafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ab00: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x18ab00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x18ab04: 0xc4c2405c  lwc1        $f2, 0x405C($a2)
    ctx->pc = 0x18ab04u;
    { uint32_t bits = FAST_READ32(0x46405Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18ab08: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x18ab08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18ab0c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18ab0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ab10: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x18ab10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18ab14: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x18ab14u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x18ab18: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x18ab18u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x18ab1c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x18ab1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ab20: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x18ab20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x18ab24: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x18ab24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ab28: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x18ab28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x18ab2c: 0x8ce20104  lw          $v0, 0x104($a3)
    ctx->pc = 0x18ab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 260)));
    // 0x18ab30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18ab30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18ab34: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x18ab34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ab38: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x18ab38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x18ab3c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x18ab3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x18ab40: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x18ab40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ab44: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x18ab44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x18ab48: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x18ab48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x18ab4c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x18ab4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ab50: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x18ab50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x18ab54: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x18ab54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18ab58: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x18ab58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x18ab5c: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x18ab5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x18ab60: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x18AB60u;
    SET_GPR_U32(ctx, 31, 0x18AB68u);
    ctx->pc = 0x18AB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AB60u;
    // 0x18ab64: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x18AB60u, 0x18AB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AB68u;
label_18ab68:
    // 0x18ab68: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x18ab68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18ab6c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x18ab6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18ab70: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x18ab70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18ab74: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x18ab74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18ab78: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x18ab78u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x18ab7c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x18ab7cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x18ab80: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x18ab80u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x18ab84: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x18ab84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x18ab88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18ab88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ab8c: 0x0  nop
    ctx->pc = 0x18ab8cu;
    // NOP
    // 0x18ab90: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18ab90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ab94: 0x0  nop
    ctx->pc = 0x18ab94u;
    // NOP
    // 0x18ab98: 0x4501026a  bc1t        . + 4 + (0x26A << 2)
    ctx->pc = 0x18AB98u;
    {
        const bool branch_taken_0x18ab98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18AB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AB98u;
        // 0x18ab9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ab98) {
            ctx->pc = 0x18B544u;
            goto label_18b544;
        }
    }
    ctx->pc = 0x18ABA0u;
    // 0x18aba0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x18ABA0u;
    SET_GPR_U32(ctx, 31, 0x18ABA8u);
    ctx->pc = 0x18ABA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ABA0u;
    // 0x18aba4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x18ABA0u, 0x18ABA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ABA8u;
label_18aba8:
    // 0x18aba8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x18ABA8u;
    SET_GPR_U32(ctx, 31, 0x18ABB0u);
    ctx->pc = 0x18ABACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ABA8u;
    // 0x18abac: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x18ABA8u, 0x18ABB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ABB0u;
label_18abb0:
    // 0x18abb0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x18abb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18abb4: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x18abb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18abb8: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x18abb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18abbc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x18abbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18abc0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x18abc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x18abc4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x18abc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18abc8: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x18abc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x18abcc: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x18abccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18abd0: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x18abd0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18abd4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x18abd4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18abd8: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x18abd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18abdc: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x18abdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18abe0: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x18abe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18abe4: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x18abe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18abe8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x18abe8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x18abec: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x18abecu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x18abf0: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x18abf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x18abf4: 0x0  nop
    ctx->pc = 0x18abf4u;
    // NOP
    // 0x18abf8: 0x0  nop
    ctx->pc = 0x18abf8u;
    // NOP
    // 0x18abfc: 0x46000044  c1          0x44
    ctx->pc = 0x18abfcu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x18ac00: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x18ac00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ac04: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x18ac04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x18ac08: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x18ac08u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ac0c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x18ac0cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ac10: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x18ac10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x18ac14: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x18ac14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ac18: 0x0  nop
    ctx->pc = 0x18ac18u;
    // NOP
    // 0x18ac1c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x18AC1Cu;
    {
        const bool branch_taken_0x18ac1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18AC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC1Cu;
        // 0x18ac20: 0xe7a10080  swc1        $f1, 0x80($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ac1c) {
            ctx->pc = 0x18AC48u;
            goto label_18ac48;
        }
    }
    ctx->pc = 0x18AC24u;
    // 0x18ac24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18ac24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18ac28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18ac28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ac2c: 0x0  nop
    ctx->pc = 0x18ac2cu;
    // NOP
    // 0x18ac30: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x18ac30u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x18ac34: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18ac34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18ac38: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x18ac38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x18ac3c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x18ac3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x18ac40: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x18ac40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18ac44: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x18ac44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_18ac48:
    // 0x18ac48: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x18ac48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x18ac4c: 0xc440fd20  lwc1        $f0, -0x2E0($v0)
    ctx->pc = 0x18ac4cu;
    { uint32_t bits = FAST_READ32(0x43FD20u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ac50: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x18ac50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x18ac54: 0x7e000000  sq          $zero, 0x0($s0)
    ctx->pc = 0x18ac54u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 0));
    // 0x18ac58: 0x26160010  addiu       $s6, $s0, 0x10
    ctx->pc = 0x18ac58u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18ac5c: 0x7e000010  sq          $zero, 0x10($s0)
    ctx->pc = 0x18ac5cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 0));
    // 0x18ac60: 0x27b50130  addiu       $s5, $sp, 0x130
    ctx->pc = 0x18ac60u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x18ac64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18ac64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18ac68: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x18ac68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x18ac6c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18ac6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18ac70: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x18ac70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x18ac74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18ac74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ac78: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x18ac78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x18ac7c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18ac7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ac80: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x18ac80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x18ac84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18ac84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ac88: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x18ac88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x18ac8c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x18ac8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ac90: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x18ac90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x18ac94: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x18ac94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ac98: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x18ac98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x18ac9c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x18ac9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aca0: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x18aca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x18aca4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x18aca4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aca8: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x18aca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x18acac: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x18acacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x18acb0: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x18acb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x18acb4: 0xc077940  jal         func_1DE500
    ctx->pc = 0x18ACB4u;
    SET_GPR_U32(ctx, 31, 0x18ACBCu);
    ctx->pc = 0x18ACB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ACB4u;
    // 0x18acb8: 0xae020044  sw          $v0, 0x44($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE500u, 0x18ACB4u, 0x18ACBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ACBCu;
label_18acbc:
    // 0x18acbc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x18ACBCu;
    {
        const bool branch_taken_0x18acbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ACBCu;
        // 0x18acc0: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18acbc) {
            ctx->pc = 0x18AD1Cu;
            goto label_18ad1c;
        }
    }
    ctx->pc = 0x18ACC4u;
    // 0x18acc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18acc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18acc8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x18acc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18accc: 0xc062e12  jal         func_18B848
    ctx->pc = 0x18ACCCu;
    SET_GPR_U32(ctx, 31, 0x18ACD4u);
    ctx->pc = 0x18ACD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ACCCu;
    // 0x18acd0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B848u, 0x18ACCCu, 0x18ACD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ACD4u;
label_18acd4:
    // 0x18acd4: 0x1040021b  beqz        $v0, . + 4 + (0x21B << 2)
    ctx->pc = 0x18ACD4u;
    {
        const bool branch_taken_0x18acd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ACD4u;
        // 0x18acd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18acd4) {
            ctx->pc = 0x18B544u;
            goto label_18b544;
        }
    }
    ctx->pc = 0x18ACDCu;
    // 0x18acdc: 0xc07a8e4  jal         func_1EA390
    ctx->pc = 0x18ACDCu;
    SET_GPR_U32(ctx, 31, 0x18ACE4u);
    ctx->pc = 0x18ACE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ACDCu;
    // 0x18ace0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA390u, 0x18ACDCu, 0x18ACE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ACE4u;
label_18ace4:
    // 0x18ace4: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x18ace4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
    // 0x18ace8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18acec: 0x24637ee0  addiu       $v1, $v1, 0x7EE0
    ctx->pc = 0x18acecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32480));
    // 0x18acf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18acf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18acf4: 0x1040010c  beqz        $v0, . + 4 + (0x10C << 2)
    ctx->pc = 0x18ACF4u;
    {
        const bool branch_taken_0x18acf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ACF4u;
        // 0x18acf8: 0x3c030047  lui         $v1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18acf4) {
            ctx->pc = 0x18B128u;
            goto label_18b128;
        }
    }
    ctx->pc = 0x18ACFCu;
    // 0x18acfc: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x18acfcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18ad00: 0x24632828  addiu       $v1, $v1, 0x2828
    ctx->pc = 0x18ad00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10280));
    // 0x18ad04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18ad04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18ad08: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x18ad08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18ad0c: 0x14800106  bnez        $a0, . + 4 + (0x106 << 2)
    ctx->pc = 0x18AD0Cu;
    {
        const bool branch_taken_0x18ad0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ad0c) {
            ctx->pc = 0x18B128u;
            goto label_18b128;
        }
    }
    ctx->pc = 0x18AD14u;
label_18ad14:
    // 0x18ad14: 0x1000020b  b           . + 4 + (0x20B << 2)
    ctx->pc = 0x18AD14u;
    {
        const bool branch_taken_0x18ad14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AD14u;
        // 0x18ad18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ad14) {
            ctx->pc = 0x18B544u;
            goto label_18b544;
        }
    }
    ctx->pc = 0x18AD1Cu;
label_18ad1c:
    // 0x18ad1c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x18ad1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18ad20: 0x27b300a0  addiu       $s3, $sp, 0xA0
    ctx->pc = 0x18ad20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18ad24: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x18ad24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x18ad28: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18ad28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x18ad2c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x18ad2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x18ad30: 0x8cc40104  lw          $a0, 0x104($a2)
    ctx->pc = 0x18ad30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 260)));
    // 0x18ad34: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18ad34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18ad38: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x18ad38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x18ad3c: 0xc4610040  lwc1        $f1, 0x40($v1)
    ctx->pc = 0x18ad3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ad40: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x18ad40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18ad44: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x18ad44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18ad48: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x18ad48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18ad4c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x18ad4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x18ad50: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x18ad50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ad54: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x18ad54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x18ad58: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x18ad58u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x18ad5c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18ad5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x18ad60: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x18ad60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x18ad64: 0xe7a2009c  swc1        $f2, 0x9C($sp)
    ctx->pc = 0x18ad64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x18ad68: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x18ad68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x18ad6c: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x18ad6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x18ad70: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x18ad70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18ad74: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x18ad74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18ad78: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x18ad78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18ad7c: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x18ad7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18ad80: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x18ad80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ad84: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x18ad84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x18ad88: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x18ad88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ad8c: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x18ad8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18ad90: 0xc7a300ac  lwc1        $f3, 0xAC($sp)
    ctx->pc = 0x18ad90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18ad94: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x18ad94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x18ad98: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x18ad98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x18ad9c: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x18ad9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x18ada0: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x18ada0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x18ada4: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x18ada4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
    // 0x18ada8: 0x8cc20104  lw          $v0, 0x104($a2)
    ctx->pc = 0x18ada8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 260)));
    // 0x18adac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x18adacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18adb0: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x18adb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x18adb4: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x18adb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18adb8: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x18adb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18adbc: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x18adbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18adc0: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x18adc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x18adc4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x18adc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18adc8: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x18adc8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x18adcc: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x18adccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x18add0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18add0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x18add4: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x18add4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x18add8: 0xe7a200ac  swc1        $f2, 0xAC($sp)
    ctx->pc = 0x18add8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x18addc: 0xe7a300a4  swc1        $f3, 0xA4($sp)
    ctx->pc = 0x18addcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x18ade0: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x18ade0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x18ade4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x18ade4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ade8: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x18ade8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18adec: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x18adecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18adf0: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x18adf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18adf4: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x18adf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18adf8: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x18adf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18adfc: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x18adfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18ae00: 0xc7a300bc  lwc1        $f3, 0xBC($sp)
    ctx->pc = 0x18ae00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18ae04: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x18ae04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x18ae08: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x18ae08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x18ae0c: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x18ae0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x18ae10: 0xe7a3009c  swc1        $f3, 0x9C($sp)
    ctx->pc = 0x18ae10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x18ae14: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x18ae14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18ae18: 0x7ba30090  lq          $v1, 0x90($sp)
    ctx->pc = 0x18ae18u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18ae1c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x18ae1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x18ae20: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x18ae20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x18ae24: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x18ae24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x18ae28: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x18ae28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x18ae2c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x18ae2cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18ae30: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x18ae30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18ae34: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x18ae34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18ae38: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x18ae38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18ae3c: 0xc6840008  lwc1        $f4, 0x8($s4)
    ctx->pc = 0x18ae3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18ae40: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x18ae40u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x18ae44: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x18ae44u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x18ae48: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x18ae48u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x18ae4c: 0x0  nop
    ctx->pc = 0x18ae4cu;
    // NOP
    // 0x18ae50: 0x0  nop
    ctx->pc = 0x18ae50u;
    // NOP
    // 0x18ae54: 0x46000044  c1          0x44
    ctx->pc = 0x18ae54u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x18ae58: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x18ae58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x18ae5c: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x18ae5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ae60: 0x0  nop
    ctx->pc = 0x18ae60u;
    // NOP
    // 0x18ae64: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x18AE64u;
    {
        const bool branch_taken_0x18ae64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18AE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AE64u;
        // 0x18ae68: 0xe7a10080  swc1        $f1, 0x80($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ae64) {
            ctx->pc = 0x18AE90u;
            goto label_18ae90;
        }
    }
    ctx->pc = 0x18AE6Cu;
    // 0x18ae6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18ae6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18ae70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18ae70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ae74: 0x0  nop
    ctx->pc = 0x18ae74u;
    // NOP
    // 0x18ae78: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x18ae78u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x18ae7c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18ae7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18ae80: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x18ae80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x18ae84: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x18ae84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x18ae88: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x18ae88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18ae8c: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x18ae8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_18ae90:
    // 0x18ae90: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18ae90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18ae94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18ae94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ae98: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18ae98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ae9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18ae9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aea0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x18aea0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aea4: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x18aea4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aea8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x18aea8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aeac: 0xc077940  jal         func_1DE500
    ctx->pc = 0x18AEACu;
    SET_GPR_U32(ctx, 31, 0x18AEB4u);
    ctx->pc = 0x18AEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AEACu;
    // 0x18aeb0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE500u, 0x18AEACu, 0x18AEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AEB4u;
label_18aeb4:
    // 0x18aeb4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x18AEB4u;
    {
        const bool branch_taken_0x18aeb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AEB4u;
        // 0x18aeb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aeb4) {
            ctx->pc = 0x18AF1Cu;
            goto label_18af1c;
        }
    }
    ctx->pc = 0x18AEBCu;
    // 0x18aebc: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x18aebcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aec0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x18aec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aec4: 0xc062e12  jal         func_18B848
    ctx->pc = 0x18AEC4u;
    SET_GPR_U32(ctx, 31, 0x18AECCu);
    ctx->pc = 0x18AEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AEC4u;
    // 0x18aec8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B848u, 0x18AEC4u, 0x18AECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AECCu;
label_18aecc:
    // 0x18aecc: 0x1040019d  beqz        $v0, . + 4 + (0x19D << 2)
    ctx->pc = 0x18AECCu;
    {
        const bool branch_taken_0x18aecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AECCu;
        // 0x18aed0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aecc) {
            ctx->pc = 0x18B544u;
            goto label_18b544;
        }
    }
    ctx->pc = 0x18AED4u;
    // 0x18aed4: 0xc07a8e4  jal         func_1EA390
    ctx->pc = 0x18AED4u;
    SET_GPR_U32(ctx, 31, 0x18AEDCu);
    ctx->pc = 0x18AED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AED4u;
    // 0x18aed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA390u, 0x18AED4u, 0x18AEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AEDCu;
label_18aedc:
    // 0x18aedc: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x18aedcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
    // 0x18aee0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18aee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18aee4: 0x24637ee0  addiu       $v1, $v1, 0x7EE0
    ctx->pc = 0x18aee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32480));
    // 0x18aee8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18aee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18aeec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18AEECu;
    {
        const bool branch_taken_0x18aeec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AEECu;
        // 0x18aef0: 0x3c030047  lui         $v1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aeec) {
            ctx->pc = 0x18AF0Cu;
            goto label_18af0c;
        }
    }
    ctx->pc = 0x18AEF4u;
    // 0x18aef4: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x18aef4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18aef8: 0x24632828  addiu       $v1, $v1, 0x2828
    ctx->pc = 0x18aef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10280));
    // 0x18aefc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18aefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18af00: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x18af00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18af04: 0x1080018f  beqz        $a0, . + 4 + (0x18F << 2)
    ctx->pc = 0x18AF04u;
    {
        const bool branch_taken_0x18af04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AF04u;
        // 0x18af08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18af04) {
            ctx->pc = 0x18B544u;
            goto label_18b544;
        }
    }
    ctx->pc = 0x18AF0Cu;
label_18af0c:
    // 0x18af0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18af0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18af10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18af10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18af14: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x18AF14u;
    {
        const bool branch_taken_0x18af14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AF14u;
        // 0x18af18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18af14) {
            ctx->pc = 0x18B118u;
            goto label_18b118;
        }
    }
    ctx->pc = 0x18AF1Cu;
label_18af1c:
    // 0x18af1c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x18af1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18af20: 0x8ca20104  lw          $v0, 0x104($a1)
    ctx->pc = 0x18af20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x18af24: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x18af24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18af28: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x18af28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18af2c: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x18af2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x18af30: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x18af30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18af34: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x18af34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18af38: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x18af38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18af3c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x18af3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x18af40: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x18af40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18af44: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x18af44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x18af48: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x18af48u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x18af4c: 0x8fa30134  lw          $v1, 0x134($sp)
    ctx->pc = 0x18af4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x18af50: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18af50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x18af54: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x18af54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x18af58: 0xe7a200bc  swc1        $f2, 0xBC($sp)
    ctx->pc = 0x18af58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x18af5c: 0xe7a300b4  swc1        $f3, 0xB4($sp)
    ctx->pc = 0x18af5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x18af60: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x18af60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x18af64: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x18af64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18af68: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x18af68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18af6c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x18af6cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18af70: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x18af70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18af74: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x18af74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18af78: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x18af78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18af7c: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x18af7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18af80: 0xc7a300cc  lwc1        $f3, 0xCC($sp)
    ctx->pc = 0x18af80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18af84: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x18af84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x18af88: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x18af88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x18af8c: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x18af8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x18af90: 0xe7a300ac  swc1        $f3, 0xAC($sp)
    ctx->pc = 0x18af90u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x18af94: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x18af94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18af98: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x18af98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18af9c: 0x8ca20104  lw          $v0, 0x104($a1)
    ctx->pc = 0x18af9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x18afa0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x18afa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18afa4: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x18afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x18afa8: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x18afa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x18afac: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x18afacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18afb0: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x18afb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18afb4: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x18afb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18afb8: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x18afb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x18afbc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x18afbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18afc0: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x18afc0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x18afc4: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x18afc4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x18afc8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18afc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x18afcc: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x18afccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x18afd0: 0xe7a200bc  swc1        $f2, 0xBC($sp)
    ctx->pc = 0x18afd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x18afd4: 0xe7a300b4  swc1        $f3, 0xB4($sp)
    ctx->pc = 0x18afd4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x18afd8: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x18afd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x18afdc: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x18afdcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18afe0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x18afe0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18afe4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x18afe4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18afe8: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x18afe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18afec: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x18afecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18aff0: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x18aff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18aff4: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x18aff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18aff8: 0xc7a300cc  lwc1        $f3, 0xCC($sp)
    ctx->pc = 0x18aff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18affc: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x18affcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x18b000: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x18b000u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x18b004: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x18b004u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x18b008: 0xe7a300ac  swc1        $f3, 0xAC($sp)
    ctx->pc = 0x18b008u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x18b00c: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x18b00cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18b010: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x18b010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18b014: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x18b014u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b018: 0x7ba30090  lq          $v1, 0x90($sp)
    ctx->pc = 0x18b018u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18b01c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x18b01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x18b020: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x18b020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x18b024: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x18b024u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x18b028: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x18b028u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x18b02c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x18b02cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18b030: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x18b030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18b034: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x18b034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18b038: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x18b038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18b03c: 0xc6840008  lwc1        $f4, 0x8($s4)
    ctx->pc = 0x18b03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18b040: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x18b040u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x18b044: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x18b044u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x18b048: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x18b048u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x18b04c: 0x0  nop
    ctx->pc = 0x18b04cu;
    // NOP
    // 0x18b050: 0x0  nop
    ctx->pc = 0x18b050u;
    // NOP
    // 0x18b054: 0x46000044  c1          0x44
    ctx->pc = 0x18b054u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x18b058: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x18b058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x18b05c: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x18b05cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b060: 0x0  nop
    ctx->pc = 0x18b060u;
    // NOP
    // 0x18b064: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x18B064u;
    {
        const bool branch_taken_0x18b064 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18B068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B064u;
        // 0x18b068: 0xe7a10080  swc1        $f1, 0x80($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b064) {
            ctx->pc = 0x18B090u;
            goto label_18b090;
        }
    }
    ctx->pc = 0x18B06Cu;
    // 0x18b06c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18b06cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18b070: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18b070u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b074: 0x0  nop
    ctx->pc = 0x18b074u;
    // NOP
    // 0x18b078: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x18b078u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x18b07c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18b07cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18b080: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x18b080u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x18b084: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x18b084u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x18b088: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x18b088u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18b08c: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x18b08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_18b090:
    // 0x18b090: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18b090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18b094: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x18b094u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b098: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18b098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b09c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18b09cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b0a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18b0a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b0a4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x18b0a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b0a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x18b0a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b0ac: 0xc077940  jal         func_1DE500
    ctx->pc = 0x18B0ACu;
    SET_GPR_U32(ctx, 31, 0x18B0B4u);
    ctx->pc = 0x18B0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B0ACu;
    // 0x18b0b0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE500u, 0x18B0ACu, 0x18B0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B0B4u;
label_18b0b4:
    // 0x18b0b4: 0x1040ff17  beqz        $v0, . + 4 + (-0xE9 << 2)
    ctx->pc = 0x18B0B4u;
    {
        const bool branch_taken_0x18b0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B0B4u;
        // 0x18b0b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b0b4) {
            ctx->pc = 0x18AD14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ad14;
        }
    }
    ctx->pc = 0x18B0BCu;
    // 0x18b0bc: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x18b0bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b0c0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x18b0c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b0c4: 0xc062e12  jal         func_18B848
    ctx->pc = 0x18B0C4u;
    SET_GPR_U32(ctx, 31, 0x18B0CCu);
    ctx->pc = 0x18B0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B0C4u;
    // 0x18b0c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B848u, 0x18B0C4u, 0x18B0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B0CCu;
label_18b0cc:
    // 0x18b0cc: 0x1040011d  beqz        $v0, . + 4 + (0x11D << 2)
    ctx->pc = 0x18B0CCu;
    {
        const bool branch_taken_0x18b0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B0CCu;
        // 0x18b0d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b0cc) {
            ctx->pc = 0x18B544u;
            goto label_18b544;
        }
    }
    ctx->pc = 0x18B0D4u;
    // 0x18b0d4: 0xc07a8e4  jal         func_1EA390
    ctx->pc = 0x18B0D4u;
    SET_GPR_U32(ctx, 31, 0x18B0DCu);
    ctx->pc = 0x18B0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B0D4u;
    // 0x18b0d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA390u, 0x18B0D4u, 0x18B0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B0DCu;
label_18b0dc:
    // 0x18b0dc: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x18b0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
    // 0x18b0e0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18b0e4: 0x24637ee0  addiu       $v1, $v1, 0x7EE0
    ctx->pc = 0x18b0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32480));
    // 0x18b0e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b0ec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18B0ECu;
    {
        const bool branch_taken_0x18b0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B0ECu;
        // 0x18b0f0: 0x3c030047  lui         $v1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b0ec) {
            ctx->pc = 0x18B10Cu;
            goto label_18b10c;
        }
    }
    ctx->pc = 0x18B0F4u;
    // 0x18b0f4: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x18b0f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18b0f8: 0x24632828  addiu       $v1, $v1, 0x2828
    ctx->pc = 0x18b0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10280));
    // 0x18b0fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b100: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x18b100u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18b104: 0x1080010f  beqz        $a0, . + 4 + (0x10F << 2)
    ctx->pc = 0x18B104u;
    {
        const bool branch_taken_0x18b104 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B104u;
        // 0x18b108: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b104) {
            ctx->pc = 0x18B544u;
            goto label_18b544;
        }
    }
    ctx->pc = 0x18B10Cu;
label_18b10c:
    // 0x18b10c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x18b10cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x18b110: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18b110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b114: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18b114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18b118:
    // 0x18b118: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x18b118u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x18b11c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x18b11cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x18b120: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x18B120u;
    {
        const bool branch_taken_0x18b120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B120u;
        // 0x18b124: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b120) {
            ctx->pc = 0x18B544u;
            goto label_18b544;
        }
    }
    ctx->pc = 0x18B128u;
label_18b128:
    // 0x18b128: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x18B128u;
    SET_GPR_U32(ctx, 31, 0x18B130u);
    ctx->pc = 0x18B12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B128u;
    // 0x18b12c: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x18B128u, 0x18B130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B130u;
label_18b130:
    // 0x18b130: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x18b130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b134: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x18b134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x18b138: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18b138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18b13c: 0xc7c00004  lwc1        $f0, 0x4($fp)
    ctx->pc = 0x18b13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b140: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x18b140u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x18b144: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x18b144u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x18b148: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x18b148u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x18b14c: 0xe7c00004  swc1        $f0, 0x4($fp)
    ctx->pc = 0x18b14cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
    // 0x18b150: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x18b150u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x18b154: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x18b154u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x18b158: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x18b158u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18b15c: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x18b15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18b160: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x18b160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18b164: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x18b164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18b168: 0xc6840008  lwc1        $f4, 0x8($s4)
    ctx->pc = 0x18b168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18b16c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x18b16cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x18b170: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x18b170u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x18b174: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x18b174u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x18b178: 0x0  nop
    ctx->pc = 0x18b178u;
    // NOP
    // 0x18b17c: 0x0  nop
    ctx->pc = 0x18b17cu;
    // NOP
    // 0x18b180: 0x46000044  c1          0x44
    ctx->pc = 0x18b180u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x18b184: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x18b184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x18b188: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x18b188u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x18b18c: 0x0  nop
    ctx->pc = 0x18b18cu;
    // NOP
    // 0x18b190: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x18b190u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b194: 0x0  nop
    ctx->pc = 0x18b194u;
    // NOP
    // 0x18b198: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x18B198u;
    {
        const bool branch_taken_0x18b198 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18B19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B198u;
        // 0x18b19c: 0xe7a10080  swc1        $f1, 0x80($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b198) {
            ctx->pc = 0x18B1C4u;
            goto label_18b1c4;
        }
    }
    ctx->pc = 0x18B1A0u;
    // 0x18b1a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18b1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18b1a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18b1a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b1a8: 0x0  nop
    ctx->pc = 0x18b1a8u;
    // NOP
    // 0x18b1ac: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x18b1acu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x18b1b0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18b1b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18b1b4: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x18b1b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x18b1b8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x18b1b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x18b1bc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x18b1bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18b1c0: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x18b1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_18b1c4:
    // 0x18b1c4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18b1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18b1c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18b1c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b1cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18b1ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b1d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18b1d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b1d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18b1d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b1d8: 0xc0778e6  jal         func_1DE398
    ctx->pc = 0x18B1D8u;
    SET_GPR_U32(ctx, 31, 0x18B1E0u);
    ctx->pc = 0x18B1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B1D8u;
    // 0x18b1dc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE398u, 0x18B1D8u, 0x18B1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B1E0u;
label_18b1e0:
    // 0x18b1e0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x18B1E0u;
    {
        const bool branch_taken_0x18b1e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b1e0) {
            ctx->pc = 0x18B1E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B1E0u;
            // 0x18b1e4: 0x8e460000  lw          $a2, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B204u;
            goto label_18b204;
        }
    }
    ctx->pc = 0x18B1E8u;
    // 0x18b1e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18b1e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18b1ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18b1ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b1f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b1f4: 0xe6350008  swc1        $f21, 0x8($s1)
    ctx->pc = 0x18b1f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x18b1f8: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x18b1f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x18b1fc: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x18B1FCu;
    {
        const bool branch_taken_0x18b1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B1FCu;
        // 0x18b200: 0xe6350000  swc1        $f21, 0x0($s1) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b1fc) {
            ctx->pc = 0x18B544u;
            goto label_18b544;
        }
    }
    ctx->pc = 0x18B204u;
label_18b204:
    // 0x18b204: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x18b204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18b208: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x18b208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x18b20c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18b20cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x18b210: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x18b210u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18b214: 0x8cc40104  lw          $a0, 0x104($a2)
    ctx->pc = 0x18b214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 260)));
    // 0x18b218: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x18b218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x18b21c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18b21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18b220: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x18b220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x18b224: 0xc4610040  lwc1        $f1, 0x40($v1)
    ctx->pc = 0x18b224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b228: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x18b228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18b22c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x18b22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18b230: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x18b230u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x18b234: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x18b234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b238: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x18b238u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x18b23c: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x18b23cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x18b240: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18b240u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x18b244: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x18b244u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x18b248: 0xe7a2009c  swc1        $f2, 0x9C($sp)
    ctx->pc = 0x18b248u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x18b24c: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x18b24cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x18b250: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x18b250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x18b254: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x18b254u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18b258: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x18b258u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18b25c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x18b25cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18b260: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x18b260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18b264: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x18b264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b268: 0x27b500b0  addiu       $s5, $sp, 0xB0
    ctx->pc = 0x18b268u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x18b26c: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x18b26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b270: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x18b270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18b274: 0xc7a300ac  lwc1        $f3, 0xAC($sp)
    ctx->pc = 0x18b274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18b278: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x18b278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x18b27c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x18b27cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x18b280: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x18b280u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x18b284: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x18b284u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x18b288: 0x8cc20104  lw          $v0, 0x104($a2)
    ctx->pc = 0x18b288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 260)));
    // 0x18b28c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x18b28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18b290: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x18b290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x18b294: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x18b294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b298: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x18b298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18b29c: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x18b29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18b2a0: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x18b2a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x18b2a4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x18b2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b2a8: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x18b2a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x18b2ac: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x18b2acu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x18b2b0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18b2b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x18b2b4: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x18b2b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x18b2b8: 0xe7a200ac  swc1        $f2, 0xAC($sp)
    ctx->pc = 0x18b2b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x18b2bc: 0xe7a300a4  swc1        $f3, 0xA4($sp)
    ctx->pc = 0x18b2bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x18b2c0: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x18b2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x18b2c4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x18b2c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b2c8: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x18b2c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b2cc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x18b2ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18b2d0: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x18b2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18b2d4: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x18b2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b2d8: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x18b2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b2dc: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x18b2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18b2e0: 0xc7a300bc  lwc1        $f3, 0xBC($sp)
    ctx->pc = 0x18b2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18b2e4: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x18b2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x18b2e8: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x18b2e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x18b2ec: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x18b2ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x18b2f0: 0xe7a3009c  swc1        $f3, 0x9C($sp)
    ctx->pc = 0x18b2f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x18b2f4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x18b2f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b2f8: 0x7ba30090  lq          $v1, 0x90($sp)
    ctx->pc = 0x18b2f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18b2fc: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x18b2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x18b300: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x18b300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x18b304: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x18b304u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x18b308: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x18b308u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x18b30c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x18b30cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18b310: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x18b310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18b314: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x18b314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18b318: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x18b318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18b31c: 0xc6840008  lwc1        $f4, 0x8($s4)
    ctx->pc = 0x18b31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18b320: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x18b320u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x18b324: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x18b324u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x18b328: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x18b328u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x18b32c: 0x0  nop
    ctx->pc = 0x18b32cu;
    // NOP
    // 0x18b330: 0x0  nop
    ctx->pc = 0x18b330u;
    // NOP
    // 0x18b334: 0x46000044  c1          0x44
    ctx->pc = 0x18b334u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x18b338: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x18b338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x18b33c: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x18b33cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b340: 0x0  nop
    ctx->pc = 0x18b340u;
    // NOP
    // 0x18b344: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x18B344u;
    {
        const bool branch_taken_0x18b344 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18B348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B344u;
        // 0x18b348: 0xe7a10080  swc1        $f1, 0x80($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b344) {
            ctx->pc = 0x18B370u;
            goto label_18b370;
        }
    }
    ctx->pc = 0x18B34Cu;
    // 0x18b34c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18b34cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18b350: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18b350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b354: 0x0  nop
    ctx->pc = 0x18b354u;
    // NOP
    // 0x18b358: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x18b358u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x18b35c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18b35cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18b360: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x18b360u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x18b364: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x18b364u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x18b368: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x18b368u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18b36c: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x18b36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_18b370:
    // 0x18b370: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18b370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18b374: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18b374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b378: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18b378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b37c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18b37cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b380: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18b380u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b384: 0xc0778e6  jal         func_1DE398
    ctx->pc = 0x18B384u;
    SET_GPR_U32(ctx, 31, 0x18B38Cu);
    ctx->pc = 0x18B388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B384u;
    // 0x18b388: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE398u, 0x18B384u, 0x18B38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B38Cu;
label_18b38c:
    // 0x18b38c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x18B38Cu;
    {
        const bool branch_taken_0x18b38c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b38c) {
            ctx->pc = 0x18B390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B38Cu;
            // 0x18b390: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B3A4u;
            goto label_18b3a4;
        }
    }
    ctx->pc = 0x18B394u;
    // 0x18b394: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x18b394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x18b398: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18b398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b39c: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x18B39Cu;
    {
        const bool branch_taken_0x18b39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B39Cu;
        // 0x18b3a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b39c) {
            ctx->pc = 0x18B538u;
            goto label_18b538;
        }
    }
    ctx->pc = 0x18B3A4u;
label_18b3a4:
    // 0x18b3a4: 0x8ca20104  lw          $v0, 0x104($a1)
    ctx->pc = 0x18b3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x18b3a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x18b3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18b3ac: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x18b3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x18b3b0: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x18b3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b3b4: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x18b3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18b3b8: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x18b3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18b3bc: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x18b3bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x18b3c0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x18b3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b3c4: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x18b3c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x18b3c8: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x18b3c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x18b3cc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18b3ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x18b3d0: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x18b3d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x18b3d4: 0xe7a200bc  swc1        $f2, 0xBC($sp)
    ctx->pc = 0x18b3d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x18b3d8: 0xe7a300b4  swc1        $f3, 0xB4($sp)
    ctx->pc = 0x18b3d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x18b3dc: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x18b3dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x18b3e0: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x18b3e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18b3e4: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x18b3e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x18b3e8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x18b3e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18b3ec: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x18b3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18b3f0: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x18b3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b3f4: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x18b3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b3f8: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x18b3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18b3fc: 0xc7a300cc  lwc1        $f3, 0xCC($sp)
    ctx->pc = 0x18b3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18b400: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x18b400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x18b404: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x18b404u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x18b408: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x18b408u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x18b40c: 0xe7a300ac  swc1        $f3, 0xAC($sp)
    ctx->pc = 0x18b40cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x18b410: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x18b410u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b414: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x18b414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18b418: 0x8ca20104  lw          $v0, 0x104($a1)
    ctx->pc = 0x18b418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x18b41c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x18b41cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18b420: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x18b420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x18b424: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x18b424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b428: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x18b428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18b42c: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x18b42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18b430: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x18b430u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x18b434: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x18b434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b438: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x18b438u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x18b43c: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x18b43cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x18b440: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18b440u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x18b444: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x18b444u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x18b448: 0xe7a200bc  swc1        $f2, 0xBC($sp)
    ctx->pc = 0x18b448u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x18b44c: 0xe7a300b4  swc1        $f3, 0xB4($sp)
    ctx->pc = 0x18b44cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x18b450: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x18b450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x18b454: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x18b454u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b458: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x18b458u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x18b45c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x18b45cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18b460: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x18b460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18b464: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x18b464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b468: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x18b468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b46c: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x18b46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18b470: 0xc7a300cc  lwc1        $f3, 0xCC($sp)
    ctx->pc = 0x18b470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18b474: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x18b474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x18b478: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x18b478u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x18b47c: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x18b47cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x18b480: 0xe7a300ac  swc1        $f3, 0xAC($sp)
    ctx->pc = 0x18b480u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x18b484: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x18b484u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b488: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x18b488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18b48c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x18b48cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b490: 0x7ba30090  lq          $v1, 0x90($sp)
    ctx->pc = 0x18b490u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18b494: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x18b494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x18b498: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x18b498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x18b49c: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x18b49cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x18b4a0: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x18b4a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x18b4a4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x18b4a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18b4a8: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x18b4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18b4ac: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x18b4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18b4b0: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x18b4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18b4b4: 0xc6840008  lwc1        $f4, 0x8($s4)
    ctx->pc = 0x18b4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18b4b8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x18b4b8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x18b4bc: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x18b4bcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x18b4c0: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x18b4c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x18b4c4: 0x0  nop
    ctx->pc = 0x18b4c4u;
    // NOP
    // 0x18b4c8: 0x0  nop
    ctx->pc = 0x18b4c8u;
    // NOP
    // 0x18b4cc: 0x46000044  c1          0x44
    ctx->pc = 0x18b4ccu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x18b4d0: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x18b4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x18b4d4: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x18b4d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b4d8: 0x0  nop
    ctx->pc = 0x18b4d8u;
    // NOP
    // 0x18b4dc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x18B4DCu;
    {
        const bool branch_taken_0x18b4dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B4DCu;
        // 0x18b4e0: 0xe7a10080  swc1        $f1, 0x80($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b4dc) {
            ctx->pc = 0x18B508u;
            goto label_18b508;
        }
    }
    ctx->pc = 0x18B4E4u;
    // 0x18b4e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18b4e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18b4e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18b4e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b4ec: 0x0  nop
    ctx->pc = 0x18b4ecu;
    // NOP
    // 0x18b4f0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x18b4f0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x18b4f4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18b4f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18b4f8: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x18b4f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x18b4fc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x18b4fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x18b500: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x18b500u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18b504: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x18b504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_18b508:
    // 0x18b508: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18b508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18b50c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18b50cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b510: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18b510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b514: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18b514u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b518: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18b518u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b51c: 0xc0778e6  jal         func_1DE398
    ctx->pc = 0x18B51Cu;
    SET_GPR_U32(ctx, 31, 0x18B524u);
    ctx->pc = 0x18B520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B51Cu;
    // 0x18b520: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE398u, 0x18B51Cu, 0x18B524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B524u;
label_18b524:
    // 0x18b524: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18B524u;
    {
        const bool branch_taken_0x18b524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B524u;
        // 0x18b528: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b524) {
            ctx->pc = 0x18B544u;
            goto label_18b544;
        }
    }
    ctx->pc = 0x18B52Cu;
    // 0x18b52c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18b52cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18b530: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18b530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b534: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18b534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18b538:
    // 0x18b538: 0xe6350008  swc1        $f21, 0x8($s1)
    ctx->pc = 0x18b538u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x18b53c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x18b53cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x18b540: 0xe6350004  swc1        $f21, 0x4($s1)
    ctx->pc = 0x18b540u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_18b544:
    // 0x18b544: 0xdfb00140  ld          $s0, 0x140($sp)
    ctx->pc = 0x18b544u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x18b548: 0xdfb10148  ld          $s1, 0x148($sp)
    ctx->pc = 0x18b548u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x18b54c: 0xdfb20150  ld          $s2, 0x150($sp)
    ctx->pc = 0x18b54cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x18b550: 0xdfb30158  ld          $s3, 0x158($sp)
    ctx->pc = 0x18b550u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x18b554: 0xdfb40160  ld          $s4, 0x160($sp)
    ctx->pc = 0x18b554u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x18b558: 0xdfb50168  ld          $s5, 0x168($sp)
    ctx->pc = 0x18b558u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x18b55c: 0xdfb60170  ld          $s6, 0x170($sp)
    ctx->pc = 0x18b55cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x18b560: 0xdfb70178  ld          $s7, 0x178($sp)
    ctx->pc = 0x18b560u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x18b564: 0xdfbe0180  ld          $fp, 0x180($sp)
    ctx->pc = 0x18b564u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x18b568: 0xdfbf0188  ld          $ra, 0x188($sp)
    ctx->pc = 0x18b568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x18b56c: 0xc7b50198  lwc1        $f21, 0x198($sp)
    ctx->pc = 0x18b56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x18b570: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x18b570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18b574: 0x3e00008  jr          $ra
    ctx->pc = 0x18B574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B574u;
        // 0x18b578: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B57Cu;
    // 0x18b57c: 0x0  nop
    ctx->pc = 0x18b57cu;
    // NOP
    ctx->pc = 0x18b580u;
}
