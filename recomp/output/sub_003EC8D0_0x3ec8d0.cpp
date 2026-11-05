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

// Function: sub_003EC8D0
// Address: 0x3ec8d0 - 0x3eca80
void sub_003EC8D0_0x3ec8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EC8D0_0x3ec8d0");
#endif

    switch (ctx->pc) {
        case 0x3ec91cu: goto label_3ec91c;
        case 0x3ec92cu: goto label_3ec92c;
        case 0x3ec940u: goto label_3ec940;
        case 0x3ec94cu: goto label_3ec94c;
        case 0x3ec988u: goto label_3ec988;
        case 0x3eca00u: goto label_3eca00;
        case 0x3eca10u: goto label_3eca10;
        case 0x3eca20u: goto label_3eca20;
        case 0x3eca2cu: goto label_3eca2c;
        default: break;
    }

    ctx->pc = 0x3ec8d0u;

    // 0x3ec8d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3ec8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3ec8d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3ec8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3ec8d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3ec8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3ec8dc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3ec8dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec8e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ec8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ec8e4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3ec8e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec8e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ec8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3ec8ec: 0x2a430010  slti        $v1, $s2, 0x10
    ctx->pc = 0x3ec8ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3ec8f0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3ec8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3ec8f4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3ec8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3ec8f8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3ec8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3ec8fc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3ec8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3ec900: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x3ec900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x3ec904: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3ec904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3ec908: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3EC908u;
    {
        const bool branch_taken_0x3ec908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EC90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC908u;
        // 0x3ec90c: 0xae620048  sw          $v0, 0x48($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec908) {
            ctx->pc = 0x3EC978u;
            goto label_3ec978;
        }
    }
    ctx->pc = 0x3EC910u;
    // 0x3ec910: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3ec910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3ec914: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3EC914u;
    SET_GPR_U32(ctx, 31, 0x3EC91Cu);
    ctx->pc = 0x3EC918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC914u;
    // 0x3ec918: 0x2651ffff  addiu       $s1, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3EC914u, 0x3EC91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC91Cu;
label_3ec91c:
    // 0x3ec91c: 0x122140  sll         $a0, $s2, 5
    ctx->pc = 0x3ec91cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x3ec920: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3ec920u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec924: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3EC924u;
    SET_GPR_U32(ctx, 31, 0x3EC92Cu);
    ctx->pc = 0x3EC928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC924u;
    // 0x3ec928: 0x34840010  ori         $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3EC924u, 0x3EC92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC92Cu;
label_3ec92c:
    // 0x3ec92c: 0x24550010  addiu       $s5, $v0, 0x10
    ctx->pc = 0x3ec92cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3ec930: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x3ec930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x3ec934: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x3EC934u;
    {
        const bool branch_taken_0x3ec934 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC934u;
        // 0x3ec938: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec934) {
            ctx->pc = 0x3EC958u;
            goto label_3ec958;
        }
    }
    ctx->pc = 0x3EC93Cu;
    // 0x3ec93c: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3ec93cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ec940:
    // 0x3ec940: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ec940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec944: 0xc0b0da8  jal         func_2C36A0
    ctx->pc = 0x3EC944u;
    SET_GPR_U32(ctx, 31, 0x3EC94Cu);
    ctx->pc = 0x3EC948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC944u;
    // 0x3ec948: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C36A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C36A0u, 0x3EC944u, 0x3EC94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC94Cu;
label_3ec94c:
    // 0x3ec94c: 0x0  nop
    ctx->pc = 0x3ec94cu;
    // NOP
    // 0x3ec950: 0x1636fffb  bne         $s1, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3EC950u;
    {
        const bool branch_taken_0x3ec950 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 22));
        ctx->pc = 0x3EC954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC950u;
        // 0x3ec954: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec950) {
            ctx->pc = 0x3EC940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ec940;
        }
    }
    ctx->pc = 0x3EC958u;
label_3ec958:
    // 0x3ec958: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3ec958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3ec95c: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3ec95cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec960: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x3ec960u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x3ec964: 0xa6920004  sh          $s2, 0x4($s4)
    ctx->pc = 0x3ec964u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 18));
    // 0x3ec968: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x3ec968u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x3ec96c: 0xae950000  sw          $s5, 0x0($s4)
    ctx->pc = 0x3ec96cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 21));
    // 0x3ec970: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x3EC970u;
    {
        const bool branch_taken_0x3ec970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC970u;
        // 0x3ec974: 0xa6920006  sh          $s2, 0x6($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec970) {
            ctx->pc = 0x3ECA58u;
            goto label_3eca58;
        }
    }
    ctx->pc = 0x3EC978u;
label_3ec978:
    // 0x3ec978: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3ec978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3ec97c: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3EC97Cu;
    {
        const bool branch_taken_0x3ec97c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC97Cu;
        // 0x3ec980: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec97c) {
            ctx->pc = 0x3EC9F4u;
            goto label_3ec9f4;
        }
    }
    ctx->pc = 0x3EC984u;
    // 0x3ec984: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x3ec984u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_3ec988:
    // 0x3ec988: 0x94850004  lhu         $a1, 0x4($a0)
    ctx->pc = 0x3ec988u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3ec98c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3ec98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3ec990: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x3ec990u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3ec994: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3EC994u;
    {
        const bool branch_taken_0x3ec994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ec994) {
            ctx->pc = 0x3EC998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC994u;
            // 0x3ec998: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC9E8u;
            goto label_3ec9e8;
        }
    }
    ctx->pc = 0x3EC99Cu;
    // 0x3ec99c: 0x5465000a  bnel        $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x3EC99Cu;
    {
        const bool branch_taken_0x3ec99c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x3ec99c) {
            ctx->pc = 0x3EC9A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC99Cu;
            // 0x3ec9a0: 0x94820006  lhu         $v0, 0x6($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC9C8u;
            goto label_3ec9c8;
        }
    }
    ctx->pc = 0x3EC9A4u;
    // 0x3ec9a4: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EC9A4u;
    {
        const bool branch_taken_0x3ec9a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC9A4u;
        // 0x3ec9a8: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec9a4) {
            ctx->pc = 0x3EC9B4u;
            goto label_3ec9b4;
        }
    }
    ctx->pc = 0x3EC9ACu;
    // 0x3ec9ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EC9ACu;
    {
        const bool branch_taken_0x3ec9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC9ACu;
        // 0x3ec9b0: 0xacc20008  sw          $v0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec9ac) {
            ctx->pc = 0x3EC9B8u;
            goto label_3ec9b8;
        }
    }
    ctx->pc = 0x3EC9B4u;
label_3ec9b4:
    // 0x3ec9b4: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x3ec9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_3ec9b8:
    // 0x3ec9b8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3ec9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3ec9bc: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3ec9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3ec9c0: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x3ec9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x3ec9c4: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x3ec9c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_3ec9c8:
    // 0x3ec9c8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3ec9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ec9cc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3ec9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3ec9d0: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x3ec9d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ec9d4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3ec9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3ec9d8: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x3ec9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3ec9dc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3ec9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3ec9e0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3EC9E0u;
    {
        const bool branch_taken_0x3ec9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC9E0u;
        // 0x3ec9e4: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec9e0) {
            ctx->pc = 0x3ECA58u;
            goto label_3eca58;
        }
    }
    ctx->pc = 0x3EC9E8u;
label_3ec9e8:
    // 0x3ec9e8: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x3ec9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3ec9ec: 0x5480ffe6  bnel        $a0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3EC9ECu;
    {
        const bool branch_taken_0x3ec9ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ec9ec) {
            ctx->pc = 0x3EC9F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC9ECu;
            // 0x3ec9f0: 0x94830006  lhu         $v1, 0x6($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ec988;
        }
    }
    ctx->pc = 0x3EC9F4u;
label_3ec9f4:
    // 0x3ec9f4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3ec9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3ec9f8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3EC9F8u;
    SET_GPR_U32(ctx, 31, 0x3ECA00u);
    ctx->pc = 0x3EC9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC9F8u;
    // 0x3ec9fc: 0x2415000f  addiu       $s5, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3EC9F8u, 0x3ECA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECA00u;
label_3eca00:
    // 0x3eca00: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3eca00u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3eca04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3eca04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eca08: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3ECA08u;
    SET_GPR_U32(ctx, 31, 0x3ECA10u);
    ctx->pc = 0x3ECA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECA08u;
    // 0x3eca0c: 0x24040210  addiu       $a0, $zero, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3ECA08u, 0x3ECA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECA10u;
label_3eca10:
    // 0x3eca10: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3eca10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3eca14: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x3eca14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3eca18: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3eca18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3eca1c: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3eca1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3eca20:
    // 0x3eca20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3eca20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eca24: 0xc0b0da8  jal         func_2C36A0
    ctx->pc = 0x3ECA24u;
    SET_GPR_U32(ctx, 31, 0x3ECA2Cu);
    ctx->pc = 0x3ECA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECA24u;
    // 0x3eca28: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C36A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C36A0u, 0x3ECA24u, 0x3ECA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECA2Cu;
label_3eca2c:
    // 0x3eca2c: 0x0  nop
    ctx->pc = 0x3eca2cu;
    // NOP
    // 0x3eca30: 0x16b6fffb  bne         $s5, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3ECA30u;
    {
        const bool branch_taken_0x3eca30 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 22));
        ctx->pc = 0x3ECA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECA30u;
        // 0x3eca34: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eca30) {
            ctx->pc = 0x3ECA20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eca20;
        }
    }
    ctx->pc = 0x3ECA38u;
    // 0x3eca38: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3eca38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3eca3c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3eca3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3eca40: 0xae710004  sw          $s1, 0x4($s3)
    ctx->pc = 0x3eca40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
    // 0x3eca44: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3eca44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eca48: 0xa6320006  sh          $s2, 0x6($s1)
    ctx->pc = 0x3eca48u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 18));
    // 0x3eca4c: 0xa6230004  sh          $v1, 0x4($s1)
    ctx->pc = 0x3eca4cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3eca50: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x3eca50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x3eca54: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x3eca54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
label_3eca58:
    // 0x3eca58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3eca58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3eca5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3eca5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3eca60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3eca60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3eca64: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3eca64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3eca68: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3eca68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3eca6c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3eca6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3eca70: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3eca70u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3eca74: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3eca74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3eca78: 0x3e00008  jr          $ra
    ctx->pc = 0x3ECA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ECA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECA78u;
        // 0x3eca7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ECA78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ECA80u;
}
