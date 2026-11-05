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

// Function: sub_001E1018
// Address: 0x1e1018 - 0x1e1170
void sub_001E1018_0x1e1018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1018_0x1e1018");
#endif

    switch (ctx->pc) {
        case 0x1e1090u: goto label_1e1090;
        case 0x1e10a4u: goto label_1e10a4;
        case 0x1e10b4u: goto label_1e10b4;
        case 0x1e10f0u: goto label_1e10f0;
        default: break;
    }

    ctx->pc = 0x1e1018u;

    // 0x1e1018: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e1018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e101c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e101cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e1020: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1e1020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1e1024: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1e1024u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1028: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1e1028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1e102c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1e102cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1030: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e1030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e1034: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e1034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e1038: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1e1038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1e103c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1e103cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1e1040: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e1040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e1044: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1e1044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1e1048: 0x8eb3000c  lw          $s3, 0xC($s5)
    ctx->pc = 0x1e1048u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1e104c: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E104Cu;
    {
        const bool branch_taken_0x1e104c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E104Cu;
        // 0x1e1050: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e104c) {
            ctx->pc = 0x1E1064u;
            goto label_1e1064;
        }
    }
    ctx->pc = 0x1E1054u;
    // 0x1e1054: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x1e1054u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e1058: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x1e1058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x1e105c: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1E105Cu;
    {
        const bool branch_taken_0x1e105c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E105Cu;
        // 0x1e1060: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e105c) {
            ctx->pc = 0x1E113Cu;
            goto label_1e113c;
        }
    }
    ctx->pc = 0x1E1064u;
label_1e1064:
    // 0x1e1064: 0x8eb40008  lw          $s4, 0x8($s5)
    ctx->pc = 0x1e1064u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1e1068: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x1e1068u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
    // 0x1e106c: 0x261001a0  addiu       $s0, $s0, 0x1A0
    ctx->pc = 0x1e106cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x1e1070: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x1e1070u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x1e1074: 0x8e85001c  lw          $a1, 0x1C($s4)
    ctx->pc = 0x1e1074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x1e1078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e1078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e107c: 0x8e860018  lw          $a2, 0x18($s4)
    ctx->pc = 0x1e107cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1e1080: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1e1080u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1084: 0x8e870014  lw          $a3, 0x14($s4)
    ctx->pc = 0x1e1084u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1e1088: 0xc07a814  jal         func_1EA050
    ctx->pc = 0x1E1088u;
    SET_GPR_U32(ctx, 31, 0x1E1090u);
    ctx->pc = 0x1E108Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1088u;
    // 0x1e108c: 0x220b82d  daddu       $s7, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA050u, 0x1E1088u, 0x1E1090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1090u;
label_1e1090:
    // 0x1e1090: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1e1090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1094: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e1094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1098: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e1098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e109c: 0xc0781f2  jal         func_1E07C8
    ctx->pc = 0x1E109Cu;
    SET_GPR_U32(ctx, 31, 0x1E10A4u);
    ctx->pc = 0x1E10A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E109Cu;
    // 0x1e10a0: 0x262791cc  addiu       $a3, $s1, -0x6E34 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4294939084));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E07C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E07C8u, 0x1E109Cu, 0x1E10A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E10A4u;
label_1e10a4:
    // 0x1e10a4: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1E10A4u;
    {
        const bool branch_taken_0x1e10a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E10A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E10A4u;
        // 0x1e10a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e10a4) {
            ctx->pc = 0x1E113Cu;
            goto label_1e113c;
        }
    }
    ctx->pc = 0x1E10ACu;
    // 0x1e10ac: 0xc0c350a  jal         func_30D428
    ctx->pc = 0x1E10ACu;
    SET_GPR_U32(ctx, 31, 0x1E10B4u);
    ctx->pc = 0x1E10B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E10ACu;
    // 0x1e10b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D428u, 0x1E10ACu, 0x1E10B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E10B4u;
label_1e10b4:
    // 0x1e10b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e10b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e10b8: 0x14430020  bne         $v0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1E10B8u;
    {
        const bool branch_taken_0x1e10b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E10BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E10B8u;
        // 0x1e10bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e10b8) {
            ctx->pc = 0x1E113Cu;
            goto label_1e113c;
        }
    }
    ctx->pc = 0x1E10C0u;
    // 0x1e10c0: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1e10c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1e10c4: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x1e10c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1e10c8: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x1e10c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x1e10cc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e10ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e10d0: 0xf8410180  sqc2        $vf1, 0x180($v0)
    ctx->pc = 0x1e10d0u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[1])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x490180u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x490180u, _value); } while (0);
    // 0x1e10d4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1e10d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e10d8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1e10d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e10dc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1e10dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1e10e0: 0x24860014  addiu       $a2, $a0, 0x14
    ctx->pc = 0x1e10e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x1e10e4: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x1e10e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1e10e8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e10e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e10ec: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1e10ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x490190u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x490190u, _value); } while (0);
label_1e10f0:
    // 0x1e10f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e10f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e10f4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1e10f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1e10f8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1e10f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1e10fc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1e10fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1e1100: 0x14a7fffb  bne         $a1, $a3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E1100u;
    {
        const bool branch_taken_0x1e1100 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x1E1104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1100u;
        // 0x1e1104: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1100) {
            ctx->pc = 0x1E10F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e10f0;
        }
    }
    ctx->pc = 0x1E1108u;
    // 0x1e1108: 0x25020180  addiu       $v0, $t0, 0x180
    ctx->pc = 0x1e1108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 384));
    // 0x1e110c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1e110cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e1110: 0xae420034  sw          $v0, 0x34($s2)
    ctx->pc = 0x1e1110u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
    // 0x1e1114: 0xae430038  sw          $v1, 0x38($s2)
    ctx->pc = 0x1e1114u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 3));
    // 0x1e1118: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x1e1118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1e111c: 0xae420044  sw          $v0, 0x44($s2)
    ctx->pc = 0x1e111cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
    // 0x1e1120: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x1e1120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1e1124: 0xae430040  sw          $v1, 0x40($s2)
    ctx->pc = 0x1e1124u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 3));
    // 0x1e1128: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x1e1128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1e112c: 0xae420050  sw          $v0, 0x50($s2)
    ctx->pc = 0x1e112cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
    // 0x1e1130: 0xc6e091cc  lwc1        $f0, -0x6E34($s7)
    ctx->pc = 0x1e1130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294939084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1134: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x1e1134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x1e1138: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e113c:
    // 0x1e113c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e113cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1140: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e1140u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e1144: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e1144u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1148: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e1148u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e114c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1e114cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1150: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1e1150u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e1154: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1e1154u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1158: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1e1158u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e115c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e115cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e1160: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1160u;
        // 0x1e1164: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1168u;
    // 0x1e1168: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e1168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e116c: 0x0  nop
    ctx->pc = 0x1e116cu;
    // NOP
    ctx->pc = 0x1e1170u;
}
