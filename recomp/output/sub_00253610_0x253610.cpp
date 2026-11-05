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

// Function: sub_00253610
// Address: 0x253610 - 0x2537c8
void sub_00253610_0x253610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253610_0x253610");
#endif

    switch (ctx->pc) {
        case 0x253690u: goto label_253690;
        case 0x253710u: goto label_253710;
        case 0x253724u: goto label_253724;
        case 0x25375cu: goto label_25375c;
        case 0x253778u: goto label_253778;
        case 0x253784u: goto label_253784;
        default: break;
    }

    ctx->pc = 0x253610u;

    // 0x253610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x253610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x253614: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x253614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x253618: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x253618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x25361c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25361cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253620: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x253620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x253624: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x253624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x253628: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x253628u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x25362c: 0x8e051004  lw          $a1, 0x1004($s0)
    ctx->pc = 0x25362cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4100)));
    // 0x253630: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x253630u;
    {
        const bool branch_taken_0x253630 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x253634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253630u;
        // 0x253634: 0x26031040  addiu       $v1, $s0, 0x1040 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253630) {
            ctx->pc = 0x253664u;
            goto label_253664;
        }
    }
    ctx->pc = 0x253638u;
    // 0x253638: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x253638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x25363c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x25363cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x253640: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x253640u;
    {
        const bool branch_taken_0x253640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x253640) {
            ctx->pc = 0x253644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253640u;
            // 0x253644: 0x8ca40ff8  lw          $a0, 0xFF8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4088)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253674u;
            goto label_253674;
        }
    }
    ctx->pc = 0x253648u;
    // 0x253648: 0x8ca300c0  lw          $v1, 0xC0($a1)
    ctx->pc = 0x253648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x25364c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x25364cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x253650: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x253650u;
    {
        const bool branch_taken_0x253650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x253650) {
            ctx->pc = 0x253654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253650u;
            // 0x253654: 0x26031040  addiu       $v1, $s0, 0x1040 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4160));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253664u;
            goto label_253664;
        }
    }
    ctx->pc = 0x253658u;
    // 0x253658: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x253658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x25365c: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x25365Cu;
    {
        const bool branch_taken_0x25365c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25365Cu;
        // 0x253660: 0x26031040  addiu       $v1, $s0, 0x1040 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25365c) {
            ctx->pc = 0x253754u;
            goto label_253754;
        }
    }
    ctx->pc = 0x253664u;
label_253664:
    // 0x253664: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x253664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x253668: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x253668u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x25366c: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x25366Cu;
    {
        const bool branch_taken_0x25366c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25366Cu;
        // 0x253670: 0xac600014  sw          $zero, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25366c) {
            ctx->pc = 0x2537ACu;
            goto label_2537ac;
        }
    }
    ctx->pc = 0x253674u;
label_253674:
    // 0x253674: 0x8e020ff8  lw          $v0, 0xFF8($s0)
    ctx->pc = 0x253674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4088)));
    // 0x253678: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x253678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25367c: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x25367cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x253680: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x253680u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x253684: 0x24520110  addiu       $s2, $v0, 0x110
    ctx->pc = 0x253684u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x253688: 0xc0f6da6  jal         func_3DB698
    ctx->pc = 0x253688u;
    SET_GPR_U32(ctx, 31, 0x253690u);
    ctx->pc = 0x25368Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253688u;
    // 0x25368c: 0x24510018  addiu       $s1, $v0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x253688u, 0x253690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253690u;
label_253690:
    // 0x253690: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x253690u;
    {
        const bool branch_taken_0x253690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253690u;
        // 0x253694: 0x8e021004  lw          $v0, 0x1004($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253690) {
            ctx->pc = 0x2536A0u;
            goto label_2536a0;
        }
    }
    ctx->pc = 0x253698u;
    // 0x253698: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x253698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25369c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25369cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2536a0:
    // 0x2536a0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2536a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2536a4: 0x8c642b00  lw          $a0, 0x2B00($v1)
    ctx->pc = 0x2536a4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x482B00u));
    // 0x2536a8: 0xc44006dc  lwc1        $f0, 0x6DC($v0)
    ctx->pc = 0x2536a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2536ac: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2536ACu;
    {
        const bool branch_taken_0x2536ac = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2536B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2536ACu;
        // 0x2536b0: 0x46140080  add.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2536ac) {
            ctx->pc = 0x2536C8u;
            goto label_2536c8;
        }
    }
    ctx->pc = 0x2536B4u;
    // 0x2536b4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2536b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2536b8: 0x0  nop
    ctx->pc = 0x2536b8u;
    // NOP
    // 0x2536bc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2536bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2536c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2536C0u;
    {
        const bool branch_taken_0x2536c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2536c0) {
            ctx->pc = 0x2536E4u;
            goto label_2536e4;
        }
    }
    ctx->pc = 0x2536C8u;
label_2536c8:
    // 0x2536c8: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2536c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2536cc: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2536ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2536d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2536d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2536d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2536d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2536d8: 0x0  nop
    ctx->pc = 0x2536d8u;
    // NOP
    // 0x2536dc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2536dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2536e0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2536e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2536e4:
    // 0x2536e4: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2536e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2536e8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2536e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2536ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2536ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2536f0: 0x0  nop
    ctx->pc = 0x2536f0u;
    // NOP
    // 0x2536f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2536f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2536f8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2536f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2536fc: 0x0  nop
    ctx->pc = 0x2536fcu;
    // NOP
    // 0x253700: 0x45030014  bc1tl       . + 4 + (0x14 << 2)
    ctx->pc = 0x253700u;
    {
        const bool branch_taken_0x253700 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x253700) {
            ctx->pc = 0x253704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253700u;
            // 0x253704: 0x8e051004  lw          $a1, 0x1004($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253754u;
            goto label_253754;
        }
    }
    ctx->pc = 0x253708u;
    // 0x253708: 0xc064b06  jal         func_192C18
    ctx->pc = 0x253708u;
    SET_GPR_U32(ctx, 31, 0x253710u);
    ctx->pc = 0x25370Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253708u;
    // 0x25370c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192C18u, 0x253708u, 0x253710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253710u;
label_253710:
    // 0x253710: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x253710u;
    {
        const bool branch_taken_0x253710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x253710) {
            ctx->pc = 0x253714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253710u;
            // 0x253714: 0x8e051004  lw          $a1, 0x1004($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253754u;
            goto label_253754;
        }
    }
    ctx->pc = 0x253718u;
    // 0x253718: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x253718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25371c: 0xc0f6da6  jal         func_3DB698
    ctx->pc = 0x25371Cu;
    SET_GPR_U32(ctx, 31, 0x253724u);
    ctx->pc = 0x253720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25371Cu;
    // 0x253720: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x25371Cu, 0x253724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253724u;
label_253724:
    // 0x253724: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x253724u;
    {
        const bool branch_taken_0x253724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253724u;
        // 0x253728: 0x26111040  addiu       $s1, $s0, 0x1040 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253724) {
            ctx->pc = 0x253764u;
            goto label_253764;
        }
    }
    ctx->pc = 0x25372Cu;
    // 0x25372c: 0xc6410028  lwc1        $f1, 0x28($s2)
    ctx->pc = 0x25372cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253730: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x253730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
    // 0x253734: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x253734u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x253738: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x253738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25373c: 0x0  nop
    ctx->pc = 0x25373cu;
    // NOP
    // 0x253740: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x253740u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253744: 0x0  nop
    ctx->pc = 0x253744u;
    // NOP
    // 0x253748: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x253748u;
    {
        const bool branch_taken_0x253748 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x253748) {
            ctx->pc = 0x25374Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253748u;
            // 0x25374c: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253768u;
            goto label_253768;
        }
    }
    ctx->pc = 0x253750u;
    // 0x253750: 0x8e051004  lw          $a1, 0x1004($s0)
    ctx->pc = 0x253750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4100)));
label_253754:
    // 0x253754: 0xc06fb64  jal         func_1BED90
    ctx->pc = 0x253754u;
    SET_GPR_U32(ctx, 31, 0x25375Cu);
    ctx->pc = 0x253758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253754u;
    // 0x253758: 0x26041040  addiu       $a0, $s0, 0x1040 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED90u, 0x253754u, 0x25375Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25375Cu;
label_25375c:
    // 0x25375c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x25375Cu;
    {
        const bool branch_taken_0x25375c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25375Cu;
        // 0x253760: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25375c) {
            ctx->pc = 0x2537B0u;
            goto label_2537b0;
        }
    }
    ctx->pc = 0x253764u;
label_253764:
    // 0x253764: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x253764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_253768:
    // 0x253768: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x253768u;
    {
        const bool branch_taken_0x253768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x253768) {
            ctx->pc = 0x25376Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253768u;
            // 0x25376c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2537B0u;
            goto label_2537b0;
        }
    }
    ctx->pc = 0x253770u;
    // 0x253770: 0xc095368  jal         func_254DA0
    ctx->pc = 0x253770u;
    SET_GPR_U32(ctx, 31, 0x253778u);
    ctx->pc = 0x253774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253770u;
    // 0x253774: 0x8e041004  lw          $a0, 0x1004($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254DA0u, 0x253770u, 0x253778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253778u;
label_253778:
    // 0x253778: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x253778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25377c: 0xc06fb38  jal         func_1BECE0
    ctx->pc = 0x25377Cu;
    SET_GPR_U32(ctx, 31, 0x253784u);
    ctx->pc = 0x253780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25377Cu;
    // 0x253780: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BECE0u, 0x25377Cu, 0x253784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253784u;
label_253784:
    // 0x253784: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x253784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x253788: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x253788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25378c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x25378cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x253790: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x253790u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x253794: 0xfa011090  sqc2        $vf1, 0x1090($s0)
    ctx->pc = 0x253794u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x253798: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x253798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x25379c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25379cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2537a0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2537a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2537a4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2537a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2537a8: 0xfa0110a0  sqc2        $vf1, 0x10A0($s0)
    ctx->pc = 0x2537a8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4256), _mm_castps_si128(ctx->vu0_vf[1]));
label_2537ac:
    // 0x2537ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2537acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2537b0:
    // 0x2537b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2537b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2537b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2537b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2537b8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2537b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2537bc: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2537bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2537c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2537C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2537C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2537C0u;
        // 0x2537c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2537C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2537C8u;
}
