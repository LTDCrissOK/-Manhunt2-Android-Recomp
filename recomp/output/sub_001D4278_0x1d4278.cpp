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

// Function: sub_001D4278
// Address: 0x1d4278 - 0x1d4558
void sub_001D4278_0x1d4278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4278_0x1d4278");
#endif

    switch (ctx->pc) {
        case 0x1d42b4u: goto label_1d42b4;
        case 0x1d42e4u: goto label_1d42e4;
        case 0x1d42f4u: goto label_1d42f4;
        case 0x1d4378u: goto label_1d4378;
        case 0x1d4380u: goto label_1d4380;
        case 0x1d43b0u: goto label_1d43b0;
        case 0x1d43ccu: goto label_1d43cc;
        case 0x1d4408u: goto label_1d4408;
        case 0x1d4410u: goto label_1d4410;
        case 0x1d441cu: goto label_1d441c;
        case 0x1d4438u: goto label_1d4438;
        case 0x1d4484u: goto label_1d4484;
        case 0x1d4494u: goto label_1d4494;
        default: break;
    }

    ctx->pc = 0x1d4278u;

    // 0x1d4278: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1d4278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1d427c: 0xffb50138  sd          $s5, 0x138($sp)
    ctx->pc = 0x1d427cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 21));
    // 0x1d4280: 0xffb70148  sd          $s7, 0x148($sp)
    ctx->pc = 0x1d4280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 23));
    // 0x1d4284: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1d4284u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4288: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x1d4288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x1d428c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1d428cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1d4290: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x1d4290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x1d4294: 0xffb30128  sd          $s3, 0x128($sp)
    ctx->pc = 0x1d4294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 19));
    // 0x1d4298: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x1d4298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
    // 0x1d429c: 0xffb60140  sd          $s6, 0x140($sp)
    ctx->pc = 0x1d429cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 22));
    // 0x1d42a0: 0xffbe0150  sd          $fp, 0x150($sp)
    ctx->pc = 0x1d42a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 30));
    // 0x1d42a4: 0xffbf0158  sd          $ra, 0x158($sp)
    ctx->pc = 0x1d42a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 31));
    // 0x1d42a8: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x1d42a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x1d42ac: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x1D42ACu;
    SET_GPR_U32(ctx, 31, 0x1D42B4u);
    ctx->pc = 0x1D42B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D42ACu;
    // 0x1d42b0: 0x8eb00008  lw          $s0, 0x8($s5) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x1D42ACu, 0x1D42B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D42B4u;
label_1d42b4:
    // 0x1d42b4: 0x27b70080  addiu       $s7, $sp, 0x80
    ctx->pc = 0x1d42b4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1d42b8: 0x12000042  beqz        $s0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1D42B8u;
    {
        const bool branch_taken_0x1d42b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D42BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D42B8u;
        // 0x1d42bc: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d42b8) {
            ctx->pc = 0x1D43C4u;
            goto label_1d43c4;
        }
    }
    ctx->pc = 0x1D42C0u;
    // 0x1d42c0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1d42c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d42c4: 0x1080003f  beqz        $a0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1D42C4u;
    {
        const bool branch_taken_0x1d42c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D42C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D42C4u;
        // 0x1d42c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d42c4) {
            ctx->pc = 0x1D43C4u;
            goto label_1d43c4;
        }
    }
    ctx->pc = 0x1D42CCu;
    // 0x1d42cc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1d42ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d42d0: 0x90430038  lbu         $v1, 0x38($v0)
    ctx->pc = 0x1d42d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1d42d4: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D42D4u;
    {
        const bool branch_taken_0x1d42d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D42D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D42D4u;
        // 0x1d42d8: 0x26020040  addiu       $v0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d42d4) {
            ctx->pc = 0x1D432Cu;
            goto label_1d432c;
        }
    }
    ctx->pc = 0x1D42DCu;
    // 0x1d42dc: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x1D42DCu;
    SET_GPR_U32(ctx, 31, 0x1D42E4u);
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x1D42DCu, 0x1D42E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D42E4u;
label_1d42e4:
    // 0x1d42e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D42E4u;
    {
        const bool branch_taken_0x1d42e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D42E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D42E4u;
        // 0x1d42e8: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d42e4) {
            ctx->pc = 0x1D42F8u;
            goto label_1d42f8;
        }
    }
    ctx->pc = 0x1D42ECu;
    // 0x1d42ec: 0xc0c4900  jal         func_312400
    ctx->pc = 0x1D42ECu;
    SET_GPR_U32(ctx, 31, 0x1D42F4u);
    ctx->pc = 0x1D42F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D42ECu;
    // 0x1d42f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x1D42ECu, 0x1D42F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D42F4u;
label_1d42f4:
    // 0x1d42f4: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x1d42f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_1d42f8:
    // 0x1d42f8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1d42f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d42fc: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1d42fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d4300: 0x26030090  addiu       $v1, $s0, 0x90
    ctx->pc = 0x1d4300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x1d4304: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1d4304u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d4308: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1d4308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d430c: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x1d430cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1d4310: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1d4310u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d4314: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x1d4314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d4318: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x1d4318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1d431c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1d431cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d4320: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x1d4320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d4324: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1D4324u;
    {
        const bool branch_taken_0x1d4324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4324u;
        // 0x1d4328: 0x27b10004  addiu       $s1, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4324) {
            ctx->pc = 0x1D43D0u;
            goto label_1d43d0;
        }
    }
    ctx->pc = 0x1D432Cu;
label_1d432c:
    // 0x1d432c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1d432cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d4330: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1d4330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d4334: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x1d4334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1d4338: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1d4338u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d433c: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1d433cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d4340: 0x26020060  addiu       $v0, $s0, 0x60
    ctx->pc = 0x1d4340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1d4344: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1d4344u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d4348: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x1d4348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d434c: 0x26030070  addiu       $v1, $s0, 0x70
    ctx->pc = 0x1d434cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1d4350: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1d4350u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d4354: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x1d4354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d4358: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x1d4358u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d435c: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D435Cu;
    {
        const bool branch_taken_0x1d435c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D435Cu;
        // 0x1d4360: 0x27b10004  addiu       $s1, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d435c) {
            ctx->pc = 0x1D43D0u;
            goto label_1d43d0;
        }
    }
    ctx->pc = 0x1D4364u;
    // 0x1d4364: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x1d4364u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4368: 0x27b60090  addiu       $s6, $sp, 0x90
    ctx->pc = 0x1d4368u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1d436c: 0x27b400a0  addiu       $s4, $sp, 0xA0
    ctx->pc = 0x1d436cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d4370: 0x27b300b0  addiu       $s3, $sp, 0xB0
    ctx->pc = 0x1d4370u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1d4374: 0x0  nop
    ctx->pc = 0x1d4374u;
    // NOP
label_1d4378:
    // 0x1d4378: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x1D4378u;
    SET_GPR_U32(ctx, 31, 0x1D4380u);
    ctx->pc = 0x1D437Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4378u;
    // 0x1d437c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x1D4378u, 0x1D4380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4380u;
label_1d4380:
    // 0x1d4380: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1d4380u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d4384: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x1d4384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d4388: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x1d4388u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1d438c: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x1d438cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d4390: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x1d4390u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1d4394: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x1d4394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d4398: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1d4398u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d439c: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x1d439cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d43a0: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x1d43a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1d43a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d43a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d43a8: 0xc0b163c  jal         func_2C58F0
    ctx->pc = 0x1D43A8u;
    SET_GPR_U32(ctx, 31, 0x1D43B0u);
    ctx->pc = 0x1D43ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D43A8u;
    // 0x1d43ac: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C58F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C58F0u, 0x1D43A8u, 0x1D43B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D43B0u;
label_1d43b0:
    // 0x1d43b0: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x1d43b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d43b4: 0x1600fff0  bnez        $s0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D43B4u;
    {
        const bool branch_taken_0x1d43b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d43b4) {
            ctx->pc = 0x1D4378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4378;
        }
    }
    ctx->pc = 0x1D43BCu;
    // 0x1d43bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D43BCu;
    {
        const bool branch_taken_0x1d43bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D43C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D43BCu;
        // 0x1d43c0: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d43bc) {
            ctx->pc = 0x1D43D4u;
            goto label_1d43d4;
        }
    }
    ctx->pc = 0x1D43C4u;
label_1d43c4:
    // 0x1d43c4: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x1D43C4u;
    SET_GPR_U32(ctx, 31, 0x1D43CCu);
    ctx->pc = 0x1D43C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D43C4u;
    // 0x1d43c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x1D43C4u, 0x1D43CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D43CCu;
label_1d43cc:
    // 0x1d43cc: 0x27b10004  addiu       $s1, $sp, 0x4
    ctx->pc = 0x1d43ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_1d43d0:
    // 0x1d43d0: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x1d43d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d43d4:
    // 0x1d43d4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1d43d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1d43d8: 0x8eb4000c  lw          $s4, 0xC($s5)
    ctx->pc = 0x1d43d8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1d43dc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1d43dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d43e0: 0x8eb10014  lw          $s1, 0x14($s5)
    ctx->pc = 0x1d43e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x1d43e4: 0x18400050  blez        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x1D43E4u;
    {
        const bool branch_taken_0x1d43e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D43E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D43E4u;
        // 0x1d43e8: 0x8eb30010  lw          $s3, 0x10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d43e4) {
            ctx->pc = 0x1D4528u;
            goto label_1d4528;
        }
    }
    ctx->pc = 0x1D43ECu;
    // 0x1d43ec: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x1d43ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1d43f0: 0x27be00c0  addiu       $fp, $sp, 0xC0
    ctx->pc = 0x1d43f0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1d43f4: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x1d43f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x1d43f8: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x1d43f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1d43fc: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x1d43fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
    // 0x1d4400: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x1d4400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d4404: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x1d4404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
label_1d4408:
    // 0x1d4408: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x1D4408u;
    SET_GPR_U32(ctx, 31, 0x1D4410u);
    ctx->pc = 0x1D440Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4408u;
    // 0x1d440c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x1D4408u, 0x1D4410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4410u;
label_1d4410:
    // 0x1d4410: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d4410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4414: 0xc0b1972  jal         func_2C65C8
    ctx->pc = 0x1D4414u;
    SET_GPR_U32(ctx, 31, 0x1D441Cu);
    ctx->pc = 0x1D4418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4414u;
    // 0x1d4418: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C65C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C65C8u, 0x1D4414u, 0x1D441Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D441Cu;
label_1d441c:
    // 0x1d441c: 0x26620010  addiu       $v0, $s3, 0x10
    ctx->pc = 0x1d441cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1d4420: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1d4420u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d4424: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x1d4424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d4428: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d4428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d442c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1d442cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4430: 0xc0b163c  jal         func_2C58F0
    ctx->pc = 0x1D4430u;
    SET_GPR_U32(ctx, 31, 0x1D4438u);
    ctx->pc = 0x1D4434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4430u;
    // 0x1d4434: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C58F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C58F0u, 0x1D4430u, 0x1D4438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4438u;
label_1d4438:
    // 0x1d4438: 0x8e900004  lw          $s0, 0x4($s4)
    ctx->pc = 0x1d4438u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1d443c: 0x52000021  beql        $s0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x1D443Cu;
    {
        const bool branch_taken_0x1d443c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d443c) {
            ctx->pc = 0x1D4440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D443Cu;
            // 0x1d4440: 0x96830002  lhu         $v1, 0x2($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D44C4u;
            goto label_1d44c4;
        }
    }
    ctx->pc = 0x1D4444u;
    // 0x1d4444: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x1d4444u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1d4448: 0xfa010040  sqc2        $vf1, 0x40($s0)
    ctx->pc = 0x1d4448u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d444c: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x1d444cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x1d4450: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1d4450u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d4454: 0xfa010050  sqc2        $vf1, 0x50($s0)
    ctx->pc = 0x1d4454u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d4458: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x1d4458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1d445c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1d445cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d4460: 0xfa010060  sqc2        $vf1, 0x60($s0)
    ctx->pc = 0x1d4460u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d4464: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1d4464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1d4468: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1d4468u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d446c: 0xfa010070  sqc2        $vf1, 0x70($s0)
    ctx->pc = 0x1d446cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d4470: 0x92a20004  lbu         $v0, 0x4($s5)
    ctx->pc = 0x1d4470u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1d4474: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D4474u;
    {
        const bool branch_taken_0x1d4474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4474) {
            ctx->pc = 0x1D4478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4474u;
            // 0x1d4478: 0x96830002  lhu         $v1, 0x2($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D44C4u;
            goto label_1d44c4;
        }
    }
    ctx->pc = 0x1D447Cu;
    // 0x1d447c: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x1D447Cu;
    SET_GPR_U32(ctx, 31, 0x1D4484u);
    ctx->pc = 0x1D4480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D447Cu;
    // 0x1d4480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x1D447Cu, 0x1D4484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4484u;
label_1d4484:
    // 0x1d4484: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4484u;
    {
        const bool branch_taken_0x1d4484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4484) {
            ctx->pc = 0x1D4494u;
            goto label_1d4494;
        }
    }
    ctx->pc = 0x1D448Cu;
    // 0x1d448c: 0xc0c4900  jal         func_312400
    ctx->pc = 0x1D448Cu;
    SET_GPR_U32(ctx, 31, 0x1D4494u);
    ctx->pc = 0x1D4490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D448Cu;
    // 0x1d4490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x1D448Cu, 0x1D4494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4494u;
label_1d4494:
    // 0x1d4494: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1d4494u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4498: 0xfa010080  sqc2        $vf1, 0x80($s0)
    ctx->pc = 0x1d4498u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d449c: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x1d449cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1d44a0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1d44a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d44a4: 0xfa010090  sqc2        $vf1, 0x90($s0)
    ctx->pc = 0x1d44a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d44a8: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x1d44a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1d44ac: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1d44acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d44b0: 0xfa0100a0  sqc2        $vf1, 0xA0($s0)
    ctx->pc = 0x1d44b0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d44b4: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x1d44b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1d44b8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1d44b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d44bc: 0xfa0100b0  sqc2        $vf1, 0xB0($s0)
    ctx->pc = 0x1d44bcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d44c0: 0x96830002  lhu         $v1, 0x2($s4)
    ctx->pc = 0x1d44c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_1d44c4:
    // 0x1d44c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d44c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d44c8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D44C8u;
    {
        const bool branch_taken_0x1d44c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D44CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D44C8u;
        // 0x1d44cc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d44c8) {
            ctx->pc = 0x1D44F8u;
            goto label_1d44f8;
        }
    }
    ctx->pc = 0x1D44D0u;
    // 0x1d44d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D44D0u;
    {
        const bool branch_taken_0x1d44d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D44D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D44D0u;
        // 0x1d44d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d44d0) {
            ctx->pc = 0x1D44E8u;
            goto label_1d44e8;
        }
    }
    ctx->pc = 0x1D44D8u;
    // 0x1d44d8: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1D44D8u;
    {
        const bool branch_taken_0x1d44d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d44d8) {
            ctx->pc = 0x1D44DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D44D8u;
            // 0x1d44dc: 0x220b82d  daddu       $s7, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D450Cu;
            goto label_1d450c;
        }
    }
    ctx->pc = 0x1D44E0u;
    // 0x1d44e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D44E0u;
    {
        const bool branch_taken_0x1d44e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D44E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D44E0u;
        // 0x1d44e4: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d44e0) {
            ctx->pc = 0x1D4510u;
            goto label_1d4510;
        }
    }
    ctx->pc = 0x1D44E8u;
label_1d44e8:
    // 0x1d44e8: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D44E8u;
    {
        const bool branch_taken_0x1d44e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d44e8) {
            ctx->pc = 0x1D44ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D44E8u;
            // 0x1d44ec: 0xae570000  sw          $s7, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 23));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4504u;
            goto label_1d4504;
        }
    }
    ctx->pc = 0x1D44F0u;
    // 0x1d44f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D44F0u;
    {
        const bool branch_taken_0x1d44f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D44F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D44F0u;
        // 0x1d44f4: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d44f0) {
            ctx->pc = 0x1D4510u;
            goto label_1d4510;
        }
    }
    ctx->pc = 0x1D44F8u;
label_1d44f8:
    // 0x1d44f8: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x1d44f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x1d44fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D44FCu;
    {
        const bool branch_taken_0x1d44fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D44FCu;
        // 0x1d4500: 0x8e570000  lw          $s7, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d44fc) {
            ctx->pc = 0x1D450Cu;
            goto label_1d450c;
        }
    }
    ctx->pc = 0x1D4504u;
label_1d4504:
    // 0x1d4504: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1d4504u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1d4508: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x1d4508u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d450c:
    // 0x1d450c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1d450cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1d4510:
    // 0x1d4510: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1d4510u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1d4514: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x1d4514u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1d4518: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x1d4518u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1d451c: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x1d451cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d4520: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
    ctx->pc = 0x1D4520u;
    {
        const bool branch_taken_0x1d4520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4520u;
        // 0x1d4524: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4520) {
            ctx->pc = 0x1D4408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4408;
        }
    }
    ctx->pc = 0x1D4528u;
label_1d4528:
    // 0x1d4528: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x1d4528u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1d452c: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x1d452cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1d4530: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x1d4530u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1d4534: 0xdfb30128  ld          $s3, 0x128($sp)
    ctx->pc = 0x1d4534u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1d4538: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x1d4538u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1d453c: 0xdfb50138  ld          $s5, 0x138($sp)
    ctx->pc = 0x1d453cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1d4540: 0xdfb60140  ld          $s6, 0x140($sp)
    ctx->pc = 0x1d4540u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1d4544: 0xdfb70148  ld          $s7, 0x148($sp)
    ctx->pc = 0x1d4544u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1d4548: 0xdfbe0150  ld          $fp, 0x150($sp)
    ctx->pc = 0x1d4548u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1d454c: 0xdfbf0158  ld          $ra, 0x158($sp)
    ctx->pc = 0x1d454cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1d4550: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4550u;
        // 0x1d4554: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4558u;
}
