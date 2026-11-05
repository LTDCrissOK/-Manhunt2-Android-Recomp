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

// Function: sub_003B0948
// Address: 0x3b0948 - 0x3b0b08
void sub_003B0948_0x3b0948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B0948_0x3b0948");
#endif

    switch (ctx->pc) {
        case 0x3b09fcu: goto label_3b09fc;
        case 0x3b0a30u: goto label_3b0a30;
        case 0x3b0a58u: goto label_3b0a58;
        case 0x3b0a6cu: goto label_3b0a6c;
        case 0x3b0aa8u: goto label_3b0aa8;
        case 0x3b0ac4u: goto label_3b0ac4;
        default: break;
    }

    ctx->pc = 0x3b0948u;

    // 0x3b0948: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b0948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b094c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3b094cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0950: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b0950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b0954: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b0954u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0958: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3b0958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3b095c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3b095cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0960: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b0960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b0964: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b0964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3b0968: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3b0968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3b096c: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B096Cu;
    {
        const bool branch_taken_0x3b096c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B096Cu;
        // 0x3b0970: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b096c) {
            ctx->pc = 0x3B0978u;
            goto label_3b0978;
        }
    }
    ctx->pc = 0x3B0974u;
    // 0x3b0974: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x3b0974u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_3b0978:
    // 0x3b0978: 0x29030004  slti        $v1, $t0, 0x4
    ctx->pc = 0x3b0978u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3b097c: 0x14600057  bnez        $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x3B097Cu;
    {
        const bool branch_taken_0x3b097c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B0980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B097Cu;
        // 0x3b0980: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b097c) {
            ctx->pc = 0x3B0ADCu;
            goto label_3b0adc;
        }
    }
    ctx->pc = 0x3B0984u;
    // 0x3b0984: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x3b0984u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3b0988: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x3b0988u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3b098c: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x3b098cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x3b0990: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x3b0990u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x3b0994: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3b0994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3b0998: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3b0998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3b099c: 0x1485004f  bne         $a0, $a1, . + 4 + (0x4F << 2)
    ctx->pc = 0x3B099Cu;
    {
        const bool branch_taken_0x3b099c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x3B09A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B099Cu;
        // 0x3b09a0: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b099c) {
            ctx->pc = 0x3B0ADCu;
            goto label_3b0adc;
        }
    }
    ctx->pc = 0x3B09A4u;
    // 0x3b09a4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3b09a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3b09a8: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x3b09a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x3b09ac: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x3b09acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x3b09b0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3b09b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3b09b4: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B09B4u;
    {
        const bool branch_taken_0x3b09b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B09B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B09B4u;
        // 0x3b09b8: 0x439025  or          $s2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b09b4) {
            ctx->pc = 0x3B09C0u;
            goto label_3b09c0;
        }
    }
    ctx->pc = 0x3B09BCu;
    // 0x3b09bc: 0xacd20000  sw          $s2, 0x0($a2)
    ctx->pc = 0x3b09bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 18));
label_3b09c0:
    // 0x3b09c0: 0x12600046  beqz        $s3, . + 4 + (0x46 << 2)
    ctx->pc = 0x3B09C0u;
    {
        const bool branch_taken_0x3b09c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B09C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B09C0u;
        // 0x3b09c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b09c0) {
            ctx->pc = 0x3B0ADCu;
            goto label_3b0adc;
        }
    }
    ctx->pc = 0x3B09C8u;
    // 0x3b09c8: 0x26430004  addiu       $v1, $s2, 0x4
    ctx->pc = 0x3b09c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x3b09cc: 0x103182a  slt         $v1, $t0, $v1
    ctx->pc = 0x3b09ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3b09d0: 0x14600042  bnez        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x3B09D0u;
    {
        const bool branch_taken_0x3b09d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B09D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B09D0u;
        // 0x3b09d4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b09d0) {
            ctx->pc = 0x3B0ADCu;
            goto label_3b0adc;
        }
    }
    ctx->pc = 0x3B09D8u;
    // 0x3b09d8: 0x2652fffa  addiu       $s2, $s2, -0x6
    ctx->pc = 0x3b09d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967290));
    // 0x3b09dc: 0x2a430010  slti        $v1, $s2, 0x10
    ctx->pc = 0x3b09dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3b09e0: 0x1460003f  bnez        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x3B09E0u;
    {
        const bool branch_taken_0x3b09e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B09E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B09E0u;
        // 0x3b09e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b09e0) {
            ctx->pc = 0x3B0AE0u;
            goto label_3b0ae0;
        }
    }
    ctx->pc = 0x3B09E8u;
    // 0x3b09e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b09e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b09ec: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x3b09ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3b09f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3b09f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b09f4: 0xc0ec1ae  jal         func_3B06B8
    ctx->pc = 0x3B09F4u;
    SET_GPR_U32(ctx, 31, 0x3B09FCu);
    ctx->pc = 0x3B09F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B09F4u;
    // 0x3b09f8: 0x2652fff0  addiu       $s2, $s2, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B06B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B06B8u, 0x3B09F4u, 0x3B09FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B09FCu;
label_3b09fc:
    // 0x3b09fc: 0x8263003c  lb          $v1, 0x3C($s3)
    ctx->pc = 0x3b09fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x3b0a00: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3b0a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b0a04: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B0A04u;
    {
        const bool branch_taken_0x3b0a04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B0A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0A04u;
        // 0x3b0a08: 0x2a430004  slti        $v1, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0a04) {
            ctx->pc = 0x3B0A18u;
            goto label_3b0a18;
        }
    }
    ctx->pc = 0x3B0A0Cu;
    // 0x3b0a0c: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x3b0a0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x3b0a10: 0x2652fff4  addiu       $s2, $s2, -0xC
    ctx->pc = 0x3b0a10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967284));
    // 0x3b0a14: 0x2a430004  slti        $v1, $s2, 0x4
    ctx->pc = 0x3b0a14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_3b0a18:
    // 0x3b0a18: 0x14600030  bnez        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x3B0A18u;
    {
        const bool branch_taken_0x3b0a18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B0A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0A18u;
        // 0x3b0a1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0a18) {
            ctx->pc = 0x3B0ADCu;
            goto label_3b0adc;
        }
    }
    ctx->pc = 0x3B0A20u;
    // 0x3b0a20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b0a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0a24: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x3b0a24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x3b0a28: 0xc0ec1de  jal         func_3B0778
    ctx->pc = 0x3B0A28u;
    SET_GPR_U32(ctx, 31, 0x3B0A30u);
    ctx->pc = 0x3B0A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0A28u;
    // 0x3b0a2c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0778u, 0x3B0A28u, 0x3B0A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0A30u;
label_3b0a30:
    // 0x3b0a30: 0x8663000e  lh          $v1, 0xE($s3)
    ctx->pc = 0x3b0a30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x3b0a34: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3b0a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3b0a38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b0a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b0a3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3b0a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3b0a40: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x3b0a40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b0a44: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3B0A44u;
    {
        const bool branch_taken_0x3b0a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B0A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0A44u;
        // 0x3b0a48: 0x9664000e  lhu         $a0, 0xE($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0a44) {
            ctx->pc = 0x3B0AD8u;
            goto label_3b0ad8;
        }
    }
    ctx->pc = 0x3B0A4Cu;
    // 0x3b0a4c: 0x1860000b  blez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3B0A4Cu;
    {
        const bool branch_taken_0x3b0a4c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3B0A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0A4Cu;
        // 0x3b0a50: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0a4c) {
            ctx->pc = 0x3B0A7Cu;
            goto label_3b0a7c;
        }
    }
    ctx->pc = 0x3B0A54u;
    // 0x3b0a54: 0x26700010  addiu       $s0, $s3, 0x10
    ctx->pc = 0x3b0a54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_3b0a58:
    // 0x3b0a58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b0a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0a5c: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x3b0a5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x3b0a60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b0a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0a64: 0xc0ec1e6  jal         func_3B0798
    ctx->pc = 0x3B0A64u;
    SET_GPR_U32(ctx, 31, 0x3B0A6Cu);
    ctx->pc = 0x3B0A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0A64u;
    // 0x3b0a68: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0798u, 0x3B0A64u, 0x3B0A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0A6Cu;
label_3b0a6c:
    // 0x3b0a6c: 0x8662000e  lh          $v0, 0xE($s3)
    ctx->pc = 0x3b0a6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x3b0a70: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x3b0a70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b0a74: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3B0A74u;
    {
        const bool branch_taken_0x3b0a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B0A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0A74u;
        // 0x3b0a78: 0x9664000e  lhu         $a0, 0xE($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0a74) {
            ctx->pc = 0x3B0A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b0a58;
        }
    }
    ctx->pc = 0x3B0A7Cu;
label_3b0a7c:
    // 0x3b0a7c: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x3b0a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3b0a80: 0x82640003  lb          $a0, 0x3($s3)
    ctx->pc = 0x3b0a80u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x3b0a84: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x3b0a84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x3b0a88: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3b0a88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0a8c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3b0a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3b0a90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3b0a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b0a94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3b0a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3b0a98: 0x1880000f  blez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x3B0A98u;
    {
        const bool branch_taken_0x3b0a98 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x3B0A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0A98u;
        // 0x3b0a9c: 0x2439023  subu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0a98) {
            ctx->pc = 0x3B0AD8u;
            goto label_3b0ad8;
        }
    }
    ctx->pc = 0x3B0AA0u;
    // 0x3b0aa0: 0x26700024  addiu       $s0, $s3, 0x24
    ctx->pc = 0x3b0aa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
    // 0x3b0aa4: 0x2a42000c  slti        $v0, $s2, 0xC
    ctx->pc = 0x3b0aa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)12) ? 1 : 0);
label_3b0aa8:
    // 0x3b0aa8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3B0AA8u;
    {
        const bool branch_taken_0x3b0aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B0AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0AA8u;
        // 0x3b0aac: 0x2652fff4  addiu       $s2, $s2, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0aa8) {
            ctx->pc = 0x3B0AD8u;
            goto label_3b0ad8;
        }
    }
    ctx->pc = 0x3B0AB0u;
    // 0x3b0ab0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b0ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0ab4: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x3b0ab4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x3b0ab8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b0ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0abc: 0xc0ec222  jal         func_3B0888
    ctx->pc = 0x3B0ABCu;
    SET_GPR_U32(ctx, 31, 0x3B0AC4u);
    ctx->pc = 0x3B0AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0ABCu;
    // 0x3b0ac0: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0888u, 0x3B0ABCu, 0x3B0AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0AC4u;
label_3b0ac4:
    // 0x3b0ac4: 0x82620003  lb          $v0, 0x3($s3)
    ctx->pc = 0x3b0ac4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x3b0ac8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3b0ac8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3b0acc: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x3b0accu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b0ad0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3B0AD0u;
    {
        const bool branch_taken_0x3b0ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B0AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0AD0u;
        // 0x3b0ad4: 0x2a42000c  slti        $v0, $s2, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0ad0) {
            ctx->pc = 0x3B0AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b0aa8;
        }
    }
    ctx->pc = 0x3B0AD8u;
label_3b0ad8:
    // 0x3b0ad8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b0ad8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b0adc:
    // 0x3b0adc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b0adcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b0ae0:
    // 0x3b0ae0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b0ae0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b0ae4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b0ae4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b0ae8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3b0ae8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3b0aec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3b0aecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b0af0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3b0af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3b0af4: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0AF4u;
        // 0x3b0af8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B0AFCu;
    // 0x3b0afc: 0x0  nop
    ctx->pc = 0x3b0afcu;
    // NOP
    // 0x3b0b00: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3b0b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3b0b04: 0x0  nop
    ctx->pc = 0x3b0b04u;
    // NOP
    ctx->pc = 0x3b0b08u;
}
