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

// Function: sub_00205FE8
// Address: 0x205fe8 - 0x206128
void sub_00205FE8_0x205fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205FE8_0x205fe8");
#endif

    switch (ctx->pc) {
        case 0x206058u: goto label_206058;
        case 0x206068u: goto label_206068;
        case 0x20609cu: goto label_20609c;
        case 0x2060acu: goto label_2060ac;
        default: break;
    }

    ctx->pc = 0x205fe8u;

    // 0x205fe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x205fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x205fec: 0x24a2ffa6  addiu       $v0, $a1, -0x5A
    ctx->pc = 0x205fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967206));
    // 0x205ff0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x205ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x205ff4: 0x2c42005a  sltiu       $v0, $v0, 0x5A
    ctx->pc = 0x205ff4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)90) ? 1 : 0);
    // 0x205ff8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x205FF8u;
    {
        const bool branch_taken_0x205ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205FF8u;
        // 0x205ffc: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205ff8) {
            ctx->pc = 0x206008u;
            goto label_206008;
        }
    }
    ctx->pc = 0x206000u;
    // 0x206000: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x206000u;
    {
        const bool branch_taken_0x206000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206000u;
        // 0x206004: 0x240200b4  addiu       $v0, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206000) {
            ctx->pc = 0x206028u;
            goto label_206028;
        }
    }
    ctx->pc = 0x206008u;
label_206008:
    // 0x206008: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x206008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x20600c: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20600Cu;
    {
        const bool branch_taken_0x20600c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x206010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20600Cu;
        // 0x206010: 0x24a2ff4b  addiu       $v0, $a1, -0xB5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967115));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20600c) {
            ctx->pc = 0x20601Cu;
            goto label_20601c;
        }
    }
    ctx->pc = 0x206014u;
    // 0x206014: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x206014u;
    {
        const bool branch_taken_0x206014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206014u;
        // 0x206018: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206014) {
            ctx->pc = 0x20602Cu;
            goto label_20602c;
        }
    }
    ctx->pc = 0x20601Cu;
label_20601c:
    // 0x20601c: 0x2c420059  sltiu       $v0, $v0, 0x59
    ctx->pc = 0x20601cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
    // 0x206020: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x206020u;
    {
        const bool branch_taken_0x206020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206020u;
        // 0x206024: 0x2402021c  addiu       $v0, $zero, 0x21C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206020) {
            ctx->pc = 0x20602Cu;
            goto label_20602c;
        }
    }
    ctx->pc = 0x206028u;
label_206028:
    // 0x206028: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x206028u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_20602c:
    // 0x20602c: 0x28a200b4  slti        $v0, $a1, 0xB4
    ctx->pc = 0x20602cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)180) ? 1 : 0);
    // 0x206030: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x206030u;
    {
        const bool branch_taken_0x206030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206030u;
        // 0x206034: 0x24100168  addiu       $s0, $zero, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206030) {
            ctx->pc = 0x206078u;
            goto label_206078;
        }
    }
    ctx->pc = 0x206038u;
    // 0x206038: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x206038u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20603c: 0x0  nop
    ctx->pc = 0x20603cu;
    // NOP
    // 0x206040: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x206040u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x206044: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x206044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x206048: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x206048u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x20604c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20604cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206050: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x206050u;
    SET_GPR_U32(ctx, 31, 0x206058u);
    ctx->pc = 0x206054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206050u;
    // 0x206054: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x206050u, 0x206058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206058u;
label_206058:
    // 0x206058: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x206058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x20605c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20605cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x206060: 0xc0e3f5e  jal         func_38FD78
    ctx->pc = 0x206060u;
    SET_GPR_U32(ctx, 31, 0x206068u);
    ctx->pc = 0x206064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206060u;
    // 0x206064: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x206060u, 0x206068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206068u;
label_206068:
    // 0x206068: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x206068u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x20606c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x20606cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x206070: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x206070u;
    {
        const bool branch_taken_0x206070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206070u;
        // 0x206074: 0x28a2005b  slti        $v0, $a1, 0x5B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)91) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x206070) {
            ctx->pc = 0x2060BCu;
            goto label_2060bc;
        }
    }
    ctx->pc = 0x206078u;
label_206078:
    // 0x206078: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x206078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x20607c: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x20607cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x206080: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x206080u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206084: 0x2051023  subu        $v0, $s0, $a1
    ctx->pc = 0x206084u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x206088: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x206088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20608c: 0x0  nop
    ctx->pc = 0x20608cu;
    // NOP
    // 0x206090: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x206090u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x206094: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x206094u;
    SET_GPR_U32(ctx, 31, 0x20609Cu);
    ctx->pc = 0x206098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206094u;
    // 0x206098: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x206094u, 0x20609Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20609Cu;
label_20609c:
    // 0x20609c: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x20609cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x2060a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2060a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2060a4: 0xc0e3f5e  jal         func_38FD78
    ctx->pc = 0x2060A4u;
    SET_GPR_U32(ctx, 31, 0x2060ACu);
    ctx->pc = 0x2060A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2060A4u;
    // 0x2060a8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x2060A4u, 0x2060ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2060ACu;
label_2060ac:
    // 0x2060ac: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2060acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2060b0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2060b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2060b4: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x2060b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2060b8: 0x28a2005b  slti        $v0, $a1, 0x5B
    ctx->pc = 0x2060b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)91) ? 1 : 0);
label_2060bc:
    // 0x2060bc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2060BCu;
    {
        const bool branch_taken_0x2060bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2060C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2060BCu;
        // 0x2060c0: 0x24020168  addiu       $v0, $zero, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2060bc) {
            ctx->pc = 0x2060E4u;
            goto label_2060e4;
        }
    }
    ctx->pc = 0x2060C4u;
    // 0x2060c4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2060c4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2060c8: 0x0  nop
    ctx->pc = 0x2060c8u;
    // NOP
    // 0x2060cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2060ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2060d0: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x2060d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x2060d4: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x2060d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x2060d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2060d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2060dc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2060DCu;
    {
        const bool branch_taken_0x2060dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2060E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2060DCu;
        // 0x2060e0: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2060dc) {
            ctx->pc = 0x206104u;
            goto label_206104;
        }
    }
    ctx->pc = 0x2060E4u;
label_2060e4:
    // 0x2060e4: 0x3c01be2a  lui         $at, 0xBE2A
    ctx->pc = 0x2060e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48682 << 16));
    // 0x2060e8: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x2060e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x2060ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2060ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2060f0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2060f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2060f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2060f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2060f8: 0x0  nop
    ctx->pc = 0x2060f8u;
    // NOP
    // 0x2060fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2060fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x206100: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x206100u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_206104:
    // 0x206104: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x206104u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x206108: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x206108u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x20610c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20610cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206110: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x206110u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206114: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x206114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x206118: 0x3e00008  jr          $ra
    ctx->pc = 0x206118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206118u;
        // 0x20611c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206120u;
    // 0x206120: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x206120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x206124: 0x0  nop
    ctx->pc = 0x206124u;
    // NOP
    ctx->pc = 0x206128u;
}
