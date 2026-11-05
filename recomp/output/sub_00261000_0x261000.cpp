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

// Function: sub_00261000
// Address: 0x261000 - 0x261260
void sub_00261000_0x261000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261000_0x261000");
#endif

    switch (ctx->pc) {
        case 0x261038u: goto label_261038;
        case 0x261054u: goto label_261054;
        case 0x26106cu: goto label_26106c;
        case 0x261088u: goto label_261088;
        case 0x261098u: goto label_261098;
        case 0x2610fcu: goto label_2610fc;
        case 0x26110cu: goto label_26110c;
        case 0x261118u: goto label_261118;
        case 0x261124u: goto label_261124;
        case 0x261134u: goto label_261134;
        case 0x261154u: goto label_261154;
        case 0x261164u: goto label_261164;
        case 0x2611a4u: goto label_2611a4;
        case 0x2611b4u: goto label_2611b4;
        case 0x2611bcu: goto label_2611bc;
        case 0x2611ccu: goto label_2611cc;
        case 0x2611dcu: goto label_2611dc;
        case 0x261220u: goto label_261220;
        case 0x26122cu: goto label_26122c;
        default: break;
    }

    ctx->pc = 0x261000u;

    // 0x261000: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x261000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x261004: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x261004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x261008: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x261008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x26100c: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x26100cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x261010: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x261010u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261014: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x261014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x261018: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x261018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x26101c: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x26101cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x261020: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x261020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x261024: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x261024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x261028: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x261028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x26102c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x26102cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x261030: 0xc097f2a  jal         func_25FCA8
    ctx->pc = 0x261030u;
    SET_GPR_U32(ctx, 31, 0x261038u);
    ctx->pc = 0x261034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261030u;
    // 0x261034: 0x8e7400b8  lw          $s4, 0xB8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCA8u, 0x261030u, 0x261038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261038u;
label_261038:
    // 0x261038: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x261038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x26103c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26103cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x261040: 0x24639848  addiu       $v1, $v1, -0x67B8
    ctx->pc = 0x261040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940744));
    // 0x261044: 0x8e640234  lw          $a0, 0x234($s3)
    ctx->pc = 0x261044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 564)));
    // 0x261048: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x261048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26104c: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x26104Cu;
    SET_GPR_U32(ctx, 31, 0x261054u);
    ctx->pc = 0x261050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26104Cu;
    // 0x261050: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x26104Cu, 0x261054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261054u;
label_261054:
    // 0x261054: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x261054u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261058: 0x8e62025c  lw          $v0, 0x25C($s3)
    ctx->pc = 0x261058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 604)));
    // 0x26105c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26105Cu;
    {
        const bool branch_taken_0x26105c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26105c) {
            ctx->pc = 0x26106Cu;
            goto label_26106c;
        }
    }
    ctx->pc = 0x261064u;
    // 0x261064: 0xc098514  jal         func_261450
    ctx->pc = 0x261064u;
    SET_GPR_U32(ctx, 31, 0x26106Cu);
    ctx->pc = 0x261068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261064u;
    // 0x261068: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261450u, 0x261064u, 0x26106Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26106Cu;
label_26106c:
    // 0x26106c: 0x12400070  beqz        $s2, . + 4 + (0x70 << 2)
    ctx->pc = 0x26106Cu;
    {
        const bool branch_taken_0x26106c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x261070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26106Cu;
        // 0x261070: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26106c) {
            ctx->pc = 0x261230u;
            goto label_261230;
        }
    }
    ctx->pc = 0x261074u;
    // 0x261074: 0x8e620104  lw          $v0, 0x104($s3)
    ctx->pc = 0x261074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
    // 0x261078: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x261078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26107c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x26107cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x261080: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x261080u;
    SET_GPR_U32(ctx, 31, 0x261088u);
    ctx->pc = 0x261084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261080u;
    // 0x261084: 0x26360040  addiu       $s6, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x261080u, 0x261088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261088u;
label_261088:
    // 0x261088: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x261088u;
    {
        const bool branch_taken_0x261088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261088u;
        // 0x26108c: 0x26550080  addiu       $s5, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261088) {
            ctx->pc = 0x26109Cu;
            goto label_26109c;
        }
    }
    ctx->pc = 0x261090u;
    // 0x261090: 0xc0c4900  jal         func_312400
    ctx->pc = 0x261090u;
    SET_GPR_U32(ctx, 31, 0x261098u);
    ctx->pc = 0x261094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261090u;
    // 0x261094: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x261090u, 0x261098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261098u;
label_261098:
    // 0x261098: 0x26550080  addiu       $s5, $s2, 0x80
    ctx->pc = 0x261098u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_26109c:
    // 0x26109c: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x26109cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2610a0: 0xfa210040  sqc2        $vf1, 0x40($s1)
    ctx->pc = 0x2610a0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2610a4: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x2610a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x2610a8: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x2610a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x2610ac: 0x26420090  addiu       $v0, $s2, 0x90
    ctx->pc = 0x2610acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x2610b0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2610b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2610b4: 0xfa210050  sqc2        $vf1, 0x50($s1)
    ctx->pc = 0x2610b4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2610b8: 0x263e0060  addiu       $fp, $s1, 0x60
    ctx->pc = 0x2610b8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x2610bc: 0x264200a0  addiu       $v0, $s2, 0xA0
    ctx->pc = 0x2610bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x2610c0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2610c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2610c4: 0xfa210060  sqc2        $vf1, 0x60($s1)
    ctx->pc = 0x2610c4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2610c8: 0x26370070  addiu       $s7, $s1, 0x70
    ctx->pc = 0x2610c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x2610cc: 0x264200b0  addiu       $v0, $s2, 0xB0
    ctx->pc = 0x2610ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
    // 0x2610d0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2610d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2610d4: 0xfa210070  sqc2        $vf1, 0x70($s1)
    ctx->pc = 0x2610d4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2610d8: 0x8e630254  lw          $v1, 0x254($s3)
    ctx->pc = 0x2610d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 596)));
    // 0x2610dc: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2610DCu;
    {
        const bool branch_taken_0x2610dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2610E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2610DCu;
        // 0x2610e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2610dc) {
            ctx->pc = 0x26115Cu;
            goto label_26115c;
        }
    }
    ctx->pc = 0x2610E4u;
    // 0x2610e4: 0x8e620238  lw          $v0, 0x238($s3)
    ctx->pc = 0x2610e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 568)));
    // 0x2610e8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2610E8u;
    {
        const bool branch_taken_0x2610e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2610ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2610E8u;
        // 0x2610ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2610e8) {
            ctx->pc = 0x26112Cu;
            goto label_26112c;
        }
    }
    ctx->pc = 0x2610F0u;
    // 0x2610f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2610f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2610f4: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x2610F4u;
    SET_GPR_U32(ctx, 31, 0x2610FCu);
    ctx->pc = 0x2610F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2610F4u;
    // 0x2610f8: 0x24500040  addiu       $s0, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x2610F4u, 0x2610FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2610FCu;
label_2610fc:
    // 0x2610fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2610FCu;
    {
        const bool branch_taken_0x2610fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2610FCu;
        // 0x261100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2610fc) {
            ctx->pc = 0x261110u;
            goto label_261110;
        }
    }
    ctx->pc = 0x261104u;
    // 0x261104: 0xc0c4900  jal         func_312400
    ctx->pc = 0x261104u;
    SET_GPR_U32(ctx, 31, 0x26110Cu);
    ctx->pc = 0x261108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261104u;
    // 0x261108: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x261104u, 0x26110Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26110Cu;
label_26110c:
    // 0x26110c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26110cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_261110:
    // 0x261110: 0xc0b1680  jal         func_2C5A00
    ctx->pc = 0x261110u;
    SET_GPR_U32(ctx, 31, 0x261118u);
    ctx->pc = 0x261114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261110u;
    // 0x261114: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5A00u, 0x261110u, 0x261118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261118u;
label_261118:
    // 0x261118: 0x8e620238  lw          $v0, 0x238($s3)
    ctx->pc = 0x261118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 568)));
    // 0x26111c: 0xc0c48da  jal         func_312368
    ctx->pc = 0x26111Cu;
    SET_GPR_U32(ctx, 31, 0x261124u);
    ctx->pc = 0x261120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26111Cu;
    // 0x261120: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x26111Cu, 0x261124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261124u;
label_261124:
    // 0x261124: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x261124u;
    {
        const bool branch_taken_0x261124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261124u;
        // 0x261128: 0x8e620104  lw          $v0, 0x104($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261124) {
            ctx->pc = 0x261224u;
            goto label_261224;
        }
    }
    ctx->pc = 0x26112Cu;
label_26112c:
    // 0x26112c: 0xc08f672  jal         func_23D9C8
    ctx->pc = 0x26112Cu;
    SET_GPR_U32(ctx, 31, 0x261134u);
    ctx->pc = 0x261130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26112Cu;
    // 0x261130: 0x8e640234  lw          $a0, 0x234($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 564)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x26112Cu, 0x261134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261134u;
label_261134:
    // 0x261134: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x261134u;
    {
        const bool branch_taken_0x261134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261134u;
        // 0x261138: 0x26860290  addiu       $a2, $s4, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261134) {
            ctx->pc = 0x261144u;
            goto label_261144;
        }
    }
    ctx->pc = 0x26113Cu;
    // 0x26113c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26113Cu;
    {
        const bool branch_taken_0x26113c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26113Cu;
        // 0x261140: 0x26850280  addiu       $a1, $s4, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26113c) {
            ctx->pc = 0x26114Cu;
            goto label_26114c;
        }
    }
    ctx->pc = 0x261144u;
label_261144:
    // 0x261144: 0x26860270  addiu       $a2, $s4, 0x270
    ctx->pc = 0x261144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 624));
    // 0x261148: 0x26850260  addiu       $a1, $s4, 0x260
    ctx->pc = 0x261148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 608));
label_26114c:
    // 0x26114c: 0xc0c32a0  jal         func_30CA80
    ctx->pc = 0x26114Cu;
    SET_GPR_U32(ctx, 31, 0x261154u);
    ctx->pc = 0x261150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26114Cu;
    // 0x261150: 0x8e640254  lw          $a0, 0x254($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 596)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CA80u, 0x26114Cu, 0x261154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261154u;
label_261154:
    // 0x261154: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x261154u;
    {
        const bool branch_taken_0x261154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261154u;
        // 0x261158: 0x8e620104  lw          $v0, 0x104($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261154) {
            ctx->pc = 0x261224u;
            goto label_261224;
        }
    }
    ctx->pc = 0x26115Cu;
label_26115c:
    // 0x26115c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x26115Cu;
    SET_GPR_U32(ctx, 31, 0x261164u);
    ctx->pc = 0x261160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26115Cu;
    // 0x261160: 0x26900260  addiu       $s0, $s4, 0x260 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x26115Cu, 0x261164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261164u;
label_261164:
    // 0x261164: 0x26820270  addiu       $v0, $s4, 0x270
    ctx->pc = 0x261164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 624));
    // 0x261168: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x261168u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26116c: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x26116cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x261170: 0xdac30010  lqc2        $vf3, 0x10($s6)
    ctx->pc = 0x261170u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x261174: 0xdac40020  lqc2        $vf4, 0x20($s6)
    ctx->pc = 0x261174u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x261178: 0xdac50030  lqc2        $vf5, 0x30($s6)
    ctx->pc = 0x261178u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x26117c: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x26117cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x261180: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x261180u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x261184: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x261184u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x261188: 0xfba50000  sqc2        $vf5, 0x0($sp)
    ctx->pc = 0x261188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x26118c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x26118cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x261190: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x261190u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x261194: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x261194u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x261198: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x261198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26119c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x26119Cu;
    SET_GPR_U32(ctx, 31, 0x2611A4u);
    ctx->pc = 0x2611A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26119Cu;
    // 0x2611a0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x26119Cu, 0x2611A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2611A4u;
label_2611a4:
    // 0x2611a4: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x2611a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2611a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2611a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2611ac: 0xc0b1972  jal         func_2C65C8
    ctx->pc = 0x2611ACu;
    SET_GPR_U32(ctx, 31, 0x2611B4u);
    ctx->pc = 0x2611B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2611ACu;
    // 0x2611b0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C65C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C65C8u, 0x2611ACu, 0x2611B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2611B4u;
label_2611b4:
    // 0x2611b4: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x2611B4u;
    SET_GPR_U32(ctx, 31, 0x2611BCu);
    ctx->pc = 0x2611B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2611B4u;
    // 0x2611b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x2611B4u, 0x2611BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2611BCu;
label_2611bc:
    // 0x2611bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2611BCu;
    {
        const bool branch_taken_0x2611bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2611C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2611BCu;
        // 0x2611c0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2611bc) {
            ctx->pc = 0x2611D0u;
            goto label_2611d0;
        }
    }
    ctx->pc = 0x2611C4u;
    // 0x2611c4: 0xc0c4900  jal         func_312400
    ctx->pc = 0x2611C4u;
    SET_GPR_U32(ctx, 31, 0x2611CCu);
    ctx->pc = 0x2611C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2611C4u;
    // 0x2611c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x2611C4u, 0x2611CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2611CCu;
label_2611cc:
    // 0x2611cc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2611ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2611d0:
    // 0x2611d0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2611d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2611d4: 0xc0b163c  jal         func_2C58F0
    ctx->pc = 0x2611D4u;
    SET_GPR_U32(ctx, 31, 0x2611DCu);
    ctx->pc = 0x2611D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2611D4u;
    // 0x2611d8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C58F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C58F0u, 0x2611D4u, 0x2611DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2611DCu;
label_2611dc:
    // 0x2611dc: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2611dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2611e0: 0xfa210070  sqc2        $vf1, 0x70($s1)
    ctx->pc = 0x2611e0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2611e4: 0x8e640238  lw          $a0, 0x238($s3)
    ctx->pc = 0x2611e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 568)));
    // 0x2611e8: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2611E8u;
    {
        const bool branch_taken_0x2611e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2611e8) {
            ctx->pc = 0x2611ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2611E8u;
            // 0x2611ec: 0x8e620104  lw          $v0, 0x104($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261224u;
            goto label_261224;
        }
    }
    ctx->pc = 0x2611F0u;
    // 0x2611f0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2611f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2611f4: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x2611f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2611f8: 0xf8810040  sqc2        $vf1, 0x40($a0)
    ctx->pc = 0x2611f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2611fc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2611fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x261200: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x261200u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x261204: 0xf8810050  sqc2        $vf1, 0x50($a0)
    ctx->pc = 0x261204u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x261208: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x261208u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x26120c: 0xf8810060  sqc2        $vf1, 0x60($a0)
    ctx->pc = 0x26120cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x261210: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x261210u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x261214: 0xf8810070  sqc2        $vf1, 0x70($a0)
    ctx->pc = 0x261214u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x261218: 0xc0c48da  jal         func_312368
    ctx->pc = 0x261218u;
    SET_GPR_U32(ctx, 31, 0x261220u);
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x261218u, 0x261220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261220u;
label_261220:
    // 0x261220: 0x8e620104  lw          $v0, 0x104($s3)
    ctx->pc = 0x261220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_261224:
    // 0x261224: 0xc0c48da  jal         func_312368
    ctx->pc = 0x261224u;
    SET_GPR_U32(ctx, 31, 0x26122Cu);
    ctx->pc = 0x261228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261224u;
    // 0x261228: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x261224u, 0x26122Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26122Cu;
label_26122c:
    // 0x26122c: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x26122cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_261230:
    // 0x261230: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x261230u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x261234: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x261234u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x261238: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x261238u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x26123c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x26123cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x261240: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x261240u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x261244: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x261244u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x261248: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x261248u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x26124c: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x26124cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x261250: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x261250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x261254: 0x3e00008  jr          $ra
    ctx->pc = 0x261254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261254u;
        // 0x261258: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26125Cu;
    // 0x26125c: 0x0  nop
    ctx->pc = 0x26125cu;
    // NOP
    ctx->pc = 0x261260u;
}
