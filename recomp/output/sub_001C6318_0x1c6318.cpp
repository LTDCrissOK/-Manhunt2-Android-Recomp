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

// Function: sub_001C6318
// Address: 0x1c6318 - 0x1c64b8
void sub_001C6318_0x1c6318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6318_0x1c6318");
#endif

    switch (ctx->pc) {
        case 0x1c6360u: goto label_1c6360;
        case 0x1c6378u: goto label_1c6378;
        case 0x1c6394u: goto label_1c6394;
        case 0x1c63b0u: goto label_1c63b0;
        case 0x1c63b8u: goto label_1c63b8;
        case 0x1c63c0u: goto label_1c63c0;
        case 0x1c63d8u: goto label_1c63d8;
        case 0x1c63e4u: goto label_1c63e4;
        case 0x1c63f8u: goto label_1c63f8;
        case 0x1c6438u: goto label_1c6438;
        default: break;
    }

    ctx->pc = 0x1c6318u;

    // 0x1c6318: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c6318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c631c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c631cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1c6320: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c6320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c6324: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c6324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6328: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1c6328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1c632c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c632cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6330: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1c6330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1c6334: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1c6334u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6338: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c6338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1c633c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1c633cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6340: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1c6340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1c6344: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1c6344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1c6348: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1c6348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1c634c: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1c634cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x1c6350: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1c6350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1c6354: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x1c6354u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1c6358: 0xc07173a  jal         func_1C5CE8
    ctx->pc = 0x1C6358u;
    SET_GPR_U32(ctx, 31, 0x1C6360u);
    ctx->pc = 0x1C635Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6358u;
    // 0x1c635c: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5CE8u, 0x1C6358u, 0x1C6360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6360u;
label_1c6360:
    // 0x1c6360: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6360u;
    {
        const bool branch_taken_0x1c6360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6360) {
            ctx->pc = 0x1C6364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6360u;
            // 0x1c6364: 0x8e220318  lw          $v0, 0x318($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C637Cu;
            goto label_1c637c;
        }
    }
    ctx->pc = 0x1C6368u;
    // 0x1c6368: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6368u;
    {
        const bool branch_taken_0x1c6368 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6368u;
        // 0x1c636c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6368) {
            ctx->pc = 0x1C6378u;
            goto label_1c6378;
        }
    }
    ctx->pc = 0x1C6370u;
    // 0x1c6370: 0xc0715aa  jal         func_1C56A8
    ctx->pc = 0x1C6370u;
    SET_GPR_U32(ctx, 31, 0x1C6378u);
    ctx->pc = 0x1C6374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6370u;
    // 0x1c6374: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C56A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C56A8u, 0x1C6370u, 0x1C6378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6378u;
label_1c6378:
    // 0x1c6378: 0x8e220318  lw          $v0, 0x318($s1)
    ctx->pc = 0x1c6378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
label_1c637c:
    // 0x1c637c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1c637cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1c6380: 0xc475c748  lwc1        $f21, -0x38B8($v1)
    ctx->pc = 0x1c6380u;
    { uint32_t bits = FAST_READ32(0x45C748u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c6384: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c6384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6388: 0x8c560fe8  lw          $s6, 0xFE8($v0)
    ctx->pc = 0x1c6388u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4072)));
    // 0x1c638c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C638Cu;
    SET_GPR_U32(ctx, 31, 0x1C6394u);
    ctx->pc = 0x1C6390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C638Cu;
    // 0x1c6390: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C638Cu, 0x1C6394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6394u;
label_1c6394:
    // 0x1c6394: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1c6394u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6398: 0x8ec200c8  lw          $v0, 0xC8($s6)
    ctx->pc = 0x1c6398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 200)));
    // 0x1c639c: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1C639Cu;
    {
        const bool branch_taken_0x1c639c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C63A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C639Cu;
        // 0x1c63a0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c639c) {
            ctx->pc = 0x1C647Cu;
            goto label_1c647c;
        }
    }
    ctx->pc = 0x1C63A4u;
    // 0x1c63a4: 0x26330060  addiu       $s3, $s1, 0x60
    ctx->pc = 0x1c63a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1c63a8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1c63a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1c63ac: 0x0  nop
    ctx->pc = 0x1c63acu;
    // NOP
label_1c63b0:
    // 0x1c63b0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1C63B0u;
    {
        const bool branch_taken_0x1c63b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C63B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C63B0u;
        // 0x1c63b4: 0x3c0802d  daddu       $s0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c63b0) {
            ctx->pc = 0x1C6448u;
            goto label_1c6448;
        }
    }
    ctx->pc = 0x1C63B8u;
label_1c63b8:
    // 0x1c63b8: 0xc07175a  jal         func_1C5D68
    ctx->pc = 0x1C63B8u;
    SET_GPR_U32(ctx, 31, 0x1C63C0u);
    ctx->pc = 0x1C63BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C63B8u;
    // 0x1c63bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5D68u, 0x1C63B8u, 0x1C63C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C63C0u;
label_1c63c0:
    // 0x1c63c0: 0x54520027  bnel        $v0, $s2, . + 4 + (0x27 << 2)
    ctx->pc = 0x1C63C0u;
    {
        const bool branch_taken_0x1c63c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1c63c0) {
            ctx->pc = 0x1C63C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C63C0u;
            // 0x1c63c4: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6460u;
            goto label_1c6460;
        }
    }
    ctx->pc = 0x1C63C8u;
    // 0x1c63c8: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C63C8u;
    {
        const bool branch_taken_0x1c63c8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C63CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C63C8u;
        // 0x1c63cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c63c8) {
            ctx->pc = 0x1C63ECu;
            goto label_1c63ec;
        }
    }
    ctx->pc = 0x1C63D0u;
    // 0x1c63d0: 0xc071764  jal         func_1C5D90
    ctx->pc = 0x1C63D0u;
    SET_GPR_U32(ctx, 31, 0x1C63D8u);
    ctx->pc = 0x1C63D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C63D0u;
    // 0x1c63d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5D90u, 0x1C63D0u, 0x1C63D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C63D8u;
label_1c63d8:
    // 0x1c63d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c63d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c63dc: 0xc0f62ca  jal         func_3D8B28
    ctx->pc = 0x1C63DCu;
    SET_GPR_U32(ctx, 31, 0x1C63E4u);
    ctx->pc = 0x1C63E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C63DCu;
    // 0x1c63e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8B28u, 0x1C63DCu, 0x1C63E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C63E4u;
label_1c63e4:
    // 0x1c63e4: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C63E4u;
    {
        const bool branch_taken_0x1c63e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c63e4) {
            ctx->pc = 0x1C63E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C63E4u;
            // 0x1c63e8: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6444u;
            goto label_1c6444;
        }
    }
    ctx->pc = 0x1C63ECu;
label_1c63ec:
    // 0x1c63ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c63ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c63f0: 0xc071764  jal         func_1C5D90
    ctx->pc = 0x1C63F0u;
    SET_GPR_U32(ctx, 31, 0x1C63F8u);
    ctx->pc = 0x1C63F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C63F0u;
    // 0x1c63f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5D90u, 0x1C63F0u, 0x1C63F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C63F8u;
label_1c63f8:
    // 0x1c63f8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c63f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c63fc: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x1c63fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1c6400: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c6400u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c6404: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c6404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c6408: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1c6408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c640c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1c640cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c6410: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1c6410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c6414: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1c6414u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1c6418: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1c6418u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1c641c: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x1c641cu;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1c6420: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x1c6420u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6424: 0x0  nop
    ctx->pc = 0x1c6424u;
    // NOP
    // 0x1c6428: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1C6428u;
    {
        const bool branch_taken_0x1c6428 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6428u;
        // 0x1c642c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6428) {
            ctx->pc = 0x1C6440u;
            goto label_1c6440;
        }
    }
    ctx->pc = 0x1C6430u;
    // 0x1c6430: 0xc071764  jal         func_1C5D90
    ctx->pc = 0x1C6430u;
    SET_GPR_U32(ctx, 31, 0x1C6438u);
    ctx->pc = 0x1C6434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6430u;
    // 0x1c6434: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5D90u, 0x1C6430u, 0x1C6438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6438u;
label_1c6438:
    // 0x1c6438: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x1c6438u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x1c643c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c643cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c6440:
    // 0x1c6440: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1c6440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1c6444:
    // 0x1c6444: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c6444u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c6448:
    // 0x1c6448: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x1c6448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1c644c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1c644cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c6450: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1c6450u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1c6454: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1c6454u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c6458: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1C6458u;
    {
        const bool branch_taken_0x1c6458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C645Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6458u;
        // 0x1c645c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6458) {
            ctx->pc = 0x1C63B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c63b8;
        }
    }
    ctx->pc = 0x1C6460u;
label_1c6460:
    // 0x1c6460: 0x16800007  bnez        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6460u;
    {
        const bool branch_taken_0x1c6460 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6460u;
        // 0x1c6464: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6460) {
            ctx->pc = 0x1C6480u;
            goto label_1c6480;
        }
    }
    ctx->pc = 0x1C6468u;
    // 0x1c6468: 0x8ec200c8  lw          $v0, 0xC8($s6)
    ctx->pc = 0x1c6468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 200)));
    // 0x1c646c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c646cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1c6470: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x1c6470u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1c6474: 0x5040ffce  beql        $v0, $zero, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1C6474u;
    {
        const bool branch_taken_0x1c6474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6474) {
            ctx->pc = 0x1C6478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6474u;
            // 0x1c6478: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C63B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c63b0;
        }
    }
    ctx->pc = 0x1C647Cu;
label_1c647c:
    // 0x1c647c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c647cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6480:
    // 0x1c6480: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c6480u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6484: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c6484u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c6488: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c6488u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c648c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1c648cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c6490: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1c6490u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c6494: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1c6494u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6498: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1c6498u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c649c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1c649cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c64a0: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1c64a0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c64a4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1c64a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c64a8: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x1c64a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c64ac: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1c64acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c64b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C64B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C64B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C64B0u;
        // 0x1c64b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C64B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C64B8u;
}
