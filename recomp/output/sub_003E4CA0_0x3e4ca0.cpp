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

// Function: sub_003E4CA0
// Address: 0x3e4ca0 - 0x3e4dd0
void sub_003E4CA0_0x3e4ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E4CA0_0x3e4ca0");
#endif

    switch (ctx->pc) {
        case 0x3e4cd8u: goto label_3e4cd8;
        case 0x3e4ce4u: goto label_3e4ce4;
        case 0x3e4d18u: goto label_3e4d18;
        case 0x3e4d8cu: goto label_3e4d8c;
        case 0x3e4d98u: goto label_3e4d98;
        default: break;
    }

    ctx->pc = 0x3e4ca0u;

    // 0x3e4ca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e4ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e4ca4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e4ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e4ca8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3e4ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3e4cac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e4cacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4cb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e4cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e4cb4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3e4cb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4cb8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3e4cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3e4cbc: 0x2a430040  slti        $v1, $s2, 0x40
    ctx->pc = 0x3e4cbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x3e4cc0: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x3e4cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x3e4cc4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3e4cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3e4cc8: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3E4CC8u;
    {
        const bool branch_taken_0x3e4cc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E4CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4CC8u;
        // 0x3e4ccc: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4cc8) {
            ctx->pc = 0x3E4D04u;
            goto label_3e4d04;
        }
    }
    ctx->pc = 0x3E4CD0u;
    // 0x3e4cd0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E4CD0u;
    SET_GPR_U32(ctx, 31, 0x3E4CD8u);
    ctx->pc = 0x3E4CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4CD0u;
    // 0x3e4cd4: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E4CD0u, 0x3E4CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4CD8u;
label_3e4cd8:
    // 0x3e4cd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e4cd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4cdc: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E4CDCu;
    SET_GPR_U32(ctx, 31, 0x3E4CE4u);
    ctx->pc = 0x3E4CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4CDCu;
    // 0x3e4ce0: 0x122080  sll         $a0, $s2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E4CDCu, 0x3E4CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4CE4u;
label_3e4ce4:
    // 0x3e4ce4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3e4ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e4ce8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3e4ce8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4cec: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x3e4cecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x3e4cf0: 0xa6120004  sh          $s2, 0x4($s0)
    ctx->pc = 0x3e4cf0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 18));
    // 0x3e4cf4: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x3e4cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x3e4cf8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3e4cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3e4cfc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x3E4CFCu;
    {
        const bool branch_taken_0x3e4cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4CFCu;
        // 0x3e4d00: 0xa6120006  sh          $s2, 0x6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4cfc) {
            ctx->pc = 0x3E4DB8u;
            goto label_3e4db8;
        }
    }
    ctx->pc = 0x3E4D04u;
label_3e4d04:
    // 0x3e4d04: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3e4d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e4d08: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3E4D08u;
    {
        const bool branch_taken_0x3e4d08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4D08u;
        // 0x3e4d0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4d08) {
            ctx->pc = 0x3E4D84u;
            goto label_3e4d84;
        }
    }
    ctx->pc = 0x3E4D10u;
    // 0x3e4d10: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x3e4d10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x3e4d14: 0x0  nop
    ctx->pc = 0x3e4d14u;
    // NOP
label_3e4d18:
    // 0x3e4d18: 0x94850004  lhu         $a1, 0x4($a0)
    ctx->pc = 0x3e4d18u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3e4d1c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3e4d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3e4d20: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x3e4d20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3e4d24: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E4D24u;
    {
        const bool branch_taken_0x3e4d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e4d24) {
            ctx->pc = 0x3E4D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E4D24u;
            // 0x3e4d28: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E4D78u;
            goto label_3e4d78;
        }
    }
    ctx->pc = 0x3E4D2Cu;
    // 0x3e4d2c: 0x5465000a  bnel        $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x3E4D2Cu;
    {
        const bool branch_taken_0x3e4d2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x3e4d2c) {
            ctx->pc = 0x3E4D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E4D2Cu;
            // 0x3e4d30: 0x94820006  lhu         $v0, 0x6($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E4D58u;
            goto label_3e4d58;
        }
    }
    ctx->pc = 0x3E4D34u;
    // 0x3e4d34: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E4D34u;
    {
        const bool branch_taken_0x3e4d34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4D34u;
        // 0x3e4d38: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4d34) {
            ctx->pc = 0x3E4D44u;
            goto label_3e4d44;
        }
    }
    ctx->pc = 0x3E4D3Cu;
    // 0x3e4d3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E4D3Cu;
    {
        const bool branch_taken_0x3e4d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4D3Cu;
        // 0x3e4d40: 0xacc20008  sw          $v0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4d3c) {
            ctx->pc = 0x3E4D48u;
            goto label_3e4d48;
        }
    }
    ctx->pc = 0x3E4D44u;
label_3e4d44:
    // 0x3e4d44: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3e4d44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_3e4d48:
    // 0x3e4d48: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e4d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e4d4c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3e4d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3e4d50: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x3e4d50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x3e4d54: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x3e4d54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_3e4d58:
    // 0x3e4d58: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3e4d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e4d5c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3e4d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3e4d60: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x3e4d60u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e4d64: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3e4d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3e4d68: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x3e4d68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3e4d6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e4d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3e4d70: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3E4D70u;
    {
        const bool branch_taken_0x3e4d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4D70u;
        // 0x3e4d74: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4d70) {
            ctx->pc = 0x3E4DB8u;
            goto label_3e4db8;
        }
    }
    ctx->pc = 0x3E4D78u;
label_3e4d78:
    // 0x3e4d78: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x3e4d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3e4d7c: 0x5480ffe6  bnel        $a0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3E4D7Cu;
    {
        const bool branch_taken_0x3e4d7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e4d7c) {
            ctx->pc = 0x3E4D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E4D7Cu;
            // 0x3e4d80: 0x94830006  lhu         $v1, 0x6($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E4D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e4d18;
        }
    }
    ctx->pc = 0x3E4D84u;
label_3e4d84:
    // 0x3e4d84: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E4D84u;
    SET_GPR_U32(ctx, 31, 0x3E4D8Cu);
    ctx->pc = 0x3E4D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4D84u;
    // 0x3e4d88: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E4D84u, 0x3E4D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4D8Cu;
label_3e4d8c:
    // 0x3e4d8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e4d8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4d90: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E4D90u;
    SET_GPR_U32(ctx, 31, 0x3E4D98u);
    ctx->pc = 0x3E4D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4D90u;
    // 0x3e4d94: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E4D90u, 0x3E4D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4D98u;
label_3e4d98:
    // 0x3e4d98: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3e4d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e4d9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e4d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4da0: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x3e4da0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x3e4da4: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x3e4da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3e4da8: 0xa6120006  sh          $s2, 0x6($s0)
    ctx->pc = 0x3e4da8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 18));
    // 0x3e4dac: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x3e4dacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e4db0: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x3e4db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x3e4db4: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x3e4db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_3e4db8:
    // 0x3e4db8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e4db8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e4dbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e4dbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e4dc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3e4dc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e4dc4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3e4dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3e4dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E4DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E4DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4DC8u;
        // 0x3e4dcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E4DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E4DD0u;
}
