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

// Function: sub_001EC8E8
// Address: 0x1ec8e8 - 0x1ecba8
void sub_001EC8E8_0x1ec8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC8E8_0x1ec8e8");
#endif

    switch (ctx->pc) {
        case 0x1ec930u: goto label_1ec930;
        case 0x1ec980u: goto label_1ec980;
        case 0x1ec9a0u: goto label_1ec9a0;
        case 0x1eca40u: goto label_1eca40;
        case 0x1ecab8u: goto label_1ecab8;
        case 0x1ecae8u: goto label_1ecae8;
        case 0x1ecb48u: goto label_1ecb48;
        case 0x1ecb68u: goto label_1ecb68;
        default: break;
    }

    ctx->pc = 0x1ec8e8u;

    // 0x1ec8e8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1ec8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1ec8ec: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1ec8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1ec8f0: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x1ec8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x1ec8f4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1ec8f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ec8f8: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x1ec8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x1ec8fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ec8fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec900: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x1ec900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x1ec904: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1ec904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ec908: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x1ec908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x1ec90c: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1ec90cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ec910: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1ec910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1ec914: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ec914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec918: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x1ec918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x1ec91c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ec91cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec920: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1ec920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1ec924: 0xac409214  sw          $zero, -0x6DEC($v0)
    ctx->pc = 0x1ec924u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F9214u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F9214u, _value); } while (0);
    // 0x1ec928: 0x8c621334  lw          $v0, 0x1334($v1)
    ctx->pc = 0x1ec928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x1ec92c: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x1ec92cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
label_1ec930:
    // 0x1ec930: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1ec930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1ec934: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1ec934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ec938: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x1ec938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x1ec93c: 0x308800ff  andi        $t0, $a0, 0xFF
    ctx->pc = 0x1ec93cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ec940: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1ec940u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1ec944: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1ec944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ec948: 0x2d02000a  sltiu       $v0, $t0, 0xA
    ctx->pc = 0x1ec948u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1ec94c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1EC94Cu;
    {
        const bool branch_taken_0x1ec94c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC94Cu;
        // 0x1ec950: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec94c) {
            ctx->pc = 0x1EC930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec930;
        }
    }
    ctx->pc = 0x1EC954u;
    // 0x1ec954: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1ec954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ec958: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ec958u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec95c: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x1ec95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ec960: 0x906200aa  lbu         $v0, 0xAA($v1)
    ctx->pc = 0x1ec960u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 170)));
    // 0x1ec964: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1EC964u;
    {
        const bool branch_taken_0x1ec964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC964u;
        // 0x1ec968: 0x26157ba0  addiu       $s5, $s0, 0x7BA0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 31648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec964) {
            ctx->pc = 0x1ECA34u;
            goto label_1eca34;
        }
    }
    ctx->pc = 0x1EC96Cu;
    // 0x1ec96c: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x1ec96cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec970: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x1ec970u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec974: 0x256d00a0  addiu       $t5, $t3, 0xA0
    ctx->pc = 0x1ec974u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), 160));
    // 0x1ec978: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x1ec978u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec97c: 0x1a81021  addu        $v0, $t5, $t0
    ctx->pc = 0x1ec97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
label_1ec980:
    // 0x1ec980: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ec980u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec984: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1ec984u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ec988: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1ec988u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ec98c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1ec98cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1ec990: 0x3a44821  addu        $t1, $sp, $a0
    ctx->pc = 0x1ec990u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x1ec994: 0x2033021  addu        $a2, $s0, $v1
    ctx->pc = 0x1ec994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ec998: 0x71180  sll         $v0, $a3, 6
    ctx->pc = 0x1ec998u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x1ec99c: 0x0  nop
    ctx->pc = 0x1ec99cu;
    // NOP
label_1ec9a0:
    // 0x1ec9a0: 0x8cc47ba0  lw          $a0, 0x7BA0($a2)
    ctx->pc = 0x1ec9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 31648)));
    // 0x1ec9a4: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x1ec9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ec9a8: 0x8ca37e20  lw          $v1, 0x7E20($a1)
    ctx->pc = 0x1ec9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32288)));
    // 0x1ec9ac: 0x14830016  bne         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1EC9ACu;
    {
        const bool branch_taken_0x1ec9ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EC9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC9ACu;
        // 0x1ec9b0: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec9ac) {
            ctx->pc = 0x1ECA08u;
            goto label_1eca08;
        }
    }
    ctx->pc = 0x1EC9B4u;
    // 0x1ec9b4: 0x8cc37ba4  lw          $v1, 0x7BA4($a2)
    ctx->pc = 0x1ec9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 31652)));
    // 0x1ec9b8: 0x8ca27e24  lw          $v0, 0x7E24($a1)
    ctx->pc = 0x1ec9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32292)));
    // 0x1ec9bc: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EC9BCu;
    {
        const bool branch_taken_0x1ec9bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EC9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC9BCu;
        // 0x1ec9c0: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec9bc) {
            ctx->pc = 0x1ECA08u;
            goto label_1eca08;
        }
    }
    ctx->pc = 0x1EC9C4u;
    // 0x1ec9c4: 0x90c37ba8  lbu         $v1, 0x7BA8($a2)
    ctx->pc = 0x1ec9c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 31656)));
    // 0x1ec9c8: 0x90a27e28  lbu         $v0, 0x7E28($a1)
    ctx->pc = 0x1ec9c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 32296)));
    // 0x1ec9cc: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1EC9CCu;
    {
        const bool branch_taken_0x1ec9cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EC9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC9CCu;
        // 0x1ec9d0: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec9cc) {
            ctx->pc = 0x1ECA08u;
            goto label_1eca08;
        }
    }
    ctx->pc = 0x1EC9D4u;
    // 0x1ec9d4: 0x90c37ba9  lbu         $v1, 0x7BA9($a2)
    ctx->pc = 0x1ec9d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 31657)));
    // 0x1ec9d8: 0x90a27e29  lbu         $v0, 0x7E29($a1)
    ctx->pc = 0x1ec9d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 32297)));
    // 0x1ec9dc: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EC9DCu;
    {
        const bool branch_taken_0x1ec9dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EC9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC9DCu;
        // 0x1ec9e0: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec9dc) {
            ctx->pc = 0x1ECA08u;
            goto label_1eca08;
        }
    }
    ctx->pc = 0x1EC9E4u;
    // 0x1ec9e4: 0x8ca37e54  lw          $v1, 0x7E54($a1)
    ctx->pc = 0x1ec9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32340)));
    // 0x1ec9e8: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1ec9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1ec9ec: 0xad2c0000  sw          $t4, 0x0($t1)
    ctx->pc = 0x1ec9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 12));
    // 0x1ec9f0: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x1ec9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1ec9f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ec9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ec9f8: 0xac4c0000  sw          $t4, 0x0($v0)
    ctx->pc = 0x1ec9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 12));
    // 0x1ec9fc: 0xaca37e54  sw          $v1, 0x7E54($a1)
    ctx->pc = 0x1ec9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32340), GPR_U32(ctx, 3));
    // 0x1eca00: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1ECA00u;
    {
        const bool branch_taken_0x1eca00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECA00u;
        // 0x1eca04: 0xacc37bd4  sw          $v1, 0x7BD4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 31700), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eca00) {
            ctx->pc = 0x1ECA18u;
            goto label_1eca18;
        }
    }
    ctx->pc = 0x1ECA08u;
label_1eca08:
    // 0x1eca08: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x1eca08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eca0c: 0x2ce3000a  sltiu       $v1, $a3, 0xA
    ctx->pc = 0x1eca0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1eca10: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1ECA10u;
    {
        const bool branch_taken_0x1eca10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECA10u;
        // 0x1eca14: 0x71180  sll         $v0, $a3, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eca10) {
            ctx->pc = 0x1EC9A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec9a0;
        }
    }
    ctx->pc = 0x1ECA18u;
label_1eca18:
    // 0x1eca18: 0x25030001  addiu       $v1, $t0, 0x1
    ctx->pc = 0x1eca18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1eca1c: 0x916200aa  lbu         $v0, 0xAA($t3)
    ctx->pc = 0x1eca1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 170)));
    // 0x1eca20: 0x306800ff  andi        $t0, $v1, 0xFF
    ctx->pc = 0x1eca20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1eca24: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x1eca24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1eca28: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1ECA28u;
    {
        const bool branch_taken_0x1eca28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECA28u;
        // 0x1eca2c: 0x1a81021  addu        $v0, $t5, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eca28) {
            ctx->pc = 0x1EC980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec980;
        }
    }
    ctx->pc = 0x1ECA30u;
    // 0x1eca30: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1eca30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eca34:
    // 0x1eca34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1eca34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eca38: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x1eca38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1eca3c: 0x0  nop
    ctx->pc = 0x1eca3cu;
    // NOP
label_1eca40:
    // 0x1eca40: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1eca40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1eca44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1eca44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eca48: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1ECA48u;
    {
        const bool branch_taken_0x1eca48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECA48u;
        // 0x1eca4c: 0x25020001  addiu       $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eca48) {
            ctx->pc = 0x1ECA88u;
            goto label_1eca88;
        }
    }
    ctx->pc = 0x1ECA50u;
    // 0x1eca50: 0x81180  sll         $v0, $t0, 6
    ctx->pc = 0x1eca50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x1eca54: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1eca54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1eca58: 0x24427e20  addiu       $v0, $v0, 0x7E20
    ctx->pc = 0x1eca58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32288));
    // 0x1eca5c: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x1eca5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x1eca60: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1eca60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1eca64: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1eca64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1eca68: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1eca68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eca6c: 0xa0400009  sb          $zero, 0x9($v0)
    ctx->pc = 0x1eca6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eca70: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1eca70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1eca74: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1eca74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1eca78: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x1eca78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x1eca7c: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1eca7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1eca80: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1eca80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x1eca84: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x1eca84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1eca88:
    // 0x1eca88: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x1eca88u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eca8c: 0x2d03000a  sltiu       $v1, $t0, 0xA
    ctx->pc = 0x1eca8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1eca90: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1ECA90u;
    {
        const bool branch_taken_0x1eca90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECA90u;
        // 0x1eca94: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eca90) {
            ctx->pc = 0x1ECA40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eca40;
        }
    }
    ctx->pc = 0x1ECA98u;
    // 0x1eca98: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1eca98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1eca9c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1eca9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ecaa0: 0x906200aa  lbu         $v0, 0xAA($v1)
    ctx->pc = 0x1ecaa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 170)));
    // 0x1ecaa4: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1ECAA4u;
    {
        const bool branch_taken_0x1ecaa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECAA4u;
        // 0x1ecaa8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecaa4) {
            ctx->pc = 0x1ECB5Cu;
            goto label_1ecb5c;
        }
    }
    ctx->pc = 0x1ECAACu;
    // 0x1ecaac: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x1ecaacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecab0: 0x265400a0  addiu       $s4, $s2, 0xA0
    ctx->pc = 0x1ecab0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x1ecab4: 0x2881821  addu        $v1, $s4, $t0
    ctx->pc = 0x1ecab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
label_1ecab8:
    // 0x1ecab8: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x1ecab8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ecabc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1ecabcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ecac0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1ecac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1ecac4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ecac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ecac8: 0x1480001f  bnez        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1ECAC8u;
    {
        const bool branch_taken_0x1ecac8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECAC8u;
        // 0x1ecacc: 0x25110001  addiu       $s1, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecac8) {
            ctx->pc = 0x1ECB48u;
            goto label_1ecb48;
        }
    }
    ctx->pc = 0x1ECAD0u;
    // 0x1ecad0: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x1ecad0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1ecad4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ecad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecad8: 0x2053021  addu        $a2, $s0, $a1
    ctx->pc = 0x1ecad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1ecadc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1ecadcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecae0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1ecae0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ecae4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1ecae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1ecae8:
    // 0x1ecae8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1ecae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1ecaec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ecaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ecaf0: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1ECAF0u;
    {
        const bool branch_taken_0x1ecaf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECAF0u;
        // 0x1ecaf4: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecaf0) {
            ctx->pc = 0x1ECB28u;
            goto label_1ecb28;
        }
    }
    ctx->pc = 0x1ECAF8u;
    // 0x1ecaf8: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x1ecaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x1ecafc: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1ecafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1ecb00: 0xac887e54  sw          $t0, 0x7E54($a0)
    ctx->pc = 0x1ecb00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32340), GPR_U32(ctx, 8));
    // 0x1ecb04: 0x8cc27ba0  lw          $v0, 0x7BA0($a2)
    ctx->pc = 0x1ecb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 31648)));
    // 0x1ecb08: 0xac827e20  sw          $v0, 0x7E20($a0)
    ctx->pc = 0x1ecb08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32288), GPR_U32(ctx, 2));
    // 0x1ecb0c: 0x8cc37ba4  lw          $v1, 0x7BA4($a2)
    ctx->pc = 0x1ecb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 31652)));
    // 0x1ecb10: 0xac837e24  sw          $v1, 0x7E24($a0)
    ctx->pc = 0x1ecb10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32292), GPR_U32(ctx, 3));
    // 0x1ecb14: 0x90c27ba8  lbu         $v0, 0x7BA8($a2)
    ctx->pc = 0x1ecb14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 31656)));
    // 0x1ecb18: 0xa0827e28  sb          $v0, 0x7E28($a0)
    ctx->pc = 0x1ecb18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32296), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ecb1c: 0x90c37ba9  lbu         $v1, 0x7BA9($a2)
    ctx->pc = 0x1ecb1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 31657)));
    // 0x1ecb20: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1ECB20u;
    {
        const bool branch_taken_0x1ecb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECB20u;
        // 0x1ecb24: 0xa0837e29  sb          $v1, 0x7E29($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 32297), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecb20) {
            ctx->pc = 0x1ECB38u;
            goto label_1ecb38;
        }
    }
    ctx->pc = 0x1ECB28u;
label_1ecb28:
    // 0x1ecb28: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1ecb28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ecb2c: 0x2c83000a  sltiu       $v1, $a0, 0xA
    ctx->pc = 0x1ecb2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1ecb30: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1ECB30u;
    {
        const bool branch_taken_0x1ecb30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECB30u;
        // 0x1ecb34: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecb30) {
            ctx->pc = 0x1ECAE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ecae8;
        }
    }
    ctx->pc = 0x1ECB38u;
label_1ecb38:
    // 0x1ecb38: 0x24a57ba0  addiu       $a1, $a1, 0x7BA0
    ctx->pc = 0x1ecb38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31648));
    // 0x1ecb3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ecb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecb40: 0xc07b2ea  jal         func_1ECBA8
    ctx->pc = 0x1ECB40u;
    SET_GPR_U32(ctx, 31, 0x1ECB48u);
    ctx->pc = 0x1ECB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECB40u;
    // 0x1ecb44: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECBA8u, 0x1ECB40u, 0x1ECB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECB48u;
label_1ecb48:
    // 0x1ecb48: 0x924200aa  lbu         $v0, 0xAA($s2)
    ctx->pc = 0x1ecb48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 170)));
    // 0x1ecb4c: 0x322800ff  andi        $t0, $s1, 0xFF
    ctx->pc = 0x1ecb4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1ecb50: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x1ecb50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ecb54: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1ECB54u;
    {
        const bool branch_taken_0x1ecb54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECB54u;
        // 0x1ecb58: 0x2881821  addu        $v1, $s4, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecb54) {
            ctx->pc = 0x1ECAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ecab8;
        }
    }
    ctx->pc = 0x1ECB5Cu;
label_1ecb5c:
    // 0x1ecb5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ecb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecb60: 0x26a50500  addiu       $a1, $s5, 0x500
    ctx->pc = 0x1ecb60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 1280));
    // 0x1ecb64: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1ecb64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1ecb68:
    // 0x1ecb68: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1ecb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ecb6c: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x1ecb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1ecb70: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1ecb70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ecb74: 0x2c82000a  sltiu       $v0, $a0, 0xA
    ctx->pc = 0x1ecb74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1ecb78: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1ECB78u;
    {
        const bool branch_taken_0x1ecb78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECB78u;
        // 0x1ecb7c: 0xa0660000  sb          $a2, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecb78) {
            ctx->pc = 0x1ECB68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ecb68;
        }
    }
    ctx->pc = 0x1ECB80u;
    // 0x1ecb80: 0xa2a0050a  sb          $zero, 0x50A($s5)
    ctx->pc = 0x1ecb80u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1290), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ecb84: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x1ecb84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ecb88: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x1ecb88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ecb8c: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1ecb8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ecb90: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x1ecb90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1ecb94: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1ecb94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ecb98: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x1ecb98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1ecb9c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1ecb9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ecba0: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECBA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECBA0u;
        // 0x1ecba4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECBA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ECBA8u;
}
