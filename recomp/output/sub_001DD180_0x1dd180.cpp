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

// Function: sub_001DD180
// Address: 0x1dd180 - 0x1dd3c8
void sub_001DD180_0x1dd180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD180_0x1dd180");
#endif

    switch (ctx->pc) {
        case 0x1dd1c0u: goto label_1dd1c0;
        case 0x1dd1d0u: goto label_1dd1d0;
        case 0x1dd1f0u: goto label_1dd1f0;
        case 0x1dd200u: goto label_1dd200;
        case 0x1dd210u: goto label_1dd210;
        case 0x1dd218u: goto label_1dd218;
        case 0x1dd220u: goto label_1dd220;
        case 0x1dd380u: goto label_1dd380;
        case 0x1dd390u: goto label_1dd390;
        default: break;
    }

    ctx->pc = 0x1dd180u;

    // 0x1dd180: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1dd180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1dd184: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x1dd184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x1dd188: 0xffb200c0  sd          $s2, 0xC0($sp)
    ctx->pc = 0x1dd188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
    // 0x1dd18c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1dd18cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd190: 0xffb300c8  sd          $s3, 0xC8($sp)
    ctx->pc = 0x1dd190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 19));
    // 0x1dd194: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1dd194u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd198: 0xffb100b8  sd          $s1, 0xB8($sp)
    ctx->pc = 0x1dd198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 17));
    // 0x1dd19c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1dd19cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd1a0: 0x16000015  bnez        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DD1A0u;
    {
        const bool branch_taken_0x1dd1a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD1A0u;
        // 0x1dd1a4: 0xffbf00d0  sd          $ra, 0xD0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd1a0) {
            ctx->pc = 0x1DD1F8u;
            goto label_1dd1f8;
        }
    }
    ctx->pc = 0x1DD1A8u;
    // 0x1dd1a8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1dd1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1dd1ac: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1dd1acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1dd1b0: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x1DD1B0u;
    {
        const bool branch_taken_0x1dd1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD1B0u;
        // 0x1dd1b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd1b0) {
            ctx->pc = 0x1DD3A8u;
            goto label_1dd3a8;
        }
    }
    ctx->pc = 0x1DD1B8u;
    // 0x1dd1b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dd1b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd1bc: 0x0  nop
    ctx->pc = 0x1dd1bcu;
    // NOP
label_1dd1c0:
    // 0x1dd1c0: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1dd1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1dd1c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1dd1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd1c8: 0xc078a1a  jal         func_1E2868
    ctx->pc = 0x1DD1C8u;
    SET_GPR_U32(ctx, 31, 0x1DD1D0u);
    ctx->pc = 0x1DD1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD1C8u;
    // 0x1dd1cc: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2868u, 0x1DD1C8u, 0x1DD1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD1D0u;
label_1dd1d0:
    // 0x1dd1d0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DD1D0u;
    {
        const bool branch_taken_0x1dd1d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD1D0u;
        // 0x1dd1d4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd1d0) {
            ctx->pc = 0x1DD1F0u;
            goto label_1dd1f0;
        }
    }
    ctx->pc = 0x1DD1D8u;
    // 0x1dd1d8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1dd1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1dd1dc: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1dd1dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1dd1e0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1DD1E0u;
    {
        const bool branch_taken_0x1dd1e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD1E0u;
        // 0x1dd1e4: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd1e0) {
            ctx->pc = 0x1DD1C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd1c0;
        }
    }
    ctx->pc = 0x1DD1E8u;
    // 0x1dd1e8: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x1DD1E8u;
    {
        const bool branch_taken_0x1dd1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD1E8u;
        // 0x1dd1ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd1e8) {
            ctx->pc = 0x1DD3ACu;
            goto label_1dd3ac;
        }
    }
    ctx->pc = 0x1DD1F0u;
label_1dd1f0:
    // 0x1dd1f0: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x1DD1F0u;
    {
        const bool branch_taken_0x1dd1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD1F0u;
        // 0x1dd1f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd1f0) {
            ctx->pc = 0x1DD3ACu;
            goto label_1dd3ac;
        }
    }
    ctx->pc = 0x1DD1F8u;
label_1dd1f8:
    // 0x1dd1f8: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x1DD1F8u;
    SET_GPR_U32(ctx, 31, 0x1DD200u);
    ctx->pc = 0x1DD1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD1F8u;
    // 0x1dd1fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x1DD1F8u, 0x1DD200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD200u;
label_1dd200:
    // 0x1dd200: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1dd200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd204: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dd204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd208: 0xc0b17fe  jal         func_2C5FF8
    ctx->pc = 0x1DD208u;
    SET_GPR_U32(ctx, 31, 0x1DD210u);
    ctx->pc = 0x1DD20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD208u;
    // 0x1dd20c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5FF8u, 0x1DD208u, 0x1DD210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD210u;
label_1dd210:
    // 0x1dd210: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1DD210u;
    SET_GPR_U32(ctx, 31, 0x1DD218u);
    ctx->pc = 0x1DD214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD210u;
    // 0x1dd214: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1DD210u, 0x1DD218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD218u;
label_1dd218:
    // 0x1dd218: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1DD218u;
    SET_GPR_U32(ctx, 31, 0x1DD220u);
    ctx->pc = 0x1DD21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD218u;
    // 0x1dd21c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1DD218u, 0x1DD220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD220u;
label_1dd220:
    // 0x1dd220: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x1dd220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x1dd224: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1dd224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1dd228: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x1dd228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x1dd22c: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x1dd22cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x1dd230: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x1dd230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x1dd234: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x1dd234u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1dd238: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x1dd238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x1dd23c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x1dd23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x1dd240: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1dd240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x1dd244: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x1dd244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x1dd248: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x1dd248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x1dd24c: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x1dd24cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x1dd250: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1dd250u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dd254: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1dd254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dd258: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1dd258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1dd25c: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x1dd25cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x1dd260: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x1dd260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x1dd264: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x1dd264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x1dd268: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x1dd268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x1dd26c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1dd26cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dd270: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1dd270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dd274: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1dd274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1dd278: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1dd278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1dd27c: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x1dd27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x1dd280: 0x26620010  addiu       $v0, $s3, 0x10
    ctx->pc = 0x1dd280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1dd284: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x1dd284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x1dd288: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1dd288u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dd28c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1dd28cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dd290: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dd290u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dd294: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1dd294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dd298: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1dd298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1dd29c: 0x26630020  addiu       $v1, $s3, 0x20
    ctx->pc = 0x1dd29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1dd2a0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1dd2a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dd2a4: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1dd2a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dd2a8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dd2a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dd2ac: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1dd2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dd2b0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1dd2b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dd2b4: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1dd2b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd2b8: 0xdba30010  lqc2        $vf3, 0x10($sp)
    ctx->pc = 0x1dd2b8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd2bc: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1dd2bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd2c0: 0xdba50030  lqc2        $vf5, 0x30($sp)
    ctx->pc = 0x1dd2c0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dd2c4: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x1dd2c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1dd2c8: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1dd2c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1dd2cc: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x1dd2ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1dd2d0: 0xfba50050  sqc2        $vf5, 0x50($sp)
    ctx->pc = 0x1dd2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1dd2d4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1dd2d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dd2d8: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1dd2d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd2dc: 0xdba30010  lqc2        $vf3, 0x10($sp)
    ctx->pc = 0x1dd2dcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd2e0: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1dd2e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd2e4: 0xdba50030  lqc2        $vf5, 0x30($sp)
    ctx->pc = 0x1dd2e4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dd2e8: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x1dd2e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1dd2ec: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1dd2ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1dd2f0: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x1dd2f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1dd2f4: 0xfba50060  sqc2        $vf5, 0x60($sp)
    ctx->pc = 0x1dd2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1dd2f8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1dd2f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dd2fc: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1dd2fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dd300: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dd300u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dd304: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1dd304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dd308: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x1dd308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dd30c: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x1dd30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dd310: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x1dd310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1dd314: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1dd314u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1dd318: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1dd318u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1dd31c: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1dd31cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1dd320: 0x0  nop
    ctx->pc = 0x1dd320u;
    // NOP
    // 0x1dd324: 0x0  nop
    ctx->pc = 0x1dd324u;
    // NOP
    // 0x1dd328: 0x46010084  c1          0x10084
    ctx->pc = 0x1dd328u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x1dd32c: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x1dd32cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1dd330: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dd330u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd334: 0x0  nop
    ctx->pc = 0x1dd334u;
    // NOP
    // 0x1dd338: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1dd338u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dd33c: 0x0  nop
    ctx->pc = 0x1dd33cu;
    // NOP
    // 0x1dd340: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1DD340u;
    {
        const bool branch_taken_0x1dd340 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD340u;
        // 0x1dd344: 0xe7a20090  swc1        $f2, 0x90($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd340) {
            ctx->pc = 0x1DD36Cu;
            goto label_1dd36c;
        }
    }
    ctx->pc = 0x1DD348u;
    // 0x1dd348: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1dd348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1dd34c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dd34cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd350: 0x0  nop
    ctx->pc = 0x1dd350u;
    // NOP
    // 0x1dd354: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1dd354u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1dd358: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1dd358u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1dd35c: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1dd35cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1dd360: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1dd360u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1dd364: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1dd364u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dd368: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1dd368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
label_1dd36c:
    // 0x1dd36c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1dd36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1dd370: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DD370u;
    {
        const bool branch_taken_0x1dd370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD370u;
        // 0x1dd374: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd370) {
            ctx->pc = 0x1DD3A8u;
            goto label_1dd3a8;
        }
    }
    ctx->pc = 0x1DD378u;
    // 0x1dd378: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1dd378u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd37c: 0x0  nop
    ctx->pc = 0x1dd37cu;
    // NOP
label_1dd380:
    // 0x1dd380: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1dd380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1dd384: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1dd384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1dd388: 0xc078a1a  jal         func_1E2868
    ctx->pc = 0x1DD388u;
    SET_GPR_U32(ctx, 31, 0x1DD390u);
    ctx->pc = 0x1DD38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD388u;
    // 0x1dd38c: 0xb12821  addu        $a1, $a1, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2868u, 0x1DD388u, 0x1DD390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD390u;
label_1dd390:
    // 0x1dd390: 0x1440ff97  bnez        $v0, . + 4 + (-0x69 << 2)
    ctx->pc = 0x1DD390u;
    {
        const bool branch_taken_0x1dd390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD390u;
        // 0x1dd394: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd390) {
            ctx->pc = 0x1DD1F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd1f0;
        }
    }
    ctx->pc = 0x1DD398u;
    // 0x1dd398: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1dd398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1dd39c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1dd39cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1dd3a0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1DD3A0u;
    {
        const bool branch_taken_0x1dd3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD3A0u;
        // 0x1dd3a4: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd3a0) {
            ctx->pc = 0x1DD380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd380;
        }
    }
    ctx->pc = 0x1DD3A8u;
label_1dd3a8:
    // 0x1dd3a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dd3a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd3ac:
    // 0x1dd3ac: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x1dd3acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dd3b0: 0xdfb100b8  ld          $s1, 0xB8($sp)
    ctx->pc = 0x1dd3b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dd3b4: 0xdfb200c0  ld          $s2, 0xC0($sp)
    ctx->pc = 0x1dd3b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1dd3b8: 0xdfb300c8  ld          $s3, 0xC8($sp)
    ctx->pc = 0x1dd3b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1dd3bc: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1dd3bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dd3c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD3C0u;
        // 0x1dd3c4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD3C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD3C8u;
}
