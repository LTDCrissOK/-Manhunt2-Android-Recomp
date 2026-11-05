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

// Function: sub_003E7AA0
// Address: 0x3e7aa0 - 0x3e7bd0
void sub_003E7AA0_0x3e7aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E7AA0_0x3e7aa0");
#endif

    switch (ctx->pc) {
        case 0x3e7ad8u: goto label_3e7ad8;
        case 0x3e7ae4u: goto label_3e7ae4;
        case 0x3e7b18u: goto label_3e7b18;
        case 0x3e7b8cu: goto label_3e7b8c;
        case 0x3e7b98u: goto label_3e7b98;
        default: break;
    }

    ctx->pc = 0x3e7aa0u;

    // 0x3e7aa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e7aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e7aa4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e7aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e7aa8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3e7aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3e7aac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e7aacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7ab0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e7ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e7ab4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3e7ab4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7ab8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3e7ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3e7abc: 0x2a430200  slti        $v1, $s2, 0x200
    ctx->pc = 0x3e7abcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x3e7ac0: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x3e7ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x3e7ac4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3e7ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3e7ac8: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3E7AC8u;
    {
        const bool branch_taken_0x3e7ac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E7ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7AC8u;
        // 0x3e7acc: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7ac8) {
            ctx->pc = 0x3E7B04u;
            goto label_3e7b04;
        }
    }
    ctx->pc = 0x3E7AD0u;
    // 0x3e7ad0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E7AD0u;
    SET_GPR_U32(ctx, 31, 0x3E7AD8u);
    ctx->pc = 0x3E7AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7AD0u;
    // 0x3e7ad4: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E7AD0u, 0x3E7AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7AD8u;
label_3e7ad8:
    // 0x3e7ad8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e7ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7adc: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E7ADCu;
    SET_GPR_U32(ctx, 31, 0x3E7AE4u);
    ctx->pc = 0x3E7AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7ADCu;
    // 0x3e7ae0: 0x122080  sll         $a0, $s2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E7ADCu, 0x3E7AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7AE4u;
label_3e7ae4:
    // 0x3e7ae4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3e7ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e7ae8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3e7ae8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7aec: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x3e7aecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x3e7af0: 0xa6120004  sh          $s2, 0x4($s0)
    ctx->pc = 0x3e7af0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 18));
    // 0x3e7af4: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x3e7af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x3e7af8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3e7af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3e7afc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x3E7AFCu;
    {
        const bool branch_taken_0x3e7afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7AFCu;
        // 0x3e7b00: 0xa6120006  sh          $s2, 0x6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7afc) {
            ctx->pc = 0x3E7BB8u;
            goto label_3e7bb8;
        }
    }
    ctx->pc = 0x3E7B04u;
label_3e7b04:
    // 0x3e7b04: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3e7b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e7b08: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3E7B08u;
    {
        const bool branch_taken_0x3e7b08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7B08u;
        // 0x3e7b0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7b08) {
            ctx->pc = 0x3E7B84u;
            goto label_3e7b84;
        }
    }
    ctx->pc = 0x3E7B10u;
    // 0x3e7b10: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x3e7b10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x3e7b14: 0x0  nop
    ctx->pc = 0x3e7b14u;
    // NOP
label_3e7b18:
    // 0x3e7b18: 0x94850004  lhu         $a1, 0x4($a0)
    ctx->pc = 0x3e7b18u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3e7b1c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3e7b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3e7b20: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x3e7b20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3e7b24: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E7B24u;
    {
        const bool branch_taken_0x3e7b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e7b24) {
            ctx->pc = 0x3E7B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7B24u;
            // 0x3e7b28: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7B78u;
            goto label_3e7b78;
        }
    }
    ctx->pc = 0x3E7B2Cu;
    // 0x3e7b2c: 0x5465000a  bnel        $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x3E7B2Cu;
    {
        const bool branch_taken_0x3e7b2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x3e7b2c) {
            ctx->pc = 0x3E7B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7B2Cu;
            // 0x3e7b30: 0x94820006  lhu         $v0, 0x6($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7B58u;
            goto label_3e7b58;
        }
    }
    ctx->pc = 0x3E7B34u;
    // 0x3e7b34: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E7B34u;
    {
        const bool branch_taken_0x3e7b34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7B34u;
        // 0x3e7b38: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7b34) {
            ctx->pc = 0x3E7B44u;
            goto label_3e7b44;
        }
    }
    ctx->pc = 0x3E7B3Cu;
    // 0x3e7b3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E7B3Cu;
    {
        const bool branch_taken_0x3e7b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7B3Cu;
        // 0x3e7b40: 0xacc20008  sw          $v0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7b3c) {
            ctx->pc = 0x3E7B48u;
            goto label_3e7b48;
        }
    }
    ctx->pc = 0x3E7B44u;
label_3e7b44:
    // 0x3e7b44: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3e7b44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_3e7b48:
    // 0x3e7b48: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e7b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e7b4c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3e7b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3e7b50: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x3e7b50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x3e7b54: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x3e7b54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_3e7b58:
    // 0x3e7b58: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3e7b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e7b5c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3e7b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3e7b60: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x3e7b60u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e7b64: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3e7b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3e7b68: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x3e7b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3e7b6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e7b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3e7b70: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3E7B70u;
    {
        const bool branch_taken_0x3e7b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7B70u;
        // 0x3e7b74: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7b70) {
            ctx->pc = 0x3E7BB8u;
            goto label_3e7bb8;
        }
    }
    ctx->pc = 0x3E7B78u;
label_3e7b78:
    // 0x3e7b78: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x3e7b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3e7b7c: 0x5480ffe6  bnel        $a0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3E7B7Cu;
    {
        const bool branch_taken_0x3e7b7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e7b7c) {
            ctx->pc = 0x3E7B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7B7Cu;
            // 0x3e7b80: 0x94830006  lhu         $v1, 0x6($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e7b18;
        }
    }
    ctx->pc = 0x3E7B84u;
label_3e7b84:
    // 0x3e7b84: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E7B84u;
    SET_GPR_U32(ctx, 31, 0x3E7B8Cu);
    ctx->pc = 0x3E7B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7B84u;
    // 0x3e7b88: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E7B84u, 0x3E7B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7B8Cu;
label_3e7b8c:
    // 0x3e7b8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e7b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7b90: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E7B90u;
    SET_GPR_U32(ctx, 31, 0x3E7B98u);
    ctx->pc = 0x3E7B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7B90u;
    // 0x3e7b94: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E7B90u, 0x3E7B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7B98u;
label_3e7b98:
    // 0x3e7b98: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3e7b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e7b9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e7b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7ba0: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x3e7ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x3e7ba4: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x3e7ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3e7ba8: 0xa6120006  sh          $s2, 0x6($s0)
    ctx->pc = 0x3e7ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 18));
    // 0x3e7bac: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x3e7bacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e7bb0: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x3e7bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x3e7bb4: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x3e7bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_3e7bb8:
    // 0x3e7bb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e7bb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e7bbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e7bbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e7bc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3e7bc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e7bc4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3e7bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3e7bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E7BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E7BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7BC8u;
        // 0x3e7bcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E7BD0u;
}
