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

// Function: sub_001F7B80
// Address: 0x1f7b80 - 0x1f7cc8
void sub_001F7B80_0x1f7b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7B80_0x1f7b80");
#endif

    switch (ctx->pc) {
        case 0x1f7c00u: goto label_1f7c00;
        case 0x1f7c50u: goto label_1f7c50;
        default: break;
    }

    ctx->pc = 0x1f7b80u;

    // 0x1f7b80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f7b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f7b84: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x1f7b84u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7b88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f7b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f7b8c: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x1f7b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x1f7b90: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x1f7b90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1f7b94: 0x25c83550  addiu       $t0, $t6, 0x3550
    ctx->pc = 0x1f7b94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 14), 13648));
    // 0x1f7b98: 0x91c30180  lbu         $v1, 0x180($t6)
    ctx->pc = 0x1f7b98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 384)));
    // 0x1f7b9c: 0x30d900ff  andi        $t9, $a2, 0xFF
    ctx->pc = 0x1f7b9cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1f7ba0: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x1f7ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1f7ba4: 0x240519e0  addiu       $a1, $zero, 0x19E0
    ctx->pc = 0x1f7ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6624));
    // 0x1f7ba8: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1f7ba8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f7bac: 0x3242018  mult        $a0, $t9, $a0
    ctx->pc = 0x1f7bacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1f7bb0: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1f7bb0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7bb4: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1f7bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1f7bb8: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1f7bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1f7bbc: 0xa0790000  sb          $t9, 0x0($v1)
    ctx->pc = 0x1f7bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 25));
    // 0x1f7bc0: 0x91c20180  lbu         $v0, 0x180($t6)
    ctx->pc = 0x1f7bc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 384)));
    // 0x1f7bc4: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x1f7bc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f7bc8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1f7bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f7bcc: 0x1c42021  addu        $a0, $t6, $a0
    ctx->pc = 0x1f7bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x1f7bd0: 0x10e0003a  beqz        $a3, . + 4 + (0x3A << 2)
    ctx->pc = 0x1F7BD0u;
    {
        const bool branch_taken_0x1f7bd0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7BD0u;
        // 0x1f7bd4: 0x8c890204  lw          $t1, 0x204($a0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7bd0) {
            ctx->pc = 0x1F7CBCu;
            goto label_1f7cbc;
        }
    }
    ctx->pc = 0x1F7BD8u;
    // 0x1f7bd8: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x1f7bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1f7bdc: 0x100782d  daddu       $t7, $t0, $zero
    ctx->pc = 0x1f7bdcu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7be0: 0x24400  sll         $t0, $v0, 16
    ctx->pc = 0x1f7be0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f7be4: 0x2410002e  addiu       $s0, $zero, 0x2E
    ctx->pc = 0x1f7be4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x1f7be8: 0x240b0090  addiu       $t3, $zero, 0x90
    ctx->pc = 0x1f7be8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1f7bec: 0x240a19e0  addiu       $t2, $zero, 0x19E0
    ctx->pc = 0x1f7becu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6624));
    // 0x1f7bf0: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1f7bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x1f7bf4: 0x72c00  sll         $a1, $a3, 16
    ctx->pc = 0x1f7bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x1f7bf8: 0x91c40180  lbu         $a0, 0x180($t6)
    ctx->pc = 0x1f7bf8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 384)));
    // 0x1f7bfc: 0x0  nop
    ctx->pc = 0x1f7bfcu;
    // NOP
label_1f7c00:
    // 0x1f7c00: 0x901018  mult        $v0, $a0, $s0
    ctx->pc = 0x1f7c00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f7c04: 0x8a2018  mult        $a0, $a0, $t2
    ctx->pc = 0x1f7c04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1f7c08: 0x4c1821  addu        $v1, $v0, $t4
    ctx->pc = 0x1f7c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x1f7c0c: 0x1e31821  addu        $v1, $t7, $v1
    ctx->pc = 0x1f7c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x1f7c10: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1f7c10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f7c14: 0x4b1018  mult        $v0, $v0, $t3
    ctx->pc = 0x1f7c14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f7c18: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f7c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f7c1c: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x1f7c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x1f7c20: 0x8c430204  lw          $v1, 0x204($v0)
    ctx->pc = 0x1f7c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
    // 0x1f7c24: 0x123182b  sltu        $v1, $t1, $v1
    ctx->pc = 0x1f7c24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f7c28: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1F7C28u;
    {
        const bool branch_taken_0x1f7c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C28u;
        // 0x1f7c2c: 0x187102a  slt         $v0, $t4, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c28) {
            ctx->pc = 0x1F7CA8u;
            goto label_1f7ca8;
        }
    }
    ctx->pc = 0x1F7C30u;
    // 0x1f7c30: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1F7C30u;
    {
        const bool branch_taken_0x1f7c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C30u;
        // 0x1f7c34: 0x85403  sra         $t2, $t0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c30) {
            ctx->pc = 0x1F7C90u;
            goto label_1f7c90;
        }
    }
    ctx->pc = 0x1F7C38u;
    // 0x1f7c38: 0xa1400  sll         $v0, $t2, 16
    ctx->pc = 0x1f7c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x1f7c3c: 0xa64821  addu        $t1, $a1, $a2
    ctx->pc = 0x1f7c3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1f7c40: 0x464021  addu        $t0, $v0, $a2
    ctx->pc = 0x1f7c40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1f7c44: 0x2418002e  addiu       $t8, $zero, 0x2E
    ctx->pc = 0x1f7c44u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x1f7c48: 0x1e0582d  daddu       $t3, $t7, $zero
    ctx->pc = 0x1f7c48u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7c4c: 0x3c0dffff  lui         $t5, 0xFFFF
    ctx->pc = 0x1f7c4cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65535 << 16));
label_1f7c50:
    // 0x1f7c50: 0x91c30180  lbu         $v1, 0x180($t6)
    ctx->pc = 0x1f7c50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 384)));
    // 0x1f7c54: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1f7c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7c58: 0x83403  sra         $a2, $t0, 16
    ctx->pc = 0x1f7c58u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 8), 16));
    // 0x1f7c5c: 0x12d4821  addu        $t1, $t1, $t5
    ctx->pc = 0x1f7c5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x1f7c60: 0x781818  mult        $v1, $v1, $t8
    ctx->pc = 0x1f7c60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f7c64: 0x10d4021  addu        $t0, $t0, $t5
    ctx->pc = 0x1f7c64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x1f7c68: 0x1431021  addu        $v0, $t2, $v1
    ctx->pc = 0x1f7c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1f7c6c: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x1f7c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1f7c70: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1f7c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1f7c74: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1f7c74u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f7c78: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x1f7c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x1f7c7c: 0x53c03  sra         $a3, $a1, 16
    ctx->pc = 0x1f7c7cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), 16));
    // 0x1f7c80: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x1f7c80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7c84: 0x187102a  slt         $v0, $t4, $a3
    ctx->pc = 0x1f7c84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1f7c88: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1F7C88u;
    {
        const bool branch_taken_0x1f7c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C88u;
        // 0x1f7c8c: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c88) {
            ctx->pc = 0x1F7C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7c50;
        }
    }
    ctx->pc = 0x1F7C90u;
label_1f7c90:
    // 0x1f7c90: 0x91c20180  lbu         $v0, 0x180($t6)
    ctx->pc = 0x1f7c90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 384)));
    // 0x1f7c94: 0x501818  mult        $v1, $v0, $s0
    ctx->pc = 0x1f7c94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f7c98: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x1f7c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1f7c9c: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x1f7c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x1f7ca0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F7CA0u;
    {
        const bool branch_taken_0x1f7ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CA0u;
        // 0x1f7ca4: 0xa0590000  sb          $t9, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ca0) {
            ctx->pc = 0x1F7CBCu;
            goto label_1f7cbc;
        }
    }
    ctx->pc = 0x1F7CA8u;
label_1f7ca8:
    // 0x1f7ca8: 0x25820001  addiu       $v0, $t4, 0x1
    ctx->pc = 0x1f7ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x1f7cac: 0x304c00ff  andi        $t4, $v0, 0xFF
    ctx->pc = 0x1f7cacu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f7cb0: 0x187182b  sltu        $v1, $t4, $a3
    ctx->pc = 0x1f7cb0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1f7cb4: 0x5460ffd2  bnel        $v1, $zero, . + 4 + (-0x2E << 2)
    ctx->pc = 0x1F7CB4u;
    {
        const bool branch_taken_0x1f7cb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7cb4) {
            ctx->pc = 0x1F7CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7CB4u;
            // 0x1f7cb8: 0x91c40180  lbu         $a0, 0x180($t6) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7c00;
        }
    }
    ctx->pc = 0x1F7CBCu;
label_1f7cbc:
    // 0x1f7cbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f7cbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CC0u;
        // 0x1f7cc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7CC8u;
}
