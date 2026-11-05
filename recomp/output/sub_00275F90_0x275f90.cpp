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

// Function: sub_00275F90
// Address: 0x275f90 - 0x276478
void sub_00275F90_0x275f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275F90_0x275f90");
#endif

    switch (ctx->pc) {
        case 0x275ff8u: goto label_275ff8;
        case 0x276028u: goto label_276028;
        case 0x276058u: goto label_276058;
        case 0x2760b0u: goto label_2760b0;
        case 0x276130u: goto label_276130;
        case 0x276150u: goto label_276150;
        case 0x2761d8u: goto label_2761d8;
        case 0x276204u: goto label_276204;
        case 0x276228u: goto label_276228;
        case 0x276258u: goto label_276258;
        case 0x276288u: goto label_276288;
        case 0x2762d8u: goto label_2762d8;
        case 0x276360u: goto label_276360;
        case 0x276380u: goto label_276380;
        case 0x276408u: goto label_276408;
        case 0x276434u: goto label_276434;
        default: break;
    }

    ctx->pc = 0x275f90u;

    // 0x275f90: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x275f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x275f94: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x275f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x275f98: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x275f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x275f9c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x275f9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275fa0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x275fa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275fa4: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x275fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x275fa8: 0x24424890  addiu       $v0, $v0, 0x4890
    ctx->pc = 0x275fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18576));
    // 0x275fac: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x275facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x275fb0: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x275fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x275fb4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x275fb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275fb8: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x275fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x275fbc: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x275fbcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x275fc0: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x275fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x275fc4: 0x27b00018  addiu       $s0, $sp, 0x18
    ctx->pc = 0x275fc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x275fc8: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x275fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
    // 0x275fcc: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x275fccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x275fd0: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x275fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x275fd4: 0x27b60040  addiu       $s6, $sp, 0x40
    ctx->pc = 0x275fd4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x275fd8: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x275fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x275fdc: 0x3c1e004b  lui         $fp, 0x4B
    ctx->pc = 0x275fdcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)75 << 16));
    // 0x275fe0: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x275fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x275fe4: 0x27b70048  addiu       $s7, $sp, 0x48
    ctx->pc = 0x275fe4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x275fe8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x275fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x275fec: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x275fecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x275ff0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x275ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x275ff4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x275ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_275ff8:
    // 0x275ff8: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x275ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x275ffc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x275ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x276000: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x276000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x276004: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x276004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x276008: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x276008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x27600c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27600cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x276010: 0x14440031  bne         $v0, $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x276010u;
    {
        const bool branch_taken_0x276010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x276014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276010u;
        // 0x276014: 0x28a60010  slti        $a2, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x276010) {
            ctx->pc = 0x2760D8u;
            goto label_2760d8;
        }
    }
    ctx->pc = 0x276018u;
    // 0x276018: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x276018u;
    {
        const bool branch_taken_0x276018 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x27601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276018u;
        // 0x27601c: 0xace50004  sw          $a1, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276018) {
            ctx->pc = 0x275FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275ff8;
        }
    }
    ctx->pc = 0x276020u;
    // 0x276020: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x276020u;
    {
        const bool branch_taken_0x276020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276020u;
        // 0x276024: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276020) {
            ctx->pc = 0x2760DCu;
            goto label_2760dc;
        }
    }
    ctx->pc = 0x276028u;
label_276028:
    // 0x276028: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x276028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27602c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x27602cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x276030: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x276030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x276034: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x276034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x276038: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x276038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27603c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x27603cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x276040: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x276040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x276044: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x276044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276048: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x276048u;
    {
        const bool branch_taken_0x276048 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276048u;
        // 0x27604c: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276048) {
            ctx->pc = 0x27605Cu;
            goto label_27605c;
        }
    }
    ctx->pc = 0x276050u;
    // 0x276050: 0xc09d7b6  jal         func_275ED8
    ctx->pc = 0x276050u;
    SET_GPR_U32(ctx, 31, 0x276058u);
    ctx->pc = 0x276054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276050u;
    // 0x276054: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275ED8u, 0x276050u, 0x276058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276058u;
label_276058:
    // 0x276058: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x276058u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_27605c:
    // 0x27605c: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x27605cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276060: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x276060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x276064: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x276064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x276068: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x276068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x27606c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x27606cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276070: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x276070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x276074: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x276074u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x276078: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x276078u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x27607c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x27607cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x276080: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x276080u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x276084: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x276084u;
    {
        const bool branch_taken_0x276084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x276088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276084u;
        // 0x276088: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276084) {
            ctx->pc = 0x276098u;
            goto label_276098;
        }
    }
    ctx->pc = 0x27608Cu;
    // 0x27608c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x27608cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x276090: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x276090u;
    {
        const bool branch_taken_0x276090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276090u;
        // 0x276094: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276090) {
            ctx->pc = 0x2760D8u;
            goto label_2760d8;
        }
    }
    ctx->pc = 0x276098u;
label_276098:
    // 0x276098: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x276098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x27609c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x27609cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2760a0: 0x28430010  slti        $v1, $v0, 0x10
    ctx->pc = 0x2760a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2760a4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2760A4u;
    {
        const bool branch_taken_0x2760a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2760A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2760A4u;
        // 0x2760a8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2760a4) {
            ctx->pc = 0x2760D8u;
            goto label_2760d8;
        }
    }
    ctx->pc = 0x2760ACu;
    // 0x2760ac: 0x0  nop
    ctx->pc = 0x2760acu;
    // NOP
label_2760b0:
    // 0x2760b0: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x2760b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2760b4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2760b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2760b8: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2760b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2760bc: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2760bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2760c0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2760c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2760c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2760c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2760c8: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2760C8u;
    {
        const bool branch_taken_0x2760c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2760CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2760C8u;
        // 0x2760cc: 0x28a60010  slti        $a2, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2760c8) {
            ctx->pc = 0x2760D8u;
            goto label_2760d8;
        }
    }
    ctx->pc = 0x2760D0u;
    // 0x2760d0: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2760D0u;
    {
        const bool branch_taken_0x2760d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2760D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2760D0u;
        // 0x2760d4: 0xad050004  sw          $a1, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2760d0) {
            ctx->pc = 0x2760B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2760b0;
        }
    }
    ctx->pc = 0x2760D8u;
label_2760d8:
    // 0x2760d8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2760d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2760dc:
    // 0x2760dc: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2760DCu;
    {
        const bool branch_taken_0x2760dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2760E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2760DCu;
        // 0x2760e0: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2760dc) {
            ctx->pc = 0x276114u;
            goto label_276114;
        }
    }
    ctx->pc = 0x2760E4u;
    // 0x2760e4: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x2760e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2760e8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2760E8u;
    {
        const bool branch_taken_0x2760e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2760ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2760E8u;
        // 0x2760ec: 0x31900  sll         $v1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2760e8) {
            ctx->pc = 0x276114u;
            goto label_276114;
        }
    }
    ctx->pc = 0x2760F0u;
    // 0x2760f0: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x2760f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2760f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2760f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2760f8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2760f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2760fc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2760fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x276100: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x276100u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x276104: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x276104u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x276108: 0xa2282b  sltu        $a1, $a1, $v0
    ctx->pc = 0x276108u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x27610c: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x27610Cu;
    {
        const bool branch_taken_0x27610c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x276110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27610Cu;
        // 0x276110: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27610c) {
            ctx->pc = 0x276118u;
            goto label_276118;
        }
    }
    ctx->pc = 0x276114u;
label_276114:
    // 0x276114: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x276114u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_276118:
    // 0x276118: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x276118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27611c: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x27611Cu;
    {
        const bool branch_taken_0x27611c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x276120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27611Cu;
        // 0x276120: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27611c) {
            ctx->pc = 0x276028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276028;
        }
    }
    ctx->pc = 0x276124u;
    // 0x276124: 0x26324890  addiu       $s2, $s1, 0x4890
    ctx->pc = 0x276124u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 18576));
    // 0x276128: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x276128u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27612c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x27612cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_276130:
    // 0x276130: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x276130u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x276134: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x276134u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276138: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x276138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x27613c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x27613cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276140: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x276140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x276144: 0x10a60008  beq         $a1, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x276144u;
    {
        const bool branch_taken_0x276144 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x276148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276144u;
        // 0x276148: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276144) {
            ctx->pc = 0x276168u;
            goto label_276168;
        }
    }
    ctx->pc = 0x27614Cu;
    // 0x27614c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x27614cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_276150:
    // 0x276150: 0x0  nop
    ctx->pc = 0x276150u;
    // NOP
    // 0x276154: 0x0  nop
    ctx->pc = 0x276154u;
    // NOP
    // 0x276158: 0x0  nop
    ctx->pc = 0x276158u;
    // NOP
    // 0x27615c: 0x0  nop
    ctx->pc = 0x27615cu;
    // NOP
    // 0x276160: 0x1486fffb  bne         $a0, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x276160u;
    {
        const bool branch_taken_0x276160 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x276164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276160u;
        // 0x276164: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276160) {
            ctx->pc = 0x276150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276150;
        }
    }
    ctx->pc = 0x276168u;
label_276168:
    // 0x276168: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x276168u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x27616c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x27616cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x276170: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x276170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x276174: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x276174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x276178: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x276178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x27617c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27617cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x276180: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x276180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x276184: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x276184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276188: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x276188u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x27618c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x27618cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x276190: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x276190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x276194: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x276194u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x276198: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x276198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x27619c: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x27619cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x2761a0: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x2761a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x2761a4: 0x6862000f  ldl         $v0, 0xF($v1)
    ctx->pc = 0x2761a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2761a8: 0x6c620008  ldr         $v0, 0x8($v1)
    ctx->pc = 0x2761a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2761ac: 0xb3a2001f  sdl         $v0, 0x1F($sp)
    ctx->pc = 0x2761acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2761b0: 0xb7a20018  sdr         $v0, 0x18($sp)
    ctx->pc = 0x2761b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2761b4: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x2761b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2761b8: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x2761b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2761bc: 0xb062000f  sdl         $v0, 0xF($v1)
    ctx->pc = 0x2761bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2761c0: 0xb4620008  sdr         $v0, 0x8($v1)
    ctx->pc = 0x2761c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2761c4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2761c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2761c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2761c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2761cc: 0x50430009  beql        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2761CCu;
    {
        const bool branch_taken_0x2761cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2761cc) {
            ctx->pc = 0x2761D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2761CCu;
            // 0x2761d0: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2761F4u;
            goto label_2761f4;
        }
    }
    ctx->pc = 0x2761D4u;
    // 0x2761d4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2761d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_2761d8:
    // 0x2761d8: 0x0  nop
    ctx->pc = 0x2761d8u;
    // NOP
    // 0x2761dc: 0x0  nop
    ctx->pc = 0x2761dcu;
    // NOP
    // 0x2761e0: 0x0  nop
    ctx->pc = 0x2761e0u;
    // NOP
    // 0x2761e4: 0x0  nop
    ctx->pc = 0x2761e4u;
    // NOP
    // 0x2761e8: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2761E8u;
    {
        const bool branch_taken_0x2761e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2761ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2761E8u;
        // 0x2761ec: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2761e8) {
            ctx->pc = 0x2761D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2761d8;
        }
    }
    ctx->pc = 0x2761F0u;
    // 0x2761f0: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2761f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2761f4:
    // 0x2761f4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2761F4u;
    {
        const bool branch_taken_0x2761f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2761F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2761F4u;
        // 0x2761f8: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2761f4) {
            ctx->pc = 0x276208u;
            goto label_276208;
        }
    }
    ctx->pc = 0x2761FCu;
    // 0x2761fc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2761FCu;
    SET_GPR_U32(ctx, 31, 0x276204u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2761FCu, 0x276204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276204u;
label_276204:
    // 0x276204: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x276204u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_276208:
    // 0x276208: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x276208u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x27620c: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x27620Cu;
    {
        const bool branch_taken_0x27620c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x276210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27620Cu;
        // 0x276210: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27620c) {
            ctx->pc = 0x276130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276130;
        }
    }
    ctx->pc = 0x276214u;
    // 0x276214: 0x27c24790  addiu       $v0, $fp, 0x4790
    ctx->pc = 0x276214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 18320));
    // 0x276218: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x276218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x27621c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x27621cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x276220: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x276220u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276224: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x276224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_276228:
    // 0x276228: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x276228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x27622c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x27622cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x276230: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x276230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x276234: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x276234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x276238: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x276238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x27623c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27623cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x276240: 0x1444002f  bne         $v0, $a0, . + 4 + (0x2F << 2)
    ctx->pc = 0x276240u;
    {
        const bool branch_taken_0x276240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x276244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276240u;
        // 0x276244: 0x28a60010  slti        $a2, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x276240) {
            ctx->pc = 0x276300u;
            goto label_276300;
        }
    }
    ctx->pc = 0x276248u;
    // 0x276248: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x276248u;
    {
        const bool branch_taken_0x276248 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x27624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276248u;
        // 0x27624c: 0xafa50014  sw          $a1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276248) {
            ctx->pc = 0x276228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276228;
        }
    }
    ctx->pc = 0x276250u;
    // 0x276250: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x276250u;
    {
        const bool branch_taken_0x276250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276250u;
        // 0x276254: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276250) {
            ctx->pc = 0x276304u;
            goto label_276304;
        }
    }
    ctx->pc = 0x276258u;
label_276258:
    // 0x276258: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x276258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27625c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x27625cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x276260: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x276260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x276264: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x276264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x276268: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x276268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27626c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x27626cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x276270: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x276270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x276274: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x276274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276278: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x276278u;
    {
        const bool branch_taken_0x276278 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276278u;
        // 0x27627c: 0x8fa60014  lw          $a2, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276278) {
            ctx->pc = 0x27628Cu;
            goto label_27628c;
        }
    }
    ctx->pc = 0x276280u;
    // 0x276280: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x276280u;
    SET_GPR_U32(ctx, 31, 0x276288u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x276280u, 0x276288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276288u;
label_276288:
    // 0x276288: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x276288u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_27628c:
    // 0x27628c: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x27628cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276290: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x276290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x276294: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x276294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x276298: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x276298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x27629c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x27629cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2762a0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2762a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2762a4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2762a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2762a8: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x2762a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x2762ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2762acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2762b0: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x2762b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2762b4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2762B4u;
    {
        const bool branch_taken_0x2762b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2762B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2762B4u;
        // 0x2762b8: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2762b4) {
            ctx->pc = 0x2762C4u;
            goto label_2762c4;
        }
    }
    ctx->pc = 0x2762BCu;
    // 0x2762bc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2762BCu;
    {
        const bool branch_taken_0x2762bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2762C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2762BCu;
        // 0x2762c0: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2762bc) {
            ctx->pc = 0x276300u;
            goto label_276300;
        }
    }
    ctx->pc = 0x2762C4u;
label_2762c4:
    // 0x2762c4: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x2762c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2762c8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2762c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2762cc: 0x28430010  slti        $v1, $v0, 0x10
    ctx->pc = 0x2762ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2762d0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2762D0u;
    {
        const bool branch_taken_0x2762d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2762D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2762D0u;
        // 0x2762d4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2762d0) {
            ctx->pc = 0x276300u;
            goto label_276300;
        }
    }
    ctx->pc = 0x2762D8u;
label_2762d8:
    // 0x2762d8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2762d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2762dc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2762dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2762e0: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2762e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2762e4: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2762e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2762e8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2762e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2762ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2762ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2762f0: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2762F0u;
    {
        const bool branch_taken_0x2762f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2762F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2762F0u;
        // 0x2762f4: 0x28a60010  slti        $a2, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2762f0) {
            ctx->pc = 0x276300u;
            goto label_276300;
        }
    }
    ctx->pc = 0x2762F8u;
    // 0x2762f8: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2762F8u;
    {
        const bool branch_taken_0x2762f8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2762FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2762F8u;
        // 0x2762fc: 0xafa50014  sw          $a1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2762f8) {
            ctx->pc = 0x2762D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2762d8;
        }
    }
    ctx->pc = 0x276300u;
label_276300:
    // 0x276300: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x276300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_276304:
    // 0x276304: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x276304u;
    {
        const bool branch_taken_0x276304 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x276308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276304u;
        // 0x276308: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276304) {
            ctx->pc = 0x27633Cu;
            goto label_27633c;
        }
    }
    ctx->pc = 0x27630Cu;
    // 0x27630c: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x27630cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x276310: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x276310u;
    {
        const bool branch_taken_0x276310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x276314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276310u;
        // 0x276314: 0x31900  sll         $v1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276310) {
            ctx->pc = 0x27633Cu;
            goto label_27633c;
        }
    }
    ctx->pc = 0x276318u;
    // 0x276318: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x276318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27631c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27631cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x276320: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x276320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x276324: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x276324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x276328: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x276328u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27632c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x27632cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x276330: 0xa2282b  sltu        $a1, $a1, $v0
    ctx->pc = 0x276330u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x276334: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x276334u;
    {
        const bool branch_taken_0x276334 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x276338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276334u;
        // 0x276338: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276334) {
            ctx->pc = 0x276340u;
            goto label_276340;
        }
    }
    ctx->pc = 0x27633Cu;
label_27633c:
    // 0x27633c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27633cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_276340:
    // 0x276340: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x276340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x276344: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x276344u;
    {
        const bool branch_taken_0x276344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x276348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276344u;
        // 0x276348: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276344) {
            ctx->pc = 0x276258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276258;
        }
    }
    ctx->pc = 0x27634Cu;
    // 0x27634c: 0x27d24790  addiu       $s2, $fp, 0x4790
    ctx->pc = 0x27634cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 18320));
    // 0x276350: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x276350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276354: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x276354u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276358: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x276358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x27635c: 0x0  nop
    ctx->pc = 0x27635cu;
    // NOP
label_276360:
    // 0x276360: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x276360u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x276364: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x276364u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276368: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x276368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x27636c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x27636cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276370: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x276370u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x276374: 0x10a60008  beq         $a1, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x276374u;
    {
        const bool branch_taken_0x276374 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x276378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276374u;
        // 0x276378: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276374) {
            ctx->pc = 0x276398u;
            goto label_276398;
        }
    }
    ctx->pc = 0x27637Cu;
    // 0x27637c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x27637cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_276380:
    // 0x276380: 0x0  nop
    ctx->pc = 0x276380u;
    // NOP
    // 0x276384: 0x0  nop
    ctx->pc = 0x276384u;
    // NOP
    // 0x276388: 0x0  nop
    ctx->pc = 0x276388u;
    // NOP
    // 0x27638c: 0x0  nop
    ctx->pc = 0x27638cu;
    // NOP
    // 0x276390: 0x1486fffb  bne         $a0, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x276390u;
    {
        const bool branch_taken_0x276390 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x276394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276390u;
        // 0x276394: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276390) {
            ctx->pc = 0x276380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276380;
        }
    }
    ctx->pc = 0x276398u;
label_276398:
    // 0x276398: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x276398u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x27639c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x27639cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2763a0: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x2763a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x2763a4: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x2763a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x2763a8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2763a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2763ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2763acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2763b0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2763b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2763b4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2763b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2763b8: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x2763b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2763bc: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2763bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x2763c0: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x2763c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
    // 0x2763c4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x2763c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x2763c8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2763c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2763cc: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x2763ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x2763d0: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x2763d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x2763d4: 0x6862000f  ldl         $v0, 0xF($v1)
    ctx->pc = 0x2763d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2763d8: 0x6c620008  ldr         $v0, 0x8($v1)
    ctx->pc = 0x2763d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2763dc: 0xb3a2004f  sdl         $v0, 0x4F($sp)
    ctx->pc = 0x2763dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2763e0: 0xb7a20048  sdr         $v0, 0x48($sp)
    ctx->pc = 0x2763e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2763e4: 0x6ba20067  ldl         $v0, 0x67($sp)
    ctx->pc = 0x2763e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2763e8: 0x6fa20060  ldr         $v0, 0x60($sp)
    ctx->pc = 0x2763e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2763ec: 0xb062000f  sdl         $v0, 0xF($v1)
    ctx->pc = 0x2763ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2763f0: 0xb4620008  sdr         $v0, 0x8($v1)
    ctx->pc = 0x2763f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2763f4: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x2763f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2763f8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2763f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2763fc: 0x50430009  beql        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2763FCu;
    {
        const bool branch_taken_0x2763fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2763fc) {
            ctx->pc = 0x276400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2763FCu;
            // 0x276400: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276424u;
            goto label_276424;
        }
    }
    ctx->pc = 0x276404u;
    // 0x276404: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x276404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_276408:
    // 0x276408: 0x0  nop
    ctx->pc = 0x276408u;
    // NOP
    // 0x27640c: 0x0  nop
    ctx->pc = 0x27640cu;
    // NOP
    // 0x276410: 0x0  nop
    ctx->pc = 0x276410u;
    // NOP
    // 0x276414: 0x0  nop
    ctx->pc = 0x276414u;
    // NOP
    // 0x276418: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x276418u;
    {
        const bool branch_taken_0x276418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x27641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276418u;
        // 0x27641c: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276418) {
            ctx->pc = 0x276408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276408;
        }
    }
    ctx->pc = 0x276420u;
    // 0x276420: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x276420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_276424:
    // 0x276424: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x276424u;
    {
        const bool branch_taken_0x276424 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x276428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276424u;
        // 0x276428: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276424) {
            ctx->pc = 0x276438u;
            goto label_276438;
        }
    }
    ctx->pc = 0x27642Cu;
    // 0x27642c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x27642Cu;
    SET_GPR_U32(ctx, 31, 0x276434u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x27642Cu, 0x276434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276434u;
label_276434:
    // 0x276434: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x276434u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_276438:
    // 0x276438: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x276438u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x27643c: 0x5440ffc8  bnel        $v0, $zero, . + 4 + (-0x38 << 2)
    ctx->pc = 0x27643Cu;
    {
        const bool branch_taken_0x27643c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27643c) {
            ctx->pc = 0x276440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27643Cu;
            // 0x276440: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276360;
        }
    }
    ctx->pc = 0x276444u;
    // 0x276444: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x276444u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x276448: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x276448u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x27644c: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x27644cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x276450: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x276450u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x276454: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x276454u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x276458: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x276458u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x27645c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x27645cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x276460: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x276460u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x276464: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x276464u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x276468: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x276468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x27646c: 0x3e00008  jr          $ra
    ctx->pc = 0x27646Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27646Cu;
        // 0x276470: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27646Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276474u;
    // 0x276474: 0x0  nop
    ctx->pc = 0x276474u;
    // NOP
    ctx->pc = 0x276478u;
}
