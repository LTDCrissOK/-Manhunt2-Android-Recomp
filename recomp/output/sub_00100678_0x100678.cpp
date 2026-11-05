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

// Function: sub_00100678
// Address: 0x100678 - 0x1007b8
void sub_00100678_0x100678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100678_0x100678");
#endif

    switch (ctx->pc) {
        case 0x1006d0u: goto label_1006d0;
        case 0x100720u: goto label_100720;
        case 0x10074cu: goto label_10074c;
        default: break;
    }

    ctx->pc = 0x100678u;

    // 0x100678: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x100678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10067c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10067cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x100680: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x100680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x100684: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x100684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100688: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x100688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10068c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x10068cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x100690: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x100690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x100694: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x100694u;
    {
        const bool branch_taken_0x100694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100694u;
        // 0x100698: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100694) {
            ctx->pc = 0x1006A4u;
            goto label_1006a4;
        }
    }
    ctx->pc = 0x10069Cu;
    // 0x10069c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10069Cu;
    {
        const bool branch_taken_0x10069c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1006A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10069Cu;
        // 0x1006a0: 0xc6010030  lwc1        $f1, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10069c) {
            ctx->pc = 0x1006A8u;
            goto label_1006a8;
        }
    }
    ctx->pc = 0x1006A4u;
label_1006a4:
    // 0x1006a4: 0xc441a568  lwc1        $f1, -0x5A98($v0)
    ctx->pc = 0x1006a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294944104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1006a8:
    // 0x1006a8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1006a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1006ac: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1006acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1006b0: 0xc44089d0  lwc1        $f0, -0x7630($v0)
    ctx->pc = 0x1006b0u;
    { uint32_t bits = FAST_READ32(0x3F89D0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1006b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1006b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1006b8: 0x0  nop
    ctx->pc = 0x1006b8u;
    // NOP
    // 0x1006bc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1006BCu;
    {
        const bool branch_taken_0x1006bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1006C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1006BCu;
        // 0x1006c0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1006bc) {
            ctx->pc = 0x1006C8u;
            goto label_1006c8;
        }
    }
    ctx->pc = 0x1006C4u;
    // 0x1006c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1006c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1006c8:
    // 0x1006c8: 0xc0419b4  jal         func_1066D0
    ctx->pc = 0x1006C8u;
    SET_GPR_U32(ctx, 31, 0x1006D0u);
    ctx->pc = 0x1006CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1006C8u;
    // 0x1006cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1066D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1066D0u, 0x1006C8u, 0x1006D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1006D0u;
label_1006d0:
    // 0x1006d0: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1006d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1006d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1006D4u;
    {
        const bool branch_taken_0x1006d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1006D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1006D4u;
        // 0x1006d8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1006d4) {
            ctx->pc = 0x1006E4u;
            goto label_1006e4;
        }
    }
    ctx->pc = 0x1006DCu;
    // 0x1006dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1006DCu;
    {
        const bool branch_taken_0x1006dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1006E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1006DCu;
        // 0x1006e0: 0xc6010030  lwc1        $f1, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1006dc) {
            ctx->pc = 0x1006E8u;
            goto label_1006e8;
        }
    }
    ctx->pc = 0x1006E4u;
label_1006e4:
    // 0x1006e4: 0xc441a568  lwc1        $f1, -0x5A98($v0)
    ctx->pc = 0x1006e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294944104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1006e8:
    // 0x1006e8: 0xc64089d0  lwc1        $f0, -0x7630($s2)
    ctx->pc = 0x1006e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294937040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1006ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1006ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1006f0: 0x0  nop
    ctx->pc = 0x1006f0u;
    // NOP
    // 0x1006f4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1006F4u;
    {
        const bool branch_taken_0x1006f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1006F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1006F4u;
        // 0x1006f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1006f4) {
            ctx->pc = 0x100700u;
            goto label_100700;
        }
    }
    ctx->pc = 0x1006FCu;
    // 0x1006fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1006fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100700:
    // 0x100700: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x100700u;
    {
        const bool branch_taken_0x100700 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x100700) {
            ctx->pc = 0x100738u;
            goto label_100738;
        }
    }
    ctx->pc = 0x100708u;
    // 0x100708: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x100708u;
    {
        const bool branch_taken_0x100708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x100708) {
            ctx->pc = 0x10070Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100708u;
            // 0x10070c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1007A4u;
            goto label_1007a4;
        }
    }
    ctx->pc = 0x100710u;
    // 0x100710: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x100710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x100714: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x100714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100718: 0xc0f62da  jal         func_3D8B68
    ctx->pc = 0x100718u;
    SET_GPR_U32(ctx, 31, 0x100720u);
    ctx->pc = 0x10071Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100718u;
    // 0x10071c: 0x24842d80  addiu       $a0, $a0, 0x2D80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8B68u, 0x100718u, 0x100720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100720u;
label_100720:
    // 0x100720: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x100720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x100724: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x100724u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x100728: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x100728u;
    {
        const bool branch_taken_0x100728 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100728u;
        // 0x10072c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100728) {
            ctx->pc = 0x10075Cu;
            goto label_10075c;
        }
    }
    ctx->pc = 0x100730u;
    // 0x100730: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x100730u;
    {
        const bool branch_taken_0x100730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100730u;
        // 0x100734: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x100730) {
            ctx->pc = 0x100774u;
            goto label_100774;
        }
    }
    ctx->pc = 0x100738u;
label_100738:
    // 0x100738: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x100738u;
    {
        const bool branch_taken_0x100738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100738u;
        // 0x10073c: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100738) {
            ctx->pc = 0x1007A0u;
            goto label_1007a0;
        }
    }
    ctx->pc = 0x100740u;
    // 0x100740: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x100740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100744: 0xc0f620c  jal         func_3D8830
    ctx->pc = 0x100744u;
    SET_GPR_U32(ctx, 31, 0x10074Cu);
    ctx->pc = 0x100748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100744u;
    // 0x100748: 0x24842d80  addiu       $a0, $a0, 0x2D80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8830u, 0x100744u, 0x10074Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10074Cu;
label_10074c:
    // 0x10074c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x10074cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x100750: 0x8c622b00  lw          $v0, 0x2B00($v1)
    ctx->pc = 0x100750u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x100754: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x100754u;
    {
        const bool branch_taken_0x100754 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x100758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100754u;
        // 0x100758: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100754) {
            ctx->pc = 0x100770u;
            goto label_100770;
        }
    }
    ctx->pc = 0x10075Cu;
label_10075c:
    // 0x10075c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10075cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x100760: 0x0  nop
    ctx->pc = 0x100760u;
    // NOP
    // 0x100764: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x100764u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x100768: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x100768u;
    {
        const bool branch_taken_0x100768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100768) {
            ctx->pc = 0x100788u;
            goto label_100788;
        }
    }
    ctx->pc = 0x100770u;
label_100770:
    // 0x100770: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x100770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_100774:
    // 0x100774: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x100774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x100778: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x100778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10077c: 0x0  nop
    ctx->pc = 0x10077cu;
    // NOP
    // 0x100780: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x100780u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x100784: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x100784u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_100788:
    // 0x100788: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x100788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x10078c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x10078cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x100790: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100790u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100794: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x100794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x100798: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x100798u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x10079c: 0xe4400710  swc1        $f0, 0x710($v0)
    ctx->pc = 0x10079cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F0710u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F0710u, _value); } while (0); }
label_1007a0:
    // 0x1007a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1007a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1007a4:
    // 0x1007a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1007a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1007a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1007a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1007ac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1007acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1007b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1007B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1007B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1007B0u;
        // 0x1007b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1007B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1007B8u;
}
