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

// Function: sub_003E7BD0
// Address: 0x3e7bd0 - 0x3e7d00
void sub_003E7BD0_0x3e7bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E7BD0_0x3e7bd0");
#endif

    switch (ctx->pc) {
        case 0x3e7c08u: goto label_3e7c08;
        case 0x3e7c14u: goto label_3e7c14;
        case 0x3e7c48u: goto label_3e7c48;
        case 0x3e7cbcu: goto label_3e7cbc;
        case 0x3e7cc8u: goto label_3e7cc8;
        default: break;
    }

    ctx->pc = 0x3e7bd0u;

    // 0x3e7bd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e7bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e7bd4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e7bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e7bd8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3e7bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3e7bdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e7bdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7be0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e7be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e7be4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3e7be4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7be8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3e7be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3e7bec: 0x2a430200  slti        $v1, $s2, 0x200
    ctx->pc = 0x3e7becu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x3e7bf0: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x3e7bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x3e7bf4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3e7bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3e7bf8: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3E7BF8u;
    {
        const bool branch_taken_0x3e7bf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E7BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7BF8u;
        // 0x3e7bfc: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7bf8) {
            ctx->pc = 0x3E7C34u;
            goto label_3e7c34;
        }
    }
    ctx->pc = 0x3E7C00u;
    // 0x3e7c00: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E7C00u;
    SET_GPR_U32(ctx, 31, 0x3E7C08u);
    ctx->pc = 0x3E7C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7C00u;
    // 0x3e7c04: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E7C00u, 0x3E7C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7C08u;
label_3e7c08:
    // 0x3e7c08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e7c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7c0c: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E7C0Cu;
    SET_GPR_U32(ctx, 31, 0x3E7C14u);
    ctx->pc = 0x3E7C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7C0Cu;
    // 0x3e7c10: 0x122080  sll         $a0, $s2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E7C0Cu, 0x3E7C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7C14u;
label_3e7c14:
    // 0x3e7c14: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3e7c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e7c18: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3e7c18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7c1c: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x3e7c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x3e7c20: 0xa6120004  sh          $s2, 0x4($s0)
    ctx->pc = 0x3e7c20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 18));
    // 0x3e7c24: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x3e7c24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x3e7c28: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3e7c28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3e7c2c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x3E7C2Cu;
    {
        const bool branch_taken_0x3e7c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7C2Cu;
        // 0x3e7c30: 0xa6120006  sh          $s2, 0x6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7c2c) {
            ctx->pc = 0x3E7CE8u;
            goto label_3e7ce8;
        }
    }
    ctx->pc = 0x3E7C34u;
label_3e7c34:
    // 0x3e7c34: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3e7c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e7c38: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3E7C38u;
    {
        const bool branch_taken_0x3e7c38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7C38u;
        // 0x3e7c3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7c38) {
            ctx->pc = 0x3E7CB4u;
            goto label_3e7cb4;
        }
    }
    ctx->pc = 0x3E7C40u;
    // 0x3e7c40: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x3e7c40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x3e7c44: 0x0  nop
    ctx->pc = 0x3e7c44u;
    // NOP
label_3e7c48:
    // 0x3e7c48: 0x94850004  lhu         $a1, 0x4($a0)
    ctx->pc = 0x3e7c48u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3e7c4c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3e7c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3e7c50: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x3e7c50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3e7c54: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E7C54u;
    {
        const bool branch_taken_0x3e7c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e7c54) {
            ctx->pc = 0x3E7C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7C54u;
            // 0x3e7c58: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7CA8u;
            goto label_3e7ca8;
        }
    }
    ctx->pc = 0x3E7C5Cu;
    // 0x3e7c5c: 0x5465000a  bnel        $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x3E7C5Cu;
    {
        const bool branch_taken_0x3e7c5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x3e7c5c) {
            ctx->pc = 0x3E7C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7C5Cu;
            // 0x3e7c60: 0x94820006  lhu         $v0, 0x6($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7C88u;
            goto label_3e7c88;
        }
    }
    ctx->pc = 0x3E7C64u;
    // 0x3e7c64: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E7C64u;
    {
        const bool branch_taken_0x3e7c64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7C64u;
        // 0x3e7c68: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7c64) {
            ctx->pc = 0x3E7C74u;
            goto label_3e7c74;
        }
    }
    ctx->pc = 0x3E7C6Cu;
    // 0x3e7c6c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E7C6Cu;
    {
        const bool branch_taken_0x3e7c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7C6Cu;
        // 0x3e7c70: 0xacc20008  sw          $v0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7c6c) {
            ctx->pc = 0x3E7C78u;
            goto label_3e7c78;
        }
    }
    ctx->pc = 0x3E7C74u;
label_3e7c74:
    // 0x3e7c74: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3e7c74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_3e7c78:
    // 0x3e7c78: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e7c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e7c7c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3e7c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3e7c80: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x3e7c80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x3e7c84: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x3e7c84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_3e7c88:
    // 0x3e7c88: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3e7c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e7c8c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3e7c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3e7c90: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x3e7c90u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e7c94: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3e7c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3e7c98: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x3e7c98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3e7c9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e7c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3e7ca0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3E7CA0u;
    {
        const bool branch_taken_0x3e7ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7CA0u;
        // 0x3e7ca4: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7ca0) {
            ctx->pc = 0x3E7CE8u;
            goto label_3e7ce8;
        }
    }
    ctx->pc = 0x3E7CA8u;
label_3e7ca8:
    // 0x3e7ca8: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x3e7ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3e7cac: 0x5480ffe6  bnel        $a0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3E7CACu;
    {
        const bool branch_taken_0x3e7cac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e7cac) {
            ctx->pc = 0x3E7CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7CACu;
            // 0x3e7cb0: 0x94830006  lhu         $v1, 0x6($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e7c48;
        }
    }
    ctx->pc = 0x3E7CB4u;
label_3e7cb4:
    // 0x3e7cb4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E7CB4u;
    SET_GPR_U32(ctx, 31, 0x3E7CBCu);
    ctx->pc = 0x3E7CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7CB4u;
    // 0x3e7cb8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E7CB4u, 0x3E7CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7CBCu;
label_3e7cbc:
    // 0x3e7cbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e7cbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7cc0: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E7CC0u;
    SET_GPR_U32(ctx, 31, 0x3E7CC8u);
    ctx->pc = 0x3E7CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7CC0u;
    // 0x3e7cc4: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E7CC0u, 0x3E7CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7CC8u;
label_3e7cc8:
    // 0x3e7cc8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3e7cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e7ccc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e7cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7cd0: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x3e7cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x3e7cd4: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x3e7cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3e7cd8: 0xa6120006  sh          $s2, 0x6($s0)
    ctx->pc = 0x3e7cd8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 18));
    // 0x3e7cdc: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x3e7cdcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e7ce0: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x3e7ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x3e7ce4: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x3e7ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_3e7ce8:
    // 0x3e7ce8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e7ce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e7cec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e7cecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e7cf0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3e7cf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e7cf4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3e7cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3e7cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E7CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E7CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7CF8u;
        // 0x3e7cfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E7D00u;
}
