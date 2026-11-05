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

// Function: sub_00324FB0
// Address: 0x324fb0 - 0x3255f0
void sub_00324FB0_0x324fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324FB0_0x324fb0");
#endif

    switch (ctx->pc) {
        case 0x324ff8u: goto label_324ff8;
        case 0x325000u: goto label_325000;
        case 0x3253f8u: goto label_3253f8;
        case 0x32546cu: goto label_32546c;
        default: break;
    }

    ctx->pc = 0x324fb0u;

    // 0x324fb0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x324fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x324fb4: 0xffb60110  sd          $s6, 0x110($sp)
    ctx->pc = 0x324fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
    // 0x324fb8: 0xffb000e0  sd          $s0, 0xE0($sp)
    ctx->pc = 0x324fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 16));
    // 0x324fbc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x324fbcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324fc0: 0xffb200f0  sd          $s2, 0xF0($sp)
    ctx->pc = 0x324fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 18));
    // 0x324fc4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x324fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324fc8: 0xffb50108  sd          $s5, 0x108($sp)
    ctx->pc = 0x324fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 21));
    // 0x324fcc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x324fccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324fd0: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x324fd0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324fd4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x324fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x324fd8: 0xffb100e8  sd          $s1, 0xE8($sp)
    ctx->pc = 0x324fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 17));
    // 0x324fdc: 0xffb300f8  sd          $s3, 0xF8($sp)
    ctx->pc = 0x324fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 19));
    // 0x324fe0: 0xffb40100  sd          $s4, 0x100($sp)
    ctx->pc = 0x324fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 20));
    // 0x324fe4: 0xffbf0118  sd          $ra, 0x118($sp)
    ctx->pc = 0x324fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 31));
    // 0x324fe8: 0xe7b60130  swc1        $f22, 0x130($sp)
    ctx->pc = 0x324fe8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x324fec: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x324fecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x324ff0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x324FF0u;
    SET_GPR_U32(ctx, 31, 0x324FF8u);
    ctx->pc = 0x324FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324FF0u;
    // 0x324ff4: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x324FF0u, 0x324FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324FF8u;
label_324ff8:
    // 0x324ff8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x324FF8u;
    SET_GPR_U32(ctx, 31, 0x325000u);
    ctx->pc = 0x324FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324FF8u;
    // 0x324ffc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x324FF8u, 0x325000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325000u;
label_325000:
    // 0x325000: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x325000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x325004: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x325004u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x325008: 0x8e450030  lw          $a1, 0x30($s2)
    ctx->pc = 0x325008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x32500c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x32500cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325010: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x325010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x325014: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x325014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x325018: 0x94870000  lhu         $a3, 0x0($a0)
    ctx->pc = 0x325018u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32501c: 0xafa700b0  sw          $a3, 0xB0($sp)
    ctx->pc = 0x32501cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 7));
    // 0x325020: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x325020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x325024: 0xa25021  addu        $t2, $a1, $v0
    ctx->pc = 0x325024u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x325028: 0x94860002  lhu         $a2, 0x2($a0)
    ctx->pc = 0x325028u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x32502c: 0xafa600b4  sw          $a2, 0xB4($sp)
    ctx->pc = 0x32502cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 6));
    // 0x325030: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x325030u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x325034: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x325034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x325038: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x325038u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32503c: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x32503cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x325040: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x325040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x325044: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x325044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x325048: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x325048u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32504c: 0x0  nop
    ctx->pc = 0x32504cu;
    // NOP
    // 0x325050: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x325050u;
    {
        const bool branch_taken_0x325050 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x325054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325050u;
        // 0x325054: 0xa24821  addu        $t1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325050) {
            ctx->pc = 0x32507Cu;
            goto label_32507c;
        }
    }
    ctx->pc = 0x325058u;
    // 0x325058: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x325058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32505c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x32505cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x325060: 0x0  nop
    ctx->pc = 0x325060u;
    // NOP
    // 0x325064: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x325064u;
    {
        const bool branch_taken_0x325064 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x325064) {
            ctx->pc = 0x325068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x325064u;
            // 0x325068: 0xc6a10008  lwc1        $f1, 0x8($s5) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3250A4u;
            goto label_3250a4;
        }
    }
    ctx->pc = 0x32506Cu;
    // 0x32506c: 0xafa70090  sw          $a3, 0x90($sp)
    ctx->pc = 0x32506cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 7));
    // 0x325070: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x325070u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325074: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x325074u;
    {
        const bool branch_taken_0x325074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325074u;
        // 0x325078: 0xafa600a0  sw          $a2, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325074) {
            ctx->pc = 0x32509Cu;
            goto label_32509c;
        }
    }
    ctx->pc = 0x32507Cu;
label_32507c:
    // 0x32507c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x32507cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x325080: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x325080u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x325084: 0x0  nop
    ctx->pc = 0x325084u;
    // NOP
    // 0x325088: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x325088u;
    {
        const bool branch_taken_0x325088 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x325088) {
            ctx->pc = 0x32508Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x325088u;
            // 0x32508c: 0xc6a10008  lwc1        $f1, 0x8($s5) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3250A4u;
            goto label_3250a4;
        }
    }
    ctx->pc = 0x325090u;
    // 0x325090: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x325090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x325094: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x325094u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325098: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x325098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
label_32509c:
    // 0x32509c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x32509cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3250a0: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x3250a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3250a4:
    // 0x3250a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3250a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3250a8: 0x0  nop
    ctx->pc = 0x3250a8u;
    // NOP
    // 0x3250ac: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x3250ACu;
    {
        const bool branch_taken_0x3250ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3250B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3250ACu;
        // 0x3250b0: 0xc5200008  lwc1        $f0, 0x8($t1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3250ac) {
            ctx->pc = 0x3250E0u;
            goto label_3250e0;
        }
    }
    ctx->pc = 0x3250B4u;
    // 0x3250b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3250b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3250b8: 0x0  nop
    ctx->pc = 0x3250b8u;
    // NOP
    // 0x3250bc: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x3250BCu;
    {
        const bool branch_taken_0x3250bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3250C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3250BCu;
        // 0x3250c0: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3250bc) {
            ctx->pc = 0x32510Cu;
            goto label_32510c;
        }
    }
    ctx->pc = 0x3250C4u;
    // 0x3250c4: 0x8fa400b4  lw          $a0, 0xB4($sp)
    ctx->pc = 0x3250c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x3250c8: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3250c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3250cc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3250ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3250d0: 0xac640090  sw          $a0, 0x90($v1)
    ctx->pc = 0x3250d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 4));
    // 0x3250d4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3250d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3250d8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3250D8u;
    {
        const bool branch_taken_0x3250d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3250DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3250D8u;
        // 0x3250dc: 0x8fa200b8  lw          $v0, 0xB8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3250d8) {
            ctx->pc = 0x325108u;
            goto label_325108;
        }
    }
    ctx->pc = 0x3250E0u;
label_3250e0:
    // 0x3250e0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3250e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3250e4: 0x0  nop
    ctx->pc = 0x3250e4u;
    // NOP
    // 0x3250e8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x3250E8u;
    {
        const bool branch_taken_0x3250e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3250ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3250E8u;
        // 0x3250ec: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3250e8) {
            ctx->pc = 0x32510Cu;
            goto label_32510c;
        }
    }
    ctx->pc = 0x3250F0u;
    // 0x3250f0: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x3250f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3250f4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3250f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3250f8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3250f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3250fc: 0xac640090  sw          $a0, 0x90($v1)
    ctx->pc = 0x3250fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 4));
    // 0x325100: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x325100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325104: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x325104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_325108:
    // 0x325108: 0xaca200a0  sw          $v0, 0xA0($a1)
    ctx->pc = 0x325108u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 160), GPR_U32(ctx, 2));
label_32510c:
    // 0x32510c: 0x2d020002  sltiu       $v0, $t0, 0x2
    ctx->pc = 0x32510cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x325110: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x325110u;
    {
        const bool branch_taken_0x325110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x325110) {
            ctx->pc = 0x325114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x325110u;
            // 0x325114: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32518Cu;
            goto label_32518c;
        }
    }
    ctx->pc = 0x325118u;
    // 0x325118: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x325118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32511c: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x32511cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x325120: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x325120u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x325124: 0x0  nop
    ctx->pc = 0x325124u;
    // NOP
    // 0x325128: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x325128u;
    {
        const bool branch_taken_0x325128 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x32512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325128u;
        // 0x32512c: 0xc5400008  lwc1        $f0, 0x8($t2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x325128) {
            ctx->pc = 0x32515Cu;
            goto label_32515c;
        }
    }
    ctx->pc = 0x325130u;
    // 0x325130: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x325130u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x325134: 0x0  nop
    ctx->pc = 0x325134u;
    // NOP
    // 0x325138: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x325138u;
    {
        const bool branch_taken_0x325138 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x32513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325138u;
        // 0x32513c: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325138) {
            ctx->pc = 0x325188u;
            goto label_325188;
        }
    }
    ctx->pc = 0x325140u;
    // 0x325140: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x325140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x325144: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x325144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x325148: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x325148u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x32514c: 0xac640090  sw          $a0, 0x90($v1)
    ctx->pc = 0x32514cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 4));
    // 0x325150: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x325150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325154: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x325154u;
    {
        const bool branch_taken_0x325154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325154u;
        // 0x325158: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325154) {
            ctx->pc = 0x325184u;
            goto label_325184;
        }
    }
    ctx->pc = 0x32515Cu;
label_32515c:
    // 0x32515c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x32515cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x325160: 0x0  nop
    ctx->pc = 0x325160u;
    // NOP
    // 0x325164: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x325164u;
    {
        const bool branch_taken_0x325164 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x325168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325164u;
        // 0x325168: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325164) {
            ctx->pc = 0x325188u;
            goto label_325188;
        }
    }
    ctx->pc = 0x32516Cu;
    // 0x32516c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x32516cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x325170: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x325170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x325174: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x325174u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x325178: 0xac640090  sw          $a0, 0x90($v1)
    ctx->pc = 0x325178u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 4));
    // 0x32517c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x32517cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325180: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x325180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_325184:
    // 0x325184: 0xaca200a0  sw          $v0, 0xA0($a1)
    ctx->pc = 0x325184u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 160), GPR_U32(ctx, 2));
label_325188:
    // 0x325188: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x325188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32518c:
    // 0x32518c: 0x11020009  beq         $t0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x32518Cu;
    {
        const bool branch_taken_0x32518c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x325190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32518Cu;
        // 0x325190: 0x8fb00090  lw          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32518c) {
            ctx->pc = 0x3251B4u;
            goto label_3251b4;
        }
    }
    ctx->pc = 0x325194u;
    // 0x325194: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x325194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x325198: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x325198u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x32519c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x32519cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3251a0: 0x0  nop
    ctx->pc = 0x3251a0u;
    // NOP
    // 0x3251a4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3251a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3251a8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x3251a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3251ac: 0x100000fa  b           . + 4 + (0xFA << 2)
    ctx->pc = 0x3251ACu;
    {
        const bool branch_taken_0x3251ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3251B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3251ACu;
        // 0x3251b0: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3251ac) {
            ctx->pc = 0x325598u;
            goto label_325598;
        }
    }
    ctx->pc = 0x3251B4u;
label_3251b4:
    // 0x3251b4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3251b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3251b8: 0x8e450038  lw          $a1, 0x38($s2)
    ctx->pc = 0x3251b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x3251bc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x3251bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3251c0: 0x8fb100a0  lw          $s1, 0xA0($sp)
    ctx->pc = 0x3251c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3251c4: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x3251c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x3251c8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3251c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3251cc: 0x8fb300a4  lw          $s3, 0xA4($sp)
    ctx->pc = 0x3251ccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x3251d0: 0x118900  sll         $s1, $s1, 4
    ctx->pc = 0x3251d0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x3251d4: 0x88460003  lwl         $a2, 0x3($v0)
    ctx->pc = 0x3251d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x3251d8: 0x98460000  lwr         $a2, 0x0($v0)
    ctx->pc = 0x3251d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x3251dc: 0xaba60053  swl         $a2, 0x53($sp)
    ctx->pc = 0x3251dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 83); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3251e0: 0xbba60050  swr         $a2, 0x50($sp)
    ctx->pc = 0x3251e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3251e4: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x3251e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3251e8: 0x139900  sll         $s3, $s3, 4
    ctx->pc = 0x3251e8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x3251ec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3251ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3251f0: 0x8e520030  lw          $s2, 0x30($s2)
    ctx->pc = 0x3251f0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x3251f4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x3251f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3251f8: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x3251f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x3251fc: 0x2518821  addu        $s1, $s2, $s1
    ctx->pc = 0x3251fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x325200: 0x2539821  addu        $s3, $s2, $s3
    ctx->pc = 0x325200u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x325204: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x325204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x325208: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x325208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x32520c: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x32520cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x325210: 0x88430003  lwl         $v1, 0x3($v0)
    ctx->pc = 0x325210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x325214: 0x98430000  lwr         $v1, 0x0($v0)
    ctx->pc = 0x325214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x325218: 0xaba30063  swl         $v1, 0x63($sp)
    ctx->pc = 0x325218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 99); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x32521c: 0xbba30060  swr         $v1, 0x60($sp)
    ctx->pc = 0x32521cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x325220: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x325220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x325224: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x325224u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x325228: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x325228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x32522c: 0xc6b50008  lwc1        $f21, 0x8($s5)
    ctx->pc = 0x32522cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x325230: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x325230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x325234: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x325234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x325238: 0x88690003  lwl         $t1, 0x3($v1)
    ctx->pc = 0x325238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x32523c: 0x98690000  lwr         $t1, 0x0($v1)
    ctx->pc = 0x32523cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
    // 0x325240: 0xaba90073  swl         $t1, 0x73($sp)
    ctx->pc = 0x325240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 115); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x325244: 0xbba90070  swr         $t1, 0x70($sp)
    ctx->pc = 0x325244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x325248: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x325248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x32524c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32524cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x325250: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x325250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x325254: 0x88480003  lwl         $t0, 0x3($v0)
    ctx->pc = 0x325254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x325258: 0x98480000  lwr         $t0, 0x0($v0)
    ctx->pc = 0x325258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x32525c: 0xaba80083  swl         $t0, 0x83($sp)
    ctx->pc = 0x32525cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 131); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x325260: 0xbba80080  swr         $t0, 0x80($sp)
    ctx->pc = 0x325260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x325264: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x325264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x325268: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x325268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32526c: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x32526cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x325270: 0x4602ad01  sub.s       $f20, $f21, $f2
    ctx->pc = 0x325270u;
    ctx->f[20] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
    // 0x325274: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x325274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x325278: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x325278u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x32527c: 0x4603ad41  sub.s       $f21, $f21, $f3
    ctx->pc = 0x32527cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[3]);
    // 0x325280: 0x93a20050  lbu         $v0, 0x50($sp)
    ctx->pc = 0x325280u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x325284: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x325284u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x325288: 0x93a80051  lbu         $t0, 0x51($sp)
    ctx->pc = 0x325288u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 81)));
    // 0x32528c: 0x0  nop
    ctx->pc = 0x32528cu;
    // NOP
    // 0x325290: 0x0  nop
    ctx->pc = 0x325290u;
    // NOP
    // 0x325294: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x325294u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x325298: 0x93a90061  lbu         $t1, 0x61($sp)
    ctx->pc = 0x325298u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 97)));
    // 0x32529c: 0x93a50062  lbu         $a1, 0x62($sp)
    ctx->pc = 0x32529cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 98)));
    // 0x3252a0: 0x44823800  mtc1        $v0, $f7
    ctx->pc = 0x3252a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x3252a4: 0x0  nop
    ctx->pc = 0x3252a4u;
    // NOP
    // 0x3252a8: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x3252a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x3252ac: 0x0  nop
    ctx->pc = 0x3252acu;
    // NOP
    // 0x3252b0: 0x0  nop
    ctx->pc = 0x3252b0u;
    // NOP
    // 0x3252b4: 0x4601ad43  div.s       $f21, $f21, $f1
    ctx->pc = 0x3252b4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[21], ctx->f[1]); }
    // 0x3252b8: 0x93a70060  lbu         $a3, 0x60($sp)
    ctx->pc = 0x3252b8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3252bc: 0x93a30052  lbu         $v1, 0x52($sp)
    ctx->pc = 0x3252bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 82)));
    // 0x3252c0: 0x44882000  mtc1        $t0, $f4
    ctx->pc = 0x3252c0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3252c4: 0x0  nop
    ctx->pc = 0x3252c4u;
    // NOP
    // 0x3252c8: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x3252c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x3252cc: 0x93a60070  lbu         $a2, 0x70($sp)
    ctx->pc = 0x3252ccu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3252d0: 0x44893000  mtc1        $t1, $f6
    ctx->pc = 0x3252d0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x3252d4: 0x0  nop
    ctx->pc = 0x3252d4u;
    // NOP
    // 0x3252d8: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x3252d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x3252dc: 0x93a20080  lbu         $v0, 0x80($sp)
    ctx->pc = 0x3252dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3252e0: 0x44852800  mtc1        $a1, $f5
    ctx->pc = 0x3252e0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3252e4: 0x0  nop
    ctx->pc = 0x3252e4u;
    // NOP
    // 0x3252e8: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x3252e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x3252ec: 0x4614b001  sub.s       $f0, $f22, $f20
    ctx->pc = 0x3252ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
    // 0x3252f0: 0x44874000  mtc1        $a3, $f8
    ctx->pc = 0x3252f0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x3252f4: 0x0  nop
    ctx->pc = 0x3252f4u;
    // NOP
    // 0x3252f8: 0x46804220  cvt.s.w     $f8, $f8
    ctx->pc = 0x3252f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[8], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x3252fc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3252fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x325300: 0x0  nop
    ctx->pc = 0x325300u;
    // NOP
    // 0x325304: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x325304u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x325308: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x325308u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32530c: 0x0  nop
    ctx->pc = 0x32530cu;
    // NOP
    // 0x325310: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x325310u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x325314: 0x4615b241  sub.s       $f9, $f22, $f21
    ctx->pc = 0x325314u;
    ctx->f[9] = FPU_SUB_S(ctx->f[22], ctx->f[21]);
    // 0x325318: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x325318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x32531c: 0x0  nop
    ctx->pc = 0x32531cu;
    // NOP
    // 0x325320: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x325320u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x325324: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x325324u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x325328: 0x46143182  mul.s       $f6, $f6, $f20
    ctx->pc = 0x325328u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[20]);
    // 0x32532c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x32532cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x325330: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x325330u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x325334: 0x46144202  mul.s       $f8, $f8, $f20
    ctx->pc = 0x325334u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[20]);
    // 0x325338: 0x46142942  mul.s       $f5, $f5, $f20
    ctx->pc = 0x325338u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
    // 0x32533c: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x32533cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x325340: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x325340u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x325344: 0x46062100  add.s       $f4, $f4, $f6
    ctx->pc = 0x325344u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x325348: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x325348u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x32534c: 0x460839c0  add.s       $f7, $f7, $f8
    ctx->pc = 0x32534cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[8]);
    // 0x325350: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x325350u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x325354: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x325354u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x325358: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x325358u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32535c: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32535cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x325360: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x325360u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x325364: 0x46003824  .word       0x46003824                   # cvt.w.s     $f0, $f7 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x325364u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[7]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x325368: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x325368u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x32536c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32536cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x325370: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x325370u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x325374: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x325374u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x325378: 0xa3a50002  sb          $a1, 0x2($sp)
    ctx->pc = 0x325378u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x32537c: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x32537cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x325380: 0xa3a60010  sb          $a2, 0x10($sp)
    ctx->pc = 0x325380u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 6));
    // 0x325384: 0x93a20071  lbu         $v0, 0x71($sp)
    ctx->pc = 0x325384u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 113)));
    // 0x325388: 0x93a50081  lbu         $a1, 0x81($sp)
    ctx->pc = 0x325388u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 129)));
    // 0x32538c: 0x93a30082  lbu         $v1, 0x82($sp)
    ctx->pc = 0x32538cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 130)));
    // 0x325390: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x325390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x325394: 0x0  nop
    ctx->pc = 0x325394u;
    // NOP
    // 0x325398: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x325398u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x32539c: 0x93a60072  lbu         $a2, 0x72($sp)
    ctx->pc = 0x32539cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 114)));
    // 0x3253a0: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x3253a0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3253a4: 0x0  nop
    ctx->pc = 0x3253a4u;
    // NOP
    // 0x3253a8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3253a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3253ac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3253acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3253b0: 0x0  nop
    ctx->pc = 0x3253b0u;
    // NOP
    // 0x3253b4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3253b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3253b8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3253b8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3253bc: 0x0  nop
    ctx->pc = 0x3253bcu;
    // NOP
    // 0x3253c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3253c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3253c4: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x3253c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x3253c8: 0x460918c2  mul.s       $f3, $f3, $f9
    ctx->pc = 0x3253c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
    // 0x3253cc: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x3253ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x3253d0: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x3253d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x3253d4: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x3253d4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x3253d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3253d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3253dc: 0x46001864  .word       0x46001864                   # cvt.w.s     $f1, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3253dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3253e0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3253e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3253e4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3253e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3253e8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3253e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3253ec: 0xa3a20011  sb          $v0, 0x11($sp)
    ctx->pc = 0x3253ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x3253f0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3253F0u;
    SET_GPR_U32(ctx, 31, 0x3253F8u);
    ctx->pc = 0x3253F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3253F0u;
    // 0x3253f4: 0xa3a30012  sb          $v1, 0x12($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3253F0u, 0x3253F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3253F8u;
label_3253f8:
    // 0x3253f8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3253f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3253fc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3253fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x325400: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x325400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x325404: 0x27b400c0  addiu       $s4, $sp, 0xC0
    ctx->pc = 0x325404u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x325408: 0xc7a400dc  lwc1        $f4, 0xDC($sp)
    ctx->pc = 0x325408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x32540c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x32540cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x325410: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x325410u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x325414: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x325414u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x325418: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x325418u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x32541c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x32541cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x325420: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x325420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x325424: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x325424u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x325428: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x325428u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x32542c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x32542cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x325430: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x325430u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x325434: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x325434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x325438: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x325438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32543c: 0xe7a200c0  swc1        $f2, 0xC0($sp)
    ctx->pc = 0x32543cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x325440: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x325440u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x325444: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x325444u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x325448: 0xe7a400cc  swc1        $f4, 0xCC($sp)
    ctx->pc = 0x325448u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x32544c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x32544cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x325450: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x325450u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x325454: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x325454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x325458: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x325458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x32545c: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x32545cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x325460: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x325460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x325464: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x325464u;
    SET_GPR_U32(ctx, 31, 0x32546Cu);
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x325464u, 0x32546Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32546Cu;
label_32546c:
    // 0x32546c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x32546cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x325470: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x325470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x325474: 0xc7a400dc  lwc1        $f4, 0xDC($sp)
    ctx->pc = 0x325474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x325478: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x325478u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x32547c: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x32547cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x325480: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x325480u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x325484: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x325484u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x325488: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x325488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32548c: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x32548cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x325490: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x325490u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x325494: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x325494u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x325498: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x325498u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x32549c: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x32549cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x3254a0: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x3254a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3254a4: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x3254a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3254a8: 0xe7a200c0  swc1        $f2, 0xC0($sp)
    ctx->pc = 0x3254a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x3254ac: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x3254acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x3254b0: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x3254b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x3254b4: 0xe7a400cc  swc1        $f4, 0xCC($sp)
    ctx->pc = 0x3254b4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x3254b8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x3254b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x3254bc: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3254bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3254c0: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x3254c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x3254c4: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x3254c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x3254c8: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x3254c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3254cc: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x3254ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3254d0: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x3254d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3254d4: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x3254d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3254d8: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x3254d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3254dc: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x3254dcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x3254e0: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x3254e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3254e4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3254e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3254e8: 0x93a30010  lbu         $v1, 0x10($sp)
    ctx->pc = 0x3254e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3254ec: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3254ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3254f0: 0x0  nop
    ctx->pc = 0x3254f0u;
    // NOP
    // 0x3254f4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x3254f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3254f8: 0x93a50001  lbu         $a1, 0x1($sp)
    ctx->pc = 0x3254f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x3254fc: 0x44833800  mtc1        $v1, $f7
    ctx->pc = 0x3254fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x325500: 0x0  nop
    ctx->pc = 0x325500u;
    // NOP
    // 0x325504: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x325504u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x325508: 0x93a40011  lbu         $a0, 0x11($sp)
    ctx->pc = 0x325508u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
    // 0x32550c: 0x0  nop
    ctx->pc = 0x32550cu;
    // NOP
    // 0x325510: 0x0  nop
    ctx->pc = 0x325510u;
    // NOP
    // 0x325514: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x325514u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x325518: 0x93a20002  lbu         $v0, 0x2($sp)
    ctx->pc = 0x325518u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x32551c: 0x93a30012  lbu         $v1, 0x12($sp)
    ctx->pc = 0x32551cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x325520: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x325520u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x325524: 0x0  nop
    ctx->pc = 0x325524u;
    // NOP
    // 0x325528: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x325528u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32552c: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x32552cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x325530: 0x0  nop
    ctx->pc = 0x325530u;
    // NOP
    // 0x325534: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x325534u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x325538: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x325538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x32553c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x32553cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x325540: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x325540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325544: 0x0  nop
    ctx->pc = 0x325544u;
    // NOP
    // 0x325548: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x325548u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32554c: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x32554cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x325550: 0x0  nop
    ctx->pc = 0x325550u;
    // NOP
    // 0x325554: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x325554u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x325558: 0x4602b581  sub.s       $f22, $f22, $f2
    ctx->pc = 0x325558u;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[2]);
    // 0x32555c: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x32555cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x325560: 0x460239c2  mul.s       $f7, $f7, $f2
    ctx->pc = 0x325560u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x325564: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x325564u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x325568: 0x461618c2  mul.s       $f3, $f3, $f22
    ctx->pc = 0x325568u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[22]);
    // 0x32556c: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x32556cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x325570: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x325570u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x325574: 0x460718c0  add.s       $f3, $f3, $f7
    ctx->pc = 0x325574u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
    // 0x325578: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x325578u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x32557c: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x32557cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x325580: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x325580u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x325584: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x325584u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x325588: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x325588u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x32558c: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x32558cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x325590: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x325590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x325594: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x325594u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_325598:
    // 0x325598: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x325598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x32559c: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x32559cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3255a0: 0x6ba3002f  ldl         $v1, 0x2F($sp)
    ctx->pc = 0x3255a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3255a4: 0x6fa30028  ldr         $v1, 0x28($sp)
    ctx->pc = 0x3255a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3255a8: 0xb2c20007  sdl         $v0, 0x7($s6)
    ctx->pc = 0x3255a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3255ac: 0xb6c20000  sdr         $v0, 0x0($s6)
    ctx->pc = 0x3255acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3255b0: 0xb2c3000f  sdl         $v1, 0xF($s6)
    ctx->pc = 0x3255b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3255b4: 0xb6c30008  sdr         $v1, 0x8($s6)
    ctx->pc = 0x3255b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3255b8: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x3255b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3255bc: 0xdfb000e0  ld          $s0, 0xE0($sp)
    ctx->pc = 0x3255bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3255c0: 0xdfb100e8  ld          $s1, 0xE8($sp)
    ctx->pc = 0x3255c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3255c4: 0xdfb200f0  ld          $s2, 0xF0($sp)
    ctx->pc = 0x3255c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3255c8: 0xdfb300f8  ld          $s3, 0xF8($sp)
    ctx->pc = 0x3255c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x3255cc: 0xdfb40100  ld          $s4, 0x100($sp)
    ctx->pc = 0x3255ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3255d0: 0xdfb50108  ld          $s5, 0x108($sp)
    ctx->pc = 0x3255d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x3255d4: 0xdfb60110  ld          $s6, 0x110($sp)
    ctx->pc = 0x3255d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3255d8: 0xdfbf0118  ld          $ra, 0x118($sp)
    ctx->pc = 0x3255d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3255dc: 0xc7b60130  lwc1        $f22, 0x130($sp)
    ctx->pc = 0x3255dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3255e0: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x3255e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3255e4: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x3255e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3255e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3255E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3255ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3255E8u;
        // 0x3255ec: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3255E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3255F0u;
}
