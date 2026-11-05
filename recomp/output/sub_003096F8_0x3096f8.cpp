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

// Function: sub_003096F8
// Address: 0x3096f8 - 0x3099a8
void sub_003096F8_0x3096f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003096F8_0x3096f8");
#endif

    switch (ctx->pc) {
        case 0x309758u: goto label_309758;
        case 0x309764u: goto label_309764;
        case 0x309780u: goto label_309780;
        case 0x309940u: goto label_309940;
        case 0x309968u: goto label_309968;
        case 0x30997cu: goto label_30997c;
        case 0x309984u: goto label_309984;
        default: break;
    }

    ctx->pc = 0x3096f8u;

    // 0x3096f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3096f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3096fc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3096fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x309700: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x309700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x309704: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x309704u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309708: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x309708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x30970c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x30970cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x309710: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x309710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x309714: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x309714u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x309718: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x309718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x30971c: 0x8e5112dc  lw          $s1, 0x12DC($s2)
    ctx->pc = 0x30971cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4828)));
    // 0x309720: 0x12200098  beqz        $s1, . + 4 + (0x98 << 2)
    ctx->pc = 0x309720u;
    {
        const bool branch_taken_0x309720 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x309724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309720u;
        // 0x309724: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309720) {
            ctx->pc = 0x309984u;
            goto label_309984;
        }
    }
    ctx->pc = 0x309728u;
    // 0x309728: 0x8c42bd50  lw          $v0, -0x42B0($v0)
    ctx->pc = 0x309728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
    // 0x30972c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30972Cu;
    {
        const bool branch_taken_0x30972c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30972Cu;
        // 0x309730: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30972c) {
            ctx->pc = 0x309750u;
            goto label_309750;
        }
    }
    ctx->pc = 0x309734u;
    // 0x309734: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x309734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309738: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x309738u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30973c: 0x0  nop
    ctx->pc = 0x30973cu;
    // NOP
    // 0x309740: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x309740u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309744: 0x0  nop
    ctx->pc = 0x309744u;
    // NOP
    // 0x309748: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x309748u;
    {
        const bool branch_taken_0x309748 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x309748) {
            ctx->pc = 0x30974Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x309748u;
            // 0x30974c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x309750u;
            goto label_309750;
        }
    }
    ctx->pc = 0x309750u;
label_309750:
    // 0x309750: 0xc0db0ea  jal         func_36C3A8
    ctx->pc = 0x309750u;
    SET_GPR_U32(ctx, 31, 0x309758u);
    ctx->pc = 0x309754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309750u;
    // 0x309754: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C3A8u, 0x309750u, 0x309758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309758u;
label_309758:
    // 0x309758: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x309758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x30975c: 0xc0da81e  jal         func_36A078
    ctx->pc = 0x30975Cu;
    SET_GPR_U32(ctx, 31, 0x309764u);
    ctx->pc = 0x309760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30975Cu;
    // 0x309760: 0x8c44f3c8  lw          $a0, -0xC38($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A078u, 0x30975Cu, 0x309764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309764u;
label_309764:
    // 0x309764: 0x12200083  beqz        $s1, . + 4 + (0x83 << 2)
    ctx->pc = 0x309764u;
    {
        const bool branch_taken_0x309764 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x309768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309764u;
        // 0x309768: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309764) {
            ctx->pc = 0x309974u;
            goto label_309974;
        }
    }
    ctx->pc = 0x30976Cu;
    // 0x30976c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x30976cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x309770: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x309770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x309774: 0x2454ac50  addiu       $s4, $v0, -0x53B0
    ctx->pc = 0x309774u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945872));
    // 0x309778: 0x86220010  lh          $v0, 0x10($s1)
    ctx->pc = 0x309778u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x30977c: 0x0  nop
    ctx->pc = 0x30977cu;
    // NOP
label_309780:
    // 0x309780: 0x2842012c  slti        $v0, $v0, 0x12C
    ctx->pc = 0x309780u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)300) ? 1 : 0);
    // 0x309784: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x309784u;
    {
        const bool branch_taken_0x309784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309784u;
        // 0x309788: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309784) {
            ctx->pc = 0x309954u;
            goto label_309954;
        }
    }
    ctx->pc = 0x30978Cu;
    // 0x30978c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x30978cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x309790: 0xc6240014  lwc1        $f4, 0x14($s1)
    ctx->pc = 0x309790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x309794: 0x8c45bd48  lw          $a1, -0x42B8($v0)
    ctx->pc = 0x309794u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x309798: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x309798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x30979c: 0x8a22001b  lwl         $v0, 0x1B($s1)
    ctx->pc = 0x30979cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x3097a0: 0x9a220018  lwr         $v0, 0x18($s1)
    ctx->pc = 0x3097a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x3097a4: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x3097a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3097a8: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x3097a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3097ac: 0x8e441388  lw          $a0, 0x1388($s2)
    ctx->pc = 0x3097acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5000)));
    // 0x3097b0: 0x8ca20100  lw          $v0, 0x100($a1)
    ctx->pc = 0x3097b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 256)));
    // 0x3097b4: 0x86260010  lh          $a2, 0x10($s1)
    ctx->pc = 0x3097b4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3097b8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3097b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3097bc: 0xc4420064  lwc1        $f2, 0x64($v0)
    ctx->pc = 0x3097bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3097c0: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x3097c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x3097c4: 0x0  nop
    ctx->pc = 0x3097c4u;
    // NOP
    // 0x3097c8: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x3097c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x3097cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3097ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3097d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3097d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3097d4: 0xc42023  subu        $a0, $a2, $a0
    ctx->pc = 0x3097d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x3097d8: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x3097d8u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x3097dc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3097dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x3097e0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3097e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x3097e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3097e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3097e8: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x3097e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3097ec: 0x0  nop
    ctx->pc = 0x3097ecu;
    // NOP
    // 0x3097f0: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x3097f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x3097f4: 0xc683001c  lwc1        $f3, 0x1C($s4)
    ctx->pc = 0x3097f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3097f8: 0x46012202  mul.s       $f8, $f4, $f1
    ctx->pc = 0x3097f8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x3097fc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3097fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x309800: 0x3c013b5a  lui         $at, 0x3B5A
    ctx->pc = 0x309800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15194 << 16));
    // 0x309804: 0x3421740e  ori         $at, $at, 0x740E
    ctx->pc = 0x309804u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29710);
    // 0x309808: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x309808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x30980c: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x30980cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x309810: 0x0  nop
    ctx->pc = 0x309810u;
    // NOP
    // 0x309814: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x309814u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x309818: 0xc6411358  lwc1        $f1, 0x1358($s2)
    ctx->pc = 0x309818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30981c: 0x46081b82  mul.s       $f14, $f3, $f8
    ctx->pc = 0x30981cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x309820: 0x460009c2  mul.s       $f7, $f1, $f0
    ctx->pc = 0x309820u;
    ctx->f[7] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x309824: 0x0  nop
    ctx->pc = 0x309824u;
    // NOP
    // 0x309828: 0x0  nop
    ctx->pc = 0x309828u;
    // NOP
    // 0x30982c: 0x46062943  div.s       $f5, $f5, $f6
    ctx->pc = 0x30982cu;
    { if (ctx->f[6] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[5], ctx->f[6]); }
    // 0x309830: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x309830u;
    {
        const bool branch_taken_0x309830 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x309834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309830u;
        // 0x309834: 0x46041082  mul.s       $f2, $f2, $f4 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x309830) {
            ctx->pc = 0x309854u;
            goto label_309854;
        }
    }
    ctx->pc = 0x309838u;
    // 0x309838: 0xc640136c  lwc1        $f0, 0x136C($s2)
    ctx->pc = 0x309838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30983c: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x30983cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309840: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x309840u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x309844: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x309844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x309848: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x309848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x30984c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x30984cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x309850: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x309850u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_309854:
    // 0x309854: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x309854u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309858: 0x0  nop
    ctx->pc = 0x309858u;
    // NOP
    // 0x30985c: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x30985cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309860: 0x0  nop
    ctx->pc = 0x309860u;
    // NOP
    // 0x309864: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x309864u;
    {
        const bool branch_taken_0x309864 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x309864) {
            ctx->pc = 0x309868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x309864u;
            // 0x309868: 0xc640136c  lwc1        $f0, 0x136C($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x309874u;
            goto label_309874;
        }
    }
    ctx->pc = 0x30986Cu;
    // 0x30986c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30986Cu;
    {
        const bool branch_taken_0x30986c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30986Cu;
        // 0x309870: 0x46000146  mov.s       $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30986c) {
            ctx->pc = 0x309884u;
            goto label_309884;
        }
    }
    ctx->pc = 0x309874u;
label_309874:
    // 0x309874: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x309874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309878: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x309878u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x30987c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x30987cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x309880: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x309880u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_309884:
    // 0x309884: 0x9222001b  lbu         $v0, 0x1B($s1)
    ctx->pc = 0x309884u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 27)));
    // 0x309888: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x309888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30988c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x30988cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x309890: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x309890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309894: 0x0  nop
    ctx->pc = 0x309894u;
    // NOP
    // 0x309898: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x309898u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30989c: 0x46023081  sub.s       $f2, $f6, $f2
    ctx->pc = 0x30989cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x3098a0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3098a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3098a4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3098a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3098a8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3098a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3098ac: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x3098ACu;
    {
        const bool branch_taken_0x3098ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3098B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3098ACu;
        // 0x3098b0: 0xa3a20003  sb          $v0, 0x3($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3098ac) {
            ctx->pc = 0x3098D4u;
            goto label_3098d4;
        }
    }
    ctx->pc = 0x3098B4u;
    // 0x3098b4: 0x9222001b  lbu         $v0, 0x1B($s1)
    ctx->pc = 0x3098b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 27)));
    // 0x3098b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3098b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3098bc: 0x0  nop
    ctx->pc = 0x3098bcu;
    // NOP
    // 0x3098c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3098c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3098c4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3098c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3098c8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3098c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3098cc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3098ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3098d0: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x3098d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
label_3098d4:
    // 0x3098d4: 0x93a70003  lbu         $a3, 0x3($sp)
    ctx->pc = 0x3098d4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x3098d8: 0x8e421370  lw          $v0, 0x1370($s2)
    ctx->pc = 0x3098d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4976)));
    // 0x3098dc: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x3098dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3098e0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3098E0u;
    {
        const bool branch_taken_0x3098e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3098e0) {
            ctx->pc = 0x309954u;
            goto label_309954;
        }
    }
    ctx->pc = 0x3098E8u;
    // 0x3098e8: 0xc640137c  lwc1        $f0, 0x137C($s2)
    ctx->pc = 0x3098e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3098ec: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x3098ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3098f0: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x3098f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x3098f4: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x3098f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3098f8: 0x0  nop
    ctx->pc = 0x3098f8u;
    // NOP
    // 0x3098fc: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x3098FCu;
    {
        const bool branch_taken_0x3098fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x309900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3098FCu;
        // 0x309900: 0x93a50001  lbu         $a1, 0x1($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3098fc) {
            ctx->pc = 0x309954u;
            goto label_309954;
        }
    }
    ctx->pc = 0x309904u;
    // 0x309904: 0x460543c2  mul.s       $f15, $f8, $f5
    ctx->pc = 0x309904u;
    ctx->f[15] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
    // 0x309908: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x309908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30990c: 0xc6411384  lwc1        $f1, 0x1384($s2)
    ctx->pc = 0x30990cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309910: 0x46147082  mul.s       $f2, $f14, $f20
    ctx->pc = 0x309910u;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[20]);
    // 0x309914: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x309914u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x309918: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x309918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30991c: 0x46017bc2  mul.s       $f15, $f15, $f1
    ctx->pc = 0x30991cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[1]);
    // 0x309920: 0x46144342  mul.s       $f13, $f8, $f20
    ctx->pc = 0x309920u;
    ctx->f[13] = FPU_MUL_S(ctx->f[8], ctx->f[20]);
    // 0x309924: 0x93a60002  lbu         $a2, 0x2($sp)
    ctx->pc = 0x309924u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x309928: 0x46026301  sub.s       $f12, $f12, $f2
    ctx->pc = 0x309928u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x30992c: 0x93a40000  lbu         $a0, 0x0($sp)
    ctx->pc = 0x30992cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309930: 0x46007bc2  mul.s       $f15, $f15, $f0
    ctx->pc = 0x309930u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x309934: 0x460d2341  sub.s       $f13, $f4, $f13
    ctx->pc = 0x309934u;
    ctx->f[13] = FPU_SUB_S(ctx->f[4], ctx->f[13]);
    // 0x309938: 0xc0da830  jal         func_36A0C0
    ctx->pc = 0x309938u;
    SET_GPR_U32(ctx, 31, 0x309940u);
    ctx->pc = 0x30993Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309938u;
    // 0x30993c: 0x460f43c0  add.s       $f15, $f8, $f15 (Delay Slot)
    ctx->f[15] = FPU_ADD_S(ctx->f[8], ctx->f[15]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A0C0u, 0x309938u, 0x309940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309940u;
label_309940:
    // 0x309940: 0x96230010  lhu         $v1, 0x10($s1)
    ctx->pc = 0x309940u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x309944: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x309944u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309948: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x309948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30994c: 0xa6230010  sh          $v1, 0x10($s1)
    ctx->pc = 0x30994cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x309950: 0x8e31001c  lw          $s1, 0x1C($s1)
    ctx->pc = 0x309950u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_309954:
    // 0x309954: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x309954u;
    {
        const bool branch_taken_0x309954 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x309958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309954u;
        // 0x309958: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309954) {
            ctx->pc = 0x30996Cu;
            goto label_30996c;
        }
    }
    ctx->pc = 0x30995Cu;
    // 0x30995c: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x30995cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x309960: 0xc0c2568  jal         func_3095A0
    ctx->pc = 0x309960u;
    SET_GPR_U32(ctx, 31, 0x309968u);
    ctx->pc = 0x309964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309960u;
    // 0x309964: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3095A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3095A0u, 0x309960u, 0x309968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309968u;
label_309968:
    // 0x309968: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x309968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30996c:
    // 0x30996c: 0x5620ff84  bnel        $s1, $zero, . + 4 + (-0x7C << 2)
    ctx->pc = 0x30996Cu;
    {
        const bool branch_taken_0x30996c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x30996c) {
            ctx->pc = 0x309970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30996Cu;
            // 0x309970: 0x86220010  lh          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x309780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_309780;
        }
    }
    ctx->pc = 0x309974u;
label_309974:
    // 0x309974: 0xc0da828  jal         func_36A0A0
    ctx->pc = 0x309974u;
    SET_GPR_U32(ctx, 31, 0x30997Cu);
    ctx->pc = 0x36A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A0A0u, 0x309974u, 0x30997Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30997Cu;
label_30997c:
    // 0x30997c: 0xc0db0ea  jal         func_36C3A8
    ctx->pc = 0x30997Cu;
    SET_GPR_U32(ctx, 31, 0x309984u);
    ctx->pc = 0x309980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30997Cu;
    // 0x309980: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C3A8u, 0x30997Cu, 0x309984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309984u;
label_309984:
    // 0x309984: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x309984u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x309988: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x309988u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30998c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x30998cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x309990: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x309990u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309994: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x309994u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x309998: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x309998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30999c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x30999cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3099a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3099A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3099A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3099A0u;
        // 0x3099a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3099A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3099A8u;
}
