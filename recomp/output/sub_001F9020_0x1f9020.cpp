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

// Function: sub_001F9020
// Address: 0x1f9020 - 0x1f9380
void sub_001F9020_0x1f9020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9020_0x1f9020");
#endif

    switch (ctx->pc) {
        case 0x1f9070u: goto label_1f9070;
        case 0x1f9160u: goto label_1f9160;
        case 0x1f91d8u: goto label_1f91d8;
        case 0x1f9208u: goto label_1f9208;
        case 0x1f9228u: goto label_1f9228;
        case 0x1f9240u: goto label_1f9240;
        case 0x1f927cu: goto label_1f927c;
        case 0x1f928cu: goto label_1f928c;
        case 0x1f929cu: goto label_1f929c;
        case 0x1f92acu: goto label_1f92ac;
        case 0x1f92c0u: goto label_1f92c0;
        case 0x1f92ccu: goto label_1f92cc;
        case 0x1f9328u: goto label_1f9328;
        default: break;
    }

    ctx->pc = 0x1f9020u;

    // 0x1f9020: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1f9020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1f9024: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f9024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9028: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1f9028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1f902c: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1f902cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x1f9030: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1f9030u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9034: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1f9034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1f9038: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1f9038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1f903c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f903cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1f9040: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1f9040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1f9044: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1f9044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x1f9048: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1f9048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x1f904c: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x1f904cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x1f9050: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1f9050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x1f9054: 0x92850180  lbu         $a1, 0x180($s4)
    ctx->pc = 0x1f9054u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 384)));
    // 0x1f9058: 0x2851021  addu        $v0, $s4, $a1
    ctx->pc = 0x1f9058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x1f905c: 0x904335ac  lbu         $v1, 0x35AC($v0)
    ctx->pc = 0x1f905cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13740)));
    // 0x1f9060: 0x106000ba  beqz        $v1, . + 4 + (0xBA << 2)
    ctx->pc = 0x1F9060u;
    {
        const bool branch_taken_0x1f9060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9060u;
        // 0x1f9064: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9060) {
            ctx->pc = 0x1F934Cu;
            goto label_1f934c;
        }
    }
    ctx->pc = 0x1F9068u;
    // 0x1f9068: 0x2403002e  addiu       $v1, $zero, 0x2E
    ctx->pc = 0x1f9068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x1f906c: 0x0  nop
    ctx->pc = 0x1f906cu;
    // NOP
label_1f9070:
    // 0x1f9070: 0x240419e0  addiu       $a0, $zero, 0x19E0
    ctx->pc = 0x1f9070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6624));
    // 0x1f9074: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x1f9074u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f9078: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1f9078u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1f907c: 0x268535ac  addiu       $a1, $s4, 0x35AC
    ctx->pc = 0x1f907cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 13740));
    // 0x1f9080: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x1f9080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1f9084: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x1f9084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x1f9088: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x1f9088u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1f908c: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x1f908cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x1f9090: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x1f9090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1f9094: 0x24840190  addiu       $a0, $a0, 0x190
    ctx->pc = 0x1f9094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 400));
    // 0x1f9098: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1f9098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1f909c: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x1f909cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x1f90a0: 0x90623550  lbu         $v0, 0x3550($v1)
    ctx->pc = 0x1f90a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13648)));
    // 0x1f90a4: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x1f90a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f90a8: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x1f90a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f90ac: 0x8e43006c  lw          $v1, 0x6C($s2)
    ctx->pc = 0x1f90acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
    // 0x1f90b0: 0x5460009f  bnel        $v1, $zero, . + 4 + (0x9F << 2)
    ctx->pc = 0x1F90B0u;
    {
        const bool branch_taken_0x1f90b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f90b0) {
            ctx->pc = 0x1F90B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F90B0u;
            // 0x1f90b4: 0x92850180  lbu         $a1, 0x180($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9330u;
            goto label_1f9330;
        }
    }
    ctx->pc = 0x1F90B8u;
    // 0x1f90b8: 0x8e420070  lw          $v0, 0x70($s2)
    ctx->pc = 0x1f90b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x1f90bc: 0x5440009c  bnel        $v0, $zero, . + 4 + (0x9C << 2)
    ctx->pc = 0x1F90BCu;
    {
        const bool branch_taken_0x1f90bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f90bc) {
            ctx->pc = 0x1F90C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F90BCu;
            // 0x1f90c0: 0x92850180  lbu         $a1, 0x180($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9330u;
            goto label_1f9330;
        }
    }
    ctx->pc = 0x1F90C4u;
    // 0x1f90c4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1f90c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f90c8: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1f90c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1f90cc: 0x26834f98  addiu       $v1, $s4, 0x4F98
    ctx->pc = 0x1f90ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 20376));
    // 0x1f90d0: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x1f90d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1f90d4: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1f90d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1f90d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f90d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f90dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f90dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f90e0: 0x10400092  beqz        $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x1F90E0u;
    {
        const bool branch_taken_0x1f90e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F90E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F90E0u;
        // 0x1f90e4: 0x240335e3  addiu       $v1, $zero, 0x35E3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13795));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f90e0) {
            ctx->pc = 0x1F932Cu;
            goto label_1f932c;
        }
    }
    ctx->pc = 0x1F90E8u;
    // 0x1f90e8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1f90e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1f90ec: 0x50430090  beql        $v0, $v1, . + 4 + (0x90 << 2)
    ctx->pc = 0x1F90ECu;
    {
        const bool branch_taken_0x1f90ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f90ec) {
            ctx->pc = 0x1F90F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F90ECu;
            // 0x1f90f0: 0x92850180  lbu         $a1, 0x180($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9330u;
            goto label_1f9330;
        }
    }
    ctx->pc = 0x1F90F4u;
    // 0x1f90f4: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x1f90f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1f90f8: 0x2c420100  sltiu       $v0, $v0, 0x100
    ctx->pc = 0x1f90f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1f90fc: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1F90FCu;
    {
        const bool branch_taken_0x1f90fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f90fc) {
            ctx->pc = 0x1F9100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F90FCu;
            // 0x1f9100: 0x92830008  lbu         $v1, 0x8($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9130u;
            goto label_1f9130;
        }
    }
    ctx->pc = 0x1F9104u;
    // 0x1f9104: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1f9104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1f9108: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F9108u;
    {
        const bool branch_taken_0x1f9108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9108) {
            ctx->pc = 0x1F910Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9108u;
            // 0x1f910c: 0x92830008  lbu         $v1, 0x8($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9130u;
            goto label_1f9130;
        }
    }
    ctx->pc = 0x1F9110u;
    // 0x1f9110: 0x92430058  lbu         $v1, 0x58($s2)
    ctx->pc = 0x1f9110u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x1f9114: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9114u;
    {
        const bool branch_taken_0x1f9114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9114u;
        // 0x1f9118: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9114) {
            ctx->pc = 0x1F912Cu;
            goto label_1f912c;
        }
    }
    ctx->pc = 0x1F911Cu;
    // 0x1f911c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f911cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9120: 0xae420068  sw          $v0, 0x68($s2)
    ctx->pc = 0x1f9120u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
    // 0x1f9124: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x1F9124u;
    {
        const bool branch_taken_0x1f9124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9124u;
        // 0x1f9128: 0xa2430058  sb          $v1, 0x58($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 88), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9124) {
            ctx->pc = 0x1F932Cu;
            goto label_1f932c;
        }
    }
    ctx->pc = 0x1F912Cu;
label_1f912c:
    // 0x1f912c: 0x92830008  lbu         $v1, 0x8($s4)
    ctx->pc = 0x1f912cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 8)));
label_1f9130:
    // 0x1f9130: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f9130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1f9134: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x1f9134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x1f9138: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f9138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f913c: 0x268635ac  addiu       $a2, $s4, 0x35AC
    ctx->pc = 0x1f913cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 13740));
    // 0x1f9140: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1f9140u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9144: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f9144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9148: 0x18600069  blez        $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x1F9148u;
    {
        const bool branch_taken_0x1f9148 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1F914Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9148u;
        // 0x1f914c: 0xafa60014  sw          $a2, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9148) {
            ctx->pc = 0x1F92F0u;
            goto label_1f92f0;
        }
    }
    ctx->pc = 0x1F9150u;
    // 0x1f9150: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x1f9150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x1f9154: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1f9154u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9158: 0x24559c38  addiu       $s5, $v0, -0x63C8
    ctx->pc = 0x1f9158u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941752));
    // 0x1f915c: 0x92820014  lbu         $v0, 0x14($s4)
    ctx->pc = 0x1f915cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 20)));
label_1f9160:
    // 0x1f9160: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F9160u;
    {
        const bool branch_taken_0x1f9160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9160) {
            ctx->pc = 0x1F9164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9160u;
            // 0x1f9164: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9168u;
            goto label_1f9168;
        }
    }
    ctx->pc = 0x1F9168u;
label_1f9168:
    // 0x1f9168: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1f9168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f916c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1f916cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f9170: 0x1810  mfhi        $v1
    ctx->pc = 0x1f9170u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1f9174: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x1f9174u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f9178: 0x24030090  addiu       $v1, $zero, 0x90
    ctx->pc = 0x1f9178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1f917c: 0x2631018  mult        $v0, $s3, $v1
    ctx->pc = 0x1f917cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f9180: 0x244235b0  addiu       $v0, $v0, 0x35B0
    ctx->pc = 0x1f9180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13744));
    // 0x1f9184: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F9184u;
    {
        const bool branch_taken_0x1f9184 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9184u;
        // 0x1f9188: 0x2828021  addu        $s0, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9184) {
            ctx->pc = 0x1F91A0u;
            goto label_1f91a0;
        }
    }
    ctx->pc = 0x1F918Cu;
    // 0x1f918c: 0x82420079  lb          $v0, 0x79($s2)
    ctx->pc = 0x1f918cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 121)));
    // 0x1f9190: 0x54400053  bnel        $v0, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x1F9190u;
    {
        const bool branch_taken_0x1f9190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9190) {
            ctx->pc = 0x1F9194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9190u;
            // 0x1f9194: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F92E0u;
            goto label_1f92e0;
        }
    }
    ctx->pc = 0x1F9198u;
    // 0x1f9198: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9198u;
    {
        const bool branch_taken_0x1f9198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F919Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9198u;
        // 0x1f919c: 0x8e02006c  lw          $v0, 0x6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9198) {
            ctx->pc = 0x1F91B0u;
            goto label_1f91b0;
        }
    }
    ctx->pc = 0x1F91A0u;
label_1f91a0:
    // 0x1f91a0: 0x82420079  lb          $v0, 0x79($s2)
    ctx->pc = 0x1f91a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 121)));
    // 0x1f91a4: 0x5040004e  beql        $v0, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x1F91A4u;
    {
        const bool branch_taken_0x1f91a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f91a4) {
            ctx->pc = 0x1F91A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F91A4u;
            // 0x1f91a8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F92E0u;
            goto label_1f92e0;
        }
    }
    ctx->pc = 0x1F91ACu;
    // 0x1f91ac: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x1f91acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_1f91b0:
    // 0x1f91b0: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1F91B0u;
    {
        const bool branch_taken_0x1f91b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F91B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F91B0u;
        // 0x1f91b4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f91b0) {
            ctx->pc = 0x1F92E0u;
            goto label_1f92e0;
        }
    }
    ctx->pc = 0x1F91B8u;
    // 0x1f91b8: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1f91b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1f91bc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F91BCu;
    {
        const bool branch_taken_0x1f91bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F91C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F91BCu;
        // 0x1f91c0: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f91bc) {
            ctx->pc = 0x1F91C8u;
            goto label_1f91c8;
        }
    }
    ctx->pc = 0x1F91C4u;
    // 0x1f91c4: 0xae420068  sw          $v0, 0x68($s2)
    ctx->pc = 0x1f91c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
label_1f91c8:
    // 0x1f91c8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1f91c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1f91cc: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x1f91ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f91d0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1f91d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f91d4: 0x26440080  addiu       $a0, $s2, 0x80
    ctx->pc = 0x1f91d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_1f91d8:
    // 0x1f91d8: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x1f91d8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f91dc: 0x78460010  lq          $a2, 0x10($v0)
    ctx->pc = 0x1f91dcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f91e0: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1f91e0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1f91e4: 0x7c660010  sq          $a2, 0x10($v1)
    ctx->pc = 0x1f91e4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 6));
    // 0x1f91e8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1f91e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1f91ec: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F91ECu;
    {
        const bool branch_taken_0x1f91ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1F91F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F91ECu;
        // 0x1f91f0: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f91ec) {
            ctx->pc = 0x1F91D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f91d8;
        }
    }
    ctx->pc = 0x1F91F4u;
    // 0x1f91f4: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x1f91f4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f91f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f91f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f91fc: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1f91fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1f9200: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1F9200u;
    SET_GPR_U32(ctx, 31, 0x1F9208u);
    ctx->pc = 0x1F9204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9200u;
    // 0x1f9204: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1F9200u, 0x1F9208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9208u;
label_1f9208:
    // 0x1f9208: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1f9208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1f920c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1F920Cu;
    {
        const bool branch_taken_0x1f920c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f920c) {
            ctx->pc = 0x1F9210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F920Cu;
            // 0x1f9210: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9248u;
            goto label_1f9248;
        }
    }
    ctx->pc = 0x1F9214u;
    // 0x1f9214: 0x26110040  addiu       $s1, $s0, 0x40
    ctx->pc = 0x1f9214u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1f9218: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f9218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f921c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f921cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9220: 0xc07dc96  jal         func_1F7258
    ctx->pc = 0x1F9220u;
    SET_GPR_U32(ctx, 31, 0x1F9228u);
    ctx->pc = 0x1F9224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9220u;
    // 0x1f9224: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7258u, 0x1F9220u, 0x1F9228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9228u;
label_1f9228:
    // 0x1f9228: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1f9228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1f922c: 0x2c420168  sltiu       $v0, $v0, 0x168
    ctx->pc = 0x1f922cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)360) ? 1 : 0);
    // 0x1f9230: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9230u;
    {
        const bool branch_taken_0x1f9230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9230u;
        // 0x1f9234: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9230) {
            ctx->pc = 0x1F9244u;
            goto label_1f9244;
        }
    }
    ctx->pc = 0x1F9238u;
    // 0x1f9238: 0xc07dcdc  jal         func_1F7370
    ctx->pc = 0x1F9238u;
    SET_GPR_U32(ctx, 31, 0x1F9240u);
    ctx->pc = 0x1F923Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9238u;
    // 0x1f923c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7370u, 0x1F9238u, 0x1F9240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9240u;
label_1f9240:
    // 0x1f9240: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1f9240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_1f9244:
    // 0x1f9244: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x1f9244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1f9248:
    // 0x1f9248: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F9248u;
    {
        const bool branch_taken_0x1f9248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9248u;
        // 0x1f924c: 0x2403003f  addiu       $v1, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9248) {
            ctx->pc = 0x1F9264u;
            goto label_1f9264;
        }
    }
    ctx->pc = 0x1F9250u;
    // 0x1f9250: 0x9202001c  lbu         $v0, 0x1C($s0)
    ctx->pc = 0x1f9250u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1f9254: 0x2844003f  slti        $a0, $v0, 0x3F
    ctx->pc = 0x1f9254u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)63) ? 1 : 0);
    // 0x1f9258: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x1f9258u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x1f925c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F925Cu;
    {
        const bool branch_taken_0x1f925c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F925Cu;
        // 0x1f9260: 0x38840  sll         $s1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f925c) {
            ctx->pc = 0x1F9268u;
            goto label_1f9268;
        }
    }
    ctx->pc = 0x1F9264u;
label_1f9264:
    // 0x1f9264: 0x9211001c  lbu         $s1, 0x1C($s0)
    ctx->pc = 0x1f9264u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
label_1f9268:
    // 0x1f9268: 0x9207000c  lbu         $a3, 0xC($s0)
    ctx->pc = 0x1f9268u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1f926c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f926cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9270: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1f9270u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f9274: 0xc0806a2  jal         func_201A88
    ctx->pc = 0x1F9274u;
    SET_GPR_U32(ctx, 31, 0x1F927Cu);
    ctx->pc = 0x1F9278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9274u;
    // 0x1f9278: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201A88u, 0x1F9274u, 0x1F927Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F927Cu;
label_1f927c:
    // 0x1f927c: 0xc60c0018  lwc1        $f12, 0x18($s0)
    ctx->pc = 0x1f927cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f9280: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f9280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9284: 0xc080786  jal         func_201E18
    ctx->pc = 0x1F9284u;
    SET_GPR_U32(ctx, 31, 0x1F928Cu);
    ctx->pc = 0x1F9288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9284u;
    // 0x1f9288: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201E18u, 0x1F9284u, 0x1F928Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F928Cu;
label_1f928c:
    // 0x1f928c: 0x322600ff  andi        $a2, $s1, 0xFF
    ctx->pc = 0x1f928cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1f9290: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f9290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9294: 0xc080738  jal         func_201CE0
    ctx->pc = 0x1F9294u;
    SET_GPR_U32(ctx, 31, 0x1F929Cu);
    ctx->pc = 0x1F9298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9294u;
    // 0x1f9298: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201CE0u, 0x1F9294u, 0x1F929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F929Cu;
label_1f929c:
    // 0x1f929c: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1f929cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1f92a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f92a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f92a4: 0xc08075e  jal         func_201D78
    ctx->pc = 0x1F92A4u;
    SET_GPR_U32(ctx, 31, 0x1F92ACu);
    ctx->pc = 0x1F92A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F92A4u;
    // 0x1f92a8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D78u, 0x1F92A4u, 0x1F92ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F92ACu;
label_1f92ac:
    // 0x1f92ac: 0x8e060050  lw          $a2, 0x50($s0)
    ctx->pc = 0x1f92acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1f92b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f92b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f92b4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f92b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f92b8: 0xc080724  jal         func_201C90
    ctx->pc = 0x1F92B8u;
    SET_GPR_U32(ctx, 31, 0x1F92C0u);
    ctx->pc = 0x1F92BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F92B8u;
    // 0x1f92bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C90u, 0x1F92B8u, 0x1F92C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F92C0u;
label_1f92c0:
    // 0x1f92c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f92c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f92c4: 0xc0806c4  jal         func_201B10
    ctx->pc = 0x1F92C4u;
    SET_GPR_U32(ctx, 31, 0x1F92CCu);
    ctx->pc = 0x1F92C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F92C4u;
    // 0x1f92c8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201B10u, 0x1F92C4u, 0x1F92CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F92CCu;
label_1f92cc:
    // 0x1f92cc: 0xae1e006c  sw          $fp, 0x6C($s0)
    ctx->pc = 0x1f92ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 30));
    // 0x1f92d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f92d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f92d4: 0xae5e006c  sw          $fp, 0x6C($s2)
    ctx->pc = 0x1f92d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 30));
    // 0x1f92d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F92D8u;
    {
        const bool branch_taken_0x1f92d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F92DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F92D8u;
        // 0x1f92dc: 0xa2420078  sb          $v0, 0x78($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 120), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f92d8) {
            ctx->pc = 0x1F92F0u;
            goto label_1f92f0;
        }
    }
    ctx->pc = 0x1F92E0u;
label_1f92e0:
    // 0x1f92e0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1f92e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f92e4: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1f92e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f92e8: 0x5440ff9d  bnel        $v0, $zero, . + 4 + (-0x63 << 2)
    ctx->pc = 0x1F92E8u;
    {
        const bool branch_taken_0x1f92e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f92e8) {
            ctx->pc = 0x1F92ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F92E8u;
            // 0x1f92ec: 0x92820014  lbu         $v0, 0x14($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9160;
        }
    }
    ctx->pc = 0x1F92F0u;
label_1f92f0:
    // 0x1f92f0: 0x56e0000f  bnel        $s7, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1F92F0u;
    {
        const bool branch_taken_0x1f92f0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f92f0) {
            ctx->pc = 0x1F92F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F92F0u;
            // 0x1f92f4: 0x92850180  lbu         $a1, 0x180($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9330u;
            goto label_1f9330;
        }
    }
    ctx->pc = 0x1F92F8u;
    // 0x1f92f8: 0x8e450054  lw          $a1, 0x54($s2)
    ctx->pc = 0x1f92f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1f92fc: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1F92FCu;
    {
        const bool branch_taken_0x1f92fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F92FCu;
        // 0x1f9300: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f92fc) {
            ctx->pc = 0x1F932Cu;
            goto label_1f932c;
        }
    }
    ctx->pc = 0x1F9304u;
    // 0x1f9304: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1f9304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f9308: 0x600013  mtlo        $v1
    ctx->pc = 0x1f9308u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x1f930c: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x1f930cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1f9310: 0x70431000  madd        $v0, $v0, $v1
    ctx->pc = 0x1f9310u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f9314: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f9314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f9318: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9318u;
    {
        const bool branch_taken_0x1f9318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F931Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9318u;
        // 0x1f931c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9318) {
            ctx->pc = 0x1F9328u;
            goto label_1f9328;
        }
    }
    ctx->pc = 0x1F9320u;
    // 0x1f9320: 0xc07e654  jal         func_1F9950
    ctx->pc = 0x1F9320u;
    SET_GPR_U32(ctx, 31, 0x1F9328u);
    ctx->pc = 0x1F9324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9320u;
    // 0x1f9324: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1F9320u, 0x1F9328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9328u;
label_1f9328:
    // 0x1f9328: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x1f9328u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
label_1f932c:
    // 0x1f932c: 0x92850180  lbu         $a1, 0x180($s4)
    ctx->pc = 0x1f932cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 384)));
label_1f9330:
    // 0x1f9330: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x1f9330u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1f9334: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x1f9334u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f9338: 0xe51821  addu        $v1, $a3, $a1
    ctx->pc = 0x1f9338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1f933c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1f933cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f9340: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1f9340u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f9344: 0x1440ff4a  bnez        $v0, . + 4 + (-0xB6 << 2)
    ctx->pc = 0x1F9344u;
    {
        const bool branch_taken_0x1f9344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9344u;
        // 0x1f9348: 0x2403002e  addiu       $v1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9344) {
            ctx->pc = 0x1F9070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9070;
        }
    }
    ctx->pc = 0x1F934Cu;
label_1f934c:
    // 0x1f934c: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1f934cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9350: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1f9350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9354: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1f9354u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f9358: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f9358u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f935c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1f935cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f9360: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1f9360u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f9364: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1f9364u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f9368: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1f9368u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f936c: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1f936cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f9370: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x1f9370u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f9374: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1f9374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f9378: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9378u;
        // 0x1f937c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9380u;
}
