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

// Function: sub_001F9C30
// Address: 0x1f9c30 - 0x1f9dc0
void sub_001F9C30_0x1f9c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9C30_0x1f9c30");
#endif

    switch (ctx->pc) {
        case 0x1f9c80u: goto label_1f9c80;
        case 0x1f9cc4u: goto label_1f9cc4;
        case 0x1f9cd4u: goto label_1f9cd4;
        case 0x1f9d18u: goto label_1f9d18;
        case 0x1f9d28u: goto label_1f9d28;
        default: break;
    }

    ctx->pc = 0x1f9c30u;

    // 0x1f9c30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f9c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f9c34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f9c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f9c38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f9c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f9c3c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f9c3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9c40: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f9c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f9c44: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f9c44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9c48: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f9c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f9c4c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1f9c4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9c50: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1f9c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1f9c54: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1f9c54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9c58: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1f9c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1f9c5c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1f9c5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9c60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f9c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f9c64: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1f9c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1f9c68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f9c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f9c6c: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x1f9c6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1f9c70: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x1F9C70u;
    {
        const bool branch_taken_0x1f9c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C70u;
        // 0x1f9c74: 0x100b82d  daddu       $s7, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9c70) {
            ctx->pc = 0x1F9D90u;
            goto label_1f9d90;
        }
    }
    ctx->pc = 0x1F9C78u;
    // 0x1f9c78: 0x3c16004a  lui         $s6, 0x4A
    ctx->pc = 0x1f9c78u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)74 << 16));
    // 0x1f9c7c: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x1f9c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_1f9c80:
    // 0x1f9c80: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x1f9c80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f9c84: 0x244235b0  addiu       $v0, $v0, 0x35B0
    ctx->pc = 0x1f9c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13744));
    // 0x1f9c88: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x1f9c88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1f9c8c: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x1f9c8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f9c90: 0x1475003a  bne         $v1, $s5, . + 4 + (0x3A << 2)
    ctx->pc = 0x1F9C90u;
    {
        const bool branch_taken_0x1f9c90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        ctx->pc = 0x1F9C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C90u;
        // 0x1f9c94: 0x26260001  addiu       $a2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9c90) {
            ctx->pc = 0x1F9D7Cu;
            goto label_1f9d7c;
        }
    }
    ctx->pc = 0x1F9C98u;
    // 0x1f9c98: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x1f9c98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1f9c9c: 0x54530038  bnel        $v0, $s3, . + 4 + (0x38 << 2)
    ctx->pc = 0x1F9C9Cu;
    {
        const bool branch_taken_0x1f9c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1f9c9c) {
            ctx->pc = 0x1F9CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9C9Cu;
            // 0x1f9ca0: 0x92420008  lbu         $v0, 0x8($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9D80u;
            goto label_1f9d80;
        }
    }
    ctx->pc = 0x1F9CA4u;
    // 0x1f9ca4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1f9ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f9ca8: 0x54540035  bnel        $v0, $s4, . + 4 + (0x35 << 2)
    ctx->pc = 0x1F9CA8u;
    {
        const bool branch_taken_0x1f9ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x1f9ca8) {
            ctx->pc = 0x1F9CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9CA8u;
            // 0x1f9cac: 0x92420008  lbu         $v0, 0x8($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9D80u;
            goto label_1f9d80;
        }
    }
    ctx->pc = 0x1F9CB0u;
    // 0x1f9cb0: 0x12e00006  beqz        $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F9CB0u;
    {
        const bool branch_taken_0x1f9cb0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9CB0u;
        // 0x1f9cb4: 0x26c49c38  addiu       $a0, $s6, -0x63C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9cb0) {
            ctx->pc = 0x1F9CCCu;
            goto label_1f9ccc;
        }
    }
    ctx->pc = 0x1F9CB8u;
    // 0x1f9cb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f9cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9cbc: 0xc080738  jal         func_201CE0
    ctx->pc = 0x1F9CBCu;
    SET_GPR_U32(ctx, 31, 0x1F9CC4u);
    ctx->pc = 0x1F9CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9CBCu;
    // 0x1f9cc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201CE0u, 0x1F9CBCu, 0x1F9CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9CC4u;
label_1f9cc4:
    // 0x1f9cc4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9CC4u;
    {
        const bool branch_taken_0x1f9cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9CC4u;
        // 0x1f9cc8: 0x240235e3  addiu       $v0, $zero, 0x35E3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13795));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9cc4) {
            ctx->pc = 0x1F9CD8u;
            goto label_1f9cd8;
        }
    }
    ctx->pc = 0x1F9CCCu;
label_1f9ccc:
    // 0x1f9ccc: 0xc080700  jal         func_201C00
    ctx->pc = 0x1F9CCCu;
    SET_GPR_U32(ctx, 31, 0x1F9CD4u);
    ctx->pc = 0x1F9CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9CCCu;
    // 0x1f9cd0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C00u, 0x1F9CCCu, 0x1F9CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9CD4u;
label_1f9cd4:
    // 0x1f9cd4: 0x240235e3  addiu       $v0, $zero, 0x35E3
    ctx->pc = 0x1f9cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13795));
label_1f9cd8:
    // 0x1f9cd8: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1f9cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1f9cdc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f9cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9ce0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1f9ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1f9ce4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1f9ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1f9ce8: 0x26260001  addiu       $a2, $s1, 0x1
    ctx->pc = 0x1f9ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f9cec: 0xae040070  sw          $a0, 0x70($s0)
    ctx->pc = 0x1f9cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 4));
    // 0x1f9cf0: 0xa2000058  sb          $zero, 0x58($s0)
    ctx->pc = 0x1f9cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f9cf4: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x1f9cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x1f9cf8: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x1f9cf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1f9cfc: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1F9CFCu;
    {
        const bool branch_taken_0x1f9cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9CFCu;
        // 0x1f9d00: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9cfc) {
            ctx->pc = 0x1F9D80u;
            goto label_1f9d80;
        }
    }
    ctx->pc = 0x1F9D04u;
    // 0x1f9d04: 0x240935e3  addiu       $t1, $zero, 0x35E3
    ctx->pc = 0x1f9d04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 13795));
    // 0x1f9d08: 0x2408fffb  addiu       $t0, $zero, -0x5
    ctx->pc = 0x1f9d08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1f9d0c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f9d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9d10: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x1f9d10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1f9d14: 0x6a1018  mult        $v0, $v1, $t2
    ctx->pc = 0x1f9d14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1f9d18:
    // 0x1f9d18: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x1f9d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f9d1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f9d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9d20: 0x24420190  addiu       $v0, $v0, 0x190
    ctx->pc = 0x1f9d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x1f9d24: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x1f9d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1f9d28:
    // 0x1f9d28: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x1f9d28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1f9d2c: 0x5455000c  bnel        $v0, $s5, . + 4 + (0xC << 2)
    ctx->pc = 0x1F9D2Cu;
    {
        const bool branch_taken_0x1f9d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x1f9d2c) {
            ctx->pc = 0x1F9D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9D2Cu;
            // 0x1f9d30: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9D60u;
            goto label_1f9d60;
        }
    }
    ctx->pc = 0x1F9D34u;
    // 0x1f9d34: 0x9062000c  lbu         $v0, 0xC($v1)
    ctx->pc = 0x1f9d34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1f9d38: 0x14530009  bne         $v0, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F9D38u;
    {
        const bool branch_taken_0x1f9d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x1F9D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D38u;
        // 0x1f9d3c: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d38) {
            ctx->pc = 0x1F9D60u;
            goto label_1f9d60;
        }
    }
    ctx->pc = 0x1F9D40u;
    // 0x1f9d40: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1f9d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1f9d44: 0x14540006  bne         $v0, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F9D44u;
    {
        const bool branch_taken_0x1f9d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x1f9d44) {
            ctx->pc = 0x1F9D60u;
            goto label_1f9d60;
        }
    }
    ctx->pc = 0x1F9D4Cu;
    // 0x1f9d4c: 0xac60006c  sw          $zero, 0x6C($v1)
    ctx->pc = 0x1f9d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 0));
    // 0x1f9d50: 0xac690008  sw          $t1, 0x8($v1)
    ctx->pc = 0x1f9d50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 9));
    // 0x1f9d54: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x1f9d54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x1f9d58: 0xac670070  sw          $a3, 0x70($v1)
    ctx->pc = 0x1f9d58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 7));
    // 0x1f9d5c: 0xa0600058  sb          $zero, 0x58($v1)
    ctx->pc = 0x1f9d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 88), (uint8_t)GPR_U32(ctx, 0));
label_1f9d60:
    // 0x1f9d60: 0x481fff1  bgez        $a0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1F9D60u;
    {
        const bool branch_taken_0x1f9d60 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1F9D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D60u;
        // 0x1f9d64: 0x246319e0  addiu       $v1, $v1, 0x19E0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d60) {
            ctx->pc = 0x1F9D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9d28;
        }
    }
    ctx->pc = 0x1F9D68u;
    // 0x1f9d68: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x1f9d68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1f9d6c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1f9d6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9d70: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1f9d70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f9d74: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1F9D74u;
    {
        const bool branch_taken_0x1f9d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D74u;
        // 0x1f9d78: 0x6a1018  mult        $v0, $v1, $t2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d74) {
            ctx->pc = 0x1F9D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9d18;
        }
    }
    ctx->pc = 0x1F9D7Cu;
label_1f9d7c:
    // 0x1f9d7c: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x1f9d7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
label_1f9d80:
    // 0x1f9d80: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1f9d80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9d84: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1f9d84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f9d88: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x1F9D88u;
    {
        const bool branch_taken_0x1f9d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D88u;
        // 0x1f9d8c: 0x24020090  addiu       $v0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d88) {
            ctx->pc = 0x1F9C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9c80;
        }
    }
    ctx->pc = 0x1F9D90u;
label_1f9d90:
    // 0x1f9d90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f9d90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9d94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f9d94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f9d98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f9d98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9d9c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f9d9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f9da0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f9da0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9da4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1f9da4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f9da8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1f9da8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f9dac: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1f9dacu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f9db0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f9db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f9db4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9DB4u;
        // 0x1f9db8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9DBCu;
    // 0x1f9dbc: 0x0  nop
    ctx->pc = 0x1f9dbcu;
    // NOP
    ctx->pc = 0x1f9dc0u;
}
