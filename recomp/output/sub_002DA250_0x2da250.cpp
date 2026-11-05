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

// Function: sub_002DA250
// Address: 0x2da250 - 0x2da670
void sub_002DA250_0x2da250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA250_0x2da250");
#endif

    switch (ctx->pc) {
        case 0x2da28cu: goto label_2da28c;
        case 0x2da298u: goto label_2da298;
        case 0x2da2a4u: goto label_2da2a4;
        case 0x2da2b8u: goto label_2da2b8;
        case 0x2da2d0u: goto label_2da2d0;
        case 0x2da2e8u: goto label_2da2e8;
        case 0x2da330u: goto label_2da330;
        case 0x2da344u: goto label_2da344;
        case 0x2da35cu: goto label_2da35c;
        case 0x2da37cu: goto label_2da37c;
        case 0x2da3a0u: goto label_2da3a0;
        case 0x2da3c0u: goto label_2da3c0;
        case 0x2da3e4u: goto label_2da3e4;
        case 0x2da3fcu: goto label_2da3fc;
        case 0x2da41cu: goto label_2da41c;
        case 0x2da430u: goto label_2da430;
        case 0x2da438u: goto label_2da438;
        case 0x2da44cu: goto label_2da44c;
        case 0x2da460u: goto label_2da460;
        case 0x2da478u: goto label_2da478;
        case 0x2da498u: goto label_2da498;
        case 0x2da4b4u: goto label_2da4b4;
        case 0x2da4c8u: goto label_2da4c8;
        case 0x2da4dcu: goto label_2da4dc;
        case 0x2da4e4u: goto label_2da4e4;
        case 0x2da4f8u: goto label_2da4f8;
        case 0x2da510u: goto label_2da510;
        case 0x2da51cu: goto label_2da51c;
        case 0x2da52cu: goto label_2da52c;
        case 0x2da544u: goto label_2da544;
        case 0x2da560u: goto label_2da560;
        case 0x2da57cu: goto label_2da57c;
        case 0x2da598u: goto label_2da598;
        case 0x2da5acu: goto label_2da5ac;
        case 0x2da5c4u: goto label_2da5c4;
        case 0x2da5d0u: goto label_2da5d0;
        case 0x2da5e0u: goto label_2da5e0;
        case 0x2da5fcu: goto label_2da5fc;
        case 0x2da618u: goto label_2da618;
        case 0x2da62cu: goto label_2da62c;
        case 0x2da638u: goto label_2da638;
        case 0x2da64cu: goto label_2da64c;
        default: break;
    }

    ctx->pc = 0x2da250u;

    // 0x2da250: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2da250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2da254: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x2da254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x2da258: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x2da258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x2da25c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2da25cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da260: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2da260u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da264: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x2da264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x2da268: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x2da268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x2da26c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2da26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da270: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2da270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2da274: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2da274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2da278: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x2da278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x2da27c: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x2da27cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2da280: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2da280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2da284: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x2DA284u;
    SET_GPR_U32(ctx, 31, 0x2DA28Cu);
    ctx->pc = 0x2DA288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA284u;
    // 0x2da288: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x2DA284u, 0x2DA28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA28Cu;
label_2da28c:
    // 0x2da28c: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x2DA28Cu;
    {
        const bool branch_taken_0x2da28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA28Cu;
        // 0x2da290: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da28c) {
            ctx->pc = 0x2DA630u;
            goto label_2da630;
        }
    }
    ctx->pc = 0x2DA294u;
    // 0x2da294: 0x0  nop
    ctx->pc = 0x2da294u;
    // NOP
label_2da298:
    // 0x2da298: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2da298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da29c: 0xc0d73f4  jal         func_35CFD0
    ctx->pc = 0x2DA29Cu;
    SET_GPR_U32(ctx, 31, 0x2DA2A4u);
    ctx->pc = 0x2DA2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA29Cu;
    // 0x2da2a0: 0x24a51500  addiu       $a1, $a1, 0x1500 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFD0u, 0x2DA29Cu, 0x2DA2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA2A4u;
label_2da2a4:
    // 0x2da2a4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DA2A4u;
    {
        const bool branch_taken_0x2da2a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA2A4u;
        // 0x2da2a8: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da2a4) {
            ctx->pc = 0x2DA2C4u;
            goto label_2da2c4;
        }
    }
    ctx->pc = 0x2DA2ACu;
    // 0x2da2ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2da2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da2b0: 0xc09df16  jal         func_277C58
    ctx->pc = 0x2DA2B0u;
    SET_GPR_U32(ctx, 31, 0x2DA2B8u);
    ctx->pc = 0x2DA2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA2B0u;
    // 0x2da2b4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277C58u, 0x2DA2B0u, 0x2DA2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA2B8u;
label_2da2b8:
    // 0x2da2b8: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x2da2b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da2bc: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x2DA2BCu;
    {
        const bool branch_taken_0x2da2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA2BCu;
        // 0x2da2c0: 0xa22263e4  sb          $v0, 0x63E4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 25572), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da2bc) {
            ctx->pc = 0x2DA62Cu;
            goto label_2da62c;
        }
    }
    ctx->pc = 0x2DA2C4u;
label_2da2c4:
    // 0x2da2c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2da2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da2c8: 0xc0d73f4  jal         func_35CFD0
    ctx->pc = 0x2DA2C8u;
    SET_GPR_U32(ctx, 31, 0x2DA2D0u);
    ctx->pc = 0x2DA2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA2C8u;
    // 0x2da2cc: 0x24a51510  addiu       $a1, $a1, 0x1510 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFD0u, 0x2DA2C8u, 0x2DA2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA2D0u;
label_2da2d0:
    // 0x2da2d0: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DA2D0u;
    {
        const bool branch_taken_0x2da2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA2D0u;
        // 0x2da2d4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da2d0) {
            ctx->pc = 0x2DA324u;
            goto label_2da324;
        }
    }
    ctx->pc = 0x2DA2D8u;
    // 0x2da2d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2da2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da2dc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2da2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2da2e0: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x2DA2E0u;
    SET_GPR_U32(ctx, 31, 0x2DA2E8u);
    ctx->pc = 0x2DA2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA2E0u;
    // 0x2da2e4: 0x27a60044  addiu       $a2, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x2DA2E0u, 0x2DA2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA2E8u;
label_2da2e8:
    // 0x2da2e8: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2da2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2da2ec: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2da2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da2f0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2da2f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2da2f4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2da2f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2da2f8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2da2f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2da2fc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2da2fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2da300: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da304: 0x0  nop
    ctx->pc = 0x2da304u;
    // NOP
    // 0x2da308: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2da308u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2da30c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2da30cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2da310: 0x0  nop
    ctx->pc = 0x2da310u;
    // NOP
    // 0x2da314: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2da314u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2da318: 0xe6200438  swc1        $f0, 0x438($s1)
    ctx->pc = 0x2da318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1080), bits); }
    // 0x2da31c: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x2DA31Cu;
    {
        const bool branch_taken_0x2da31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA31Cu;
        // 0x2da320: 0xe6210434  swc1        $f1, 0x434($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1076), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da31c) {
            ctx->pc = 0x2DA62Cu;
            goto label_2da62c;
        }
    }
    ctx->pc = 0x2DA324u;
label_2da324:
    // 0x2da324: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2da324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da328: 0xc0d73f4  jal         func_35CFD0
    ctx->pc = 0x2DA328u;
    SET_GPR_U32(ctx, 31, 0x2DA330u);
    ctx->pc = 0x2DA32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA328u;
    // 0x2da32c: 0x24a51520  addiu       $a1, $a1, 0x1520 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFD0u, 0x2DA328u, 0x2DA330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA330u;
label_2da330:
    // 0x2da330: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DA330u;
    {
        const bool branch_taken_0x2da330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA330u;
        // 0x2da334: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da330) {
            ctx->pc = 0x2DA350u;
            goto label_2da350;
        }
    }
    ctx->pc = 0x2DA338u;
    // 0x2da338: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2da338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da33c: 0xc09df16  jal         func_277C58
    ctx->pc = 0x2DA33Cu;
    SET_GPR_U32(ctx, 31, 0x2DA344u);
    ctx->pc = 0x2DA340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA33Cu;
    // 0x2da340: 0x27a50011  addiu       $a1, $sp, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277C58u, 0x2DA33Cu, 0x2DA344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA344u;
label_2da344:
    // 0x2da344: 0x93a20011  lbu         $v0, 0x11($sp)
    ctx->pc = 0x2da344u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
    // 0x2da348: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x2DA348u;
    {
        const bool branch_taken_0x2da348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA348u;
        // 0x2da34c: 0xa222043c  sb          $v0, 0x43C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1084), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da348) {
            ctx->pc = 0x2DA62Cu;
            goto label_2da62c;
        }
    }
    ctx->pc = 0x2DA350u;
label_2da350:
    // 0x2da350: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2da350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da354: 0xc0d73f4  jal         func_35CFD0
    ctx->pc = 0x2DA354u;
    SET_GPR_U32(ctx, 31, 0x2DA35Cu);
    ctx->pc = 0x2DA358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA354u;
    // 0x2da358: 0x24a51538  addiu       $a1, $a1, 0x1538 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFD0u, 0x2DA354u, 0x2DA35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA35Cu;
label_2da35c:
    // 0x2da35c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2DA35Cu;
    {
        const bool branch_taken_0x2da35c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA35Cu;
        // 0x2da360: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da35c) {
            ctx->pc = 0x2DA394u;
            goto label_2da394;
        }
    }
    ctx->pc = 0x2DA364u;
    // 0x2da364: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2da364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da368: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2da368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2da36c: 0x27a60021  addiu       $a2, $sp, 0x21
    ctx->pc = 0x2da36cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 33));
    // 0x2da370: 0x27a70022  addiu       $a3, $sp, 0x22
    ctx->pc = 0x2da370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 34));
    // 0x2da374: 0xc09dfb2  jal         func_277EC8
    ctx->pc = 0x2DA374u;
    SET_GPR_U32(ctx, 31, 0x2DA37Cu);
    ctx->pc = 0x2DA378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA374u;
    // 0x2da378: 0x27a80023  addiu       $t0, $sp, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277EC8u, 0x2DA374u, 0x2DA37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA37Cu;
label_2da37c:
    // 0x2da37c: 0x8ba20023  lwl         $v0, 0x23($sp)
    ctx->pc = 0x2da37cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x2da380: 0x9ba20020  lwr         $v0, 0x20($sp)
    ctx->pc = 0x2da380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x2da384: 0xaa2263d3  swl         $v0, 0x63D3($s1)
    ctx->pc = 0x2da384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 25555); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2da388: 0xba2263d0  swr         $v0, 0x63D0($s1)
    ctx->pc = 0x2da388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 25552); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2da38c: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x2DA38Cu;
    {
        const bool branch_taken_0x2da38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA38Cu;
        // 0x2da390: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da38c) {
            ctx->pc = 0x2DA630u;
            goto label_2da630;
        }
    }
    ctx->pc = 0x2DA394u;
label_2da394:
    // 0x2da394: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2da394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da398: 0xc0d73f4  jal         func_35CFD0
    ctx->pc = 0x2DA398u;
    SET_GPR_U32(ctx, 31, 0x2DA3A0u);
    ctx->pc = 0x2DA39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA398u;
    // 0x2da39c: 0x24a51548  addiu       $a1, $a1, 0x1548 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFD0u, 0x2DA398u, 0x2DA3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA3A0u;
label_2da3a0:
    // 0x2da3a0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2DA3A0u;
    {
        const bool branch_taken_0x2da3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA3A0u;
        // 0x2da3a4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da3a0) {
            ctx->pc = 0x2DA3D8u;
            goto label_2da3d8;
        }
    }
    ctx->pc = 0x2DA3A8u;
    // 0x2da3a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2da3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da3ac: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2da3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2da3b0: 0x27a60021  addiu       $a2, $sp, 0x21
    ctx->pc = 0x2da3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 33));
    // 0x2da3b4: 0x27a70022  addiu       $a3, $sp, 0x22
    ctx->pc = 0x2da3b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 34));
    // 0x2da3b8: 0xc09dfb2  jal         func_277EC8
    ctx->pc = 0x2DA3B8u;
    SET_GPR_U32(ctx, 31, 0x2DA3C0u);
    ctx->pc = 0x2DA3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA3B8u;
    // 0x2da3bc: 0x27a80023  addiu       $t0, $sp, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277EC8u, 0x2DA3B8u, 0x2DA3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA3C0u;
label_2da3c0:
    // 0x2da3c0: 0x8ba20023  lwl         $v0, 0x23($sp)
    ctx->pc = 0x2da3c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x2da3c4: 0x9ba20020  lwr         $v0, 0x20($sp)
    ctx->pc = 0x2da3c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x2da3c8: 0xaa2263d7  swl         $v0, 0x63D7($s1)
    ctx->pc = 0x2da3c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 25559); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2da3cc: 0xba2263d4  swr         $v0, 0x63D4($s1)
    ctx->pc = 0x2da3ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 25556); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2da3d0: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x2DA3D0u;
    {
        const bool branch_taken_0x2da3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA3D0u;
        // 0x2da3d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da3d0) {
            ctx->pc = 0x2DA630u;
            goto label_2da630;
        }
    }
    ctx->pc = 0x2DA3D8u;
label_2da3d8:
    // 0x2da3d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2da3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da3dc: 0xc0d73f4  jal         func_35CFD0
    ctx->pc = 0x2DA3DCu;
    SET_GPR_U32(ctx, 31, 0x2DA3E4u);
    ctx->pc = 0x2DA3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA3DCu;
    // 0x2da3e0: 0x24a51558  addiu       $a1, $a1, 0x1558 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFD0u, 0x2DA3DCu, 0x2DA3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA3E4u;
label_2da3e4:
    // 0x2da3e4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2DA3E4u;
    {
        const bool branch_taken_0x2da3e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA3E4u;
        // 0x2da3e8: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da3e4) {
            ctx->pc = 0x2DA410u;
            goto label_2da410;
        }
    }
    ctx->pc = 0x2DA3ECu;
    // 0x2da3ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2da3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da3f0: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x2da3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2da3f4: 0xc09dff4  jal         func_277FD0
    ctx->pc = 0x2DA3F4u;
    SET_GPR_U32(ctx, 31, 0x2DA3FCu);
    ctx->pc = 0x2DA3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA3F4u;
    // 0x2da3f8: 0x27a6004c  addiu       $a2, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277FD0u, 0x2DA3F4u, 0x2DA3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA3FCu;
label_2da3fc:
    // 0x2da3fc: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2da3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2da400: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x2da400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da404: 0xe62063c8  swc1        $f0, 0x63C8($s1)
    ctx->pc = 0x2da404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 25544), bits); }
    // 0x2da408: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x2DA408u;
    {
        const bool branch_taken_0x2da408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA408u;
        // 0x2da40c: 0xe62163cc  swc1        $f1, 0x63CC($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 25548), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da408) {
            ctx->pc = 0x2DA62Cu;
            goto label_2da62c;
        }
    }
    ctx->pc = 0x2DA410u;
label_2da410:
    // 0x2da410: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2da410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da414: 0xc0d73f4  jal         func_35CFD0
    ctx->pc = 0x2DA414u;
    SET_GPR_U32(ctx, 31, 0x2DA41Cu);
    ctx->pc = 0x2DA418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA414u;
    // 0x2da418: 0x24a51568  addiu       $a1, $a1, 0x1568 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFD0u, 0x2DA414u, 0x2DA41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA41Cu;
label_2da41c:
    // 0x2da41c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DA41Cu;
    {
        const bool branch_taken_0x2da41c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA41Cu;
        // 0x2da420: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da41c) {
            ctx->pc = 0x2DA440u;
            goto label_2da440;
        }
    }
    ctx->pc = 0x2DA424u;
    // 0x2da424: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2da424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da428: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2DA428u;
    SET_GPR_U32(ctx, 31, 0x2DA430u);
    ctx->pc = 0x2DA42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA428u;
    // 0x2da42c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2DA428u, 0x2DA430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA430u;
label_2da430:
    // 0x2da430: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x2DA430u;
    SET_GPR_U32(ctx, 31, 0x2DA438u);
    ctx->pc = 0x2DA434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA430u;
    // 0x2da434: 0xc7ac0050  lwc1        $f12, 0x50($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x2DA430u, 0x2DA438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA438u;
label_2da438:
    // 0x2da438: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x2DA438u;
    {
        const bool branch_taken_0x2da438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA438u;
        // 0x2da43c: 0xae2263e8  sw          $v0, 0x63E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 25576), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da438) {
            ctx->pc = 0x2DA62Cu;
            goto label_2da62c;
        }
    }
    ctx->pc = 0x2DA440u;
label_2da440:
    // 0x2da440: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2da440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da444: 0xc0d73f4  jal         func_35CFD0
    ctx->pc = 0x2DA444u;
    SET_GPR_U32(ctx, 31, 0x2DA44Cu);
    ctx->pc = 0x2DA448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA444u;
    // 0x2da448: 0x24a51578  addiu       $a1, $a1, 0x1578 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFD0u, 0x2DA444u, 0x2DA44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA44Cu;
label_2da44c:
    // 0x2da44c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DA44Cu;
    {
        const bool branch_taken_0x2da44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA44Cu;
        // 0x2da450: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da44c) {
            ctx->pc = 0x2DA46Cu;
            goto label_2da46c;
        }
    }
    ctx->pc = 0x2DA454u;
    // 0x2da454: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2da454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da458: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2DA458u;
    SET_GPR_U32(ctx, 31, 0x2DA460u);
    ctx->pc = 0x2DA45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA458u;
    // 0x2da45c: 0x27a50054  addiu       $a1, $sp, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2DA458u, 0x2DA460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA460u;
label_2da460:
    // 0x2da460: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x2da460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2da464: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x2DA464u;
    {
        const bool branch_taken_0x2da464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA464u;
        // 0x2da468: 0xe62063f4  swc1        $f0, 0x63F4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 25588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da464) {
            ctx->pc = 0x2DA62Cu;
            goto label_2da62c;
        }
    }
    ctx->pc = 0x2DA46Cu;
label_2da46c:
    // 0x2da46c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2da46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da470: 0xc0d73f4  jal         func_35CFD0
    ctx->pc = 0x2DA470u;
    SET_GPR_U32(ctx, 31, 0x2DA478u);
    ctx->pc = 0x2DA474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA470u;
    // 0x2da474: 0x24a51580  addiu       $a1, $a1, 0x1580 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFD0u, 0x2DA470u, 0x2DA478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA478u;
label_2da478:
    // 0x2da478: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2DA478u;
    {
        const bool branch_taken_0x2da478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA478u;
        // 0x2da47c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da478) {
            ctx->pc = 0x2DA4BCu;
            goto label_2da4bc;
        }
    }
    ctx->pc = 0x2DA480u;
    // 0x2da480: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2da480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da484: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x2da484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2da488: 0x27a6005c  addiu       $a2, $sp, 0x5C
    ctx->pc = 0x2da488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2da48c: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x2da48cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2da490: 0xc09e012  jal         func_278048
    ctx->pc = 0x2DA490u;
    SET_GPR_U32(ctx, 31, 0x2DA498u);
    ctx->pc = 0x2DA494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA490u;
    // 0x2da494: 0x27a80064  addiu       $t0, $sp, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278048u, 0x2DA490u, 0x2DA498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA498u;
label_2da498:
    // 0x2da498: 0xc7ac0058  lwc1        $f12, 0x58($sp)
    ctx->pc = 0x2da498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2da49c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2da49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da4a0: 0xc7ad005c  lwc1        $f13, 0x5C($sp)
    ctx->pc = 0x2da4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2da4a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2da4a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da4a8: 0xc7ae0060  lwc1        $f14, 0x60($sp)
    ctx->pc = 0x2da4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2da4ac: 0xc0b6b86  jal         func_2DAE18
    ctx->pc = 0x2DA4ACu;
    SET_GPR_U32(ctx, 31, 0x2DA4B4u);
    ctx->pc = 0x2DA4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA4ACu;
    // 0x2da4b0: 0xc7af0064  lwc1        $f15, 0x64($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAE18u, 0x2DA4ACu, 0x2DA4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA4B4u;
label_2da4b4:
    // 0x2da4b4: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x2DA4B4u;
    {
        const bool branch_taken_0x2da4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA4B4u;
        // 0x2da4b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da4b4) {
            ctx->pc = 0x2DA630u;
            goto label_2da630;
        }
    }
    ctx->pc = 0x2DA4BCu;
label_2da4bc:
    // 0x2da4bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2da4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da4c0: 0xc0d73f4  jal         func_35CFD0
    ctx->pc = 0x2DA4C0u;
    SET_GPR_U32(ctx, 31, 0x2DA4C8u);
    ctx->pc = 0x2DA4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA4C0u;
    // 0x2da4c4: 0x24a51590  addiu       $a1, $a1, 0x1590 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFD0u, 0x2DA4C0u, 0x2DA4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA4C8u;
label_2da4c8:
    // 0x2da4c8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DA4C8u;
    {
        const bool branch_taken_0x2da4c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA4C8u;
        // 0x2da4cc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da4c8) {
            ctx->pc = 0x2DA4ECu;
            goto label_2da4ec;
        }
    }
    ctx->pc = 0x2DA4D0u;
    // 0x2da4d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2da4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da4d4: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2DA4D4u;
    SET_GPR_U32(ctx, 31, 0x2DA4DCu);
    ctx->pc = 0x2DA4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA4D4u;
    // 0x2da4d8: 0x27a50068  addiu       $a1, $sp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2DA4D4u, 0x2DA4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA4DCu;
label_2da4dc:
    // 0x2da4dc: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x2DA4DCu;
    SET_GPR_U32(ctx, 31, 0x2DA4E4u);
    ctx->pc = 0x2DA4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA4DCu;
    // 0x2da4e0: 0xc7ac0068  lwc1        $f12, 0x68($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x2DA4DCu, 0x2DA4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA4E4u;
label_2da4e4:
    // 0x2da4e4: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2DA4E4u;
    {
        const bool branch_taken_0x2da4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA4E4u;
        // 0x2da4e8: 0xae2263b0  sw          $v0, 0x63B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 25520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da4e4) {
            ctx->pc = 0x2DA62Cu;
            goto label_2da62c;
        }
    }
    ctx->pc = 0x2DA4ECu;
label_2da4ec:
    // 0x2da4ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2da4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da4f0: 0xc0d73f4  jal         func_35CFD0
    ctx->pc = 0x2DA4F0u;
    SET_GPR_U32(ctx, 31, 0x2DA4F8u);
    ctx->pc = 0x2DA4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA4F0u;
    // 0x2da4f4: 0x24a515a0  addiu       $a1, $a1, 0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFD0u, 0x2DA4F0u, 0x2DA4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA4F8u;
label_2da4f8:
    // 0x2da4f8: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x2DA4F8u;
    {
        const bool branch_taken_0x2da4f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2da4f8) {
            ctx->pc = 0x2DA4FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA4F8u;
            // 0x2da4fc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA5A0u;
            goto label_2da5a0;
        }
    }
    ctx->pc = 0x2DA500u;
    // 0x2da500: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2da500u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2da504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2da504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da508: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2DA508u;
    SET_GPR_U32(ctx, 31, 0x2DA510u);
    ctx->pc = 0x2DA50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA508u;
    // 0x2da50c: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2DA508u, 0x2DA510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA510u;
label_2da510:
    // 0x2da510: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2da510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da514: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x2DA514u;
    SET_GPR_U32(ctx, 31, 0x2DA51Cu);
    ctx->pc = 0x2DA518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA514u;
    // 0x2da518: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x2DA514u, 0x2DA51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA51Cu;
label_2da51c:
    // 0x2da51c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2da51cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2da520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2da520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da524: 0xc0d73f4  jal         func_35CFD0
    ctx->pc = 0x2DA524u;
    SET_GPR_U32(ctx, 31, 0x2DA52Cu);
    ctx->pc = 0x2DA528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA524u;
    // 0x2da528: 0x24a515a8  addiu       $a1, $a1, 0x15A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFD0u, 0x2DA524u, 0x2DA52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA52Cu;
label_2da52c:
    // 0x2da52c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2DA52Cu;
    {
        const bool branch_taken_0x2da52c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da52c) {
            ctx->pc = 0x2DA530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA52Cu;
            // 0x2da530: 0xae3463c4  sw          $s4, 0x63C4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 25540), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA534u;
            goto label_2da534;
        }
    }
    ctx->pc = 0x2DA534u;
label_2da534:
    // 0x2da534: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2da534u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2da538: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2da538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da53c: 0xc0d73f4  jal         func_35CFD0
    ctx->pc = 0x2DA53Cu;
    SET_GPR_U32(ctx, 31, 0x2DA544u);
    ctx->pc = 0x2DA540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA53Cu;
    // 0x2da540: 0x24a515b8  addiu       $a1, $a1, 0x15B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFD0u, 0x2DA53Cu, 0x2DA544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA544u;
label_2da544:
    // 0x2da544: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DA544u;
    {
        const bool branch_taken_0x2da544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA544u;
        // 0x2da548: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da544) {
            ctx->pc = 0x2DA554u;
            goto label_2da554;
        }
    }
    ctx->pc = 0x2DA54Cu;
    // 0x2da54c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2DA54Cu;
    {
        const bool branch_taken_0x2da54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA54Cu;
        // 0x2da550: 0xae3563c4  sw          $s5, 0x63C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 25540), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da54c) {
            ctx->pc = 0x2DA58Cu;
            goto label_2da58c;
        }
    }
    ctx->pc = 0x2DA554u;
label_2da554:
    // 0x2da554: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2da554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da558: 0xc0d73f4  jal         func_35CFD0
    ctx->pc = 0x2DA558u;
    SET_GPR_U32(ctx, 31, 0x2DA560u);
    ctx->pc = 0x2DA55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA558u;
    // 0x2da55c: 0x24a515d0  addiu       $a1, $a1, 0x15D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFD0u, 0x2DA558u, 0x2DA560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA560u;
label_2da560:
    // 0x2da560: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DA560u;
    {
        const bool branch_taken_0x2da560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA560u;
        // 0x2da564: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da560) {
            ctx->pc = 0x2DA570u;
            goto label_2da570;
        }
    }
    ctx->pc = 0x2DA568u;
    // 0x2da568: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2DA568u;
    {
        const bool branch_taken_0x2da568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA568u;
        // 0x2da56c: 0xae3463c4  sw          $s4, 0x63C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 25540), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da568) {
            ctx->pc = 0x2DA58Cu;
            goto label_2da58c;
        }
    }
    ctx->pc = 0x2DA570u;
label_2da570:
    // 0x2da570: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2da570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da574: 0xc0d73f4  jal         func_35CFD0
    ctx->pc = 0x2DA574u;
    SET_GPR_U32(ctx, 31, 0x2DA57Cu);
    ctx->pc = 0x2DA578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA574u;
    // 0x2da578: 0x24a515e8  addiu       $a1, $a1, 0x15E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFD0u, 0x2DA574u, 0x2DA57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA57Cu;
label_2da57c:
    // 0x2da57c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DA57Cu;
    {
        const bool branch_taken_0x2da57c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA57Cu;
        // 0x2da580: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da57c) {
            ctx->pc = 0x2DA590u;
            goto label_2da590;
        }
    }
    ctx->pc = 0x2DA584u;
    // 0x2da584: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2da584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2da588: 0xae2263c4  sw          $v0, 0x63C4($s1)
    ctx->pc = 0x2da588u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 25540), GPR_U32(ctx, 2));
label_2da58c:
    // 0x2da58c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2da58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2da590:
    // 0x2da590: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2DA590u;
    SET_GPR_U32(ctx, 31, 0x2DA598u);
    ctx->pc = 0x2DA594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA590u;
    // 0x2da594: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2DA590u, 0x2DA598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA598u;
label_2da598:
    // 0x2da598: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2DA598u;
    {
        const bool branch_taken_0x2da598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA598u;
        // 0x2da59c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da598) {
            ctx->pc = 0x2DA630u;
            goto label_2da630;
        }
    }
    ctx->pc = 0x2DA5A0u;
label_2da5a0:
    // 0x2da5a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2da5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da5a4: 0xc0d73f4  jal         func_35CFD0
    ctx->pc = 0x2DA5A4u;
    SET_GPR_U32(ctx, 31, 0x2DA5ACu);
    ctx->pc = 0x2DA5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA5A4u;
    // 0x2da5a8: 0x24a51600  addiu       $a1, $a1, 0x1600 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFD0u, 0x2DA5A4u, 0x2DA5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA5ACu;
label_2da5ac:
    // 0x2da5ac: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x2DA5ACu;
    {
        const bool branch_taken_0x2da5ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2da5ac) {
            ctx->pc = 0x2DA5B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA5ACu;
            // 0x2da5b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA630u;
            goto label_2da630;
        }
    }
    ctx->pc = 0x2DA5B4u;
    // 0x2da5b4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2da5b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2da5b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2da5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da5bc: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2DA5BCu;
    SET_GPR_U32(ctx, 31, 0x2DA5C4u);
    ctx->pc = 0x2DA5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA5BCu;
    // 0x2da5c0: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2DA5BCu, 0x2DA5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA5C4u;
label_2da5c4:
    // 0x2da5c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2da5c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da5c8: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x2DA5C8u;
    SET_GPR_U32(ctx, 31, 0x2DA5D0u);
    ctx->pc = 0x2DA5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA5C8u;
    // 0x2da5cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x2DA5C8u, 0x2DA5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA5D0u;
label_2da5d0:
    // 0x2da5d0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2da5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2da5d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2da5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da5d8: 0xc0d73f4  jal         func_35CFD0
    ctx->pc = 0x2DA5D8u;
    SET_GPR_U32(ctx, 31, 0x2DA5E0u);
    ctx->pc = 0x2DA5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA5D8u;
    // 0x2da5dc: 0x24a51610  addiu       $a1, $a1, 0x1610 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFD0u, 0x2DA5D8u, 0x2DA5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA5E0u;
label_2da5e0:
    // 0x2da5e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DA5E0u;
    {
        const bool branch_taken_0x2da5e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA5E0u;
        // 0x2da5e4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da5e0) {
            ctx->pc = 0x2DA5F0u;
            goto label_2da5f0;
        }
    }
    ctx->pc = 0x2DA5E8u;
    // 0x2da5e8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2DA5E8u;
    {
        const bool branch_taken_0x2da5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA5E8u;
        // 0x2da5ec: 0xae2063f0  sw          $zero, 0x63F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 25584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da5e8) {
            ctx->pc = 0x2DA620u;
            goto label_2da620;
        }
    }
    ctx->pc = 0x2DA5F0u;
label_2da5f0:
    // 0x2da5f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2da5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da5f4: 0xc0d73f4  jal         func_35CFD0
    ctx->pc = 0x2DA5F4u;
    SET_GPR_U32(ctx, 31, 0x2DA5FCu);
    ctx->pc = 0x2DA5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA5F4u;
    // 0x2da5f8: 0x24a51618  addiu       $a1, $a1, 0x1618 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFD0u, 0x2DA5F4u, 0x2DA5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA5FCu;
label_2da5fc:
    // 0x2da5fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DA5FCu;
    {
        const bool branch_taken_0x2da5fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA5FCu;
        // 0x2da600: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da5fc) {
            ctx->pc = 0x2DA60Cu;
            goto label_2da60c;
        }
    }
    ctx->pc = 0x2DA604u;
    // 0x2da604: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2DA604u;
    {
        const bool branch_taken_0x2da604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA604u;
        // 0x2da608: 0xae3563f0  sw          $s5, 0x63F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 25584), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da604) {
            ctx->pc = 0x2DA620u;
            goto label_2da620;
        }
    }
    ctx->pc = 0x2DA60Cu;
label_2da60c:
    // 0x2da60c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2da60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da610: 0xc0d73f4  jal         func_35CFD0
    ctx->pc = 0x2DA610u;
    SET_GPR_U32(ctx, 31, 0x2DA618u);
    ctx->pc = 0x2DA614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA610u;
    // 0x2da614: 0x24a51620  addiu       $a1, $a1, 0x1620 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFD0u, 0x2DA610u, 0x2DA618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA618u;
label_2da618:
    // 0x2da618: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2DA618u;
    {
        const bool branch_taken_0x2da618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da618) {
            ctx->pc = 0x2DA61Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA618u;
            // 0x2da61c: 0xae3463f0  sw          $s4, 0x63F0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 25584), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA620u;
            goto label_2da620;
        }
    }
    ctx->pc = 0x2DA620u;
label_2da620:
    // 0x2da620: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2da620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da624: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2DA624u;
    SET_GPR_U32(ctx, 31, 0x2DA62Cu);
    ctx->pc = 0x2DA628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA624u;
    // 0x2da628: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2DA624u, 0x2DA62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA62Cu;
label_2da62c:
    // 0x2da62c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2da62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2da630:
    // 0x2da630: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x2DA630u;
    SET_GPR_U32(ctx, 31, 0x2DA638u);
    ctx->pc = 0x2DA634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA630u;
    // 0x2da634: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x2DA630u, 0x2DA638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA638u;
label_2da638:
    // 0x2da638: 0x1440ff17  bnez        $v0, . + 4 + (-0xE9 << 2)
    ctx->pc = 0x2DA638u;
    {
        const bool branch_taken_0x2da638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA638u;
        // 0x2da63c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da638) {
            ctx->pc = 0x2DA298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2da298;
        }
    }
    ctx->pc = 0x2DA640u;
    // 0x2da640: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2da640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da644: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2DA644u;
    SET_GPR_U32(ctx, 31, 0x2DA64Cu);
    ctx->pc = 0x2DA648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA644u;
    // 0x2da648: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2DA644u, 0x2DA64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA64Cu;
label_2da64c:
    // 0x2da64c: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2da64cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2da650: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x2da650u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2da654: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x2da654u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2da658: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x2da658u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2da65c: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x2da65cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2da660: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x2da660u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2da664: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2da664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2da668: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA668u;
        // 0x2da66c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA670u;
}
