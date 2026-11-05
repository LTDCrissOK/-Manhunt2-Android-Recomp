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

// Function: sub_001302A8
// Address: 0x1302a8 - 0x130420
void sub_001302A8_0x1302a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001302A8_0x1302a8");
#endif

    switch (ctx->pc) {
        case 0x1302f8u: goto label_1302f8;
        case 0x130304u: goto label_130304;
        case 0x130310u: goto label_130310;
        case 0x13031cu: goto label_13031c;
        case 0x130350u: goto label_130350;
        case 0x130364u: goto label_130364;
        case 0x130378u: goto label_130378;
        case 0x1303b4u: goto label_1303b4;
        case 0x1303c4u: goto label_1303c4;
        case 0x1303ccu: goto label_1303cc;
        case 0x1303e0u: goto label_1303e0;
        case 0x1303ecu: goto label_1303ec;
        default: break;
    }

    ctx->pc = 0x1302a8u;

    // 0x1302a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1302a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1302ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1302acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1302b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1302b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1302b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1302b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1302b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1302b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1302bc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1302bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1302c0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1302c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1302c4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1302c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1302c8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1302c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1302cc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1302ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1302d0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1302d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1302d4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1302d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1302d8: 0x8c430258  lw          $v1, 0x258($v0)
    ctx->pc = 0x1302d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
    // 0x1302dc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1302DCu;
    {
        const bool branch_taken_0x1302dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1302E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1302DCu;
        // 0x1302e0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1302dc) {
            ctx->pc = 0x1302ECu;
            goto label_1302ec;
        }
    }
    ctx->pc = 0x1302E4u;
    // 0x1302e4: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1302E4u;
    {
        const bool branch_taken_0x1302e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1302E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1302E4u;
        // 0x1302e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1302e4) {
            ctx->pc = 0x1303F0u;
            goto label_1303f0;
        }
    }
    ctx->pc = 0x1302ECu;
label_1302ec:
    // 0x1302ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1302ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1302f0: 0xc046002  jal         func_118008
    ctx->pc = 0x1302F0u;
    SET_GPR_U32(ctx, 31, 0x1302F8u);
    ctx->pc = 0x1302F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1302F0u;
    // 0x1302f4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118008u, 0x1302F0u, 0x1302F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1302F8u;
label_1302f8:
    // 0x1302f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1302f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1302fc: 0xc046086  jal         func_118218
    ctx->pc = 0x1302FCu;
    SET_GPR_U32(ctx, 31, 0x130304u);
    ctx->pc = 0x130300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1302FCu;
    // 0x130300: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118218u, 0x1302FCu, 0x130304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130304u;
label_130304:
    // 0x130304: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x130304u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130308: 0xc0462b0  jal         func_118AC0
    ctx->pc = 0x130308u;
    SET_GPR_U32(ctx, 31, 0x130310u);
    ctx->pc = 0x13030Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130308u;
    // 0x13030c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118AC0u, 0x130308u, 0x130310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130310u;
label_130310:
    // 0x130310: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x130310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x130314: 0xc043920  jal         func_10E480
    ctx->pc = 0x130314u;
    SET_GPR_U32(ctx, 31, 0x13031Cu);
    ctx->pc = 0x130318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130314u;
    // 0x130318: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E480u, 0x130314u, 0x13031Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13031Cu;
label_13031c:
    // 0x13031c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13031cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130320: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x130320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x130324: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x130324u;
    {
        const bool branch_taken_0x130324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x130324) {
            ctx->pc = 0x130328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130324u;
            // 0x130328: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13033Cu;
            goto label_13033c;
        }
    }
    ctx->pc = 0x13032Cu;
    // 0x13032c: 0x8e0301a0  lw          $v1, 0x1A0($s0)
    ctx->pc = 0x13032cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x130330: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x130330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x130334: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x130334u;
    {
        const bool branch_taken_0x130334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x130334) {
            ctx->pc = 0x130338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130334u;
            // 0x130338: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13033Cu;
            goto label_13033c;
        }
    }
    ctx->pc = 0x13033Cu;
label_13033c:
    // 0x13033c: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x13033Cu;
    {
        const bool branch_taken_0x13033c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x130340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13033Cu;
        // 0x130340: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13033c) {
            ctx->pc = 0x1303D0u;
            goto label_1303d0;
        }
    }
    ctx->pc = 0x130344u;
    // 0x130344: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x130344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130348: 0xc04c5ca  jal         func_131728
    ctx->pc = 0x130348u;
    SET_GPR_U32(ctx, 31, 0x130350u);
    ctx->pc = 0x13034Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130348u;
    // 0x13034c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131728u, 0x130348u, 0x130350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130350u;
label_130350:
    // 0x130350: 0x12c00006  beqz        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x130350u;
    {
        const bool branch_taken_0x130350 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x130354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130350u;
        // 0x130354: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130350) {
            ctx->pc = 0x13036Cu;
            goto label_13036c;
        }
    }
    ctx->pc = 0x130358u;
    // 0x130358: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x130358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13035c: 0xc094e8a  jal         func_253A28
    ctx->pc = 0x13035Cu;
    SET_GPR_U32(ctx, 31, 0x130364u);
    ctx->pc = 0x130360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13035Cu;
    // 0x130360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253A28u, 0x13035Cu, 0x130364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130364u;
label_130364:
    // 0x130364: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x130364u;
    {
        const bool branch_taken_0x130364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130364) {
            ctx->pc = 0x130378u;
            goto label_130378;
        }
    }
    ctx->pc = 0x13036Cu;
label_13036c:
    // 0x13036c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x13036cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130370: 0xc094e44  jal         func_253910
    ctx->pc = 0x130370u;
    SET_GPR_U32(ctx, 31, 0x130378u);
    ctx->pc = 0x130374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130370u;
    // 0x130374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253910u, 0x130370u, 0x130378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130378u;
label_130378:
    // 0x130378: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x130378u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13037c: 0x0  nop
    ctx->pc = 0x13037cu;
    // NOP
    // 0x130380: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x130380u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130384: 0x0  nop
    ctx->pc = 0x130384u;
    // NOP
    // 0x130388: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x130388u;
    {
        const bool branch_taken_0x130388 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x130388) {
            ctx->pc = 0x1303C4u;
            goto label_1303c4;
        }
    }
    ctx->pc = 0x130390u;
    // 0x130390: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x130390u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130394: 0x0  nop
    ctx->pc = 0x130394u;
    // NOP
    // 0x130398: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x130398u;
    {
        const bool branch_taken_0x130398 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13039Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130398u;
        // 0x13039c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x130398) {
            ctx->pc = 0x1303BCu;
            goto label_1303bc;
        }
    }
    ctx->pc = 0x1303A0u;
    // 0x1303a0: 0x8e040fec  lw          $a0, 0xFEC($s0)
    ctx->pc = 0x1303a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4076)));
    // 0x1303a4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1303A4u;
    {
        const bool branch_taken_0x1303a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1303a4) {
            ctx->pc = 0x1303C4u;
            goto label_1303c4;
        }
    }
    ctx->pc = 0x1303ACu;
    // 0x1303ac: 0xc06ee66  jal         func_1BB998
    ctx->pc = 0x1303ACu;
    SET_GPR_U32(ctx, 31, 0x1303B4u);
    ctx->pc = 0x1303B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1303ACu;
    // 0x1303b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB998u, 0x1303ACu, 0x1303B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1303B4u;
label_1303b4:
    // 0x1303b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1303B4u;
    {
        const bool branch_taken_0x1303b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1303b4) {
            ctx->pc = 0x1303C4u;
            goto label_1303c4;
        }
    }
    ctx->pc = 0x1303BCu;
label_1303bc:
    // 0x1303bc: 0xc09520a  jal         func_254828
    ctx->pc = 0x1303BCu;
    SET_GPR_U32(ctx, 31, 0x1303C4u);
    ctx->pc = 0x1303C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1303BCu;
    // 0x1303c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254828u, 0x1303BCu, 0x1303C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1303C4u;
label_1303c4:
    // 0x1303c4: 0xc095216  jal         func_254858
    ctx->pc = 0x1303C4u;
    SET_GPR_U32(ctx, 31, 0x1303CCu);
    ctx->pc = 0x1303C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1303C4u;
    // 0x1303c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254858u, 0x1303C4u, 0x1303CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1303CCu;
label_1303cc:
    // 0x1303cc: 0x2a80a  movz        $s5, $zero, $v0
    ctx->pc = 0x1303ccu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_1303d0:
    // 0x1303d0: 0x56a00007  bnel        $s5, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1303D0u;
    {
        const bool branch_taken_0x1303d0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1303d0) {
            ctx->pc = 0x1303D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1303D0u;
            // 0x1303d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1303F0u;
            goto label_1303f0;
        }
    }
    ctx->pc = 0x1303D8u;
    // 0x1303d8: 0xc04611e  jal         func_118478
    ctx->pc = 0x1303D8u;
    SET_GPR_U32(ctx, 31, 0x1303E0u);
    ctx->pc = 0x1303DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1303D8u;
    // 0x1303dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118478u, 0x1303D8u, 0x1303E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1303E0u;
label_1303e0:
    // 0x1303e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1303e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1303e4: 0xc04c500  jal         func_131400
    ctx->pc = 0x1303E4u;
    SET_GPR_U32(ctx, 31, 0x1303ECu);
    ctx->pc = 0x1303E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1303E4u;
    // 0x1303e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131400u, 0x1303E4u, 0x1303ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1303ECu;
label_1303ec:
    // 0x1303ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1303ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1303f0:
    // 0x1303f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1303f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1303f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1303f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1303f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1303f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1303fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1303fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x130400: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x130400u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130404: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x130404u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x130408: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x130408u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13040c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x13040cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130410: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x130410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x130414: 0x3e00008  jr          $ra
    ctx->pc = 0x130414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130414u;
        // 0x130418: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13041Cu;
    // 0x13041c: 0x0  nop
    ctx->pc = 0x13041cu;
    // NOP
    ctx->pc = 0x130420u;
}
