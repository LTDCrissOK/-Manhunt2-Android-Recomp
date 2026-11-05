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

// Function: sub_001A0FB8
// Address: 0x1a0fb8 - 0x1a1130
void sub_001A0FB8_0x1a0fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0FB8_0x1a0fb8");
#endif

    switch (ctx->pc) {
        case 0x1a0fd8u: goto label_1a0fd8;
        case 0x1a0ff8u: goto label_1a0ff8;
        case 0x1a1058u: goto label_1a1058;
        default: break;
    }

    ctx->pc = 0x1a0fb8u;

    // 0x1a0fb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a0fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a0fbc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a0fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1a0fc0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a0fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1a0fc4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a0fc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0fc8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a0fc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0fcc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a0fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a0fd0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1A0FD0u;
    SET_GPR_U32(ctx, 31, 0x1A0FD8u);
    ctx->pc = 0x1A0FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0FD0u;
    // 0x1a0fd4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1A0FD0u, 0x1A0FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0FD8u;
label_1a0fd8:
    // 0x1a0fd8: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1a0fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1a0fdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a0fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0fe0: 0x2444f030  addiu       $a0, $v0, -0xFD0
    ctx->pc = 0x1a0fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963248));
    // 0x1a0fe4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1a0fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x48F034u));
    // 0x1a0fe8: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x1a0fe8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x48F03Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48F03Cu, _value); } while (0);
    // 0x1a0fec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a0fecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0ff0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A0FF0u;
    {
        const bool branch_taken_0x1a0ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0FF0u;
        // 0x1a0ff4: 0x3c070049  lui         $a3, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0ff0) {
            ctx->pc = 0x1A1010u;
            goto label_1a1010;
        }
    }
    ctx->pc = 0x1A0FF8u;
label_1a0ff8:
    // 0x1a0ff8: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x1a0ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x1a0ffc: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1a0ffcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1000: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1a1000u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a1004: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1a1004u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a1008: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1a1008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a100c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a100cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1a1010:
    // 0x1a1010: 0x24c3f030  addiu       $v1, $a2, -0xFD0
    ctx->pc = 0x1a1010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963248));
    // 0x1a1014: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1a1014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1a1018: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1018u;
    {
        const bool branch_taken_0x1a1018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1018u;
        // 0x1a101c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1018) {
            ctx->pc = 0x1A1024u;
            goto label_1a1024;
        }
    }
    ctx->pc = 0x1A1020u;
    // 0x1a1020: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a1020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a1024:
    // 0x1a1024: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1024u;
    {
        const bool branch_taken_0x1a1024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1024) {
            ctx->pc = 0x1A1028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1024u;
            // 0x1a1028: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1038u;
            goto label_1a1038;
        }
    }
    ctx->pc = 0x1A102Cu;
    // 0x1a102c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1a102cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a1030: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x1a1030u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x1a1034: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a1034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a1038:
    // 0x1a1038: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1A1038u;
    {
        const bool branch_taken_0x1a1038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1038) {
            ctx->pc = 0x1A103Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1038u;
            // 0x1a103c: 0x8c420fe8  lw          $v0, 0xFE8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4072)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0ff8;
        }
    }
    ctx->pc = 0x1A1040u;
    // 0x1a1040: 0x24e2f020  addiu       $v0, $a3, -0xFE0
    ctx->pc = 0x1a1040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963232));
    // 0x1a1044: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1a1044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a1048: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a1048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a104c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A104Cu;
    {
        const bool branch_taken_0x1a104c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A104Cu;
        // 0x1a1050: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a104c) {
            ctx->pc = 0x1A1070u;
            goto label_1a1070;
        }
    }
    ctx->pc = 0x1A1054u;
    // 0x1a1054: 0x0  nop
    ctx->pc = 0x1a1054u;
    // NOP
label_1a1058:
    // 0x1a1058: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x1a1058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x1a105c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1a105cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1060: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1a1060u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a1064: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1a1064u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a1068: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1a1068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a106c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a106cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1a1070:
    // 0x1a1070: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1a1070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1a1074: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1074u;
    {
        const bool branch_taken_0x1a1074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1074u;
        // 0x1a1078: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1074) {
            ctx->pc = 0x1A1080u;
            goto label_1a1080;
        }
    }
    ctx->pc = 0x1A107Cu;
    // 0x1a107c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a107cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a1080:
    // 0x1a1080: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1080u;
    {
        const bool branch_taken_0x1a1080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1080) {
            ctx->pc = 0x1A1084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1080u;
            // 0x1a1084: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1094u;
            goto label_1a1094;
        }
    }
    ctx->pc = 0x1A1088u;
    // 0x1a1088: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1a1088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a108c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1a108cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1a1090: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a1090u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a1094:
    // 0x1a1094: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1A1094u;
    {
        const bool branch_taken_0x1a1094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1094) {
            ctx->pc = 0x1A1098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1094u;
            // 0x1a1098: 0x8c420fe8  lw          $v0, 0xFE8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4072)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1058;
        }
    }
    ctx->pc = 0x1A109Cu;
    // 0x1a109c: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A109Cu;
    {
        const bool branch_taken_0x1a109c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a109c) {
            ctx->pc = 0x1A10C0u;
            goto label_1a10c0;
        }
    }
    ctx->pc = 0x1A10A4u;
    // 0x1a10a4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1a10a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a10a8: 0x8c620fe8  lw          $v0, 0xFE8($v1)
    ctx->pc = 0x1a10a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4072)));
    // 0x1a10ac: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x1a10acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x1a10b0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1a10b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a10b4: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1a10b4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a10b8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1A10B8u;
    {
        const bool branch_taken_0x1a10b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A10BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A10B8u;
        // 0x1a10bc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a10b8) {
            ctx->pc = 0x1A111Cu;
            goto label_1a111c;
        }
    }
    ctx->pc = 0x1A10C0u;
label_1a10c0:
    // 0x1a10c0: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A10C0u;
    {
        const bool branch_taken_0x1a10c0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1A10C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A10C0u;
        // 0x1a10c4: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a10c0) {
            ctx->pc = 0x1A10DCu;
            goto label_1a10dc;
        }
    }
    ctx->pc = 0x1A10C8u;
    // 0x1a10c8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1a10c8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a10cc: 0x0  nop
    ctx->pc = 0x1a10ccu;
    // NOP
    // 0x1a10d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a10d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a10d4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A10D4u;
    {
        const bool branch_taken_0x1a10d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a10d4) {
            ctx->pc = 0x1A10F4u;
            goto label_1a10f4;
        }
    }
    ctx->pc = 0x1A10DCu;
label_1a10dc:
    // 0x1a10dc: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x1a10dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1a10e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a10e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a10e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a10e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a10e8: 0x0  nop
    ctx->pc = 0x1a10e8u;
    // NOP
    // 0x1a10ec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a10ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a10f0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1a10f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1a10f4:
    // 0x1a10f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a10f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a10f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a10f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a10fc: 0x0  nop
    ctx->pc = 0x1a10fcu;
    // NOP
    // 0x1a1100: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1a1100u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1a1104: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a1104u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a1108: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1a1108u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a110c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1a110cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1a1110: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1a1110u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a1114: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1a1114u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a1118: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a1118u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a111c:
    // 0x1a111c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a111cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a1120: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a1120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1124: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1124u;
        // 0x1a1128: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A112Cu;
    // 0x1a112c: 0x0  nop
    ctx->pc = 0x1a112cu;
    // NOP
    ctx->pc = 0x1a1130u;
}
