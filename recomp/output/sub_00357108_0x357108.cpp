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

// Function: sub_00357108
// Address: 0x357108 - 0x357340
void sub_00357108_0x357108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357108_0x357108");
#endif

    switch (ctx->pc) {
        case 0x357138u: goto label_357138;
        case 0x357150u: goto label_357150;
        case 0x35717cu: goto label_35717c;
        case 0x357184u: goto label_357184;
        case 0x357190u: goto label_357190;
        case 0x3571a0u: goto label_3571a0;
        case 0x3571b4u: goto label_3571b4;
        case 0x3571c4u: goto label_3571c4;
        case 0x3571f0u: goto label_3571f0;
        case 0x357204u: goto label_357204;
        case 0x35721cu: goto label_35721c;
        case 0x357248u: goto label_357248;
        case 0x357254u: goto label_357254;
        case 0x357264u: goto label_357264;
        case 0x357278u: goto label_357278;
        case 0x357298u: goto label_357298;
        case 0x3572c0u: goto label_3572c0;
        case 0x3572d0u: goto label_3572d0;
        case 0x3572e0u: goto label_3572e0;
        case 0x3572f4u: goto label_3572f4;
        case 0x357310u: goto label_357310;
        default: break;
    }

    ctx->pc = 0x357108u;

    // 0x357108: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x357108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x35710c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x35710cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x357110: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x357110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x357114: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x357114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x357118: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x357118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x35711c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x35711cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x357120: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x357120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x357124: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x357124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x357128: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x357128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x35712c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x35712cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x357130: 0xc0d5c32  jal         func_3570C8
    ctx->pc = 0x357130u;
    SET_GPR_U32(ctx, 31, 0x357138u);
    ctx->pc = 0x357134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357130u;
    // 0x357134: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3570C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3570C8u, 0x357130u, 0x357138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357138u;
label_357138:
    // 0x357138: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x357138u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35713c: 0x8ef6000c  lw          $s6, 0xC($s7)
    ctx->pc = 0x35713cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x357140: 0x12c00074  beqz        $s6, . + 4 + (0x74 << 2)
    ctx->pc = 0x357140u;
    {
        const bool branch_taken_0x357140 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x357144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357140u;
        // 0x357144: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357140) {
            ctx->pc = 0x357314u;
            goto label_357314;
        }
    }
    ctx->pc = 0x357148u;
    // 0x357148: 0xc081d36  jal         func_2074D8
    ctx->pc = 0x357148u;
    SET_GPR_U32(ctx, 31, 0x357150u);
    ctx->pc = 0x35714Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357148u;
    // 0x35714c: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x357148u, 0x357150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357150u;
label_357150:
    // 0x357150: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x357150u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357154: 0x37a40008  ori         $a0, $sp, 0x8
    ctx->pc = 0x357154u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x357158: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x357158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x35715c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35715cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357160: 0x24496ad8  addiu       $t1, $v0, 0x6AD8
    ctx->pc = 0x357160u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 27352));
    // 0x357164: 0x69230007  ldl         $v1, 0x7($t1)
    ctx->pc = 0x357164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x357168: 0x6d230000  ldr         $v1, 0x0($t1)
    ctx->pc = 0x357168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x35716c: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x35716cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x357170: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x357170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x357174: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x357174u;
    SET_GPR_U32(ctx, 31, 0x35717Cu);
    ctx->pc = 0x357178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357174u;
    // 0x357178: 0x24060038  addiu       $a2, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x357174u, 0x35717Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35717Cu;
label_35717c:
    // 0x35717c: 0xc0d5c30  jal         func_3570C0
    ctx->pc = 0x35717Cu;
    SET_GPR_U32(ctx, 31, 0x357184u);
    ctx->pc = 0x357180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35717Cu;
    // 0x357180: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3570C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3570C0u, 0x35717Cu, 0x357184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357184u;
label_357184:
    // 0x357184: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x357184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357188: 0xc082452  jal         func_209148
    ctx->pc = 0x357188u;
    SET_GPR_U32(ctx, 31, 0x357190u);
    ctx->pc = 0x35718Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357188u;
    // 0x35718c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209148u, 0x357188u, 0x357190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357190u;
label_357190:
    // 0x357190: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x357190u;
    {
        const bool branch_taken_0x357190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x357194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357190u;
        // 0x357194: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357190) {
            ctx->pc = 0x3571BCu;
            goto label_3571bc;
        }
    }
    ctx->pc = 0x357198u;
    // 0x357198: 0xc081a86  jal         func_206A18
    ctx->pc = 0x357198u;
    SET_GPR_U32(ctx, 31, 0x3571A0u);
    ctx->pc = 0x35719Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357198u;
    // 0x35719c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206A18u, 0x357198u, 0x3571A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3571A0u;
label_3571a0:
    // 0x3571a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3571a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3571a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3571a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3571a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3571a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3571ac: 0xc0efd60  jal         func_3BF580
    ctx->pc = 0x3571ACu;
    SET_GPR_U32(ctx, 31, 0x3571B4u);
    ctx->pc = 0x3571B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3571ACu;
    // 0x3571b0: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF580u, 0x3571ACu, 0x3571B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3571B4u;
label_3571b4:
    // 0x3571b4: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x3571B4u;
    {
        const bool branch_taken_0x3571b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3571B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3571B4u;
        // 0x3571b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3571b4) {
            ctx->pc = 0x35727Cu;
            goto label_35727c;
        }
    }
    ctx->pc = 0x3571BCu;
label_3571bc:
    // 0x3571bc: 0xc0d5c30  jal         func_3570C0
    ctx->pc = 0x3571BCu;
    SET_GPR_U32(ctx, 31, 0x3571C4u);
    ctx->pc = 0x3571C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3571BCu;
    // 0x3571c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3570C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3570C0u, 0x3571BCu, 0x3571C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3571C4u;
label_3571c4:
    // 0x3571c4: 0x944302b8  lhu         $v1, 0x2B8($v0)
    ctx->pc = 0x3571c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 696)));
    // 0x3571c8: 0x2475ffd9  addiu       $s5, $v1, -0x27
    ctx->pc = 0x3571c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967257));
    // 0x3571cc: 0x2752021  addu        $a0, $s3, $s5
    ctx->pc = 0x3571ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x3571d0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3571d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3571d4: 0x90833343  lbu         $v1, 0x3343($a0)
    ctx->pc = 0x3571d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13123)));
    // 0x3571d8: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x3571D8u;
    {
        const bool branch_taken_0x3571d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3571DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3571D8u;
        // 0x3571dc: 0x90423308  lbu         $v0, 0x3308($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3571d8) {
            ctx->pc = 0x35726Cu;
            goto label_35726c;
        }
    }
    ctx->pc = 0x3571E0u;
    // 0x3571e0: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3571E0u;
    {
        const bool branch_taken_0x3571e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3571E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3571E0u;
        // 0x3571e4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3571e0) {
            ctx->pc = 0x35724Cu;
            goto label_35724c;
        }
    }
    ctx->pc = 0x3571E8u;
    // 0x3571e8: 0xc0d5c30  jal         func_3570C0
    ctx->pc = 0x3571E8u;
    SET_GPR_U32(ctx, 31, 0x3571F0u);
    ctx->pc = 0x3571ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3571E8u;
    // 0x3571ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3570C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3570C0u, 0x3571E8u, 0x3571F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3571F0u;
label_3571f0:
    // 0x3571f0: 0x8c4300b8  lw          $v1, 0xB8($v0)
    ctx->pc = 0x3571f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x3571f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3571f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3571f8: 0x8c7401a4  lw          $s4, 0x1A4($v1)
    ctx->pc = 0x3571f8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 420)));
    // 0x3571fc: 0xc08219a  jal         func_208668
    ctx->pc = 0x3571FCu;
    SET_GPR_U32(ctx, 31, 0x357204u);
    ctx->pc = 0x357200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3571FCu;
    // 0x357200: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208668u, 0x3571FCu, 0x357204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357204u;
label_357204:
    // 0x357204: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x357204u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357208: 0x1a20000f  blez        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x357208u;
    {
        const bool branch_taken_0x357208 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x35720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357208u;
        // 0x35720c: 0x3c100047  lui         $s0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357208) {
            ctx->pc = 0x357248u;
            goto label_357248;
        }
    }
    ctx->pc = 0x357210u;
    // 0x357210: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x357210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357214: 0xc0d5c30  jal         func_3570C0
    ctx->pc = 0x357214u;
    SET_GPR_U32(ctx, 31, 0x35721Cu);
    ctx->pc = 0x357218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357214u;
    // 0x357218: 0x26106ae0  addiu       $s0, $s0, 0x6AE0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3570C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3570C0u, 0x357214u, 0x35721Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35721Cu;
label_35721c:
    // 0x35721c: 0x8c430478  lw          $v1, 0x478($v0)
    ctx->pc = 0x35721cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1144)));
    // 0x357220: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x357220u;
    {
        const bool branch_taken_0x357220 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x357220) {
            ctx->pc = 0x357224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357220u;
            // 0x357224: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x357228u;
            goto label_357228;
        }
    }
    ctx->pc = 0x357228u;
label_357228:
    // 0x357228: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x357228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35722c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x35722cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357230: 0x71001b  divu        $zero, $v1, $s1
    ctx->pc = 0x357230u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x357234: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x357234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357238: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x357238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x35723c: 0x4010  mfhi        $t0
    ctx->pc = 0x35723cu;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x357240: 0xc0efed0  jal         func_3BFB40
    ctx->pc = 0x357240u;
    SET_GPR_U32(ctx, 31, 0x357248u);
    ctx->pc = 0x357244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357240u;
    // 0x357244: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFB40u, 0x357240u, 0x357248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357248u;
label_357248:
    // 0x357248: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x357248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_35724c:
    // 0x35724c: 0xc08217a  jal         func_2085E8
    ctx->pc = 0x35724Cu;
    SET_GPR_U32(ctx, 31, 0x357254u);
    ctx->pc = 0x357250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35724Cu;
    // 0x357250: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E8u, 0x35724Cu, 0x357254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357254u;
label_357254:
    // 0x357254: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x357254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357258: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x357258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35725c: 0xc082156  jal         func_208558
    ctx->pc = 0x35725Cu;
    SET_GPR_U32(ctx, 31, 0x357264u);
    ctx->pc = 0x357260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35725Cu;
    // 0x357260: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208558u, 0x35725Cu, 0x357264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357264u;
label_357264:
    // 0x357264: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x357264u;
    {
        const bool branch_taken_0x357264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357264u;
        // 0x357268: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357264) {
            ctx->pc = 0x357278u;
            goto label_357278;
        }
    }
    ctx->pc = 0x35726Cu;
label_35726c:
    // 0x35726c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x35726cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357270: 0xc08217a  jal         func_2085E8
    ctx->pc = 0x357270u;
    SET_GPR_U32(ctx, 31, 0x357278u);
    ctx->pc = 0x357274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357270u;
    // 0x357274: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E8u, 0x357270u, 0x357278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357278u;
label_357278:
    // 0x357278: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x357278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_35727c:
    // 0x35727c: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x35727Cu;
    {
        const bool branch_taken_0x35727c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x357280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35727Cu;
        // 0x357280: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35727c) {
            ctx->pc = 0x3572ACu;
            goto label_3572ac;
        }
    }
    ctx->pc = 0x357284u;
    // 0x357284: 0x26a70001  addiu       $a3, $s5, 0x1
    ctx->pc = 0x357284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x357288: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x357288u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35728c: 0x26450008  addiu       $a1, $s2, 0x8
    ctx->pc = 0x35728cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x357290: 0xc0823ae  jal         func_208EB8
    ctx->pc = 0x357290u;
    SET_GPR_U32(ctx, 31, 0x357298u);
    ctx->pc = 0x357294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357290u;
    // 0x357294: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208EB8u, 0x357290u, 0x357298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357298u;
label_357298:
    // 0x357298: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x357298u;
    {
        const bool branch_taken_0x357298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357298u;
        // 0x35729c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357298) {
            ctx->pc = 0x3572ACu;
            goto label_3572ac;
        }
    }
    ctx->pc = 0x3572A0u;
    // 0x3572a0: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x3572a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x3572a4: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x3572a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x3572a8: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x3572a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_3572ac:
    // 0x3572ac: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3572acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3572b0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3572B0u;
    {
        const bool branch_taken_0x3572b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3572B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3572B0u;
        // 0x3572b4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3572b0) {
            ctx->pc = 0x357314u;
            goto label_357314;
        }
    }
    ctx->pc = 0x3572B8u;
    // 0x3572b8: 0xc0d5e2e  jal         func_3578B8
    ctx->pc = 0x3572B8u;
    SET_GPR_U32(ctx, 31, 0x3572C0u);
    ctx->pc = 0x3572BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3572B8u;
    // 0x3572bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3578B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3578B8u, 0x3572B8u, 0x3572C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3572C0u;
label_3572c0:
    // 0x3572c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3572C0u;
    {
        const bool branch_taken_0x3572c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3572C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3572C0u;
        // 0x3572c4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3572c0) {
            ctx->pc = 0x3572D8u;
            goto label_3572d8;
        }
    }
    ctx->pc = 0x3572C8u;
    // 0x3572c8: 0xc0d5cd0  jal         func_357340
    ctx->pc = 0x3572C8u;
    SET_GPR_U32(ctx, 31, 0x3572D0u);
    ctx->pc = 0x3572CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3572C8u;
    // 0x3572cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357340u, 0x3572C8u, 0x3572D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3572D0u;
label_3572d0:
    // 0x3572d0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3572D0u;
    {
        const bool branch_taken_0x3572d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3572D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3572D0u;
        // 0x3572d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3572d0) {
            ctx->pc = 0x357314u;
            goto label_357314;
        }
    }
    ctx->pc = 0x3572D8u;
label_3572d8:
    // 0x3572d8: 0xc0d5e98  jal         func_357A60
    ctx->pc = 0x3572D8u;
    SET_GPR_U32(ctx, 31, 0x3572E0u);
    ctx->pc = 0x3572DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3572D8u;
    // 0x3572dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357A60u, 0x3572D8u, 0x3572E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3572E0u;
label_3572e0:
    // 0x3572e0: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x3572e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x3572e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3572e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3572e8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3572e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x3572ec: 0xc0d5e2a  jal         func_3578A8
    ctx->pc = 0x3572ECu;
    SET_GPR_U32(ctx, 31, 0x3572F4u);
    ctx->pc = 0x3572F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3572ECu;
    // 0x3572f0: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3578A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3578A8u, 0x3572ECu, 0x3572F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3572F4u;
label_3572f4:
    // 0x3572f4: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x3572f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x3572f8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3572f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3572fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3572fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x357300: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x357300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x357304: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x357304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x357308: 0xc07421a  jal         func_1D0868
    ctx->pc = 0x357308u;
    SET_GPR_U32(ctx, 31, 0x357310u);
    ctx->pc = 0x35730Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357308u;
    // 0x35730c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0868u, 0x357308u, 0x357310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357310u;
label_357310:
    // 0x357310: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x357310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_357314:
    // 0x357314: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x357314u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x357318: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x357318u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35731c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x35731cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x357320: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x357320u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x357324: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x357324u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x357328: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x357328u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x35732c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x35732cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x357330: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x357330u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x357334: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x357334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x357338: 0x3e00008  jr          $ra
    ctx->pc = 0x357338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35733Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357338u;
        // 0x35733c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357340u;
}
