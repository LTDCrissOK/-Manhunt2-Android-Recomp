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

// Function: sub_00322460
// Address: 0x322460 - 0x3225a8
void sub_00322460_0x322460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322460_0x322460");
#endif

    switch (ctx->pc) {
        case 0x32247cu: goto label_32247c;
        case 0x322484u: goto label_322484;
        case 0x322490u: goto label_322490;
        case 0x322498u: goto label_322498;
        case 0x3224b4u: goto label_3224b4;
        case 0x322518u: goto label_322518;
        case 0x322534u: goto label_322534;
        case 0x32253cu: goto label_32253c;
        case 0x322544u: goto label_322544;
        case 0x32254cu: goto label_32254c;
        case 0x322554u: goto label_322554;
        case 0x322560u: goto label_322560;
        case 0x32256cu: goto label_32256c;
        case 0x322578u: goto label_322578;
        case 0x322580u: goto label_322580;
        case 0x322594u: goto label_322594;
        default: break;
    }

    ctx->pc = 0x322460u;

    // 0x322460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x322460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x322464: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x322464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x322468: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x322468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32246c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32246cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x322470: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x322470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x322474: 0xc0db386  jal         func_36CE18
    ctx->pc = 0x322474u;
    SET_GPR_U32(ctx, 31, 0x32247Cu);
    ctx->pc = 0x322478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322474u;
    // 0x322478: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CE18u, 0x322474u, 0x32247Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32247Cu;
label_32247c:
    // 0x32247c: 0xc0dd198  jal         func_374660
    ctx->pc = 0x32247Cu;
    SET_GPR_U32(ctx, 31, 0x322484u);
    ctx->pc = 0x322480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32247Cu;
    // 0x322480: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374660u, 0x32247Cu, 0x322484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322484u;
label_322484:
    // 0x322484: 0x3c0480ff  lui         $a0, 0x80FF
    ctx->pc = 0x322484u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33023 << 16));
    // 0x322488: 0xc0dd1ee  jal         func_3747B8
    ctx->pc = 0x322488u;
    SET_GPR_U32(ctx, 31, 0x322490u);
    ctx->pc = 0x32248Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322488u;
    // 0x32248c: 0x3484ffff  ori         $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3747B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3747B8u, 0x322488u, 0x322490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322490u;
label_322490:
    // 0x322490: 0xc0e01d8  jal         func_380760
    ctx->pc = 0x322490u;
    SET_GPR_U32(ctx, 31, 0x322498u);
    ctx->pc = 0x380760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380760u, 0x322490u, 0x322498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322498u;
label_322498:
    // 0x322498: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x322498u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x32249c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x32249cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3224a0: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x3224a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3224a4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x3224a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3224a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3224a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3224ac: 0xc0df390  jal         func_37CE40
    ctx->pc = 0x3224ACu;
    SET_GPR_U32(ctx, 31, 0x3224B4u);
    ctx->pc = 0x3224B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3224ACu;
    // 0x3224b0: 0x240800ff  addiu       $t0, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37CE40u, 0x3224ACu, 0x3224B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3224B4u;
label_3224b4:
    // 0x3224b4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3224b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3224b8: 0x8c63bcec  lw          $v1, -0x4314($v1)
    ctx->pc = 0x3224b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBCECu));
    // 0x3224bc: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x3224bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x3224c0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3224c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3224c4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3224C4u;
    {
        const bool branch_taken_0x3224c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3224C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3224C4u;
        // 0x3224c8: 0x24620010  addiu       $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3224c4) {
            ctx->pc = 0x322520u;
            goto label_322520;
        }
    }
    ctx->pc = 0x3224CCu;
    // 0x3224cc: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x3224ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x3224d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3224d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3224d4: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x3224d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3224d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3224d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3224dc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3224dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3224e0: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x3224e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3224e4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3224e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3224e8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3224e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3224ec: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x3224ecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x3224f0: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3224f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3224f4: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x3224f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x3224f8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3224f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3224fc: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3224fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x322500: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x322500u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x322504: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x322504u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x322508: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x322508u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x32250c: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x32250cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x322510: 0xc0df364  jal         func_37CD90
    ctx->pc = 0x322510u;
    SET_GPR_U32(ctx, 31, 0x322518u);
    ctx->pc = 0x322514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322510u;
    // 0x322514: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37CD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37CD90u, 0x322510u, 0x322518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322518u;
label_322518:
    // 0x322518: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x322518u;
    {
        const bool branch_taken_0x322518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322518) {
            ctx->pc = 0x322534u;
            goto label_322534;
        }
    }
    ctx->pc = 0x322520u;
label_322520:
    // 0x322520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322524: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x322524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322528: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x322528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32252c: 0xc0df364  jal         func_37CD90
    ctx->pc = 0x32252Cu;
    SET_GPR_U32(ctx, 31, 0x322534u);
    ctx->pc = 0x322530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32252Cu;
    // 0x322530: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37CD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37CD90u, 0x32252Cu, 0x322534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322534u;
label_322534:
    // 0x322534: 0xc0e01d8  jal         func_380760
    ctx->pc = 0x322534u;
    SET_GPR_U32(ctx, 31, 0x32253Cu);
    ctx->pc = 0x380760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380760u, 0x322534u, 0x32253Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32253Cu;
label_32253c:
    // 0x32253c: 0xc0dd17e  jal         func_3745F8
    ctx->pc = 0x32253Cu;
    SET_GPR_U32(ctx, 31, 0x322544u);
    ctx->pc = 0x322540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32253Cu;
    // 0x322540: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3745F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3745F8u, 0x32253Cu, 0x322544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322544u;
label_322544:
    // 0x322544: 0xc0dd1a2  jal         func_374688
    ctx->pc = 0x322544u;
    SET_GPR_U32(ctx, 31, 0x32254Cu);
    ctx->pc = 0x322548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322544u;
    // 0x322548: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374688u, 0x322544u, 0x32254Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32254Cu;
label_32254c:
    // 0x32254c: 0xc0dd1d4  jal         func_374750
    ctx->pc = 0x32254Cu;
    SET_GPR_U32(ctx, 31, 0x322554u);
    ctx->pc = 0x322550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32254Cu;
    // 0x322550: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374750u, 0x32254Cu, 0x322554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322554u;
label_322554:
    // 0x322554: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x322554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x322558: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x322558u;
    SET_GPR_U32(ctx, 31, 0x322560u);
    ctx->pc = 0x32255Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322558u;
    // 0x32255c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x322558u, 0x322560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322560u;
label_322560:
    // 0x322560: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x322560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x322564: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x322564u;
    SET_GPR_U32(ctx, 31, 0x32256Cu);
    ctx->pc = 0x322568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322564u;
    // 0x322568: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x322564u, 0x32256Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32256Cu;
label_32256c:
    // 0x32256c: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x32256cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
    // 0x322570: 0xc0c6d86  jal         func_31B618
    ctx->pc = 0x322570u;
    SET_GPR_U32(ctx, 31, 0x322578u);
    ctx->pc = 0x322574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322570u;
    // 0x322574: 0x248421e8  addiu       $a0, $a0, 0x21E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B618u, 0x322570u, 0x322578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322578u;
label_322578:
    // 0x322578: 0xc0c8bdc  jal         func_322F70
    ctx->pc = 0x322578u;
    SET_GPR_U32(ctx, 31, 0x322580u);
    ctx->pc = 0x32257Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322578u;
    // 0x32257c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322F70u, 0x322578u, 0x322580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322580u;
label_322580:
    // 0x322580: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x322580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322584: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x322584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x322588: 0x24a52440  addiu       $a1, $a1, 0x2440
    ctx->pc = 0x322588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9280));
    // 0x32258c: 0xc0c9300  jal         func_324C00
    ctx->pc = 0x32258Cu;
    SET_GPR_U32(ctx, 31, 0x322594u);
    ctx->pc = 0x322590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32258Cu;
    // 0x322590: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324C00u, 0x32258Cu, 0x322594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322594u;
label_322594:
    // 0x322594: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x322594u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322598: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x322598u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32259c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32259cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3225a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3225A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3225A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3225A0u;
        // 0x3225a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3225A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3225A8u;
}
