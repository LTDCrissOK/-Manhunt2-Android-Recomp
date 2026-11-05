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

// Function: sub_003E7D00
// Address: 0x3e7d00 - 0x3e7e30
void sub_003E7D00_0x3e7d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E7D00_0x3e7d00");
#endif

    switch (ctx->pc) {
        case 0x3e7d38u: goto label_3e7d38;
        case 0x3e7d44u: goto label_3e7d44;
        case 0x3e7d78u: goto label_3e7d78;
        case 0x3e7decu: goto label_3e7dec;
        case 0x3e7df8u: goto label_3e7df8;
        default: break;
    }

    ctx->pc = 0x3e7d00u;

    // 0x3e7d00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e7d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e7d04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e7d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e7d08: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3e7d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3e7d0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e7d0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7d10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e7d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e7d14: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3e7d14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7d18: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3e7d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3e7d1c: 0x2a430200  slti        $v1, $s2, 0x200
    ctx->pc = 0x3e7d1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x3e7d20: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x3e7d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x3e7d24: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3e7d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3e7d28: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3E7D28u;
    {
        const bool branch_taken_0x3e7d28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E7D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7D28u;
        // 0x3e7d2c: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7d28) {
            ctx->pc = 0x3E7D64u;
            goto label_3e7d64;
        }
    }
    ctx->pc = 0x3E7D30u;
    // 0x3e7d30: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E7D30u;
    SET_GPR_U32(ctx, 31, 0x3E7D38u);
    ctx->pc = 0x3E7D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7D30u;
    // 0x3e7d34: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E7D30u, 0x3E7D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7D38u;
label_3e7d38:
    // 0x3e7d38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e7d38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7d3c: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E7D3Cu;
    SET_GPR_U32(ctx, 31, 0x3E7D44u);
    ctx->pc = 0x3E7D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7D3Cu;
    // 0x3e7d40: 0x122080  sll         $a0, $s2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E7D3Cu, 0x3E7D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7D44u;
label_3e7d44:
    // 0x3e7d44: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3e7d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e7d48: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3e7d48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7d4c: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x3e7d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x3e7d50: 0xa6120004  sh          $s2, 0x4($s0)
    ctx->pc = 0x3e7d50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 18));
    // 0x3e7d54: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x3e7d54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x3e7d58: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3e7d58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3e7d5c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x3E7D5Cu;
    {
        const bool branch_taken_0x3e7d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7D5Cu;
        // 0x3e7d60: 0xa6120006  sh          $s2, 0x6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7d5c) {
            ctx->pc = 0x3E7E18u;
            goto label_3e7e18;
        }
    }
    ctx->pc = 0x3E7D64u;
label_3e7d64:
    // 0x3e7d64: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3e7d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e7d68: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3E7D68u;
    {
        const bool branch_taken_0x3e7d68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7D68u;
        // 0x3e7d6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7d68) {
            ctx->pc = 0x3E7DE4u;
            goto label_3e7de4;
        }
    }
    ctx->pc = 0x3E7D70u;
    // 0x3e7d70: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x3e7d70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x3e7d74: 0x0  nop
    ctx->pc = 0x3e7d74u;
    // NOP
label_3e7d78:
    // 0x3e7d78: 0x94850004  lhu         $a1, 0x4($a0)
    ctx->pc = 0x3e7d78u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3e7d7c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3e7d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3e7d80: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x3e7d80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3e7d84: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E7D84u;
    {
        const bool branch_taken_0x3e7d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e7d84) {
            ctx->pc = 0x3E7D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7D84u;
            // 0x3e7d88: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7DD8u;
            goto label_3e7dd8;
        }
    }
    ctx->pc = 0x3E7D8Cu;
    // 0x3e7d8c: 0x5465000a  bnel        $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x3E7D8Cu;
    {
        const bool branch_taken_0x3e7d8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x3e7d8c) {
            ctx->pc = 0x3E7D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7D8Cu;
            // 0x3e7d90: 0x94820006  lhu         $v0, 0x6($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7DB8u;
            goto label_3e7db8;
        }
    }
    ctx->pc = 0x3E7D94u;
    // 0x3e7d94: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E7D94u;
    {
        const bool branch_taken_0x3e7d94 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7D94u;
        // 0x3e7d98: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7d94) {
            ctx->pc = 0x3E7DA4u;
            goto label_3e7da4;
        }
    }
    ctx->pc = 0x3E7D9Cu;
    // 0x3e7d9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E7D9Cu;
    {
        const bool branch_taken_0x3e7d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7D9Cu;
        // 0x3e7da0: 0xacc20008  sw          $v0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7d9c) {
            ctx->pc = 0x3E7DA8u;
            goto label_3e7da8;
        }
    }
    ctx->pc = 0x3E7DA4u;
label_3e7da4:
    // 0x3e7da4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3e7da4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_3e7da8:
    // 0x3e7da8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e7da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e7dac: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3e7dacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3e7db0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x3e7db0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x3e7db4: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x3e7db4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_3e7db8:
    // 0x3e7db8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3e7db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e7dbc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3e7dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3e7dc0: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x3e7dc0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e7dc4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3e7dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3e7dc8: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x3e7dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3e7dcc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e7dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3e7dd0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3E7DD0u;
    {
        const bool branch_taken_0x3e7dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7DD0u;
        // 0x3e7dd4: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7dd0) {
            ctx->pc = 0x3E7E18u;
            goto label_3e7e18;
        }
    }
    ctx->pc = 0x3E7DD8u;
label_3e7dd8:
    // 0x3e7dd8: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x3e7dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3e7ddc: 0x5480ffe6  bnel        $a0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3E7DDCu;
    {
        const bool branch_taken_0x3e7ddc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e7ddc) {
            ctx->pc = 0x3E7DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7DDCu;
            // 0x3e7de0: 0x94830006  lhu         $v1, 0x6($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7D78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e7d78;
        }
    }
    ctx->pc = 0x3E7DE4u;
label_3e7de4:
    // 0x3e7de4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E7DE4u;
    SET_GPR_U32(ctx, 31, 0x3E7DECu);
    ctx->pc = 0x3E7DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7DE4u;
    // 0x3e7de8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E7DE4u, 0x3E7DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7DECu;
label_3e7dec:
    // 0x3e7dec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e7decu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7df0: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E7DF0u;
    SET_GPR_U32(ctx, 31, 0x3E7DF8u);
    ctx->pc = 0x3E7DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7DF0u;
    // 0x3e7df4: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E7DF0u, 0x3E7DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7DF8u;
label_3e7df8:
    // 0x3e7df8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3e7df8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e7dfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e7dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7e00: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x3e7e00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x3e7e04: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x3e7e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3e7e08: 0xa6120006  sh          $s2, 0x6($s0)
    ctx->pc = 0x3e7e08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 18));
    // 0x3e7e0c: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x3e7e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e7e10: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x3e7e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x3e7e14: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x3e7e14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_3e7e18:
    // 0x3e7e18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e7e18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e7e1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e7e1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e7e20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3e7e20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e7e24: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3e7e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3e7e28: 0x3e00008  jr          $ra
    ctx->pc = 0x3E7E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E7E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7E28u;
        // 0x3e7e2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E7E30u;
}
