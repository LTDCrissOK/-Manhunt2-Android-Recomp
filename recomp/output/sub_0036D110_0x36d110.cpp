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

// Function: sub_0036D110
// Address: 0x36d110 - 0x36d388
void sub_0036D110_0x36d110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D110_0x36d110");
#endif

    switch (ctx->pc) {
        case 0x36d190u: goto label_36d190;
        case 0x36d1c4u: goto label_36d1c4;
        case 0x36d1e8u: goto label_36d1e8;
        case 0x36d220u: goto label_36d220;
        case 0x36d264u: goto label_36d264;
        case 0x36d2a0u: goto label_36d2a0;
        case 0x36d2d4u: goto label_36d2d4;
        case 0x36d308u: goto label_36d308;
        case 0x36d33cu: goto label_36d33c;
        default: break;
    }

    ctx->pc = 0x36d110u;

    // 0x36d110: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x36d110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x36d114: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36d114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36d118: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36d118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36d11c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x36d11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x36d120: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x36d120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x36d124: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x36d124u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d128: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x36d128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x36d12c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x36d12cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d130: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x36d130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x36d134: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x36d134u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d138: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x36d138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x36d13c: 0xe7b70058  swc1        $f23, 0x58($sp)
    ctx->pc = 0x36d13cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x36d140: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x36d140u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x36d144: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x36d144u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x36d148: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x36d148u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x36d14c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x36d14cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x36d150: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x36d150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x36d154: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x36d154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x36d158: 0x86630008  lh          $v1, 0x8($s3)
    ctx->pc = 0x36d158u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x36d15c: 0x86420008  lh          $v0, 0x8($s2)
    ctx->pc = 0x36d15cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x36d160: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x36d160u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x36d164: 0x0  nop
    ctx->pc = 0x36d164u;
    // NOP
    // 0x36d168: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x36d168u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x36d16c: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x36d16cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x36d170: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x36d170u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x36d174: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x36d174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36d178: 0x0  nop
    ctx->pc = 0x36d178u;
    // NOP
    // 0x36d17c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x36d17cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x36d180: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x36d180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x36d184: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x36d184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x36d188: 0xc0db440  jal         func_36D100
    ctx->pc = 0x36D188u;
    SET_GPR_U32(ctx, 31, 0x36D190u);
    ctx->pc = 0x36D18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D188u;
    // 0x36d18c: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D100u, 0x36D188u, 0x36D190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D190u;
label_36d190:
    // 0x36d190: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x36d190u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x36d194: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x36d194u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x36d198: 0xa6820008  sh          $v0, 0x8($s4)
    ctx->pc = 0x36d198u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x36d19c: 0x8643000a  lh          $v1, 0xA($s2)
    ctx->pc = 0x36d19cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x36d1a0: 0x8662000a  lh          $v0, 0xA($s3)
    ctx->pc = 0x36d1a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x36d1a4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x36d1a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36d1a8: 0x0  nop
    ctx->pc = 0x36d1a8u;
    // NOP
    // 0x36d1ac: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x36d1acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x36d1b0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x36d1b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x36d1b4: 0x0  nop
    ctx->pc = 0x36d1b4u;
    // NOP
    // 0x36d1b8: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x36d1b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x36d1bc: 0xc0db440  jal         func_36D100
    ctx->pc = 0x36D1BCu;
    SET_GPR_U32(ctx, 31, 0x36D1C4u);
    ctx->pc = 0x36D1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D1BCu;
    // 0x36d1c0: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D100u, 0x36D1BCu, 0x36D1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D1C4u;
label_36d1c4:
    // 0x36d1c4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x36d1c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x36d1c8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x36d1c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x36d1cc: 0xa682000a  sh          $v0, 0xA($s4)
    ctx->pc = 0x36d1ccu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x36d1d0: 0xc64c000c  lwc1        $f12, 0xC($s2)
    ctx->pc = 0x36d1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36d1d4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x36d1d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x36d1d8: 0xc66d000c  lwc1        $f13, 0xC($s3)
    ctx->pc = 0x36d1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x36d1dc: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x36d1dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x36d1e0: 0xc0db440  jal         func_36D100
    ctx->pc = 0x36D1E0u;
    SET_GPR_U32(ctx, 31, 0x36D1E8u);
    ctx->pc = 0x36D1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D1E0u;
    // 0x36d1e4: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D100u, 0x36D1E0u, 0x36D1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D1E8u;
label_36d1e8:
    // 0x36d1e8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x36d1e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x36d1ec: 0xe681000c  swc1        $f1, 0xC($s4)
    ctx->pc = 0x36d1ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x36d1f0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x36d1f0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x36d1f4: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x36d1f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x36d1f8: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x36d1f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x36d1fc: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x36d1fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x36d200: 0x0  nop
    ctx->pc = 0x36d200u;
    // NOP
    // 0x36d204: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x36d204u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x36d208: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x36d208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36d20c: 0x0  nop
    ctx->pc = 0x36d20cu;
    // NOP
    // 0x36d210: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x36d210u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x36d214: 0x46156b42  mul.s       $f13, $f13, $f21
    ctx->pc = 0x36d214u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[21]);
    // 0x36d218: 0xc0db440  jal         func_36D100
    ctx->pc = 0x36D218u;
    SET_GPR_U32(ctx, 31, 0x36D220u);
    ctx->pc = 0x36D21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D218u;
    // 0x36d21c: 0x46156302  mul.s       $f12, $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D100u, 0x36D218u, 0x36D220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D220u;
label_36d220:
    // 0x36d220: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x36d220u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x36d224: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x36d224u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x36d228: 0x46170000  add.s       $f0, $f0, $f23
    ctx->pc = 0x36d228u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x36d22c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x36d22cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x36d230: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x36d230u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x36d234: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x36d234u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x36d238: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x36d238u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x36d23c: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x36d23cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x36d240: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x36d240u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36d244: 0x0  nop
    ctx->pc = 0x36d244u;
    // NOP
    // 0x36d248: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x36d248u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x36d24c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x36d24cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x36d250: 0x0  nop
    ctx->pc = 0x36d250u;
    // NOP
    // 0x36d254: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x36d254u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x36d258: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x36d258u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x36d25c: 0xc0db440  jal         func_36D100
    ctx->pc = 0x36D25Cu;
    SET_GPR_U32(ctx, 31, 0x36D264u);
    ctx->pc = 0x36D260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D25Cu;
    // 0x36d260: 0x46156b42  mul.s       $f13, $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D100u, 0x36D25Cu, 0x36D264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D264u;
label_36d264:
    // 0x36d264: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x36d264u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x36d268: 0x46170000  add.s       $f0, $f0, $f23
    ctx->pc = 0x36d268u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x36d26c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x36d26cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x36d270: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x36d270u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x36d274: 0xa6820002  sh          $v0, 0x2($s4)
    ctx->pc = 0x36d274u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x36d278: 0x92620004  lbu         $v0, 0x4($s3)
    ctx->pc = 0x36d278u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x36d27c: 0x92430004  lbu         $v1, 0x4($s2)
    ctx->pc = 0x36d27cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x36d280: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x36d280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x36d284: 0x0  nop
    ctx->pc = 0x36d284u;
    // NOP
    // 0x36d288: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x36d288u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x36d28c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x36d28cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36d290: 0x0  nop
    ctx->pc = 0x36d290u;
    // NOP
    // 0x36d294: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x36d294u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x36d298: 0xc0db440  jal         func_36D100
    ctx->pc = 0x36D298u;
    SET_GPR_U32(ctx, 31, 0x36D2A0u);
    ctx->pc = 0x36D29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D298u;
    // 0x36d29c: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D100u, 0x36D298u, 0x36D2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D2A0u;
label_36d2a0:
    // 0x36d2a0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x36d2a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x36d2a4: 0x44150800  mfc1        $s5, $f1
    ctx->pc = 0x36d2a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x36d2a8: 0x92430005  lbu         $v1, 0x5($s2)
    ctx->pc = 0x36d2a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
    // 0x36d2ac: 0x92620005  lbu         $v0, 0x5($s3)
    ctx->pc = 0x36d2acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
    // 0x36d2b0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x36d2b0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x36d2b4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x36d2b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36d2b8: 0x0  nop
    ctx->pc = 0x36d2b8u;
    // NOP
    // 0x36d2bc: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x36d2bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x36d2c0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x36d2c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x36d2c4: 0x0  nop
    ctx->pc = 0x36d2c4u;
    // NOP
    // 0x36d2c8: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x36d2c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x36d2cc: 0xc0db440  jal         func_36D100
    ctx->pc = 0x36D2CCu;
    SET_GPR_U32(ctx, 31, 0x36D2D4u);
    ctx->pc = 0x36D2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D2CCu;
    // 0x36d2d0: 0x32b500ff  andi        $s5, $s5, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D100u, 0x36D2CCu, 0x36D2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D2D4u;
label_36d2d4:
    // 0x36d2d4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x36d2d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x36d2d8: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x36d2d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x36d2dc: 0x92430006  lbu         $v1, 0x6($s2)
    ctx->pc = 0x36d2dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x36d2e0: 0x92620006  lbu         $v0, 0x6($s3)
    ctx->pc = 0x36d2e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x36d2e4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x36d2e4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x36d2e8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x36d2e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36d2ec: 0x0  nop
    ctx->pc = 0x36d2ecu;
    // NOP
    // 0x36d2f0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x36d2f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x36d2f4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x36d2f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x36d2f8: 0x0  nop
    ctx->pc = 0x36d2f8u;
    // NOP
    // 0x36d2fc: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x36d2fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x36d300: 0xc0db440  jal         func_36D100
    ctx->pc = 0x36D300u;
    SET_GPR_U32(ctx, 31, 0x36D308u);
    ctx->pc = 0x36D304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D300u;
    // 0x36d304: 0x323100ff  andi        $s1, $s1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D100u, 0x36D300u, 0x36D308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D308u;
label_36d308:
    // 0x36d308: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x36d308u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x36d30c: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x36d30cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x36d310: 0x92430007  lbu         $v1, 0x7($s2)
    ctx->pc = 0x36d310u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
    // 0x36d314: 0x92620007  lbu         $v0, 0x7($s3)
    ctx->pc = 0x36d314u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 7)));
    // 0x36d318: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x36d318u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x36d31c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x36d31cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36d320: 0x0  nop
    ctx->pc = 0x36d320u;
    // NOP
    // 0x36d324: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x36d324u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x36d328: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x36d328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x36d32c: 0x0  nop
    ctx->pc = 0x36d32cu;
    // NOP
    // 0x36d330: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x36d330u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x36d334: 0xc0db440  jal         func_36D100
    ctx->pc = 0x36D334u;
    SET_GPR_U32(ctx, 31, 0x36D33Cu);
    ctx->pc = 0x36D338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D334u;
    // 0x36d338: 0x321000ff  andi        $s0, $s0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D100u, 0x36D334u, 0x36D33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D33Cu;
label_36d33c:
    // 0x36d33c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x36d33cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x36d340: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x36d340u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x36d344: 0xa2950004  sb          $s5, 0x4($s4)
    ctx->pc = 0x36d344u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4), (uint8_t)GPR_U32(ctx, 21));
    // 0x36d348: 0xa2910005  sb          $s1, 0x5($s4)
    ctx->pc = 0x36d348u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 17));
    // 0x36d34c: 0xa2900006  sb          $s0, 0x6($s4)
    ctx->pc = 0x36d34cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 6), (uint8_t)GPR_U32(ctx, 16));
    // 0x36d350: 0xa2820007  sb          $v0, 0x7($s4)
    ctx->pc = 0x36d350u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d354: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36d354u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d358: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36d358u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36d35c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36d35cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36d360: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x36d360u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d364: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x36d364u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36d368: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x36d368u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36d36c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x36d36cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36d370: 0xc7b70058  lwc1        $f23, 0x58($sp)
    ctx->pc = 0x36d370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x36d374: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x36d374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x36d378: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x36d378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x36d37c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x36d37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36d380: 0x3e00008  jr          $ra
    ctx->pc = 0x36D380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D380u;
        // 0x36d384: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D388u;
}
