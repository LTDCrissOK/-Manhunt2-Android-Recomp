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

// Function: sub_0038AF60
// Address: 0x38af60 - 0x38b3e8
void sub_0038AF60_0x38af60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038AF60_0x38af60");
#endif

    ctx->pc = 0x38af60u;

    // 0x38af60: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x38af60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x38af64: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x38af64u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38af68: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x38af68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x38af6c: 0x25e306cc  addiu       $v1, $t7, 0x6CC
    ctx->pc = 0x38af6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), 1740));
    // 0x38af70: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x38af70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x38af74: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x38af74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x38af78: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x38af78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x38af7c: 0x120702d  daddu       $t6, $t1, $zero
    ctx->pc = 0x38af7cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38af80: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x38af80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x38af84: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x38af84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38af88: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x38af88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x38af8c: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x38af8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38af90: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x38af90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x38af94: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x38af94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38af98: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x38af98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x38af9c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x38af9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x38afa0: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x38afa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x38afa4: 0x8df30820  lw          $s3, 0x820($t7)
    ctx->pc = 0x38afa4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2080)));
    // 0x38afa8: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x38afa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x38afac: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x38afacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x38afb0: 0x8fbe00b0  lw          $fp, 0xB0($sp)
    ctx->pc = 0x38afb0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x38afb4: 0x8de40830  lw          $a0, 0x830($t7)
    ctx->pc = 0x38afb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2096)));
    // 0x38afb8: 0xafaa0004  sw          $t2, 0x4($sp)
    ctx->pc = 0x38afb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 10));
    // 0x38afbc: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x38afbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x38afc0: 0x1e5043  sra         $t2, $fp, 1
    ctx->pc = 0x38afc0u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 30), 1));
    // 0x38afc4: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x38afc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x38afc8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38afc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38afcc: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x38afccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x38afd0: 0x244205a0  addiu       $v0, $v0, 0x5A0
    ctx->pc = 0x38afd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
    // 0x38afd4: 0x8c790000  lw          $t9, 0x0($v1)
    ctx->pc = 0x38afd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38afd8: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x38afd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x38afdc: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x38afdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x38afe0: 0x3242018  mult        $a0, $t9, $a0
    ctx->pc = 0x38afe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x38afe4: 0x8fb800c0  lw          $t8, 0xC0($sp)
    ctx->pc = 0x38afe4u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x38afe8: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x38afe8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x38afec: 0x8fb500b8  lw          $s5, 0xB8($sp)
    ctx->pc = 0x38afecu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x38aff0: 0x248300b8  addiu       $v1, $a0, 0xB8
    ctx->pc = 0x38aff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 184));
    // 0x38aff4: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x38aff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x38aff8: 0x436821  addu        $t5, $v0, $v1
    ctx->pc = 0x38aff8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38affc: 0x13000005  beqz        $t8, . + 4 + (0x5 << 2)
    ctx->pc = 0x38AFFCu;
    {
        const bool branch_taken_0x38affc = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AFFCu;
        // 0x38b000: 0x446021  addu        $t4, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38affc) {
            ctx->pc = 0x38B014u;
            goto label_38b014;
        }
    }
    ctx->pc = 0x38B004u;
    // 0x38b004: 0x151043  sra         $v0, $s5, 1
    ctx->pc = 0x38b004u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 1));
    // 0x38b008: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x38b008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x38b00c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x38B00Cu;
    {
        const bool branch_taken_0x38b00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B00Cu;
        // 0x38b010: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b00c) {
            ctx->pc = 0x38B01Cu;
            goto label_38b01c;
        }
    }
    ctx->pc = 0x38B014u;
label_38b014:
    // 0x38b014: 0x151043  sra         $v0, $s5, 1
    ctx->pc = 0x38b014u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 1));
    // 0x38b018: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x38b018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_38b01c:
    // 0x38b01c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x38b01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x38b020: 0x435821  addu        $t3, $v0, $v1
    ctx->pc = 0x38b020u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38b024: 0x8ca70010  lw          $a3, 0x10($a1)
    ctx->pc = 0x38b024u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x38b028: 0xab103  sra         $s6, $t2, 4
    ctx->pc = 0x38b028u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 10), 4));
    // 0x38b02c: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x38b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x38b030: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x38b030u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38b034: 0x2c71818  mult        $v1, $s6, $a3
    ctx->pc = 0x38b034u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x38b038: 0x72621018  mult1       $v0, $s3, $v0
    ctx->pc = 0x38b038u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x38b03c: 0xbb903  sra         $s7, $t3, 4
    ctx->pc = 0x38b03cu;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 11), 4));
    // 0x38b040: 0x194080  sll         $t0, $t9, 2
    ctx->pc = 0x38b040u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 25), 2));
    // 0x38b044: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x38b044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x38b048: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x38b048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x38b04c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x38b04cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38b050: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x38b050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x38b054: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x38b054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x38b058: 0x664018  mult        $t0, $v1, $a2
    ctx->pc = 0x38b058u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x38b05c: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x38b05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x38b060: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x38b060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x38b064: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x38b064u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x38b068: 0x663818  mult        $a3, $v1, $a2
    ctx->pc = 0x38b068u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x38b06c: 0x162900  sll         $a1, $s6, 4
    ctx->pc = 0x38b06cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x38b070: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x38b070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x38b074: 0x1452823  subu        $a1, $t2, $a1
    ctx->pc = 0x38b074u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x38b078: 0x1289821  addu        $s3, $t1, $t0
    ctx->pc = 0x38b078u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x38b07c: 0x32aa0001  andi        $t2, $s5, 0x1
    ctx->pc = 0x38b07cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x38b080: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x38b080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x38b084: 0xad850004  sw          $a1, 0x4($t4)
    ctx->pc = 0x38b084u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 5));
    // 0x38b088: 0xe9a021  addu        $s4, $a3, $t1
    ctx->pc = 0x38b088u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x38b08c: 0x171900  sll         $v1, $s7, 4
    ctx->pc = 0x38b08cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x38b090: 0x1e23821  addu        $a3, $t7, $v0
    ctx->pc = 0x38b090u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x38b094: 0x1635823  subu        $t3, $t3, $v1
    ctx->pc = 0x38b094u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x38b098: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x38b098u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b09c: 0xacf305a8  sw          $s3, 0x5A8($a3)
    ctx->pc = 0x38b09cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1448), GPR_U32(ctx, 19));
    // 0x38b0a0: 0x33c70001  andi        $a3, $fp, 0x1
    ctx->pc = 0x38b0a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x38b0a4: 0xac5405b8  sw          $s4, 0x5B8($v0)
    ctx->pc = 0x38b0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1464), GPR_U32(ctx, 20));
    // 0x38b0a8: 0x1140000f  beqz        $t2, . + 4 + (0xF << 2)
    ctx->pc = 0x38B0A8u;
    {
        const bool branch_taken_0x38b0a8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B0A8u;
        // 0x38b0ac: 0xad840000  sw          $a0, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b0a8) {
            ctx->pc = 0x38B0E8u;
            goto label_38b0e8;
        }
    }
    ctx->pc = 0x38B0B0u;
    // 0x38b0b0: 0x30e1004  sllv        $v0, $t6, $t8
    ctx->pc = 0x38b0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 24) & 0x1F));
    // 0x38b0b4: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x38b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x38b0b8: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x38b0b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x38b0bc: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x38B0BCu;
    {
        const bool branch_taken_0x38b0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38b0bc) {
            ctx->pc = 0x38B0C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38B0BCu;
            // 0x38b0c0: 0xad8e0008  sw          $t6, 0x8($t4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38B11Cu;
            goto label_38b11c;
        }
    }
    ctx->pc = 0x38B0C4u;
    // 0x38b0c4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x38b0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x38b0c8: 0x30b1807  srav        $v1, $t3, $t8
    ctx->pc = 0x38b0c8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), GPR_U32(ctx, 24) & 0x1F));
    // 0x38b0cc: 0x3021007  srav        $v0, $v0, $t8
    ctx->pc = 0x38b0ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
    // 0x38b0d0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x38b0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38b0d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x38b0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x38b0d8: 0x1c21823  subu        $v1, $t6, $v0
    ctx->pc = 0x38b0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x38b0dc: 0xad820008  sw          $v0, 0x8($t4)
    ctx->pc = 0x38b0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 2));
    // 0x38b0e0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x38B0E0u;
    {
        const bool branch_taken_0x38b0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B0E0u;
        // 0x38b0e4: 0xad83000c  sw          $v1, 0xC($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b0e0) {
            ctx->pc = 0x38B120u;
            goto label_38b120;
        }
    }
    ctx->pc = 0x38B0E8u;
label_38b0e8:
    // 0x38b0e8: 0x30e1004  sllv        $v0, $t6, $t8
    ctx->pc = 0x38b0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 24) & 0x1F));
    // 0x38b0ec: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x38b0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x38b0f0: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x38b0f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x38b0f4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x38B0F4u;
    {
        const bool branch_taken_0x38b0f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38b0f4) {
            ctx->pc = 0x38B0F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38B0F4u;
            // 0x38b0f8: 0xad8e0008  sw          $t6, 0x8($t4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38B11Cu;
            goto label_38b11c;
        }
    }
    ctx->pc = 0x38B0FCu;
    // 0x38b0fc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x38b0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x38b100: 0x30b1807  srav        $v1, $t3, $t8
    ctx->pc = 0x38b100u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), GPR_U32(ctx, 24) & 0x1F));
    // 0x38b104: 0x3021007  srav        $v0, $v0, $t8
    ctx->pc = 0x38b104u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
    // 0x38b108: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x38b108u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38b10c: 0x1c22023  subu        $a0, $t6, $v0
    ctx->pc = 0x38b10cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x38b110: 0xad820008  sw          $v0, 0x8($t4)
    ctx->pc = 0x38b110u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 2));
    // 0x38b114: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38B114u;
    {
        const bool branch_taken_0x38b114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B114u;
        // 0x38b118: 0xad84000c  sw          $a0, 0xC($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b114) {
            ctx->pc = 0x38B120u;
            goto label_38b120;
        }
    }
    ctx->pc = 0x38B11Cu;
label_38b11c:
    // 0x38b11c: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x38b11cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
label_38b120:
    // 0x38b120: 0x8de2087c  lw          $v0, 0x87C($t7)
    ctx->pc = 0x38b120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2172)));
    // 0x38b124: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x38B124u;
    {
        const bool branch_taken_0x38b124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38B128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B124u;
        // 0x38b128: 0xb1100  sll         $v0, $t3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b124) {
            ctx->pc = 0x38B168u;
            goto label_38b168;
        }
    }
    ctx->pc = 0x38B12Cu;
    // 0x38b12c: 0x8de60820  lw          $a2, 0x820($t7)
    ctx->pc = 0x38b12cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2080)));
    // 0x38b130: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x38b130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x38b134: 0x24030600  addiu       $v1, $zero, 0x600
    ctx->pc = 0x38b134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x38b138: 0xb2900  sll         $a1, $t3, 4
    ctx->pc = 0x38b138u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x38b13c: 0xc22018  mult        $a0, $a2, $v0
    ctx->pc = 0x38b13cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x38b140: 0x3231818  mult        $v1, $t9, $v1
    ctx->pc = 0x38b140u;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x38b144: 0x8f3021  addu        $a2, $a0, $t7
    ctx->pc = 0x38b144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x38b148: 0x8cc205a0  lw          $v0, 0x5A0($a2)
    ctx->pc = 0x38b148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1440)));
    // 0x38b14c: 0x24a40300  addiu       $a0, $a1, 0x300
    ctx->pc = 0x38b14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 768));
    // 0x38b150: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x38b150u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38b154: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x38b154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x38b158: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x38b158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x38b15c: 0xad850014  sw          $a1, 0x14($t4)
    ctx->pc = 0x38b15cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 20), GPR_U32(ctx, 5));
    // 0x38b160: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x38B160u;
    {
        const bool branch_taken_0x38b160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B160u;
        // 0x38b164: 0xad840018  sw          $a0, 0x18($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b160) {
            ctx->pc = 0x38B17Cu;
            goto label_38b17c;
        }
    }
    ctx->pc = 0x38B168u;
label_38b168:
    // 0x38b168: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x38b168u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b16c: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x38b16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x38b170: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x38b170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x38b174: 0xad830018  sw          $v1, 0x18($t4)
    ctx->pc = 0x38b174u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 24), GPR_U32(ctx, 3));
    // 0x38b178: 0xad820014  sw          $v0, 0x14($t4)
    ctx->pc = 0x38b178u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 20), GPR_U32(ctx, 2));
label_38b17c:
    // 0x38b17c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x38b17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x38b180: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x38b180u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x38b184: 0x1e27c2  srl         $a0, $fp, 31
    ctx->pc = 0x38b184u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 30), 31));
    // 0x38b188: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x38b188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x38b18c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x38b18cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x38b190: 0x3c42021  addu        $a0, $fp, $a0
    ctx->pc = 0x38b190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x38b194: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x38b194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x38b198: 0x4c843  sra         $t9, $a0, 1
    ctx->pc = 0x38b198u;
    SET_GPR_S32(ctx, 25, SRA32(GPR_S32(ctx, 4), 1));
    // 0x38b19c: 0x1517c2  srl         $v0, $s5, 31
    ctx->pc = 0x38b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
    // 0x38b1a0: 0x3052804  sllv        $a1, $a1, $t8
    ctx->pc = 0x38b1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 24) & 0x1F));
    // 0x38b1a4: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x38b1a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x38b1a8: 0x2a23021  addu        $a2, $s5, $v0
    ctx->pc = 0x38b1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x38b1ac: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x38b1acu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x38b1b0: 0x6a843  sra         $s5, $a2, 1
    ctx->pc = 0x38b1b0u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 6), 1));
    // 0x38b1b4: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x38b1b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x38b1b8: 0xe4843  sra         $t1, $t6, 1
    ctx->pc = 0x38b1b8u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 14), 1));
    // 0x38b1bc: 0x6af025  or          $fp, $v1, $t2
    ctx->pc = 0x38b1bcu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x38b1c0: 0x103843  sra         $a3, $s0, 1
    ctx->pc = 0x38b1c0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 16), 1));
    // 0x38b1c4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x38b1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x38b1c8: 0xad850010  sw          $a1, 0x10($t4)
    ctx->pc = 0x38b1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 5));
    // 0x38b1cc: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x38b1ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x38b1d0: 0x13000008  beqz        $t8, . + 4 + (0x8 << 2)
    ctx->pc = 0x38B1D0u;
    {
        const bool branch_taken_0x38b1d0 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B1D0u;
        // 0x38b1d4: 0x825021  addu        $t2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b1d0) {
            ctx->pc = 0x38B1F4u;
            goto label_38b1f4;
        }
    }
    ctx->pc = 0x38B1D8u;
    // 0x38b1d8: 0x61083  sra         $v0, $a2, 2
    ctx->pc = 0x38b1d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 2));
    // 0x38b1dc: 0x112043  sra         $a0, $s1, 1
    ctx->pc = 0x38b1dcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 1));
    // 0x38b1e0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x38b1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x38b1e4: 0xf21821  addu        $v1, $a3, $s2
    ctx->pc = 0x38b1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x38b1e8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x38b1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x38b1ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x38B1ECu;
    {
        const bool branch_taken_0x38b1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B1ECu;
        // 0x38b1f0: 0x435821  addu        $t3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b1ec) {
            ctx->pc = 0x38B208u;
            goto label_38b208;
        }
    }
    ctx->pc = 0x38B1F4u;
label_38b1f4:
    // 0x38b1f4: 0x61083  sra         $v0, $a2, 2
    ctx->pc = 0x38b1f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 2));
    // 0x38b1f8: 0x111843  sra         $v1, $s1, 1
    ctx->pc = 0x38b1f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 1));
    // 0x38b1fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38b1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38b200: 0xf22021  addu        $a0, $a3, $s2
    ctx->pc = 0x38b200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x38b204: 0x445821  addu        $t3, $v0, $a0
    ctx->pc = 0x38b204u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_38b208:
    // 0x38b208: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x38b208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38b20c: 0xa30c3  sra         $a2, $t2, 3
    ctx->pc = 0x38b20cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 10), 3));
    // 0x38b210: 0xb28c3  sra         $a1, $t3, 3
    ctx->pc = 0x38b210u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 11), 3));
    // 0x38b214: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x38b214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x38b218: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x38b218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x38b21c: 0x1431823  subu        $v1, $t2, $v1
    ctx->pc = 0x38b21cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x38b220: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x38b220u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x38b224: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x38b224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x38b228: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x38b228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x38b22c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x38b22cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x38b230: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x38b230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x38b234: 0x1645823  subu        $t3, $t3, $a0
    ctx->pc = 0x38b234u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x38b238: 0x33270001  andi        $a3, $t9, 0x1
    ctx->pc = 0x38b238u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)1);
    // 0x38b23c: 0x32aa0001  andi        $t2, $s5, 0x1
    ctx->pc = 0x38b23cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x38b240: 0xada30004  sw          $v1, 0x4($t5)
    ctx->pc = 0x38b240u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 3));
    // 0x38b244: 0x1140000f  beqz        $t2, . + 4 + (0xF << 2)
    ctx->pc = 0x38B244u;
    {
        const bool branch_taken_0x38b244 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B244u;
        // 0x38b248: 0xada20000  sw          $v0, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b244) {
            ctx->pc = 0x38B284u;
            goto label_38b284;
        }
    }
    ctx->pc = 0x38B24Cu;
    // 0x38b24c: 0x3091004  sllv        $v0, $t1, $t8
    ctx->pc = 0x38b24cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 24) & 0x1F));
    // 0x38b250: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x38b250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x38b254: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x38b254u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x38b258: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x38B258u;
    {
        const bool branch_taken_0x38b258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38b258) {
            ctx->pc = 0x38B25Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38B258u;
            // 0x38b25c: 0xada90008  sw          $t1, 0x8($t5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38B2B8u;
            goto label_38b2b8;
        }
    }
    ctx->pc = 0x38B260u;
    // 0x38b260: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x38b260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38b264: 0x30b1807  srav        $v1, $t3, $t8
    ctx->pc = 0x38b264u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), GPR_U32(ctx, 24) & 0x1F));
    // 0x38b268: 0x3021007  srav        $v0, $v0, $t8
    ctx->pc = 0x38b268u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
    // 0x38b26c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x38b26cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38b270: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x38b270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x38b274: 0x1221823  subu        $v1, $t1, $v0
    ctx->pc = 0x38b274u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x38b278: 0xada20008  sw          $v0, 0x8($t5)
    ctx->pc = 0x38b278u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 2));
    // 0x38b27c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x38B27Cu;
    {
        const bool branch_taken_0x38b27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B27Cu;
        // 0x38b280: 0xada3000c  sw          $v1, 0xC($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b27c) {
            ctx->pc = 0x38B2BCu;
            goto label_38b2bc;
        }
    }
    ctx->pc = 0x38B284u;
label_38b284:
    // 0x38b284: 0x3091004  sllv        $v0, $t1, $t8
    ctx->pc = 0x38b284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 24) & 0x1F));
    // 0x38b288: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x38b288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x38b28c: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x38b28cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x38b290: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x38B290u;
    {
        const bool branch_taken_0x38b290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38b290) {
            ctx->pc = 0x38B294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38B290u;
            // 0x38b294: 0xada90008  sw          $t1, 0x8($t5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38B2B8u;
            goto label_38b2b8;
        }
    }
    ctx->pc = 0x38B298u;
    // 0x38b298: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x38b298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38b29c: 0x30b1807  srav        $v1, $t3, $t8
    ctx->pc = 0x38b29cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), GPR_U32(ctx, 24) & 0x1F));
    // 0x38b2a0: 0x3021007  srav        $v0, $v0, $t8
    ctx->pc = 0x38b2a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
    // 0x38b2a4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x38b2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38b2a8: 0x1222023  subu        $a0, $t1, $v0
    ctx->pc = 0x38b2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x38b2ac: 0xada20008  sw          $v0, 0x8($t5)
    ctx->pc = 0x38b2acu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 2));
    // 0x38b2b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38B2B0u;
    {
        const bool branch_taken_0x38b2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B2B0u;
        // 0x38b2b4: 0xada4000c  sw          $a0, 0xC($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b2b0) {
            ctx->pc = 0x38B2BCu;
            goto label_38b2bc;
        }
    }
    ctx->pc = 0x38B2B8u;
label_38b2b8:
    // 0x38b2b8: 0xada0000c  sw          $zero, 0xC($t5)
    ctx->pc = 0x38b2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 0));
label_38b2bc:
    // 0x38b2bc: 0xd61023  subu        $v0, $a2, $s6
    ctx->pc = 0x38b2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
    // 0x38b2c0: 0xb71823  subu        $v1, $a1, $s7
    ctx->pc = 0x38b2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x38b2c4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x38b2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x38b2c8: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x38b2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x38b2cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38b2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38b2d0: 0x8de5087c  lw          $a1, 0x87C($t7)
    ctx->pc = 0x38b2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2172)));
    // 0x38b2d4: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x38b2d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x38b2d8: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x38B2D8u;
    {
        const bool branch_taken_0x38b2d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x38B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B2D8u;
        // 0x38b2dc: 0x1032021  addu        $a0, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b2d8) {
            ctx->pc = 0x38B300u;
            goto label_38b300;
        }
    }
    ctx->pc = 0x38B2E0u;
    // 0x38b2e0: 0xb10c0  sll         $v0, $t3, 3
    ctx->pc = 0x38b2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x38b2e4: 0x24430400  addiu       $v1, $v0, 0x400
    ctx->pc = 0x38b2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x38b2e8: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x38b2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x38b2ec: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x38b2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x38b2f0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x38b2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x38b2f4: 0xada30018  sw          $v1, 0x18($t5)
    ctx->pc = 0x38b2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 3));
    // 0x38b2f8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x38B2F8u;
    {
        const bool branch_taken_0x38b2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B2F8u;
        // 0x38b2fc: 0xada20014  sw          $v0, 0x14($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b2f8) {
            ctx->pc = 0x38B340u;
            goto label_38b340;
        }
    }
    ctx->pc = 0x38B300u;
label_38b300:
    // 0x38b300: 0xb20c0  sll         $a0, $t3, 3
    ctx->pc = 0x38b300u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x38b304: 0x24850100  addiu       $a1, $a0, 0x100
    ctx->pc = 0x38b304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x38b308: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x38b308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x38b30c: 0x2c420301  sltiu       $v0, $v0, 0x301
    ctx->pc = 0x38b30cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)769) ? 1 : 0);
    // 0x38b310: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38B310u;
    {
        const bool branch_taken_0x38b310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B310u;
        // 0x38b314: 0x2631021  addu        $v0, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b310) {
            ctx->pc = 0x38B324u;
            goto label_38b324;
        }
    }
    ctx->pc = 0x38B318u;
    // 0x38b318: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x38b318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x38b31c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x38B31Cu;
    {
        const bool branch_taken_0x38b31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B31Cu;
        // 0x38b320: 0x2831821  addu        $v1, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b31c) {
            ctx->pc = 0x38B330u;
            goto label_38b330;
        }
    }
    ctx->pc = 0x38B324u;
label_38b324:
    // 0x38b324: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x38b324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x38b328: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x38b328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x38b32c: 0x2442fd00  addiu       $v0, $v0, -0x300
    ctx->pc = 0x38b32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966528));
label_38b330:
    // 0x38b330: 0xada20014  sw          $v0, 0x14($t5)
    ctx->pc = 0x38b330u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 2));
    // 0x38b334: 0x24820100  addiu       $v0, $a0, 0x100
    ctx->pc = 0x38b334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x38b338: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x38b338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38b33c: 0xada20018  sw          $v0, 0x18($t5)
    ctx->pc = 0x38b33cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 2));
label_38b340:
    // 0x38b340: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x38b340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38b344: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x38b344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x38b348: 0x3021004  sllv        $v0, $v0, $t8
    ctx->pc = 0x38b348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
    // 0x38b34c: 0x2484e110  addiu       $a0, $a0, -0x1EF0
    ctx->pc = 0x38b34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959376));
    // 0x38b350: 0xada20010  sw          $v0, 0x10($t5)
    ctx->pc = 0x38b350u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 2));
    // 0x38b354: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x38b354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x38b358: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x38b358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x38b35c: 0x24060140  addiu       $a2, $zero, 0x140
    ctx->pc = 0x38b35cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x38b360: 0x8fa80014  lw          $t0, 0x14($sp)
    ctx->pc = 0x38b360u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x38b364: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x38b364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x38b368: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x38b368u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38b36c: 0x8de50820  lw          $a1, 0x820($t7)
    ctx->pc = 0x38b36cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2080)));
    // 0x38b370: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x38b370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x38b374: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x38b374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x38b378: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x38b378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x38b37c: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x38b37cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x38b380: 0x2442e130  addiu       $v0, $v0, -0x1ED0
    ctx->pc = 0x38b380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959408));
    // 0x38b384: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x38b384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x38b388: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x38b388u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x38b38c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38b38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38b390: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x38b390u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x38b394: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x38b394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38b398: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x38b398u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x38b39c: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x38b39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x38b3a0: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x38b3a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x38b3a4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x38b3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x38b3a8: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x38b3a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x38b3ac: 0x1e43021  addu        $a2, $t7, $a0
    ctx->pc = 0x38b3acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x38b3b0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x38b3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38b3b4: 0xacc705c8  sw          $a3, 0x5C8($a2)
    ctx->pc = 0x38b3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1480), GPR_U32(ctx, 7));
    // 0x38b3b8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x38b3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b3bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38b3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x38b3c0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x38b3c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38b3c4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x38b3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38b3c8: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x38b3c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38b3cc: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x38b3ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38b3d0: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x38b3d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38b3d4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x38b3d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38b3d8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x38b3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x38b3dc: 0xac8605d8  sw          $a2, 0x5D8($a0)
    ctx->pc = 0x38b3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1496), GPR_U32(ctx, 6));
    // 0x38b3e0: 0x3e00008  jr          $ra
    ctx->pc = 0x38B3E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B3E0u;
        // 0x38b3e4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B3E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B3E8u;
}
